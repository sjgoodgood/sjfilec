#include<stdio.h>
#include"screen.h"
int title()
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
            else if(a==3&&b==6)
            {
                screen[b]='G';
            }
            else if(a==3&&b==9)
            {
                screen[b]='I';
            }
            else if(a==3&&b==12)
            {
                screen[b]='V';
            }
             else if(a==3&&b==15)
            {
                screen[b]='E';
            }
             else if(a==3&&b==19)
            {
                screen[b]='M';
            }
            else if(a==3&&b==22)
            {
                screen[b]='E';
            }
            else if(a==5&&b==10)
            {
                screen[b]='L';
            }
            else if(a==5&&b==13)
            {
                screen[b]='O';
            }
            else if(a==5&&b==16)
            {
                screen[b]='V';
            }
             else if(a==5&&b==19)
            {
                screen[b]='E';
            }
            else if(a==8&&b==3)
            {
                screen[b]='1';
            }
            else if(a==8&&b==4)
            {
                screen[b]='.';
            }
            else if(a==8&&b==5)
            {
                screen[b]='G';
            }
            else if(a==8&&b==6)
            {
                screen[b]='a';
            }
             else if(a==8&&b==7)
            {
                screen[b]='m';
            }
             else if(a==8&&b==8)
            {
                screen[b]='e';
            }
            else if(a==8&&b==10)
            {
                screen[b]='S';
            }
            else if(a==8&&b==11)
            {
                screen[b]='t';
            }
            else if(a==8&&b==12)
            {
                screen[b]='a';
            }
            else if(a==8&&b==13)
            {
                screen[b]='r';
            }
             else if(a==8&&b==14)
            {
                screen[b]='t';
            }
            else if(a==10&&b==3)
            {
                screen[b]='2';
            }
            else if(a==10&&b==4)
            {
                screen[b]='.';
            }
            else if(a==10&&b==5)
            {
                screen[b]='H';
            }
            else if(a==10&&b==6)
            {
                screen[b]='o';
            }
            else if(a==10&&b==7)
            {
                screen[b]='w';
            }
            else if(a==10&&b==9)
            {
                screen[b]='T';
            }
            else if(a==10&&b==10)
            {
                screen[b]='o';
            }
            else if(a==10&&b==12)
            {
                screen[b]='P';
            }
            else if(a==10&&b==13)
            {
                screen[b]='l';
            }
            else if(a==10&&b==14)
            {
                screen[b]='a';
            }
            else if(a==10&&b==15)
            {
                screen[b]='y';
            }
             else if(a==12&&b==3)
            {
                screen[b]='3';
            }
            else if(a==12&&b==4)
            {
                screen[b]='.';
            }
            else if(a==12&&b==5)
            {
                screen[b]='E';
            }
            else if(a==12&&b==6)
            {
                screen[b]='x';
            }
            else if(a==12&&b==7)
            {
                screen[b]='i';
            }
            else if(a==12&&b==8)
            {
                screen[b]='t';
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
		
