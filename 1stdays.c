 #include<lpc214x.h>
  void delay(int i)
  {
  	int j,k;
  	for( j=0;j<i;j++) ;
  		for( k=0;k<1000;k++)	;
  }
  int main()
  {
    IO0DIR = 0X0000000F;
    IO0CLR = 0X0000000F;
    while(1)
    {
       delay(1000);
  IO0SET = 0x0000000F;
  delay(1000);
  IO0CLR = 0X0000000F;

  }
  }
