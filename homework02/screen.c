#include "screen.h"
#include <stdio.h>


int title(char* screen, int width, int height)
{
    int w = 0;
    int h = 0;
    while (h < height)
    {
        while (w < width)
        {
            if(w == width - 1)
            {
                screen[w +(h * (width))] = '\n';
            }
            else
            {
                if(w == 0 || w == width - 2 || h == 0 || h== height -1)
                {
                    screen[w + (h * (width))] = '#';
                }
                else
                {
                    screen[w + (h * (width))] = ' ';
                }
            }
            w = w + 1;
        }
        w = 0;
        h = h + 1;
    }
    screen[height * width] = '\0';
    return 0;
}                        

int writeString(const char* string, char* screen, int width, int x, int y)
{   
    int index = x + (y * width ); // 위치에 해당하는 인덱스 계산
    
    int i = 0;

    while (string[i] != '\0')
    {
        screen[index + i] = string[i];
        i++;
    }
    
    return 0;
}

int setTitle(char* screen, int width, int height)
{   
    int x = width;
    int y = height;
    writeString("  *   *  ",screen,width, 3, 2);
    writeString(" *   *   * ",screen,width, 2, 3);
    writeString("   *   *   ",screen,width, 2, 4);
    writeString("     *   ",screen,width, 2, 5);
    writeString("  *   *  ",screen,width, 32, 2);
    writeString(" *   *   *  ",screen,width, 31, 3);
    writeString("   *   *   ",screen,width, 31, 4);
    writeString("     *   ",screen,width, 31, 5);
    writeString("G  I  V  E   M E ", screen, width,14,5);
    writeString("L O V E !!!", screen, width, 16, 7);
    writeString("1. Game Start", screen, width,13,10);
    writeString("2. How to play?", screen, width,13,12);
    writeString("3. Exit", screen, width,13,14);
    writeString("****************", screen, width,13,17);
    writeString("*   ********   *", screen, width,13,18);
    writeString("****************", screen, width,13,19);      
}

int sethow(char* screen, int width, int height)
{
    int x = width;
    int y = height;
    writeString("Raise your score ", screen, width, 13, 7);
    writeString("by making the right choices", screen, width, 8, 9);
    writeString("and make them more likeable", screen, width, 8, 11);
    writeString("Return to menu?", screen, width, 14, 13);
    writeString("1.Yes", screen, width, 10, 16);
    writeString("2.No", screen, width, 28, 16);
    writeString("    *    *  ",screen,width, 8, 16);
    writeString(" *    *    * ",screen,width, 8, 17);
    writeString("  * 1.Yes * ",screen,width, 8, 19);
    writeString("      *   ",screen,width, 8, 21); 
    writeString("    *    *  ",screen,width, 24, 16);
    writeString(" *    *    * ",screen,width, 24, 17);
    writeString("  * 2. No * ",screen,width, 24, 19);
    writeString("      *   ",screen,width, 24, 21);        
}

int setexite(char* screen, int width, int height)
{
    int x = width;
    int y = height;
    writeString("Would you like to leave the game?", screen, width, 5, 7);
    writeString("think again", screen, width, 15, 9);
    writeString("There are still some fun things left.", screen, width, 4, 11);
    writeString("Would you like to leave anyway?", screen, width, 5, 13);
    writeString("1.Yes", screen, width, 13, 18);
    writeString("2.No", screen, width, 25, 18);     
}