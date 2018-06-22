#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char name[10];
	int roll;
	float total_aggregate;
	
	struct subject 
	{
		char subject[10];
		float attendence;
		
	}sub[6];
}stu[5];
void login();
void cal();
void insert();
void search();
void display();
void exit();



void main()
{
	login();
	int choice;
	JITESH:
		system("cls");
		printf("\n\nYOU HAVE SUCESSFULLY LOGGED IN PLEASE WAIT");
		printf("\n\nPLEASE WAIT...");
		sleep(2);
		system("cls");
		printf("\n\t\t\t\t\t\t\t\t\WELCOME");
		printf("\n\n\t\t\t\t\t\tTHIS IS STUDENT ATTENDENCE CALCULATOR");
		printf("\n\nSELECT ANY ONE OF THE OPTION GIVEN BELOW");
		printf("\n1)INSERT");
		printf("\nNOTE: This option helps you to insert the details of the student");
		printf("\n\n2)DISPLAY");
		printf("\nNOTE: This option helps you to view the detalis of students");
		printf("\n\n3)SEARCH");
		printf("\nNOTE: This option helps to veiw the detalis of particular student");
		printf("\n\n4)EXIT");
		printf("\nNOTE:This option helps you to quit from the program");
		printf("\nPLEASE SELECT");
		scanf("%d",&choice);
		printf("\nPROCESSING PLEASE WAIT..");
		sleep(4);
		system("cls");
		switch(choice)
		{
			case 1: insert();
			break;
			case 2: display();
			break;
			case 3:search();
			break;
			case 4: Exit();
			break;
			default:printf("\nSORRY..!");
			printf("PLEASE SELECT THE CORRECT OPTION");
			goto JITESH;
		 } 
		 goto JITESH;
		getch();
}
void login()
{

char password[10],username[10], ch;
 int i,n,m;
 char usercmp[10]="jitesh",passcmp[10]="12345678";

 for(n=0;n<3;n++)
{
printf("\t\t\t\t\t\t\tTHIS IS LOGIN MODULE FOR STUDENT ATTENDENCE CALCULATOR");
 printf("\n\n\nEnter User name: ");
 gets(username);
 printf("\nEnter the password : ");

 for(i=0;i<8;i++)
 {
  ch = getch();
  password[i] = ch;
  ch = '*' ;
  printf("%c",ch);
 }

 password[i] = '\0';
 m=strcmp(passcmp,password);
 if(m==0)
 {
 	break;
 }
 else{
 	printf("\n\tSORRY!\nTHE USER NAME OR THE PASSWORD THAT YOU HAVE ENTERED IS WRONG\n");
 	if(n==2)
 	{
 		break;
	 }
 	printf("\n\tPLEASE TRY AGAIN...");
 	printf("\n\n\tPlease wait..!");
 	sleep(5);
 	system("cls");
 	
 	if(n==1)
 	printf("\n WARNING : This is your last chance");
 	if(n==2)
 	{
 		exit(1);
	 }
 }
}
}
void cal()
{
	int i,j,jk=3;
	FILE *fptr;
	float a,b,c,d,f,ef,sum=0,th;
	for(j=0;j<=2;j++)
	{sum=0;
	
			printf("\nNAME: ");
			fflush(stdin);
			gets(stu[j].name);
			printf("\nROLL NUMBER: ");
			scanf("%d",&stu[j].roll);
			
			for(i=0;i<=2;i++)
			
			{
				printf("\nSUBJECT: ");
				fflush(stdin);
			gets(stu[j].sub[i].subject);
			printf("\nINFORMATION ABOUT ATTENDENCE OF THE SUBJECT... ");
			printf("\n\n1)ENTER NUMBER OF WEEKS PASSED:  ");
			scanf("%f",&a);
			printf("2)ENTER NUMBER OF CLASSES HELD PER WEEK:  ");
			scanf("%f",&b);
			printf("3)ENTER NUMBER OF CLASSES MISSED:  ");
			scanf("%f",&c);
			sleep(0);
			f=(a*b);
			d=f-c;
		ef=(d*100)/f;
			stu[j].sub[i].attendence=ef;
			sum=sum+stu[j].sub[i].attendence;
			
			th=(sum/3);
		
			
		}
		
		
			stu[j].total_aggregate=th;
			
		} printf("\nCALCULATING...");
		printf("\nPLEASE WAIT!");
		sleep(3);
			for(j=0;j<=2;j++)
	{
	
			printf("\nNAME: ");
			fflush(stdin);
			puts(stu[j].name);
			printf("\nROLL NO: ");
			printf("%d",stu[j].roll);
			printf("\n\n");
		
			for(i=0;i<=2;i++)
			
			{	printf("\n\nSUBJECT: ");
				
			puts(stu[j].sub[i].subject);
			printf("\n%f",stu[j].sub[i].attendence);
		
		}	printf("\nTHE TOTAL AGGREGATE IS %f",stu[j].total_aggregate);
			
		}
		getch();
	}
		void insert()
	{
		cal();
		system("cls");
		int i,j;
			FILE *fptr;
		fptr=fopen("jitesh_insert.txt","wb");
		fwrite(&stu,sizeof(stu),3,fptr);
				
	
		{
				for(j=0;j<=2;j++)
	{
	
			printf("\nNAME: ");
			fflush(stdin);
			puts(stu[j].name);
			printf("\nROLL NO: ");
			printf("%d",stu[j].roll);
		
			for(i=0;i<=2;i++)
			
			{	printf("\nSUBJECT: ");
				
			puts(stu[j].sub[i].subject);
			printf("\n%f",stu[j].sub[i].attendence);
			
		}
		printf("\nTHE TOTAL AGGREGATE IS %f",stu[j].total_aggregate);
		}
			
		}
		fclose(fptr);
		
			getch();
}
void display()
{ 
int i,j;
	FILE *fptr;
	fptr=fopen("jitesh_insert.txt","r");
	fread(&stu,sizeof(stu),3,fptr);
	printf("DISPLAYING THE DETAILS OF STUDENTS...");
	sleep(3);
	system("cls");
	{
				for(j=0;j<=2;j++)
	{
	
			printf("\nNAME: ");
			fflush(stdin);
			puts(stu[j].name);
			printf("\nROLL NO: ");
			printf("%d",stu[j].roll);
		
			for(i=0;i<=2;i++)
			
			{	printf("\nSUBJECT: ");
				
			puts(stu[j].sub[i].subject);
			printf("\n%f",stu[j].sub[i].attendence);
			
		}
		printf("\nTHE TOTAL AGGREGATE IS %f",stu[j].total_aggregate);
		}
	fclose(fptr);
}

	getch();
}
void search()
{ 
int i,j,key,flag=0;
	FILE *fptr;
	fptr=fopen("jitesh_insert.txt","r");
	fread(&stu,sizeof(stu),3,fptr);
	{ printf("\nPLEASE ENTER THE ROLL NUMBER OF STUDENT TO GET THE DETAILS. \n");
	scanf("%d",&key);
	printf("GETTING DETAILS..");
	sleep(4);
	system("cls");
				for(j=0;j<=2;j++)
	{
	if (stu[j].roll==key)
	
		{flag=1;
				printf("\nNAME: ");
			fflush(stdin);
			puts(stu[j].name);
			printf("\nROLL NO: ");
			printf("%d",stu[j].roll);
		
			for(i=0;i<=2;i++)
			
			{	printf("\nSUBJECT: ");
				
			puts(stu[j].sub[i].subject);
			printf("\n%f",stu[j].sub[i].attendence);
			
		}
		printf("\nTHE TOTAL AGGREGATE IS %f",stu[j].total_aggregate);
		
		}
		}if(flag==0)
		printf("student do not exist");
		
	fclose(fptr);
	
}

	getch();
}
void Exit()
{
	printf("\n\t\t\t\t\t\t\t\t\t\tYOU HAVE CHOOSEN EXIT OPTION");
	printf("\n\n\n\t\t\t\t\t\t\t\t\t\tYOU WILL BE EXITED FROM PROGRAM");
	printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tCOME AGAIN SOON");
	sleep(3);
	system("cls");
	printf("\n\t\t\t\t\t\t\t\t\t\t\tTHANK YOU");
	printf("\n\n\t\t\t\t\t\t\t\t\t\t\tBY JITESH RU");
	sleep(5);
	exit(0);
	 
	
}

