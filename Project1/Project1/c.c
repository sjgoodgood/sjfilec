
#include"screen.h"


void clearBuffer(char* screenBuf, int width, int height)
{
    int i = 0;
    int j = 0;
    while (j < height)
    {
        while (i < width + 1)
        {
            if (i == width)
                screenBuf[i + (j * (width + 1))] = '\n';
            else
            {
                if (i == 0 || i == 1 || i == (width - 1) || i == (width - 2) || j == 0 || j == (height - 1))
                    screenBuf[i + (j * (width + 1))] = '*';
                else
                    screenBuf[i + (j * (width + 1))] = ' ';
            }
            i = i + 1;
        }
        i = 0;
        j = j + 1;
    }
    screenBuf[height * (width + 1) - 1] = '\0';
}


void SetCurrentCursorPos(int x, int y)
{
    COORD position = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void delay_print(char* str)
{
    for (char* p = str; *p; p++) {
        putchar(*p);
        fflush(stdout);
        Sleep(1);
    }
    putchar('\n');
}


void RemoveCursor(void)
{
    CONSOLE_CURSOR_INFO current_info;
    GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &current_info);
    current_info.bVisible = 0;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &current_info);
}



void sound() {
    
    PlaySound(TEXT("C:\\Users\\ㅇㅇㅇ\\Desktop\\sounds.wav"), NULL, SND_ASYNC);
    

}
void sound2() {

    PlaySound(TEXT("C:\\Users\\ㅇㅇㅇ\\Desktop\\heart.wav"), NULL, SND_ASYNC);


}

        

void titledraw() {

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); //13: 분홍색
    SetCurrentCursorPos(16, 3);
    delay_print(" __          ____       __         __  ________");
    SetCurrentCursorPos(16, 4);
    delay_print(" | |       /   __  |   | |       / /  |  ______|");
    SetCurrentCursorPos(16, 5);
    delay_print(" | |       | |    | |   | |     / /   | |______");
    SetCurrentCursorPos(16, 6);
    delay_print(" | |       | |    | |    | |   / /    |  ______|");
    SetCurrentCursorPos(16, 7);
    delay_print(" | |____   | | __ | |     | |_/ /     | |______");
    SetCurrentCursorPos(16, 8);
    delay_print(" |______|   |_____  /        __       |________|");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    SetCurrentCursorPos(25, 10);
    delay_print("   _____________    ________");
    SetCurrentCursorPos(25, 11);
    delay_print("  |  ___   ___  |  |  ______|");
    SetCurrentCursorPos(25, 12);
    delay_print("  | |   | |   | |  | |______");
    SetCurrentCursorPos(25, 13);
    delay_print("  | |   | |   | |  |  ______|");
    SetCurrentCursorPos(25, 14);
    delay_print("  | |   | |   | |  | |______");
    SetCurrentCursorPos(25, 15);
    delay_print("  |_|   |_|   |_|  |________|");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    SetCurrentCursorPos(32, 18);
    printf("*****************");
    SetCurrentCursorPos(32, 19);
    printf("*  1.게임 시작  *");
    SetCurrentCursorPos(32, 20);
    printf("*  2.게임 방법  *");
    SetCurrentCursorPos(32, 21);
    printf("*  3.게임 종료  *");
    SetCurrentCursorPos(32, 22);
    printf("*****************");
    SetCurrentCursorPos(0, 26);
    printf("\033[33m번호를 입력해주세요:\033[0m");


}
void w() {
    system("cls");
    Sleep(1000);
    delay_print("*******************************");
    delay_print("|에 필 로 그 ....(>>><<<<)    | ");
    delay_print("*******************************");
    Sleep(1000);
    system("cls");
    Sleep(2000);
    com();
    Sleep(4000);
}

void how() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //15: 하얀색
    SetCurrentCursorPos(15, 8);
    printf("\033[41m당신은 호감도가 50미만이라    \033[0m");
    SetCurrentCursorPos(15, 9);
    printf("\033[41m실패하셨습니다.               \033[0m");
    SetCurrentCursorPos(15, 10);
    printf("\033[41m다시 처음화면으로 돌아갑니다..\033[0m");
}

void howplay()
{   
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);//15: 하얀색
    SetCurrentCursorPos(15, 6);
    printf("..외로운 그녀의 lovestory...를 통해 ");
    SetCurrentCursorPos(15, 8);
    printf("\033[31m♥\033[0m가 50에서 시작해서 3가지 선택지중 하나를 골라"); 
    SetCurrentCursorPos(15, 10);
    printf("\033[31m♥\033[0m를 100%로 올려 그녀의 lovestory가 이루어질수있도록 한다.");
    SetCurrentCursorPos(15, 13);
    printf(">단, 중간에 실패할 경우 처음문제부터 다시 해야한다.");
    SetCurrentCursorPos(15, 15);
    printf(">\033[44m[]\033[0m카톡창임");
    SetCurrentCursorPos(20, 18);
    printf("\033[45m다시 메뉴로 돌아가겠습니까?\033[0m");
    SetCurrentCursorPos(20, 20);
    printf("\033[45m   1.예     2.아니오       \033[0m");
    SetCurrentCursorPos(0, 26);
    printf("\033[33m번호를 입력해주세요:\033[0m");

    
}

void gameexit() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); //15: 하얀색
    SetCurrentCursorPos(20, 8);
    printf("Love me 게임에서 나가겠습니까?");
    SetCurrentCursorPos(20, 10);
    printf("아직 재미있는 게임 퀘스트가 남아있습니다.");
    SetCurrentCursorPos(25, 12);
    printf("\033[41m그래도 나가겠습니까???\033[41m");
    SetCurrentCursorPos(25, 14);
    printf("\033[41m   1.예     2.아니오  \033[0m");
    SetCurrentCursorPos(0, 26);
    printf("\033[33m번호를 입력해주세요:\033[0m");

}