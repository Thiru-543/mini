#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
#include<unistd.h>
#include"global.h"



void Bank(char bank[10][20],char search[23],char Ba0[22],int found);
void acc(char account[20],char org[22]);
void ific(char code[32],char cd[22]);
void pho(char num[20],char mb[22]);
void check(int otp,int copy);
void check1(int otp1,int copy1);
void verfiy(char mobile[20]);
void ver(char pass[5],char pi[22]);
void verfication(char pass1[5],char pi[22]);
void customer(char cust[15],char na[22],char na1[22],char mo[22],char mo1[22]);
void mb_transfer(char amt[10],char truser[10], char truser1[10],char truser2[10],char cust[15],char mo[22],char mo1[22]);
void customer1(char cust3[15],char na[22],char na1[22],char acc1[22], char acc2[22]);
void ac_transfer(char amt2[10],char truser[10], char truser1[10],char truser2[10],char cust3[15],char acc1[22],char acc2[22]);
void check_balance(char pi[22]);
void transulation_his();
void change_pin();
void money_show();
void verfication6(char pass6[5],char pi[22]);
void  customer7(char cust7[45],char na[22],char na1[22],char mo[22],char mo1[22]);
void mb_request(char amt5[10],char truser[10],char truser1[10],char truser2[10],char cust7[45],char mo[22],char mo1[22]);
void customer8(char cust8[45],char na[22],char na1[22],char acc1[22],char acc2[22]);
void ac_request(char amt2[10],char truser[10],char truser1[10],char truser2[10],char cust8[45],char acc1[22],char acc2[22]);
void function(char na[22],char na1[22],char mo[22],char mo1[22],char pi[22],char pass[5],char truser[10],char truser1[10],char truser2[10],char acc1[22],char acc2[22],char na0[22]);


int main()
{
	printf("********************************************************WELCOME TO IIES PAY***********************************************************************\n");
	sleep(2);
	printf("\v");

	char mobile[20];
	printf("Enter the valid mobile number to register google pay:");
	scanf("%s",mobile);
	printf("\n");
        verfiy(mobile);
	
	printf("\v");


	printf("\t\t\t\t\t\tWaiting for few minitues otp will generate\n"); 
	sleep(5);
	printf("\n");

	int otp=0;
	srand(time(NULL));        
        otp = rand() % 900000 + 100000; 
        
	printf("google pay OTP don't share to anyone:%d\n",otp);
        int copy;
	printf("\v");
	printf("Enter the that OTP to verify your mobile number:");
       scanf("%d",&copy);
       printf("\v");

       check(otp,copy);       
	

	printf("\v");


  printf("\t\t\t\t\tchoose you have account in the following bank \n");
  printf("\v");

  printf("\t\t\t\t\t1.ICIC-Bank\t  2.Indian-Bank\t  3.canara-Bank\t  4.HDFC-Bank\t  5.Federal-Bank\t\n"
	
       	"\t\t\t\t\t6.SBI-Bank\t  7.AXIS-Bank\t  8.IDBI-Bank\t  9.Union-Bank\t  10.Bank-of-Bardo\t");
printf("\n");
          

    printf("\v");
      
    //Bank detials//
        
    FILE *thiru = fopen("thiru.txt","r");
    if (thiru == NULL) {
        printf("unable to open that file\n");
        return 1; 
    }
    char org[22], cd[22], mb[22], truser[10],Ba0[22],na0[22],pi[22];
    if (fscanf(thiru, "%21s %21s %21s %9s %21s %21s %21s ", org, cd, mb, truser,Ba0,na0,pi) != 7) {
        printf(" unable to read data from that file\n");
        fclose(thiru);
        return 1;
    }
    fclose(thiru);

    FILE *dharasan = fopen("Dharasan.txt","r");
    if (dharasan == NULL) {
        printf(" unable to open that file\n");
        return 1;
    }
    char acc1[22], co[22], mo[22], truser1[10], Ba[22], na[22];
    if (fscanf(dharasan, "%21s %21s %21s %9s %21s %21s", acc1, co, mo, truser1, Ba, na) != 6) {
        printf(" unable to read data from that file\n");
        fclose(dharasan);
        return 1;
    }
    fclose(dharasan);

    FILE *vamsi = fopen("vamsi.txt","r");
    if (vamsi == NULL) {
        printf(" unable to open that the file\n");
        return 1;
    }
    char acc2[22], co1[22], mo1[22], truser2[10], Ba1[22], na1[22];
    if (fscanf(vamsi, "%21s %21s %21s %9s %21s %21s", acc2, co1, mo1, truser2, Ba1, na1) != 6) {
        printf(" unable to read data from that file\n");
        fclose(vamsi);
        return 1;
    }
    fclose(vamsi);

     

    char bank[10][20]={"ICIC-Bank","Indian-Bank","canara-Bank","HDFC-Bank","Federal-Bank","SBI-Bank","AXIS-Bank","IDBI-Bank","Union-Bank","Bank-of-Bardo"};
    char search[23];
    int found =0;
    printf("Enter the Bank name :");
    scanf(" %[^\n]", search);
     Bank(bank,search,Ba0,found);

    printf("\v");


   char account[20];
  printf("Enter the bank account :");
  scanf("%s",account);
  acc(account,org);


  printf("\v");
  char code[32];
  printf("Enter the Bank IFIC code:");
  scanf("%s",code);
  ific(code,cd);


  printf("\v");
  char num[20];
  printf("Enter the linked bank mobile number:");
  scanf("%s",num);
  pho(num,mb);
  printf("\v");
  
  printf("\t\t\t\t\t\tWaiting for few minitues otp will come from your mobile ..for Bank verfication  \n");
        sleep(5);
        printf("\n");

        int otp1=0;
        srand(time(NULL));
        otp1 = rand() % 900000 + 100000;

        printf("\v");
        printf("\t\t\t\t\t\tOne time OTP from bank verfication for online transection %d .. don't share to anyone\n",otp1);
	printf("\v");

        int copy1;
        printf("Enter the that one time OTP to verify google pay for online transection:");
       scanf("%d",&copy1);
       printf("\v");


        check1(otp1,copy1);
	printf("\v");


 printf("\t\t\t\t\t\t Waiting for few minites..Don't close the window ..your data is updating ..\n");
 sleep(3);
 printf("\v");
 printf("\t\t\t\t\t\t Successfully upadting \n");
 printf("\v");

 char pass[5];
 printf("Enter the 4 digit PIN for security purpose:");
 scanf("%s",pass);
  printf("\v");

 ver(pass,pi);
FILE *update = fopen("thiru.txt", "w");
if (update == NULL) {
    printf("Unable to update PIN in file\n");
    return 1;
}
fprintf(update, "%s %s %s %s %s %s %s", org, cd, mb, truser, Ba0, na0, pass);
fclose(update);




 printf("\v");

 printf("\t\t\t\t\t\t Waiting for few minites..Don't close the window .. updating Your 4 digit online transection password ..\n");
 sleep(4);
 printf("\v");

function(na,na1,mo,mo1,pi,pass,truser,truser1,truser2,acc1,acc2,na0);
return 0;
}

