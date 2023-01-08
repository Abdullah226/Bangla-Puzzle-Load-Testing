#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void show_record();
void update_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t \t  QUIZ GAME   ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n\n\n\n\n \t\t\t ------------------  Welcome to %s in Quiz Game --------------------------",playername);
    printf("\n\n\n\t\t\t\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     srand((time(NULL)));
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;
     r1=rand()%6+1;

     switch(r1)
		{
		case 1:
		printf("\n\nHow many total Districts are there in Bangladesh?");
		printf("\n\nA.62\t\tB.70\n\nC.55\t\tD.64");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is D.64");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nNational game of Bangladesh is...");
		printf("\n\nA.Cricket\t\tB.Kabadi\n\nC.Hockey\t\tD.Football");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Kabadi");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nWhat is the currency of Bangladesh?");
		printf("\n\nA.Rupee\t\tB.Dollar\n\nC.Pond\t\tD.Taka");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Taka");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nWhich of following river is longest in Bangladesh?");
		printf("\n\nA.Padma\t\tB.Kobadak\n\nC.Surma\t\tD.None of these");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Surma");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nWho is the first president of Bangladesh?");
        printf("\n\nA.Abdus sattar\t\tB.Ziaur Rahman\n\nC.Sheikh Mujibur Rahman\t\tD. None of these");
        if (toupper(getch())=='C')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is C.Sheikh Mujibur Rahman");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nWho is the first female pilot of Bangladesh?");
		printf("\n\nA.Nayma Haque\t\tB.Kaniz fatema Roksana\n\nC.Nasim begum\t\tD.None of these");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Kaniz fatema Roksana");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
    srand((time(NULL)));
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;
     r=rand()%21+1;


     switch(r)
		{
		case 1:
		printf("\n\nDhaka is capital of Bangladesh. On which river it is situated?");
		printf("\n\nA.Jamuna\t\tB.Padma\n\nC.Buriganga \t\tD.Meghna ");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Buriganga ");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nHow many rivers are there in Dhaka?");
		printf("\n\nA.Six rivers\t\tB.Five rivers\n\nC.Three rivers\t\tD.Seven rivers");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Six rivers");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\n The nation of Bangladesh was formed from the historic region of Bengal. In which year did it gain independence? ");
		printf("\n\nA.1522 \t\tB.1890 \n\nC.1971 \t\tD.1947 ");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.1971 ");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nIn 1971 after a bloody resistance, Bangladesh officially gained independence from which nation?");
		printf("\n\nA.Pakistan \t\tB.France \n\nC.United Kingdom\t\tD.India ");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Pakistan ");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\n Bangladesh is bordered by two countries. Which ones?");
		printf("\n\nA.Nepal and Bhutan\t\tB.India and Myanmar\n\nC.India and Nepal\t\tD.Myanmar and Nepal");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.India and Myanmar");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nWhich city is called the Healthy City of Bangladesh?");
		printf("\n\nA.Dhaka \t\tB.Chittagong \n\nC.Barishal \t\tD.Bogra ");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Chittagong ");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhat is the price of iphone 13?");
		printf("\n\nA.800$\t\tB.900$\n\nC.1100$\t\tD.above all");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.1100$");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nIn the apple history who intoduced MacBook Pro? ?");
		printf("\n\nA.Tesla\t\tB.Bill gates\n\nC.Steve Jobs\t\tD.Robert");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Steve Jobs");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nWhat is the capital of Denmark?");
		printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Copenhagen");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nWhich country has the most air polluted capital?");
		printf("\n\nA.India\t\tB.Bangladesh\n\nC.Nepal\t\tD.Canada");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Bangladesh");getch();break;goto score;}

        case 11:
		printf("\n\n\nWhat is the currency of Russia?");
		printf("\n\nA.Rupee\t\tB.Taka\n\nC.Rubel\t\tD.dollar");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.Rubel");getch();
              break;goto score;}





        case 12:
		printf("\n\n\nWhat is the area of Bay of Bengal??");
		printf("\n\nA.about 1,000,000 sq mi\t\tB.about 4,000,000 sq mi\n\nC.about 2,000,000 sq mi\t\tD.about 1,500,000 sq mi");
		if (toupper(getch())=='A')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.about 1,000,000 sq mi");getch();
              break;goto score;}

		case 13:
		printf("\n\n\nWhich university of Bangladesh is known as 'The Oxford of the East'?");
		printf("\n\nA.Khulna University\t\tB. Jahangirnagar University\n\nC.BUET\t\tD. Dhaka University");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D. Dhaka University");getch();
		       break;goto score;}

        case 14:
		printf("\n\n\nWhich of these is a main export of Bangladesh?");
		printf("\n\nA.textiles\t\tB.cars\n\nC.coffee\t\tD.cuckoo clocks");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.textiles");getch();
		       break;goto score;}

		case 15:
		printf("\n\n\nThe name of this city in Bangladesh shares its name with a citrus fruit, also known as a lemandarin, and is located in northwestern part of the country. Which city is this?");
		printf("\n\nA.Dhaka \t\tB.Rangpur \n\nC.Kolkata \t\tD.Islamabad ");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Rangpur ");getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nWhich social-media platform launched ‘Coronavirus Information Hub’ in partnership with WHO, UNICEF and UNDP?");
		printf("\n\nA.WhatsApp\t\tB.Twitter\n\nC.Instagram\t\tD.Telegram");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.WhatsApp");getch();
		       goto score;
		       break;}


		case 17:
		printf("\n\n\nWhich technology company has launched a new feature called ‘Teams for Education’, to support online education?");
		printf("\n\nA.Microsoft\t\tB.Google\n\nC.Amazon\t\tD.Apple");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Microsoft");getch();goto score;
		       break;}

		case 18:
		printf("\n\n\nWhich technology company has launched ‘Online Business Guide’ and a training programme, to help people move their business online?");
		printf("\n\nA.Amazon\t\tB.Infosys\n\nC.Tata Consultancy Services\t\tD.Facebook\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Facebook");getch();goto score;
		       break;}

		case 19:
		printf("\n\n\nWhich technology company released the ‘Security Endpoint Threat Report 2019’?");
		printf("\n\nA.Google\tB.Amazon\n\nC.Microsoft\tD.Apple\n\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Microsoft");getch();goto score;
		       break;}

		case 20:
		printf("\n\n\nWhat percentage of the human body is water?");
		printf("\n\nA.50%\t\tB.66%\n\nC.75%\t\tD.96%");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.66%");getch();goto score;
		       break;}

		case 21:
		printf("\n\n\nWhich technology major has been named to lead EU’s project Hexa-X?");
		printf("\n\nA.Microsoft\t\tB.Google\n\nC.Facebook\t\tD.Nokia");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Nokia");getch();goto score;
		       break;}

		case 22:
		printf("\n\n\nWhich is the parent company of Google?");
		printf("\n\nA.Microsoft\t\tB.Oracle\n\nC.Intel\t\tD.Alphabet");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Alphabet");getch();goto score;
		       break;}

		case 23:
		printf("\n\n\nWhich of the following two countries currently occupy / control the Golan heights?");
		printf("\n\nA.Egypt & Syria\t\tB.Turkey & Israel\n\nC. Israel & Syria\t\tD.Syria & Turkey");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C. Israel & Syriah");getch();goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*10000;
	if(score>0.00 && score<100000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==100000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A WINER!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void update_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 3");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the  CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded 1,00,000 tk");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> No negative marking for wrong answers");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");


	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t***** QUIZ GAME is developed by Project Dream ********");}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
