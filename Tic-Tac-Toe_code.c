#include<stdio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
void board();
int checkforwin();
int main()
{

    int player=1;
    int choice,score=-1;
    char symbol,re;
    board();
    do
    {

        player=((player%2)?1:2);

        printf("Player%d Type any digit from 1-9 to fill your response:- ",player);
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
        printf("\n\nPlayer%d Wins!\n\n",--player);
        /*printf("Interested to play Again?\nPlayer%d You need to show your talent",++player);
        printf("\ny/n");
        scanf("%c",&re);
        if(re=='y' || re=='Y')
            goto main;
        if(re=='n' || re=='N')
            return 0;*/
    }
    else
        printf("\n\nGame Draws!\n\n");
        /*printf("\nInterested to play Again?\n");
        printf("y/n");
        scanf("%c",&re);
        if(re=='y' || re=='Y')
            goto main;
        if(re=='n' || re=='N')
            return 0;*/
            return 0;
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
    char u1[10],u2[10];
    system("cls");
    printf("\tTic-Tac-Toe\n\n");
    /*read_name:*/
    /*printf("Enter name of Player1 :- ");
    scanf("%s",u1);
    printf("Enter name of Player2 :- ");
    scanf("%s",u2);*/

    /*if(!strcmp(u1,u2))
    {
        printf("\n\n");
        printf("Enter names of different players\n\n");
        goto read_name;
    }
    else
    {*/
        printf("\n\n");
        printf("Player1:- (X)\nPlayer2:-  (O)\n\n\n",u1,u2);

        printf("  %c |  %c | %c\n",a[0],a[1],a[2]);
        printf("    |    |    \n");
        printf("----|----|----\n");
        printf("    |    |    \n");
        printf("  %c |  %c | %c\n",a[3],a[4],a[5]);
        printf("    |    |    \n");
        printf("----|----|----\n");
        printf("  %c |  %c | %c\n",a[6],a[7],a[8]);
        printf("    |    |    \n\n\n");
        //printf("----|----|----\n\n");
    }




