#include"screen.h"


void realstart()
{
    char screenBuf[80 * 26 + 1];
    int width = 80;
    int height = 26;
    int isGamePlaying = 1;
    int input;
    int input2;
    int input3;
    int lovepoint = 50;
    int a = 0;


    while (isGamePlaying)
    {
        RemoveCursor();
        system("cls");
        clearBuffer(screenBuf, width, height);
        printf("%s\n", screenBuf);
        titledraw();
        scanf_s("%d", &input,3);
        if (input == 1)
        {
            system("cls");
            int while1 = 1;
            lovepoint = 50; 

            while (while1 = 1)
            {
                system("cls");
                clearBuffer(screenBuf, width, height);
                printf("%s\n", screenBuf);
                SetCurrentCursorPos(66, 1);
                printf("ȣ����: \033[31m%d��\033[0m", lovepoint);
                int textnum = 0;
              

                if (a == 0)
                {

                    system("cls");
                    clearBuffer(screenBuf, width, height);
                    printf("%s\n", screenBuf);
                    SetCurrentCursorPos(66, 1);
                    printf("ȣ����: \033[31m%d��\033[0m", lovepoint);
                    text1();
                    SetCurrentCursorPos(20, 26);
                    scanf_s("%d", &textnum, 3);
                
                    switch (textnum)
                    {
                    case 1:
                        lovepoint = lovepoint + 15;
                        a = 1;
                        system("cls");
                        printf("�� ��..�޾ƾ��ϳ�?..ģ������ �����ؾ߰ڴٰ� ���ؾ߰ڴ�....\n");
                        Sleep(500);
                        delay_print("---------------");
                        delay_print("|\033[44m�� �� �ȹ�����\033[0m|");
                        delay_print("---------------");
                        Sleep(500);
                        printf("��� ������ �ǰ���?");

                        Sleep(500);
                        continue;
                    case 2:

                        lovepoint = lovepoint - 10;
                        a = 1;
                        if (lovepoint < 50) 
                        {
                        a = 0;
                        system("cls");
                        how();
                        Sleep(2000);
                        break;
                        }


                    case 3:
                        lovepoint = lovepoint + 5;
                        a = 1;
                        system("cls");
                        Sleep(500);
                        delay_print("----------");
                        delay_print("|\033[44m������?..\033[0m|");
                        delay_print("----------");
                        Sleep(500);
                        printf("ī���� �ϴ� ģ������ ���´µ�.. ����ü ������?..");
                        Sleep(500);

                        continue;
                    default:
                         continue;
                        }
                    
                    break;
                }

                if (a == 1)
                {
                    system("cls");
                    clearBuffer(screenBuf, width, height);
                    printf("%s\n", screenBuf);
                    SetCurrentCursorPos(66, 1);
                    printf("ȣ����: \033[31m%d��\033[0m", lovepoint);
                    text2();
                    SetCurrentCursorPos(20, 26);
                    scanf_s("%d", &textnum,3);
          
                        
                   switch (textnum)
                    {
                    case 1:
                        lovepoint = lovepoint + 15;
                        a = 2;
                        system("cls");
                        Sleep(500);
                        delay_print("----------");
                        delay_print("|\033[44m ����.. \033[0m| ");
                        delay_print("----------");
                        Sleep(500);
                        printf("��� ������ �ߴµ� ���� �� �°���?..");
                        Sleep(500);
                        continue;
                    case 2:
                        lovepoint = lovepoint - 10;
                        if (lovepoint < 50)
                        {   
                            a = 0;
                            system("cls");
                            how();
                            Sleep(2000);
                            break;
                        }

                        else {
                            a = 2;
                            system("cls");
                            Sleep(500);
                            delay_print("----------------------------------");
                            delay_print("|\033[44m�ڴ� ? ..���ϳ��� ������� �ɱ� ?\033[0m| ");
                            delay_print("----------------------------------");
                            Sleep(500);
                            printf("�� �ٵ� �ڴ�?..�� ��Ÿ�� ���̵� �ƴϰ� ��..���۰ŷ�");
                            Sleep(500);
                            continue;
                        }
                        
                        continue;
                    case 3:
                        lovepoint = lovepoint - 5;
                          
                        if (lovepoint < 50)
                        {   
                            a = 0;
                            system("cls");
                            how();
                            Sleep(2000);
                            break;
                        }
                        else {
                            a = 2;
                            system("cls");
                            Sleep(500);
                            delay_print("---------------");
                            delay_print("|\033[44m�� .. ������..\033[0m| ");
                            delay_print("---------------");
                            Sleep(500);
                            printf("�̸� ���� �ҷ���?.. ������.. ���� .. ��Ű�����");
                            Sleep(500);
                            continue;
                        }

                        continue;
                    default:
                        continue;
                    }
                    break;
                  
                }
                if (a == 2)
                {
                    system("cls");
                    clearBuffer(screenBuf, width, height);
                    printf("%s\n", screenBuf);
                    SetCurrentCursorPos(66, 1);
                    printf("ȣ����: \033[31m%d��\033[0m", lovepoint);
                    text3();
                    SetCurrentCursorPos(20, 26);
                    scanf_s("%d", &textnum, 3);
                    
                  

                   
                   switch (textnum)
                    {
                    case 1:
                        lovepoint = lovepoint - 15;
                        if (lovepoint < 50)
                        {   
                            a = 0;
                            system("cls");
                            how();
                            Sleep(3000);
                            break;
                        }
                        if (lovepoint >= 100)
                        {   
                            a = 0;
                            system("cls");
                            com();
                            Sleep(2000);
                            break;
                        }
                        else {
                            a = 3;
                            system("cls");
                            Sleep(500);
                            delay_print("--------------------------");
                            delay_print("|\033[44m�� �����մϴ�...        \033[0m| ");
                            delay_print("--------------------------");
                            Sleep(500);
                            printf(".............");
                            Sleep(500);
                            continue;
                        }
                    case 2:
                        lovepoint = lovepoint - 10;
                        if (lovepoint < 50)
                        {
                            a = 0;
                            system("cls");
                            how();
                            Sleep(2000);
                            break;
                        }
                        if (lovepoint >= 100)
                        {
                            a = 0;
                            system("cls");
                            com();
                            Sleep(2000);
                            break;
                        }
                        else {
                            a = 3;
                            system("cls");
                            Sleep(500);
                            delay_print("----------------------------------");
                            delay_print("|\033[44m���� ������!Ȥ�� �� ��̾��?  \033[0m| ");
                            delay_print("----------------------------------");
                            Sleep(500);
                            printf(" ' ���� ���̶�� ' ");
                            Sleep(500);
                            continue;
                        }
                    case 3:
                        lovepoint = lovepoint - 5;
                        if (lovepoint < 50)
                        {
                            a = 0;
                            system("cls");
                            how();
                            Sleep(2000);
                            break;
                        }
                        if (lovepoint >= 100)
                        {   
                            a = 0;
                            system("cls");
                            com();
                            Sleep(2000);
                            break;
                        }
                        else {
                            a = 3;
                            system("cls");
                            Sleep(500);
                            delay_print("---------------------------------------");
                            delay_print("|\033[44m������ �����̿��� ������ ���帱����!\033[0m| ");
                            delay_print("---------------------------------------");
                            Sleep(500);
                            printf(" '�� ���Ѱ� �°���?..' ");
                            Sleep(500);
                            continue;
                        }
                    default:
                        continue;
                    }
                    break;
                }
                if (a == 3)
                {
                    system("cls");
                    clearBuffer(screenBuf, width, height);
                    printf("%s\n", screenBuf);
                    SetCurrentCursorPos(66, 1);
                    printf("ȣ����: \033[31m%d��\033[0m", lovepoint);
                    text4();
                    SetCurrentCursorPos(20, 26);
                    scanf_s("%d", &textnum, 3);




                    switch (textnum)
                    {
                    case 1:
                        lovepoint = lovepoint + 15;
                        if (lovepoint < 50)
                        {   
                            a = 0;
                            system("cls");
                            how();
                            Sleep(2000);
                            break;
                        }
                        if (lovepoint >= 100)
                        {   
                            a = 0;
                            system("cls");
                            com();
                            Sleep(2000);
                            break;
                           
                        }
                        else {
                            a = 4;
                            system("cls");
                            Sleep(500);
                            delay_print("-------------------------------------------------------");
                            delay_print("|\033[44m���� �Ѱ����� ���ִ°� ��帱����!! ���� �Ѱ�������?..\033[0m| ");
                            delay_print("-------------------------------------------------------");
                            Sleep(500);
                            printf("���� ������... �̷����� .. ó���̳�..");
                            Sleep(500);
                            continue;
                        
                        }
                       
                    case 2:
                        lovepoint = lovepoint - 10;
                        if (lovepoint < 50)
                        {   
                            a = 0;
                            system("cls");
                            how();
                            Sleep(2000);
                            break;
                        }
                        if (lovepoint >= 100)
                        {   
                            a = 0;
                            system("cls");
                            com();
                            Sleep(2000);
                            break;

                        }
                        else {
                            a = 4;
                            system("cls");
                            Sleep(500);
                            delay_print("---------------------------------------------");
                            delay_print("|\033[44m���� ���ϼ���?.. �� �� ������ �����Ƿ���?...\033[0m| ");
                            delay_print("---------------------------------------------");
                            Sleep(500);
                            printf("..���� �߸������Ű�����????..�Ѱ����ڰ� �ٽ� ��������");
                            Sleep(500);
                            continue;

                        }
                    case 3:
                        lovepoint = lovepoint - 5;
                        if (lovepoint < 50)
                        {
                            a = 0;
                            system("cls");
                            how();
                            Sleep(2000);
                            break;
                        }
                        if (lovepoint >= 100)
                        {
                            a = 0;
                            system("cls");
                            com();
                            Sleep(2000);
                            break;

                        }
                        else {
                            a = 4;
                            system("cls");
                            Sleep(500);
                            delay_print("------------------------------");
                            delay_print("|\033[44mģ������ �� ���� �ϽǷ���?.. \033[0m| ");
                            delay_print("------------------------------");
                            Sleep(500);
                            printf("..���� ���Ƴ�?.. �� �̷���.. ���� �ʹ� �����ΰ�?.. �Ѱ����ڰ� �ٽ� �����غ���!");
                            Sleep(500);
                            continue;

                        }
                    default:
                        continue;
                    }
                    break;
                }
                else
                {
                    system("cls");
                    clearBuffer(screenBuf, width, height);
                    printf("%s\n", screenBuf);
                    SetCurrentCursorPos(66, 1);
                    printf("ȣ����: \033[31m%d��\033[0m", lovepoint);
                    text5();
                    SetCurrentCursorPos(20, 26);
                    scanf_s("%d", &textnum, 3);




                    switch (textnum)
                    {
                    case 1:
                        lovepoint = lovepoint - 15;
                        if (lovepoint < 50)
                        {   
                            a = 0;
                            system("cls");
                            how();
                            Sleep(3000);
                            break;
                        }
                        if (lovepoint >= 100)
                        {   
                            a = 0;
                            w();
                            break;

                        }
                        else {
                            a = 0;
                            w();
                            break;
                        }

                    case 2:
                        lovepoint = lovepoint + 10;
                        if (lovepoint < 50)
                        {   
                            a = 0;
                           
                            system("cls");
                            how();
                            Sleep(3000);
                            break;
                        }
                        if (lovepoint >= 100)
                        {
                            a = 0;
                           
                            w();
                            break;

                        }
                        else {
                            a = 0;
                            w();
                            break;

                        }
                    case 3:
                        lovepoint = lovepoint - 5;
                        if (lovepoint < 50)
                        {   
                            
                            system("cls");
                            how();
                            Sleep(3000);
                            break;
                        }
                        if (lovepoint >= 100)
                        {   
                            a = 0;
                            w();
                            break;

                        }
                        else {
                            
                            a = 0;
                            w();
                            break;
                            

                        }
                    default:
                        a = 0;
                        break;
                    }
                    break;
                }
            
                while1 = 0;
            }
        }
        else if (input == 2)
        {
            system("clear");
            system("cls");
            clearBuffer(screenBuf, width, height);
            printf("%s\n", screenBuf);
            howplay();
            scanf_s("%d", &input2,3);
            int lovepoint = 0;

            while (isGamePlaying)
            {
                if (input2 == 1)
                {
                    isGamePlaying = 1; break;
                }
                else if (input2 == 2)
                {
                    scanf_s("%d", &input2,3); continue;
                }
                else
                {
                    scanf_s("%d", &input2,3); continue;
                }
            }
        }
        else if (input == 3)
        {
            system("clear"); system("cls");
            clearBuffer(screenBuf, width, height);
            printf("%s\n", screenBuf);
            gameexit();
            scanf_s("%d", &input3,3);

            while (isGamePlaying)
            {
                if (input3 == 1)
                {
                    isGamePlaying = 0;
                }
                else if (input3 == 2)
                {
                    isGamePlaying = 1; break;
                }
                else
                {
                    scanf_s("%d", &input3,3); continue;
                }
            }
        }
    }
}