//intro call functions//

void verfiy(char mobile[20])
{
	 if(strlen(mobile)==10)
        {
                printf("\t\t\t\t\t\tSuccessfully registred\n");
        }
        else
        {
		
        printf("\t\t\t\t\t\tInvalid  mobile number(number must be 10 digit)\n");
	printf("\n");
        printf("Enter the valid mobile number to register google pay:");
        scanf("%s",mobile);
         verfiy(mobile);
	}
}
void Bank(char bank[10][20],char search[22],char Ba0[22],int found)
{
	 for(int i=0;i<10;i++)
    {
           if (strcmp(bank[i], search) == 0)
	   {
		   if(strcmp(search,Ba0)==0)
		   {

                     found=1;
                    printf("\t\t\t\t\t\tBank is founded successfully!\n");
                    break;
            }
    }
    }
    if(found!=1)
    {
      printf("\t\t\t\t\t\tInvalid Bank... your number is not link with that bank \n");
      printf("enter the Bank name properly...which bank you have an account enter that Bank name:");
       scanf(" %[^\n]", search);
       Bank(bank,search,Ba0,found);

    }
}
void check(int otp,int copy)
{
	 if(copy==otp)
        {
                printf("\t\t\t\t\t\tSuccessfully verified\n");
        }
        else
        {
        printf("\t\t\t\t\t\tInvalid otp number\n");
        printf("Enter the that OTP to verify your mobile number:");
       scanf("%d",&copy);
       check(otp,copy);
        }
}

void acc(char account[20],char org[22])
{
  if(strcmp(account,org)==0)
  {
	  printf("\t\t\t\t\t\tSuccessfully verified\n");
  }
  else
  {
	  printf("\t\t\t\t\t\tInvalid account number ,please enter properly\n");
	  printf("Enter the bank account :");
          scanf("%s",account);
	  acc(account,org);


  }
}
void ific(char code[32],char cd[22])
{
	if(strcmp(code,cd)==0)
	{
		printf("\t\t\t\t\t\tSuccessfully verified \n");
	}
	else
	{
		printf("\t\t\t\t\t\tInvalid IFIC code ,please enter properly\n");
		 printf("Enter the Bank IFIC code:");
                  scanf("%s",code);
		  ific(code,cd);

	}
}
void pho(char num[20],char mb[22])
{
	if(strcmp(num,mb)==0)
	{
		printf("\t\t\t\t\t\tSuccessfully verified \n");
	}
	else
	{
		printf("\t\t\t\t\t\tInvalid mobile number ,please enter properly\n");
		printf("Enter the linked bank mobile number:");
                scanf("%s",num);
		  pho(num,mb);

	}
}

void check1(int otp1,int copy1)
{
if(copy1==otp1)
        {
                printf("\t\t\t\t\t\tSuccessfully verified for online transection\n");
        }
        else
        {
        printf("\t\t\t\t\t\tInvalid otp number\n");
        printf("Enter the that one time OTP to verify google pay for online transection:");
       scanf("%d",&copy1);
       check1(otp1,copy1);
        }
}

//main process call function//

void function(char na[22],char na1[22],char mo[22],char mo1[22],char pi[22],char pass[5],char truser[10],char truser1[10],char truser2[10],char acc1[22],char acc2[22],char na0[22])

