#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int x,y,fruitx,fruity,score,gameover;
int width=20,height=20,flag,n,m,life=3;
int tailx[100],taily[100],counttail=0,k;
char c;
//** SETUP SNAKE AND FRUITX,FRUITY **//
void setup()
{
    gameover=0;
    x=width/2;
    y=height/2;

    label1:
    fruitx=rand()%20;
    if(fruitx==0)
        goto label1;
    label2:
        fruity=rand()%20;
        if(fruity==0)
            goto label2;
            //score=0;

}

// ** DRAW THE LAYOUT **//
void draw()
{
    system("cls");
    int i,j;
for(i=0;i<width;i++)
{
for(j=0;j<height;j++)
{
if(i==0||i==height-1||j==0||j==width-1)
{
printf("#");
}
else
{
//** SETUP FUNCTION **//
if(i==x&&j==y)
printf("o");
else if(i==fruitx&&j==fruity)
printf("f");
else
{    int ch=0;
    for(k=0;k<counttail;k++) // i,j pair
    {
        if(i==tailx[k]&&j==taily[k])
{
printf("o");
ch=1;
}
    }
if(ch==0)
printf(" ");
}
}
}
printf("\n");
}
printf("SCORE=%d",score);
printf("\t\tlife=%d",life);

}
 //** USER INPUT KEYBOARD **//
void input()
{
   if(kbhit())
    {
        switch(getch())
        {
        case 'a':
            flag=1;
            break;
        case 's':
            flag=2;
            break ;
        case 'w':
            flag=3;
            break ;
        case 'z':
            flag=4;
            break;
            case 'x':
            gameover=1;
            break;
        }
    }
}
//** INCREASING THE LENGTH OF SNAKE **//
void makelogic()
{
    int prevx=tailx[0];
    int prevy=taily[0];
    int prev2x,prev2y,i;
    tailx[0]=x;
    taily[0]=y;

    for(i=1;i<counttail;i++)
    {
        prev2x=tailx[i];
        prev2y=taily[i];
        tailx[i]=prevx;
        taily[i]=prevy;
        prevx=prev2x;
        prevy=prev2y;
    }


//** SNAKE LEFT RIGHT DOWN UP **//

switch(flag)
{

    case 1:
        y--;
        break;
    case 2:
        y++;
        break;
    case 3:
        x--;
        break;
    case 4:
        x++;
        break;
    default:
        break;

}
//** TOUCH DOUNDARIES GAME OVER **//
if(x<0||x>width||y<0||y>height)
{
    /*if(life){

              gameover=1;
        }
        else
            {
                gameover=1;
            } */

gameover=1;

}


//** TAIL TOUCH GAMEOVER **//
for(i=0;i<counttail;i++)
{
    if(x==tailx[i]&&y==taily[i])
        gameover=1;
}

//** GAME OVER **//

//** FOOD QUARDIANT CHANGE X,Y SNAKE LINE-THROUGH THE FOOD **//
if(x==fruitx&&y==fruity)
{
     label3:
    fruitx=rand()%20;
    if(fruitx==0)
        goto label3;
    label4:
        fruity=rand()%20;
        if(fruity==0)
            goto label4;
            score+=10;
            counttail++;



}
}

main()
{

    label5:
    setup();
    while(!gameover)
    {
      draw();
      input();
      makelogic();
    if(gameover==1)
        break;

        //** SNAKE DELAY SPEED **//
        for(m=0;m<1000;m++)
        {
        for(n=0;n<100000;n++)
        {

        }

        }
         for(m=0;m<1000;m++)
        {
        for(n=0;n<100000;n++)
        {

        }

        }
    }
    //** USER EXIT AND LIFE **//
    printf("\n press y to continue again");
    scanf("%c",&c);
    fflush(stdin);
    if(c=='y'&&life--){

         if(life>=0)
         {

             goto label5;

         }
       else
        {
            gameover=1;
        }
}
else
    {
    printf("\n       GAME-OVER!     ");
    printf("\n     THANKS FOR PLAY  ");
    }

getch();
}
