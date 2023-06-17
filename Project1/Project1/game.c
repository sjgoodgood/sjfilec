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
                printf("호감도: \033[31m%d♥\033[0m", lovepoint);
                int textnum = 0;
              

                if (a == 0)
                {

                    system("cls");
                    clearBuffer(screenBuf, width, height);
                    printf("%s\n", screenBuf);
                    SetCurrentCursorPos(66, 1);
                    printf("호감도: \033[31m%d♥\033[0m", lovepoint);
                    text1();
                    SetCurrentCursorPos(20, 26);
                    scanf_s("%d", &textnum, 3);
                
                    switch (textnum)
                    {
                    case 1:
                        lovepoint = lovepoint + 15;
                        a = 1;
                        system("cls");
                        printf("음 꼭..받아야하나?..친구한테 거절해야겠다고 말해야겠다....\n");
                        Sleep(500);
                        delay_print("---------------");
                        delay_print("|\033[44m야 나 안받을래\033[0m|");
                        delay_print("---------------");
                        Sleep(500);
                        printf("라고 보내면 되겠지?");

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
                        delay_print("|\033[44m누군데?..\033[0m|");
                        delay_print("----------");
                        Sleep(500);
                        printf("카톡을 일단 친구한테 보냈는데.. 도대체 누구지?..");
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
                    printf("호감도: \033[31m%d♥\033[0m", lovepoint);
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
                        delay_print("|\033[44m 저기.. \033[0m| ");
                        delay_print("----------");
                        Sleep(500);
                        printf("라고 보내긴 했는데 잘한 짓 맞겠지?..");
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
                            delay_print("|\033[44m자니 ? ..뭐하나만 물어봐도 될까 ?\033[0m| ");
                            delay_print("----------------------------------");
                            Sleep(500);
                            printf("아 근데 자니?..는 썸타는 사이도 아니고 으..오글거려");
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
                            delay_print("|\033[44m그 .. 준혁님..\033[0m| ");
                            delay_print("---------------");
                            Sleep(500);
                            printf("이름 괜히 불렀나?.. 준혁님.. 뭔가 .. 어르신같은데");
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
                    printf("호감도: \033[31m%d♥\033[0m", lovepoint);
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
                            delay_print("|\033[44m넵 감사합니다...        \033[0m| ");
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
                            delay_print("|\033[44m정말 고마워요!혹시 술 드셨어요?  \033[0m| ");
                            delay_print("----------------------------------");
                            Sleep(500);
                            printf(" ' ㅉㅉ 술이라니 ' ");
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
                            delay_print("|\033[44m생명의 은인이에요 다음에 밥사드릴께요!\033[0m| ");
                            delay_print("---------------------------------------");
                            Sleep(500);
                            printf(" '말 잘한거 맞겠지?..' ");
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
                    printf("호감도: \033[31m%d♥\033[0m", lovepoint);
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
                            delay_print("|\033[44m제가 한강에서 맛있는거 사드릴께요!! 저랑 한강갈래요?..\033[0m| ");
                            delay_print("-------------------------------------------------------");
                            Sleep(500);
                            printf("뭔가 설렌다... 이런적이 .. 처음이네..");
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
                            delay_print("|\033[44m지금 뭐하세요?.. 할 일 없으면 나오실래요?...\033[0m| ");
                            delay_print("---------------------------------------------");
                            Sleep(500);
                            printf("..뭔가 잘못보낸거같은데????..한강가자고 다시 보내보자");
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
                            delay_print("|\033[44m친해질겸 술 한잔 하실래요?.. \033[0m| ");
                            delay_print("------------------------------");
                            Sleep(500);
                            printf("..내가 미쳤나?.. 왜 이렇게.. 술은 너무 오바인가?.. 한강가자고 다시 연락해보자!");
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
                    printf("호감도: \033[31m%d♥\033[0m", lovepoint);
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