{

      

    printf("\v");
    printf("\t\t\t\t\t\t 1.Amount transfer\t  2.Balance check\t  3.Check transaction history\t\n"
           "\t\t\t\t\t\t 4.Receive Money / Request Money\t  5.Change UPI PIN\t   6.Exit\n\n");

    int s;
    printf("Enter your option: ");
    scanf("%d", &s);
    printf("\v");

    switch (s)
    {
        case 1:
        {
            printf("\t\t\t\t\t Choose the method to transfer the amount\n\n");
            printf("\t\t\t\t\t 1.Enter mobile number to transfer money\t\t 2.Enter Bank account number to transfer amount\n\n");

            int d;
            printf("Enter your option: ");
            scanf("%d", &d);
            printf("\v");

            switch (d)
            {
                case 1:
                {
                    char cust[15];
                    printf("Enter the receiver's mobile number: ");
                    scanf("%s", cust);
                    printf("\v");
                    customer(cust, na, na1, mo, mo1);

                    char amt[10];
                    printf("Enter the amount to send: ");
                    scanf("%s", amt);
                    printf("\v");

                    char pass1[5];
                    printf("Enter the 4 digit PIN number for the transaction: ");
                    scanf("%s", pass1);
                    verfication(pass1, pi);

                    printf("\v");
                    mb_transfer(amt, truser, truser1, truser2, cust, mo, mo1);
                    break;
                }

                case 2:
                {
                    char cust3[15];
                    printf("Enter the receiver's Bank account number: ");
                    scanf("%s", cust3);
                    printf("\v");
                    customer1(cust3, na, na1, acc1, acc2);

                    char amt2[10];
                    printf("Enter the amount to send: ");
                    scanf("%s", amt2);
                    printf("\v");

                    char pass6[5];
                    printf("Enter the 4 digit PIN number for the transaction: ");
                    scanf("%s", pass6);
                    verfication6(pass6, pi);

                    printf("\v");
                    ac_transfer(amt2, truser, truser1, truser2, cust3, acc1, acc2);
                    break;
                }

                default:
                    printf("Invalid transfer option selected!\n");
                    break;
            }
            break;
        }

        case 2:
        {
            check_balance(pi);
            money_show();
            break;
        }

        case 3:
        {
            transulation_his();
            break;
        }

        case 4:
        {
            printf("******************************** Requesting money from your friends ********************************\n\n");
            printf("1. Request money using mobile number\t    2. Request money using account number\n\n");

            int q;
            printf("Enter your option: ");
            scanf("%d", &q);
            printf("\v");

            switch (q)
            {
                case 1:
                {
                    char cust7[45];
                    printf("Enter the friend's mobile number: ");
                    scanf("%s", cust7);
                    customer7(cust7, na, na1, mo, mo1);

                    char amt5[10];
                    printf("Enter the amount to request: ");
                    scanf("%s", amt5);

                    printf("\v\t\t\t\t\t\t %s requested %s via IIES Pay\n", na0, amt5);
                    printf("\v\t\t\t\t\t\t 1.Say yes\t 2.Say no\n");

                    int i;
                    printf("Enter your option: ");
                    scanf("%d", &i);

                    if (i == 1)
                        mb_request(amt5, truser, truser1, truser2, cust7, mo, mo1);
                    else
                        printf("Your friend did not accept your request.\n");

                    break;
                }

                case 2:
                {
                    char cust8[45];
                    printf("Enter the friend's Bank account number: ");
                    scanf("%s", cust8);
                    customer8(cust8, na, na1, acc1, acc2);

                    char amt2[10];
                    printf("Enter the amount to request: ");
                    scanf("%s", amt2);

                    printf("\v\t\t\t\t\t\t %s requested %s via IIES Pay\n", na0, amt2);
                    printf("\v\t\t\t\t\t\t 1.Say yes\t 2.Say no\n");

                    int r;
                    printf("Enter your option: ");
                    scanf("%d", &r);

                    if (r == 1)
                        ac_request(amt2, truser, truser1, truser2, cust8, acc1, acc2);
                    else
                        printf("Your friend did not accept your request.\n");

                    break;
                }

                default:
                    printf("Invalid request option selected!\n");
                    break;
            }
            break;
        }

        case 5:
        {
            change_pin();
            break;
        }

        case 6:
        {
            printf("Exiting from IIES Pay... Thank you!\n");
            exit(0);
            break;
        }

        default:
            printf("Invalid main option! Please try again.\n");
            break;
    }
}


// money transfer call function//

void ver(char pass[5],char pi[22])
{
	int attempts = 3;
	while(attempts--)
	{
		if(strcmp(pass,pi)==0)
		{ 
			printf("\v");
			printf("\t\t\t\t\t Successfully password updated\n");
			return;
		}
		else
		{
			printf("\t\t\t\t\t Invalid ..Please enter 4 digit number\n");
			printf("Enter the 4 digit password for security purpose:");
			scanf("%s",pass);
		}
	}
	printf("\t\t\t\t\t Too many wrong attempts. Returning...\n");
	function(na,na1,mo,mo1,pi,pass,truser,truser1,truser2,acc1,acc2,na0);
}



void verfication6(char pass6[5],char pi[22])
	
     {int attempts = 3;
	while(attempts--)
	{
		if(strcmp(pi,pass6)==0)
		{
			printf("\v");
			printf("\t\t\t\t\t Successfull\n");
			return;
		}
		else
		{
			printf("\t\t\t\t\t Incorrect password ..please enter correct password\n");
			printf("Enter the 4 digit PIN code :");
			scanf("%s",pass6);
		}
	}
	printf("\t\t\t\t\t Too many wrong attempts. Returning...\n");
	function(na,na1,mo,mo1,pi,pass,truser,truser1,truser2,acc1,acc2,na0);
}

void verfication(char pass1[5],char pi[22])
{

int attempts = 3;
	while(attempts--)
	{
		if(strcmp(pi,pass1)==0)
		{
			printf("\v");
			printf("\t\t\t\t\t Successfull\n");
			return;
		}
		else
		{
			printf("\t\t\t\t\t Incorrect password ..please enter correct password\n");
			printf("Enter the 4 digit PIN code :");
			scanf("%s",pass1);
		}
	}
	printf("\t\t\t\t\t Too many wrong attempts. Returning...\n");
	function(na,na1,mo,mo1,pi,pass,truser,truser1,truser2,acc1,acc2,na0);
}

