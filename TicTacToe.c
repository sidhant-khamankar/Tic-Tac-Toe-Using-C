#include<stdio.h>
int count=1;
char cont='y';
char select;
char a[3][3]={'1','2','3','4','5','6','7','8','9'};
void retry();
void drawboard();

void checkforwin()
{
    if((a[0][0]=='X' || a[0][0]=='O') && (a[0][1]=='X' || a[0][1]=='O') && (a[0][2]=='X' || a[0][2]=='O') && (a[1][0]=='X' || a[1][0]=='O') && (a[1][1]=='X' || a[1][1]=='O') && (a[1][2]=='X' || a[1][2]=='O') && (a[2][0]=='X' || a[2][0]=='O') && (a[2][1]=='X' || a[2][1]=='Y') && (a[2][2]=='X' || a[2][2]=='O'))
    {
        printf("Draw\n");
        retry();
    }
    if(count%2!=0)
    {
    if( (a[0][1]==a[0][2] && a[0][2]==a[0][0]) || (a[1][1]==a[1][2] && a[1][2]==a[1][0]) || (a[2][1]==a[2][2] && a[2][2]==a[2][0]) || (a[0][0]==a[1][0] && a[1][0]==a[2][0]) || (a[0][1]==a[1][1] && a[1][1]==a[2][1]) ||  (a[0][2]==a[1][2] && a[1][2]==a[2][2]) || (a[0][0]==a[1][1] && a[1][1]==a[2][2]) || (a[0][2]==a[1][1] && a[1][1]==a[2][0]))
    {
        printf("Player 1 Wins\n");
        retry();
    }
    }


    else
    {
        if((a[0][1]==a[0][2] && a[0][2]==a[0][0]) || (a[1][1]==a[1][2] && a[1][2]==a[1][0]) || (a[2][1]==a[2][2] && a[2][2]==a[2][0]) || (a[0][0]==a[1][0] && a[1][0]==a[2][0]) || (a[0][1]==a[1][1] && a[1][1]==a[2][1]) ||  (a[0][2]==a[1][2] && a[1][2]==a[2][2]) || (a[0][0]==a[1][1] && a[1][1]==a[2][2]) || (a[0][2]==a[1][1] && a[1][1]==a[2][0]))
    {
        printf("Player 2 Wins\n");
        retry();
    }
    }

        count++;
        drawboard();


}
void markboard()
{
    if(select!=a[0][0] && select!=a[0][1] && select!=a[0][2] && select!=a[1][0] && select!=a[1][1] && select!=a[1][2] && select!=a[2][0] && select!=a[2][1]  && select!=a[2][2] )
    {
        printf("\t TRY AGAIN!\n\n");
        count--;
    }
    if(count%2!=0)
  {
      for(int i=0;i<=2;i++)
    {
      for(int j=0;j<=2;j++)
      {
        if(select==a[i][j])
        {
            a[i][j]='X';
        }
      }

     }
  }
  else
  {
    for(int i=0;i<=2;i++)
    {
      for(int j=0;j<=2;j++)
      {
        if(select==a[i][j])
        {
            a[i][j]='O';
        }
      }

     }
  }
  checkforwin();
}
void input()
{
    if(count%2!=0)
    {
        printf("\n\nPlayer1, enter a number=");
        scanf(" %c",&select);
    }
    else
    {
        printf("\n\nPlayer2, enter a number=");
        scanf(" %c",&select);
    }
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    markboard();
}
void drawboard()
{
     printf("\n\t TIC TAC TOE\n\n\nPlayer1(X)\t-\tPlayer2(O)\n\n");
    for(int i=0;i<=2;i++)
    {
        printf("\t");
        for(int j=0;j<=2;j++)
        {
            printf("| %c ",a[i][j]);
        }
        printf("|\n");
        printf("\t-------------\n");
    }
    input();
}
void retry()
{
    printf("\nDo you want to continue (y/n):");
    scanf(" %c",&cont);
    a[0][0]='1';a[0][1]='2';a[0][2]='3';a[1][0]='4';a[1][1]='5';a[1][2]='6';a[2][0]='7';a[2][1]='8';a[2][2]='9';
}
int main()
{   while(cont=='y')
{
    drawboard();
}

    return 0;

}
