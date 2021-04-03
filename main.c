#include <stdio.h>
#include <stdlib.h>
#define psw 3020
/***************************************************************************/
void count(int);
void contest_input();
void contest_show();
void result();
/***************************************************************************/

struct{
    char n[50];
    int c;
}s[50];

int j,i,v,j,m,t,con,c,password;

/***************************************************************************/

int main()
{

/***************************************************************************/

    printf("**********************************\n            Main Menu\n**********************************\n1.Admin Login\n2.Voting System\n3.Exit\n**********************************\nEnter Your Choice :\n");
    scanf("%d",&c);
    if(c==2)
    {

    contest_input();

    printf("**********************************\nEnter The No Of Voters :\n");
    scanf("%d",&m);

    contest_show();

for(i=1;i<=m;i++)
  {

    printf("\t\t\t\n**********************************\nMaximum Voters Are %d:\n**********************************\n",m);

    printf("\nVoter %d Votes For Contestant Number:\n",i);
    scanf("%d",&v);
     if(v<=con)
        {
                count(v);
        }
        else
        {
                --i;
                printf("\nEnter Number Below %d\n\nGive Your Vote Again!\n",m);
            getchar();
        }

    system("cls");

    contest_show();

  }

    printf("\n\n**********************************\n\nVoting Completed Successfuly!\n For Result Logon At Admin\n\n**********************************\n");

    main();

    }
    else if(c==1)
    {
        printf("\nEnter Password :\n");
        scanf("%d",&password);

        if(password==psw)
        {
            result();
        }
        else
        {
            printf("\nWrong Password!\n\nTry Again!\n\n");
            main();
        }

    }
    else if(c==3)
    {
        exit(0);
    }
    else
    {
        printf("\nInvalid Choice\n");
        main();
    }

    getchar();
    return 0;
}
/***************************************************************************/

void count(int x)
{
   s[x].c++;
}

/***************************************************************************/

void contest_show()
{
printf("**********************************\n\nContestants Are :\n**********************************\n");

for(j=1;j<=con;j++)
    {
           printf("\4 %d.%s\t",j,s[j].n);
    }
}

/***************************************************************************/

void contest_input()
{

    printf("**********************************\nEnter The No Of Contestant :\n");
    scanf("%d",&con);

for(j=1;j<=con;j++)
    {
        printf("Enter The Name Of %d Contestant :\n",j);
        scanf("%s",s[j].n);
    }
}

/***************************************************************************/

void result()
{
printf("\n**********************************\nResults\n**********************************\n");
for(i=1;i<=con;i++)
    {
            printf("\nVotes For %s :%d",s[i].n,s[i].c);
    }
}

/***************************************************************************/
/*
                Voting System
         Micro-Project Of Vinay Gawade
                Year 2019-2020

*/
/***************************************************************************/