void customer(char cust[15],char na[22],char na1[22],char mo[22],char mo1[22])
{

    while (1)  
    {
        if(strcmp(cust, mo) == 0)
        {
            printf("\t\t\t\t\t Requesting person found: %s\n", na);
            break;  
        }
        else if(strcmp(cust, mo1) == 0)
        {
            printf("\t\t\t\t\t Requesting person found: %s\n", na1);
            break; 
        }
        else
        {
            printf("\t\t\t\t\t Receiver person not found. Please invite on IIES pay\n");
            printf("Please enter a valid number to send amount: ");
            scanf("%s", cust);  // read new number
        }
    }
}


void mb_transfer(char amt[10],char truser[10], char truser1[10],char truser2[10],char cust[15],char mo[22],char mo1[22])

{
	if(strcmp(cust,mo)==0)
	{
		int thiru=atoi(truser);
		int dharasan=atoi(truser1);
		int amount=atoi(amt);
		int total4=thiru-amount;
		int total14=dharasan+amount;

		FILE *str=fopen("thiru.txt","r");
		if(str==NULL){	
			printf(" unable to open that file\n");
		       	return; }
		char word41[50], word42[50],word43[50],word45[50],word46[50],word47[50];
		int word44;
		if(fscanf(str,"%49s %49s %49s %d %49s %49s %49s",word41,word42,word43,&word44,word45,word46,word47)!=7)
		{
		       	printf(" inacces to read data in that file\n");
		       	fclose(str); return;
	       	}
		fclose(str);
		word44=total4;

		FILE *temp=fopen("Sum.txt","w");
		if(temp==NULL){
		       	printf(" inacess to write data on that file\n");
		       	return;
	       	}
		fprintf(temp,"%s %s %s %d %s %s %s",word41,word42,word43,word44,word45,word46,word47);
		fclose(temp);
		remove("thiru.txt");
		rename("Sum.txt","thiru.txt");

		FILE *str1=fopen("Dharasan.txt","r");
		if(str1==NULL){
		       	printf(" unable to open that file\n");
		       	return;
	       	}
		char word51[50],word52[50],word53[50],word55[50],word56[50];
		int word54;
		if(fscanf(str1,"%49s %49s %49s %d %49s %49s",word51,word52,word53,&word54,word55,word56)!=6)
		{
		       	printf("unable to read the data on the file");
		       	fclose(str1);
		       	return;
	       	}
		fclose(str1);
		word54=total14;

		FILE *temp1=fopen("wrt.txt","w");
		if(temp1==NULL){
		       	printf(" inacess to write data on that file\n");
		       	return;
	       	}
		fprintf(temp1,"%s %s %s %d %s %s",word51,word52,word53,word54,word55,word56);
		fclose(temp1);
		remove("Dharasan.txt");
		rename("wrt.txt","Dharasan.txt");

		FILE *his=fopen("history.txt","a");
		if(his!=NULL) {
		       	fprintf(his,"\n%s credited from %s", amt, mo);
		       	fclose(his);
	       	}

		printf("\t\t\t\t\t\t Successfully sended \n");
		printf("\v");
		sleep(3);
		printf("\t\t\t\t\t Your a/c no.xxxx634 is debited for Rs.%s and credited to vpa %s@upi\n",amt,mo);
		printf("\v");
		function(na,na1,mo,mo1,pi,pass,truser,truser1,truser2,acc1,acc2,na0);
	}
	else if(strcmp(cust,mo1)==0)
	{
		int thiru=atoi(truser);
		int vamsi=atoi(truser2);
		int amount=atoi(amt);
		int total2=thiru-amount;
		int total3=vamsi+amount;

		FILE *str2=fopen("thiru.txt","r");
		if(str2==NULL){
		       	printf(" unable to open that file\n");
		       	return;
	       	}
		char word11[50], word12[50], word13[50],word15[50],word16[50],word17[50];
		int word14;
		if(fscanf(str2,"%49s %49s %49s %d %49s %49s %49s",word11,word12,word13,&word14,word15,word16,word17)!=7)
		{
		       	printf(" inacces to read data in that file\n");
		       	fclose(str2);
		       	return;
	       	}
		fclose(str2);
		word14=total2;

		FILE *temp2=fopen("write.txt","w");
		if(temp2==NULL){
		       	printf("unable to write data on that file\n");
		       	return;
	       	}
		fprintf(temp2,"%s %s %s %d %s %s %s", word11, word12, word13, word14, word15, word16, word17);
		fclose(temp2);
		remove("thiru.txt");
		rename("write.txt","thiru.txt");

		FILE *str3=fopen("vamsi.txt","r");
		if(str3==NULL){
		       	printf("unable to open that file\n");
		       	return;
	       	}
		char word31[50], word32[50],word33[50], word35[50],word36[50];
		int word34;
		if(fscanf(str3,"%49s %49s %49s %d %49s %49s",word31,word32,word33,&word34,word35,word36)!=6)
		{
		       	printf("unable to read data from that file\n");
		       	fclose(str3);
		       	return;
	       	}
		fclose(str3);
		word34=total3;

		FILE *temp3=fopen("avm.txt","w");
		if(temp3==NULL){
		       	printf(" unable to write data on that file\n");
		       	return;
	       	}
		fprintf(temp3,"%s %s %s %d %s %s", word31, word32, word33, word34, word35, word36);
		fclose(temp3);
		remove("vamsi.txt");
		rename("avm.txt","vamsi.txt");

		FILE *his=fopen("history.txt","a");
		if(his!=NULL) {
		       	fprintf(his,"\n%s credited from %s", amt, mo1);
		       	fclose(his);
	       	}

		printf("\t\t\t\t\t\t Successfully sended\n ");
		printf("\v");
		sleep(3);
		printf("\t\t\t\t\t Your a/c no.xxxx634 is debited for Rs.%s and credited to vpa %s@upi\n",amt,mo1);
		printf("\v");
		function(na,na1,mo,mo1,pi,pass,truser,truser1,truser2,acc1,acc2,na0);
	}
}


