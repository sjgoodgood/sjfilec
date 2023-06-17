#include"screen.h"
int main()
{
    char screenBuf[80 * 26 + 1];
    int width = 80;
    int height = 20;
    int isGamePlaying = 1;
    int input;

    /*초기화시 실행*/

    while (isGamePlaying)
    {
        realstart();

    }

    /*종료 전 실행*/
    gameexit();


    return 0;
}
