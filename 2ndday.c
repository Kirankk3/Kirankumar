#include<lpc214x.h>

#define RS (1<<10)
#define RW (1<<12)
#define EN (1<<13)
#define LCD_DATA (0xFF<<16)

void delay(int count);
void LCD_command(unsigned char a);

void delay(int count)
{
	int i,j;
	for(i=0;i<count;i++)
		for(j=0;j<1000;j++);
}

void LCD_init(void)
{
	IO0DIR |= EN|RS|RW|LCD_DATA;
	LCD_command(0x38);			//initializes 16x2 5x7 lcd matrix  8 bit mode
	LCD_command(0x0F);			//display on, cursor blinking
	LCD_command(0x01);			//clear screen , cursor home
	LCD_command(0x80);			//strat with first line
}

void LCD_command(unsigned char a)
{
	IOPIN0 = a<<16;
	IOCLR0 = RS;		//ENTERS COMMAND MODE
	IOCLR0 |= RW;
	IOSET0 = EN;
	delay(100);
	IOCLR0 = EN;
	delay(100);
}

void LCD_data(unsigned char a)
{
	IOPIN0 = a<<16;
	IOCLR0 = RW;
	IOSET0 = RS;
	IOSET0 |= EN;
	delay(100);
	IOCLR0 = EN;
	delay(100);
}

void LCD_display(char *str)
{
	while(*str)
	{
		LCD_data(*str);
		str++;
		delay(50);
	}
}

int main()
{
	LCD_init();
	LCD_display("Welcome to ARM programming");
	LCD_command(0xC0);
	LCD_display("in Embedded c");
	while(1);
}









