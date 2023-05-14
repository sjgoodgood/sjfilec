#include<stdio.h>
#include"screen.h"
int main()
{
    title();
    int game = 1;
    int input = 0;
    while (game)
    {
        scanf("%d",&input);
        if(input==2)
        {
            how();
            while(game)
            {
                scanf("%d",&input);
                if (input==1)
                {
                    title();
                    game=0;
                }
                else if(input==2)
                {
                    how();
                }
                else
                {
                    game=1;
                }
            }
            game=1;
            
        }
        if(input==3)
        {
            end();
            scanf("%d",&input);
            if(input==1)
            {
                game=0;
            }
            else if(input==2)
            {
                title();
            }

        }
    }
    return 0;
}

