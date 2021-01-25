#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int t=0;
void check(char,char);
char a[9]={'1','2','3','4','5','6','7','8','9'};
void gamename()
{
printf("\n\t\t\t THE TIC TAC GAME\n");
}
void show()
{

printf("\n\n\t\t\t---|---|---\n");
printf("\t\t\t%c  |%c  |%c \n",a[0],a[1],a[2]);
printf("\t\t\t---|---|---\n");
printf("\t\t\t%c  |%c  |%c \n",a[3],a[4],a[5]);
printf("\t\t\t---|---|---\n");
printf("\t\t\t%c  |%c  |%c \n",a[6],a[7],a[8]);
printf("\t\t\t---|---|---\n");



}
void  inputsymbol()
{
    printf("\n player 1 symbol:x:\n");
    printf("\n player 2 symbol:0:\n");
}
void start()
{
    char pa;
    printf("\n enter will start the game player 1 player 2\n");
    scanf("%d",&pa);
}
int count=0;
void play()
{
    char p,s ; // p->player s->symbol
    printf("\n position and symbol\n");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
   // scanf("%c",&s);
    count++;
    check(p,s);
}
 void check(char p,char s)
 {
    int i;
    if(t==0)
        {
    for(i=0;i<=8;i++)
    {
        if(a[i]==p)
         {
            a[i]='x';
            t=1;
            break;
         }
    }
        }
    else
        {
    for(i=0;i<=8;i++)
    {
        if(a[i]==p)
         {
            a[i]='0';
            t=0;
            break;
         }

    }
 }
 }

 int end()
 {
     if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[0]=='x'&&a[4]==0&&a[8]=='x'))
        return 100;
      else if((a[0]=='0'&&a[1]=='0'&&a[2]=='0')||(a[0]=='0'&&a[3]=='0'&&a[6]=='0')||(a[0]=='0'&&a[4]==0&&a[8]=='0'))
        return 200;
        else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
        return 100;
        else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
        return 200;
         else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
        return 100;
        else if(a[2]=='0'&&a[5]=='0'&&a[8]=='0')
        return 200;
         else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
        return 100;
        else if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
        return 200;
         else if(a[2]=='x'&&a[4]=='x'&&a[6]=='x')
        return 100;
        else if(a[2]=='0'&&a[4]=='0'&&a[6]=='0')
        return 200;
         else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
        return 100;
        else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
        return 200;
return 300;

 }

main()
{
int k;
char ch;
labell:
gamename();
show();
inputsymbol();
start();
play();
system("cls");
label:
show();
play();
k=end();
system("cls");
show();
if(count<9)
{
if(k==100)
{
    printf("\n player 1 win");
    count=0;

}
else if(k==200)
{
    printf("\n player 2 win");
    count=0;
}
else
    goto label;
}
else
{
 printf("game draw");
 count=0;
}

    printf("\n do you play continue press y and exist any key     \n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
        a[0]='1';
        a[1]='2';
        a[2]='3';
        a[3]='4';
        a[4]='5';
        a[5]='6';
        a[6]='7';
        a[7]='8';
        a[8]='9';
        goto labell;
    }
printf("\n\n THANK YOU:");


}