void customer1(char cust3[15],char na[22],char na1[22],char acc1[22], char acc2[22])
{
	while(1)
	{
		if(strcmp(cust3,acc1)==0)
		{
			printf("\t\t\t\t\t Receiver person is founded ...His Name %s\n",na);
			printf("\n");
			break;
		}
		else if(strcmp(cust3,acc2)==0)
		{
			printf("\t\t\t\t\t Receiver person is founded....His Name %s\n",na1);
			printf("\n");
			break;
		}
		else
		{
			printf("\t\t\t\t\t Receiver person is not founded..Invalid account number\n");
			printf("\n");
			printf(" Please enter valuable account number to send amount:");
			scanf("%s",cust3);
		}
	}
}



void ac_transfer(char amt2[10],char truser[10], char truser1[10],char truser2[10],char cust3[15],char acc1[22],char acc2[22])

{
	if(strcmp(cust3,acc1)==0)
	{
		int thiru=atoi(truser);
		int dharasan=atoi(truser1);
		int amount=atoi(amt2);
		int total=thiru-amount;
		int total1=dharasan+amount;

		FILE *str=fopen("thiru.txt","r");
		if(str==NULL){
		       	printf(" unable to open that file\n");
		       	return;
	       	}
		char word1[50], word2[50],word3[50],word5[50],word6[50],word7[50];
		int word4;
		if(fscanf(str,"%49s %49s %49s %d %49s %49s %49s",word1,word2,word3,&word4,word5,word6,word7)!=7)
		{
		       	printf(" inacces to read data in that file\n");
		       	fclose(str);
		       	return;
	       	}
		fclose(str);
		word4=total;

		FILE *temp=fopen("amou.txt","w");
		if(temp==NULL){
		       	printf(" inacess to write data on that file\n");
		       	return;
	       	}
		fprintf(temp,"%s %s %s %d %s %s %s", word1, word2, word3, word4, word5, word6, word7);
		fclose(temp);
		remove("thiru.txt");
		rename("amou.txt","thiru.txt");

		FILE *str1=fopen("Dharasan.txt","r");
		if(str1==NULL){
		       	printf(" unable to open that file\n");
		       	return;
	       	}
		char word21[50],word22[50],word23[50],word25[50],word26[50];
		int word24;
		if(fscanf(str1,"%49s %49s %49s %d %49s %49s",word21,word22,word23,&word24,word25,word26)!=6)
		{
		       	printf("unable to read the data on the file");
		       	fclose(str1);
		       	return;
	       	}
		fclose(str1);
		word24=total1;

		FILE *temp1=fopen("Temper.txt","w");
		if(temp1==NULL){
		       	printf(" inacess to write data on that file\n");
		       	return;
	       	}
		fprintf(temp1,"%s %s %s %d %s %s", word21, word22, word23, word24, word25, word26);
		fclose(temp1);
		remove("Dharasan.txt");
		rename("Temper.txt","Dharasan.txt");

		FILE *his=fopen("history.txt","a");
		if(his!=NULL) {
		       	fprintf(his,"\n%s credited from %s", amt2, acc1);
		       	fclose(his);
	       	}

		printf("\t\t\t\t\t\t Successfully sended \n");
		printf("\v");
		sleep(3);
		printf("\t\t\t\t\t Your a/c no.xxxx634 is debited for Rs.%s and credited to xxxxx027\n",amt2);
		printf("\v");
		function(na,na1,mo,mo1,pi,pass,truser,truser1,truser2,acc1,acc2,na0);
	}
	else if(strcmp(cust3,acc2)==0)
	{
		int thiru=atoi(truser);
		int vamsi=atoi(truser2);
		int amount=atoi(amt2);
		int total2=thiru-amount;
		int total3=vamsi+amount;

		FILE *str2=fopen("thiru.txt","r");
		if(str2==NULL){
		       	printf(" unable to open that file\n");
		       	return;
	       	}
		char word11[50], word12[50], word13[50],word15[50],word16[50],word17[50];
		int word14;
		if(fscanf(str2,"%49s %49s %49s %d %49s %49s %49s",word11,word12,word13,&word14,word15,word16,word17)!=7)
		{
		       	printf(" inacces to read data in that file\n");
		       	fclose(str2);
		       	return;
	       	}
		fclose(str2);
		word14=total2;

		FILE *temp2=fopen("amo1.txt","w");
		if(temp2==NULL){
		       	printf("unable to write data on that file\n");
		       	return;
	       	}
		fprintf(temp2,"%s %s %s %d %s %s %s", word11, word12, word13, word14, word15, word16, word17);
		fclose(temp2);
		remove("thiru.txt");
		rename("amo1.txt","thiru.txt");

		FILE *str3=fopen("vamsi.txt","r");
		if(str3==NULL){
		       	printf("unable to open that file\n");
		       	return;
	       	}
		char word31[50], word32[50],word33[50], word35[50],word36[50];
		int word34;
		if(fscanf(str3,"%49s %49s %49s %d %49s %49s",word31,word32,word33,&word34,word35,word36)!=6)
		{
		       	printf("unable to read data from that file\n");
		       	fclose(str3);
		       	return;
	       	}
		fclose(str3);
		word34=total3;

		FILE *temp3=fopen("temper.txt","w");
		if(temp3==NULL){
		       	printf(" unable to write data on that file\n");
		       	return;
	       	}
		fprintf(temp3,"%s %s %s %d %s %s", word31, word32, word33, word34, word35, word36);
		fclose(temp3);
		remove("vamsi.txt");
		rename("temper.txt","vamsi.txt");

		FILE *his=fopen("history.txt","a");
		if(his!=NULL) {
		       	fprintf(his,"\n%s credited from %s", amt2, acc2);
		       	fclose(his);
	       	}

		printf("\t\t\t\t\t\t Successfully sended\n ");
		printf("\v");
		sleep(3);
		printf("\t\t\t\t\t Your a/c no.xxxx634 is debited for Rs.%s and credited to xxxxxx1104\n",amt2);
		printf("\v");
		function(na,na1,mo,mo1,pi,pass,truser,truser1,truser2,acc1,acc2,na0);
	}
}

