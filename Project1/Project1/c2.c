#include"screen.h"
int main()
{
    char screenBuf[80 * 26 + 1];
    int width = 80;
    int height = 20;
    int isGamePlaying = 1;
    int input;

    /*�ʱ�ȭ�� ����*/

    while (isGamePlaying)
    {
        realstart();

    }

    /*���� �� ����*/
    gameexit();


    return 0;
}
