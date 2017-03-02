#include<stdio.h>
#include<string.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
char u1[50],u2[50];
void board();
void rules();
int checkforwin();
int main()
{
    int player=1;
    int choice,score=-1;
    char symbol,re;
    char start;
    rules();
    start:
    printf("Press S(start) to continue\n");
    scanf("%c",&start);
    if(start=='S' || start=='s')
    {
    read:
    printf("\nEnter name of player1: ");
    scanf("%s",u1);
    printf("Enter name of player2: ");
    scanf("%s",u2);
    if(!strcmp(u1,u2))
    {
        printf("Enter names of different players!\n\n");
        goto read;
    }
    else
    {
    board();
    do
    {

        player=((player%2)?1:2);
        if(player==1)
        printf("%s Type any digit from 1-9 to fill your response:- ",u1);
        else
            printf("%s Type any digit from 1-9 to fill your response:- ",u2);
        scanf("%d",&choice);
        symbol=((player==1)?'X':'O');
        if(choice==1 && a[0]=='1')
            a[0]=symbol;
        else if(choice==2 && a[1]=='2')
            a[1]=symbol;
        else if(choice==3 && a[2]=='3')
            a[2]=symbol;
        else if(choice==4 && a[3]=='4')
            a[3]=symbol;
        else if(choice==5 && a[4]=='5')
            a[4]=symbol;
        else if(choice==6 && a[5]=='6')
            a[5]=symbol;
        else if(choice==7 && a[6]=='7')
            a[6]=symbol;
        else if(choice==8 && a[7]=='8')
            a[7]=symbol;
        else if(choice==9 && a[8]=='9')
            a[8]=symbol;
        else
            {printf("Wrong Selection\n");player--;}

        score=checkforwin();
        player++;
        board();
    }while(score == -1);



    if(score==1)
    {
        if(player==2)
        {printf("\n\nPlayer1 %s Wins!\n\n",u1);
        return 0;}
        else
            {printf("\n\nPlayer2 %s Wins!\n\n",u2);
        return 0;
            }
    }
    else
        printf("\n\nGame Draws!\n\n");
        return 0;
    }
    }
    else
    {
        printf("\n\nShould have typed s or S to play the game!\nHope to see you back soon!\n\n");
    }
}
int checkforwin()
{
    if(a[0]==a[1] && a[1]==a[2])
        return 1;
    else if(a[3]==a[4] && a[4]==a[5])
        return 1;
    else if(a[6]==a[7] && a[7]==a[8])
        return 1;
    else if(a[0]==a[3] && a[3]==a[6])
        return 1;
    else if(a[1]==a[4] && a[4]==a[7])
        return 1;
    else if(a[2]==a[5] && a[5]==a[8])
        return 1;
    else if(a[0]==a[4] && a[4]==a[8])
        return 1;
    else if(a[2]==a[4] && a[4]==a[6])
        return 1;
    else if(a[0]!='1' && a[1]!='2' && a[2]!='3' && a[3]!='4' && a[4]!='5' && a[5]!='6' && a[6]!='7' && a[7]!='8' && a[8]!='9')
        return 0;
    else
        return -1;
}

void board()
{
    int i;
    //char u11[50],u22[50];

    system("cls");
    printf("\tTic-Tac-Toe\n\n");
        printf("\n\n");
        printf("Player1 %s:- (X)\nPlayer2  %s:-  (O)\n\n\n",u1,u2);

        printf("  %c |  %c | %c\n",a[0],a[1],a[2]);
        printf("    |    |    \n");
        printf("----|----|----\n");
        printf("    |    |    \n");
        printf("  %c |  %c | %c\n",a[3],a[4],a[5]);
        printf("    |    |    \n");
        printf("----|----|----\n");
        printf("  %c |  %c | %c\n",a[6],a[7],a[8]);
        printf("    |    |    \n\n\n");

    }
void rules()
{
    char link;
    printf("\tTic-Tac-Toe\n\n");
    printf("Welcome to the most played 2D game and a sort of fun using X and O\n\n");
    printf("Rules:-\n");
    printf("\n1:Each player will be entering the number to put respective X or O in the desired position");
    printf("\n2:Player who gets a combination of 3 same characters either diagonal or horizontally or \n  vertically will be declared as the winner");
    printf("\n\nEnjoy the game! Be a Winner!\n\n");
    printf("For more clarifications press Y\n\n");
    /*scanf("%c",&link);
    if(link=='y' || link=='Y')
    {
        system("start http://www.wikihow.com/Play-Tic-Tac-Toe");
    }*/
}