// balance check call function//

void check_balance(char pi[22])
{
    char pass3[10];
    int attempts = 3;

    while(attempts--)
    {
        printf("\t\t\t\t\t\t\tPIN Verification\n");
        printf("\v");
        printf("Enter the 4 digit PIN code: ");
        scanf("%s", pass3);

        if(strcmp(pi, pass3) == 0)
        {
            printf("\n");
            printf("\t\t\t\t\t Successfully verified\n");
            return;
        }
        else
        {
            printf("\t\t\t\t\t Incorrect password.. please enter correct password\n");
        }
    }

    printf("Too many incorrect attempts. Exiting...\n");
    printf("\n");
    printf("Waiting for a few minutes... You entered wrong PIN more than three times\n");
    sleep(2);


    function(na, na1, mo, mo1, pi, pass, truser, truser1, truser2, acc1, acc2, na0);
}


void money_show()
{
    FILE *str;
    char word41[50], word42[50], word43[50], word45[50], word46[50], word47[50];
    int word44;

    str = fopen("thiru.txt", "r");
    if(str == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    if(fscanf(str, "%49s %49s %49s %d %49s %49s %49s", word41, word42, word43, &word44, word45, word46, word47) != 7)
    {
        printf("Unable to read data from the file\n");
        fclose(str);
        return;
    }

    fclose(str);

    printf("\v");
    printf("Amount available in your account xxxxxx634: %d\n", word44);


    function(na, na1, mo, mo1, pi, pass, truser, truser1, truser2, acc1, acc2, na0);
}

// history call function//

void transulation_his()
{
FILE *ptr;
char line[200];
ptr=fopen("history.txt","r");
	if (ptr == NULL)
        {
            printf(" inacess to write data on that file\n");
            return;
        }
    

    printf("\n--- Transaction History ---\n");
    while (fgets(line, sizeof(line), ptr) != NULL)
    {
        printf("%s", line);
    }

    fclose(ptr);
    function(na,na1,mo,mo1,pi,pass,truser,truser1,truser2,acc1,acc2,na0);

}

//
//money request call function//

void customer7(char cust7[45],char na[22],char na1[22],char mo[22],char mo1[22])
{
     while(1)
        {
                if(strcmp(cust7,mo1)==0)
                {
                        printf("\t\t\t\t\t Receiver person is founded ...His Name %s\n",na);
                        printf("\n");
                        break;
                }
                else if(strcmp(cust7,mo1)==0)
                {
                        printf("\t\t\t\t\t Receiver person is founded....His Name %s\n",na1);
                        printf("\n");
                        break;
                }
                else
                {
                        printf("\t\t\t\t\t Receiver person is not founded..Invalid account number\n");
                        printf("\n");
                        printf(" Please enter valuable account number to send amount:");
                        scanf("%s",cust7);
                }
        }



}
void mb_request(char amt5[10],char truser[10],char truser1[10],char truser2[10],char cust7[45],char mo[22],char mo1[22])

{
	if(strcmp(cust7,mo)==0)
	{
		int thiru=atoi(truser);
		int dharasan=atoi(truser1);
		int amount=atoi(amt5);
		int total4=thiru+amount;
		int total14=dharasan-amount;

		FILE *str=fopen("thiru.txt","r");
		if(str==NULL){
		       	printf(" unable to open that file\n");
		       	return;
	       	}

		char word41[50], word42[50],word43[50],word45[50],word46[50],word47[50];
		int word44;
		if(fscanf(str,"%49s %49s %49s %d %49s %49s %49s",word41,word42,word43,&word44,word45,word46,word47)!=7)
		{
		       	printf(" inacces to read data in that file\n");
		       	fclose(str);
		       	return;
	       	}
		fclose(str);
		word44=total4;

		FILE *temp=fopen("Sum.txt","w");
		if(temp==NULL){
		       	printf(" inacess to write data on that file\n");
		       	return;
	       	}
		fprintf(temp,"%s %s %s %d %s %s %s", word41, word42, word43, word44, word45, word46, word47);
		fclose(temp);
		remove("thiru.txt");
		rename("Sum.txt","thiru.txt");

		FILE *str1=fopen("Dharasan.txt","r");
		if(str1==NULL){
		       	printf(" unable to open that file\n");
		       	return;
	       	}

		char word51[50],word52[50],word53[50],word55[50],word56[50];
		int word54;
		if(fscanf(str1,"%49s %49s %49s %d %49s %49s",word51,word52,word53,&word54,word55,word56)!=6)
		{
		       	printf("unable to read the data on the file");
		       	fclose(str1);
		       	return;
	       	}
		fclose(str1);
		word54=total14;

		FILE *temp1=fopen("wrt.txt","w");
		if(temp1==NULL){
		       	printf(" inacess to write data on that file\n");
		       	return;
	       	}
		fprintf(temp1,"%s %s %s %d %s %s", word51, word52, word53, word54, word55, word56);
		fclose(temp1);
		remove("Dharasan.txt");
		rename("wrt.txt","Dharasan.txt");

		FILE *his=fopen("history.txt","a");
		if(his!=NULL){
		       	fprintf(his,"\n%s credited from %s", amt5, mo);
		       	fclose(his);
	       	}

		printf("\t\t\t\t\t\t Successfully received \n");
		printf("\v");
		sleep(3);
		printf("\t\t\t\t\t Your a/c no.xxxx634 Rs.%s is credited from the sender %s@upi\n", amt5, mo);
		printf("\v");
		function(na,na1,mo,mo1,pi,pass,truser,truser1,truser2,acc1,acc2,na0);
	}
	else if(strcmp(cust7,mo1)==0)
	{
		int thiru=atoi(truser);
		int vamsi=atoi(truser2);
		int amount=atoi(amt5);
		int total2=thiru+amount;
		int total3=vamsi-amount;

		FILE *str2=fopen("thiru.txt","r");
		if(str2==NULL){
		       	printf(" unable to open that file\n");
		       	return;
	       	}

		char word11[50], word12[50], word13[50],word15[50],word16[50],word17[50];
		int word14;
		if(fscanf(str2,"%49s %49s %49s %d %49s %49s %49s",word11,word12,word13,&word14,word15,word16,word17)!=7)
		{
		       	printf(" inacces to read data in that file\n");
		       	fclose(str2);
		       	return;
	       	}
		fclose(str2);
		word14=total2;

		FILE *temp2=fopen("write.txt","w");
		if(temp2==NULL){
		       	printf("unable to write data on that file\n");
		       	return;
	       	}
		fprintf(temp2,"%s %s %s %d %s %s %s", word11, word12, word13, word14, word15, word16, word17);
		fclose(temp2);
		remove("thiru.txt");
		rename("write.txt","thiru.txt");

		FILE *str3=fopen("vamsi.txt","r");
		if(str3==NULL){
		       	printf("unable to open that file\n");
		       	return;
	       	}

		char word31[50], word32[50],word33[50], word35[50],word36[50];
		int word34;
		if(fscanf(str3,"%49s %49s %49s %d %49s %49s",word31,word32,word33,&word34,word35,word36)!=6)
		{
		       	printf("unable to read data from that file\n");
		       	fclose(str3);
		       	return;
	       	}
		fclose(str3);
		word34=total3;

		FILE *temp3=fopen("avm.txt","w");
		if(temp3==NULL){
		       	printf(" unable to write data on that file\n");
		       	return;
	       	}
		fprintf(temp3,"%s %s %s %d %s %s", word31, word32, word33, word34, word35, word36);
		fclose(temp3);
		remove("vamsi.txt");
		rename("avm.txt","vamsi.txt");

		FILE *his=fopen("history.txt","a");
		if(his!=NULL){
		       	fprintf(his,"\n%s credited from %s", amt5, mo1);
		       	fclose(his);
	       	}

		printf("\t\t\t\t\t\t Successfully received\n ");
		printf("\v");
		sleep(3);
		printf("\t\t\t\t\t Your a/c no.xxxx634 Rs.%s is credited from the sender %s@upi\n", amt5, mo1);
		printf("\v");
		function(na,na1,mo,mo1,pi,pass,truser,truser1,truser2,acc1,acc2,na0);
	}
}




void customer8(char cust8[45],char na[22],char na1[22],char acc1[22],char acc2[22])

{
	 while(1)
        {
                if(strcmp(cust8,acc1)==0)
                {
                        printf("\t\t\t\t\t Receiver person is founded ...His Name %s\n",na);
                        printf("\n");
                        break;
                }
                else if(strcmp(cust8,acc2)==0)
                {
                        printf("\t\t\t\t\t Receiver person is founded....His Name %s\n",na1);
                        printf("\n");
                        break;
                }
                else
                {
                        printf("\t\t\t\t\t Receiver person is not founded..Invalid account number\n");
                        printf("\n");
                        printf(" Please enter valuable account number to send amount:");
                        scanf("%s",cust8);
                }
        }



}


void ac_request(char amt2[10],char truser[10],char truser1[10],char truser2[10],char cust8[45],char acc1[22],char acc2[22])

{
	if(strcmp(cust8,acc1)==0)
	{
		int thiru=atoi(truser);
		int dharasan=atoi(truser1);
		int amount=atoi(amt2);
		int total=thiru+amount;
		int total1=dharasan-amount;

		FILE *str=fopen("thiru.txt","r");
		if(str==NULL){
		       	printf(" unable to open that file\n");
		       	return;
	       	}

		char word1[50], word2[50],word3[50],word5[50],word6[50],word7[50];
		int word4;
		if(fscanf(str,"%49s %49s %49s %d %49s %49s %49s",word1,word2,word3,&word4,word5,word6,word7)!=7)
		{
		       	printf(" inacces to read data in that file\n");
		       	fclose(str);
		       	return;
	       	}
		fclose(str);
		word4=total;

		FILE *temp=fopen("amou.txt","w");
		if(temp==NULL){
		       	printf(" inacess to write data on that file\n");
		       	return;
	       	}
		fprintf(temp,"%s %s %s %d %s %s %s", word1, word2, word3, word4, word5, word6, word7);
		fclose(temp);
		remove("thiru.txt");
		rename("amou.txt","thiru.txt");

		FILE *str1=fopen("Dharasan.txt","r");
		if(str1==NULL){
		       	printf(" unable to open that file\n");
		       	return;
	       	}

		char word21[50],word22[50],word23[50],word25[50],word26[50];
		int word24;
		if(fscanf(str1,"%49s %49s %49s %d %49s %49s",word21,word22,word23,&word24,word25,word26)!=6)
		{
		       	printf("unable to read the data on the file");
		       	fclose(str1);
		       	return;
	       	}
		fclose(str1);
		word24=total1;

		FILE *temp1=fopen("Temper.txt","w");
		if(temp1==NULL){
		       	printf(" inacess to write data on that file\n");
		       	return;
	       	}
		fprintf(temp1,"%s %s %s %d %s %s", word21, word22, word23, word24, word25, word26);
		fclose(temp1);
		remove("Dharasan.txt");
		rename("Temper.txt","Dharasan.txt");

		FILE *his=fopen("history.txt","a");
		if(his!=NULL){
		       	fprintf(his,"\n%s credited from %s", amt2, acc1);
		       	fclose(his);
	       	}

		printf("\t\t\t\t\t\t Successfully received \n");
		printf("\v");
		sleep(3);
		printf("\t\t\t\t\t Your a/c no.xxxx634 Rs.%s is credited from the sender xxxxx027\n", amt2);
		printf("\v");
		function(na,na1,mo,mo1,pi,pass,truser,truser1,truser2,acc1,acc2,na0);
	}
	else if(strcmp(cust8,acc2)==0)
	{
		int thiru=atoi(truser);
		int vamsi=atoi(truser2);
		int amount=atoi(amt2);
		int total2=thiru+amount;
		int total3=vamsi-amount;

		FILE *str2=fopen("thiru.txt","r");
		if(str2==NULL){
		       	printf(" unable to open that file\n");
		       	return;
	       	}

		char word11[50], word12[50], word13[50],word15[50],word16[50],word17[50];
		int word14;
		if(fscanf(str2,"%49s %49s %49s %d %49s %49s %49s",word11,word12,word13,&word14,word15,word16,word17)!=7)
		{
		       	printf(" inacces to read data in that file\n");
		       	fclose(str2);
		       	return;
	       	}
		fclose(str2);
		word14=total2;

		FILE *temp2=fopen("amo1.txt","w");
		if(temp2==NULL){
		       	printf("unable to write data on that file\n");
		       	return;
	       	}
		fprintf(temp2,"%s %s %s %d %s %s %s", word11, word12, word13, word14, word15, word16, word17);
		fclose(temp2);
		remove("thiru.txt");
		rename("amo1.txt","thiru.txt");

		FILE *str3=fopen("vamsi.txt","r");
		if(str3==NULL){
		       	printf("unable to open that file\n");
		       	return;
	       	}

		char word31[50], word32[50],word33[50], word35[50],word36[50];
		int word34;
		if(fscanf(str3,"%49s %49s %49s %d %49s %49s",word31,word32,word33,&word34,word35,word36)!=6)
		{
		       	printf("unable to read data from that file\n");
		       	fclose(str3);
		       	return;
	       	}
		fclose(str3);
		word34=total3;

		FILE *temp3=fopen("temper.txt","w");
		if(temp3==NULL){
		       	printf(" unable to write data on that file\n");
		       	return;
	       	}
		fprintf(temp3,"%s %s %s %d %s %s", word31, word32, word33, word34, word35, word36);
		fclose(temp3);
		remove("vamsi.txt");
		rename("temper.txt","vamsi.txt");

		FILE *his=fopen("history.txt","a");
		if(his!=NULL){
		       	fprintf(his,"\n%s credited from %s", amt2, acc2);
		       	fclose(his);
	       	}

		printf("\t\t\t\t\t\t Successfully received\n ");
		printf("\v");
		sleep(3);
		printf("\t\t\t\t\t Your a/c no.xxxx634 Rs.%s is credited from the sender xxxxxx1104\n", amt2);
		printf("\v");
		function(na,na1,mo,mo1,pi,pass,truser,truser1,truser2,acc1,acc2,na0);
	}
}

// pin change call function//

void change_pin()
{
    FILE *str2;
    FILE *temp2;
    char New[22];

    printf("***************************************************************\n");
    printf("                        Change UPI Pin Number                 \n");
    printf("***************************************************************\n");
    printf("\v");
    printf("Enter the new 4 digit pin number: ");
    scanf("%s", New);
    printf("\v");
    sleep(1);
    printf("\t\t\t\t\t\tSuccessfully updated\n\n");

    str2 = fopen("thiru.txt", "r");
    if (str2 == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    char word11[50], word12[50], word13[50], word15[50], word16[50], word17[50];
    int word14;

    if(fscanf(str2, "%49s %49s %49s %d %49s %49s %49s", word11, word12, word13, &word14, word15, word16, word17) != 7)
    {
        printf("Unable to read data from the file\n");
        fclose(str2);
        return;
    }
    fclose(str2);

    temp2 = fopen("write.txt", "w");
    if(temp2 == NULL)
    {
        printf("Unable to write data to file\n");
        return;
    }

    // Replace old PIN with new PIN
    fprintf(temp2, "%s %s %s %d %s %s %s", word11, word12, word13, word14, word15, word16, New);
    fclose(temp2);

    remove("thiru.txt");
    rename("write.txt", "thiru.txt");

    // Update global PIN variable
    strcpy(pi, New);

    // Return to main menu
    function(na, na1, mo, mo1, pi, pass, truser, truser1, truser2, acc1, acc2, na0);
}




