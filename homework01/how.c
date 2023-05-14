#include<stdio.h>
#include"screen.h"
int how()
{
	char screen[1000];
	int a = 0;
	while(a<15)
	{   
		int b = 0;
		while(b<30)
		{   
			if(a==0||a==14)
			{
				screen[b]='*';
			}
			else if(b==0||b==29)
			{
				screen[b]='*';
			}
            else if(a==3&&b==5)
            {
                screen[b]='E';
            }
            else if(a==3&&b==6)
            {
                screen[b]='a';
            }
             else if(a==3&&b==7)
            {
                screen[b]='r';
            }
            else if(a==3&&b==8)
            {
                screen[b]='n';
            }
            else if(a==3&&b==10)
            {
                screen[b]='l';
            }
            else if(a==3&&b==11)
            {
                screen[b]='o';
            }
            else if(a==3&&b==12)
            {
                screen[b]='v';
            }
            else if(a==3&&b==13)
            {
                screen[b]='e';
            }
            else if(a==3&&b==15)
            {
                screen[b]='w';
            }
            else if(a==3&&b==16)
            {
                screen[b]='i';
            }
            else if(a==3&&b==17)
            {
                screen[b]='t';
            }
            else if(a==3&&b==18)
            {
                screen[b]='h';
            }
            else if(a==3&&b==20)
            {
                screen[b]='t';
            }
            else if(a==3&&b==21)
            {
                screen[b]='h';
            }
            else if(a==3&&b==22)
            {
                screen[b]='e';
            }
            else if(a==5&&b==8)
            {
                screen[b]='r';
            }
            else if(a==5&&b==9)
            {
                screen[b]='i';
            }
            else if(a==5&&b==10)
            {
                screen[b]='g';
            }
            else if(a==5&&b==11)
            {
                screen[b]='h';
            }
            else if(a==5&&b==12)
            {
                screen[b]='t';
            }
            else if(a==5&&b==14)
            {
                screen[b]='c';
            }
            else if(a==5&&b==15)
            {
                screen[b]='h';
            }
            else if(a==5&&b==16)
            {
                screen[b]='o';
            }
            else if(a==5&&b==17)
            {
                screen[b]='i';
            }
            else if(a==5&&b==18)
            {
                screen[b]='c';
            }
            else if(a==5&&b==19)
            {
                screen[b]='e';
            }
            else if(a==2&&b>22&&b<31)
            {
                screen[b]='-';
            }
            else if(a==2&&b>0&&b<7)
            {
                screen[b]='-';
            }
             else if(a==8&&b>11&&b<16)
            {
                screen[b]='*';
            }
            else if(a==9&&b==11)
            {
                screen[b]='*';
            }
            else if(a==9&&b==16)
            {
                screen[b]='*';
            }
            else if(a==10&&b==12)
            {
                screen[b]='*';
            }
             else if(a==10&&b==15)
            {
                screen[b]='*';
            }
             else if(a==11&&b>12&&b<15)
            {
                screen[b]='*';
            }
             else if(a==12&&b>12&&b<15)
            {
                screen[b]='*';
            }
            else if(a==6&&b==5)
            {
                screen[b]='R';
            }
            else if(a==6&&b==6)
            {
                screen[b]='e';
            }
            else if(a==6&&b==7)
            {
                screen[b]='t';
            }
            else if(a==6&&b==8)
            {
                screen[b]='u';
            }
            else if(a==6&&b==9)
            {
                screen[b]='r';
            }
            else if(a==6&&b==10)
            {
                screen[b]='n';
            }
            else if(a==6&&b==12)
            {
                screen[b]='t';
            }
            else if(a==6&&b==13)
            {
                screen[b]='o';
            }
            else if(a==6&&b==15)
            {
                screen[b]='m';
            }
            else if(a==6&&b==16)
            {
                screen[b]='e';
            }
            else if(a==6&&b==17)
            {
                screen[b]='n';
            }
            else if(a==6&&b==18)
            {
                screen[b]='u';
            }
            else if(a==6&&b==19)
            {
                screen[b]='?';
            }
            else if(a==6&&b==20)
            {
                screen[b]='?';
            }
             else if(a==7&&b==8)
            {
                screen[b]='1';
            }
            else if(a==7&&b==9)
            {
                screen[b]='.';
            }
            else if(a==7&&b==11)
            {
                screen[b]='y';
            }
            else if(a==7&&b==12)
            {
                screen[b]='e';
            }
            else if(a==7&&b==13)
            {
                screen[b]='s';
            }
            else if(a==7&&b==15)
            {
                screen[b]='2';
            }
            else if(a==7&&b==16)
            {
                screen[b]='.';
            }
            else if(a==7&&b==18)
            {
                screen[b]='n';
            }
            else if(a==7&&b==19)
            {
                screen[b]='o';
            }
			else
			{
				screen[b]=' ';
			}
			b+=1;
		}
		screen[30]='\n';
		screen[31]='\0';
		printf("%s",screen);
		a+=1;
	}
	return 0;
}
		
