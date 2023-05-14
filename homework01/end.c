#include<stdio.h>
#include"screen.h"
int end()
{
	char screen[450];
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
            else if(a==2&&b>0&&b<31)
            {
                screen[b]='=';
            }
            else if(a==5&&b==6)
            {
                screen[b]='W';
            }
            else if(a==5&&b==7)
            {
                screen[b]='o';
            }
            else if(a==5&&b==8)
            {
                screen[b]='u';
            }
            else if(a==5&&b==9)
            {
                screen[b]='l';
            }
            else if(a==5&&b==10)
            {
                screen[b]='d';
            }
            else if(a==5&&b==12)
            {
                screen[b]='y';
            }
            else if(a==5&&b==13)
            {
                screen[b]='o';
            }
            else if(a==5&&b==14)
            {
                screen[b]='u';
            }
            else if(a==5&&b==16)
            {
                screen[b]='l';
            }
            else if(a==5&&b==17)
            {
                screen[b]='i';
            }
            else if(a==5&&b==18)
            {
                screen[b]='k';
            }
            else if(a==5&&b==19)
            {
                screen[b]='e';
            }
            else if(a==5&&b==21)
            {
                screen[b]='t';
            }
            else if(a==5&&b==22)
            {
                screen[b]='o';
            }
            else if(a==7&&b==7)
            {
                screen[b]='l';
            }
            else if(a==7&&b==8)
            {
                screen[b]='e';
            }
            else if(a==7&&b==9)
            {
                screen[b]='a';
            }
            else if(a==7&&b==10)
            {
                screen[b]='v';
            }
            else if(a==7&&b==11)
            {
                screen[b]='e';
            }
            else if(a==7&&b==13)
            {
                screen[b]='t';
            }
             else if(a==7&&b==14)
            {
                screen[b]='h';
            }
             else if(a==7&&b==15)
            {
                screen[b]='e';
            }
             else if(a==7&&b==17)
            {
                screen[b]='g';
            }
             else if(a==7&&b==18)
            {
                screen[b]='a';
            }
             else if(a==7&&b==19)
            {
                screen[b]='m';
            }
             else if(a==7&&b==20)
            {
                screen[b]='e';
            }
             else if(a==7&&b==21)
            {
               screen[b]='?';
            }
             else if(a==10&&b==6)
            {
                screen[b]='1';
            }
             else if(a==10&&b==7)
            {
                screen[b]='.';
            }
             else if(a==10&&b==9)
            {
                screen[b]='y';
            }
             else if(a==10&&b==10)
            {
                screen[b]='e';
            }
             else if(a==10&&b==11)
            {
                screen[b]='s';
            }
            else if(a==10&&b==16)
            {
                screen[b]='2';
            }
            else if(a==10&&b==17)
            {
                screen[b]='.';
            }
            else if(a==10&&b==19)
            {
                screen[b]='n';
            }
            else if(a==10&&b==20)
            {
                screen[b]='o';
            }
            else if(a==12&&b>0&&b<31)
            {
                screen[b]='=';
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