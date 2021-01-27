#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int noc=0,nob=0,nom=0,amount=0,count=0,i=0,tme=0,am_pm,k;
//** LAYOUT **//
void draw()
{

 printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t############           WELCOME     TO     PARKING              ############");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("         \t\t\t\t CAR|MOTORCYCLE|BUS| PARKING SYSTEM                             ");
    printf("\n\t\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*  ");
}
//** STATUS PARKING **//
void showdata()
{
    printf("\n NUMBER OF CAR=%i",noc);
    printf("\n NUMBER OF BUS=%i",nob);
    printf("\n NUMBER OF MOTORCYCLE=%i",nom);
    printf("\n NUMBER OF TOTAL NO VEHIVLE PARKED=%i",count);
    printf("\n NUMBER OF AMOUNT GAIN=%i",amount);
    printf("\n TIMEING=%i%s",k,am_pm);
    printf("\n\t\t\tBLACK TO MENU  PRESS->ENTER  ");

}
//** PARKING-MENU **//
int menu()
{
    printf("\n\n\n\t\t-> PARKING-MENU <-");
    printf("\n 1->ENTER CAR");
    printf("\n 2->ENTER BUS");
    printf("\n 3->ENTER MOTORCYCLE");
    printf("\n 4->STATUS");
    printf("\n 5->ENTER DELETE");
    printf("\n 6->EXIT");
     printf("\n\nENTER YOUR CHOICE");
    scanf("%i",&i);
    return(i);
}
//** CAR **//
void car()
{
    printf("\n ENTERTRY SUCCESSFULLY");
    noc++;
    amount=amount+50;
    count++;


}
//** MOTORCYCLE **//
void motorcycle()
{
    printf("\n ENTERTRY SUCCESSFULLY");
    nom++;
    amount=amount+100;
    count++;
}
//** BUS **//
void bus()
{
    printf("\n ENTERTRY SUCCESSFULLY");
    nob++;
    amount=amount+150;
    count++;
}
//** DELETE **//
void del()
{
    printf("\n ENTERTRY SUCCESSFULLY");
    nob=0;
    noc=0;
    nom=0;
    amount=0;
    count=0;
}
//** TIME AM PM **//
int tm()
{
    srand(time(0));
    k=rand()%12;
    if(k<=6)
    {
        am_pm="am";
    }
    else
    {
       am_pm="pm";
    }




}
int main()
{
 label1:
system("cls");
draw();
tm();
//** CONDITION MATCH FOR MENU USER**//
 switch(menu())
 {

 case 1:
     car();
     break;
 case 2:
     bus();
     break;
 case 3:
     motorcycle();
     break;
 case 4:
     showdata();
     break;
   case 5:
       del();
       break;
   case 6:
    exit(0);
   default:
    printf("INVALID CHOICE");
}
 getch();
 goto label1;
}
