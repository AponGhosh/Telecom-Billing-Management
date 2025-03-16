#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
struct Agent
{
    char name[20];
    char pass[20];
} a;
struct Customer
{
    char name[20], pass[20];
    int amount, payment[50], idx;
} cs[100];
struct subscriber
{
    char phonenumber[20];
    char name[50];
    int amount;
} s[100];
void AgentId();
void idGenerator();
void addrecords();
void listrecords();
void modifyrecords();
void deleterecords();
void searchrecords();
void payment();
char get;
int cnt = 1, counter = 0;
int main()
{
    int password, phonenumber, option;
	char choice;
	system("cls");
    system("COLOR F0");
	printf("\n\n\n\n\n\n\t\t\t**************************************************************");
	printf("\n\n\n\t\t\t   ---WELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM---");
	printf("\n\n\n\t\t\t**************************************************************\n\n");
	Sleep(200);
	getch();
	system("cls");
	system("COLOR 60");
	printf("\n\n\n\n\n\n\t\t\t 1. Log in\n");
	printf("\n\t\t\t 2. Register\n");
	while (1) {
        scanf("%d", &option);
        system("cls");
        system("COLOR 75");
        if (option == 1) {
            printf("\n\n\n\n\n\n\t\t\t 1. Agent\n");
            printf("\n\t\t\t 2. Customer\n");
            int op;
            scanf("%d", &op);
            system("cls");
            system("COLOR B5");
            if (op == 1) {
                AgentId();
                char name[20], pass[20];
                printf("\n\n\n\n\n\n\t\t\t Username: ");
                scanf("%s", name);
                printf("\n\n\t\t\t Password: ");
                scanf("%s", pass);
                if (0 == strcmp(a.name, name)) {
                    if (0 == strcmp(a.pass, pass)) {
                        system("cls");
                        break;
                    }
                }
            }
            else if (op == 2) {
                idGenerator();
                char name[20], password[20];
                printf("\n\n\n\n\n\n\t\t\t Username: ");
                scanf("%s", name);
                printf("\n\t\t\t Password: ");
                scanf("%s", password);
                for (int i = 0; i < cs[0].idx; i++) {
                    if (0 == strcmp(cs[i].name, name)) {
                        if (0 == strcmp(cs[i].pass, password)) {
                            system("cls");
                            system("COLOR 74");
                            printf("\n\n\n\n\n\n\t\t\t 1. See Due Amounts\n");
                            printf("\n\t\t\t 2. See Payment History\n");
                            printf("\n\t\t\t 3. Settings\n");
                            int op;
                            scanf("%d", &op);
                            system("cls");
                            system("COLOR 02");
                            if (op == 1) {
                                printf("\n\n\n\n\n\n\t\t\t Due Amount: %d Tk.\n", cs[i].amount);
                                return 0;
                            }
                            else if (op == 2) {
                                printf("\t\t\tPayment Records:\n\n");
                                for (int j = 0; j < cs[0].idx; j++) {
                                    printf("\t\t\t%d Tk.\n", cs[i].payment[j]);
                                }
                            return 0;
                            }
                        }
                    }
                }
            }
            return 0;
        }
        else if (option == 2) {
            while (1) {
                char name[20], pass[20], pass1[20], phnNumber[20];
                system("COLOR D7");
                printf("\n\n\n\n\n\n\t\t\t Enter Username: ");
                scanf("%s", name);
                printf("\n\t\t\t Enter Phone Number: ");
                scanf("%s", phnNumber);
                printf("\n\t\t\t Create Password: ");
                scanf("%s", pass);
                printf("\n\t\t\t Confirm Password: ");
                scanf("%s", pass1);
                system("cls");
                if (0 == strcmp(pass, pass1)) {
                    printf("\n\n\n\n\n\n\t\t\t Registration Successful!!!");
                    cs[0].idx++;
                    int n = cs[0].idx;
                    strcpy(cs[n].name, name);
                    strcpy(cs[n].pass, pass);
                    getch();
                    return 0;
                }
                printf("\n\t\t\t Try Again!!!");
                getch();
                system("cls");
            }
        }
        else {
            printf("\n\n\n\n\n\n\t\t\t Wrong!!!");
            printf("\n\t\t\t Try again...");
        }
	}
	while (1)
	{
	    getchar();
	    system("cls");
	    system("COLOR 06");
		printf("\n\n\n\n\n\n\t\t\t Enter\n\t\t\t A : for adding new records \n\t\t\t L : for list of records");
		printf("\n\t\t\t M : for modifying records \n\t\t\t P : for payment");
		printf("\n\t\t\t S : for searching records");
		printf("\n\t\t\t D : for deleting records\n\t\t\t E : for exit\n");
		scanf("%c", &choice);
		choice = toupper(choice);
		getchar();
		if (choice == 'A') addrecords();
		else if (choice == 'P') payment();
		else if (choice == 'L') listrecords();
		else if (choice == 'M') modifyrecords();
		else if (choice == 'S') searchrecords();
		else if (choice == 'D') deleterecords();
		else if (choice == 'E') {
            system("cls");
            system("COLOR 71");
            printf("\n\n\n\n\n\n\t\t\t THANK YOU");
            printf("\n\n\t\t\t FOR USING OUR SERVICE");
            Sleep(2000);
            exit(0);
		}
		else {
            system("cls");
            system("COLOR C0");
            printf("\n\n\n\n\n\n\t\t\t Incorrect Input");
            printf("\n\n\t\t\t Any key to continue");
            getch();
		}
	}
}
void AgentId ()
{
    strcpy(a.name, "apon");
    strcpy(a.pass, "4321");
}
void idGenerator ()
{
    strcpy(cs[0].name, "opshora"), strcpy(cs[0].pass, "1243"), cs[0].amount = 120;
    cs[0].payment[0] = 100, cs[0].payment[1] = 300, cs[0].payment[2] = 220;
    strcpy(cs[1].name, "raisa"), strcpy(cs[1].pass, "1324"), cs[1].amount = 300;
    cs[1].payment[0] = 100, cs[1].payment[1] = 300, cs[1].payment[2] = 220;
    strcpy(cs[2].name, "mubin"), strcpy(cs[2].pass, "1342"), cs[2].amount = 250;
    cs[2].payment[0] = 100, cs[2].payment[1] = 300, cs[2].payment[2] = 220;
    cs[0].idx = 3;
}
void addrecords()
{
    char ch;
	while(1)
	{
		system("cls");
		system("COLOR 8A");
		printf("\n\n\n\n\n\n\t\t\t Enter phone number: ");
		gets(s[cnt].phonenumber);
		printf("\n\t\t\t Enter name: ");
		gets(s[cnt].name);
		printf("\n\t\t\t Enter amount:");
		scanf("%d", &s[cnt].amount);
		system("cls");
		getchar();
		system("COLOR F1");
		printf("\n\n\n\n\n\n\t\t\t %d record successfully added", cnt);
		printf("\n\t\t\t Press esc key to exit, any other key to add other record:");
		ch = getche();
		if(ch == 27) break;
		cnt++;
	}
	cnt++;
}
void listrecords()
{
	int i;
	system("cls");
	system("COLOR 83");
	printf("Phone Number\t\tUser Name\t\tAmount\n");
	for(i=0;i<79;i++)
		printf("-");
	for (int i = 1; i < cnt - counter; i++)
	{
		printf("\n%s\t\t%s\t\t\t %d Tk.",s[i].phonenumber,s[i].name,s[i].amount);
	}
	printf("\n");
	for(i=0;i<79;i++)
        printf("-");
    getch();
}
void modifyrecords()
{
	char phonenumber[50];
	int i;
	system("cls");
	system("COLOR F4");
	printf("Enter phone number of the subscriber to modify: ");
	scanf("%s", phonenumber);
	fflush(stdin);
	for (i = 1; i < cnt - counter; i++) {
		if(strcmp(s[i].phonenumber, phonenumber) == 0) {
			system("cls");
			system("COLOR 86");
			printf("\n\n\n\n\n\n\t\t\t Enter phone number: ");
			gets(s[i].phonenumber);
			printf("\n\t\t\t Enter name: ");
			gets(s[i].name);
			printf("\n\t\t\t Enter amount: ");
			scanf("%d", &s[i].amount);
			getchar();
			system("cls");
			printf("\n\n\n\n\n\n\t\t\t Given information saved successfully!");
			break;
		}
	}
	getch();
}
void payment()
{
	char phonenumber[50];
	int i, amount;
	system("cls");
	system("COLOR 86");
	printf("\n\n\n\n\n\n\t\t\t Enter phone number of the subscriber for payment");
	scanf("%s", phonenumber);
	for (i = 1; i < cnt - counter; i++) {
		if(strcmp(s[i].phonenumber, phonenumber) == 0) {
			system("cls");
			system("COLOR F4");
			printf("\n\t\t\t Phone No.: %s", s[i].phonenumber);
			printf("\n\t\t\t Name: %s", s[i].name);
			printf("\n\t\t\t Current amount: %d", s[i].amount);
			printf("\n");
			for(i=0;i<79;i++)
				printf("-");
			printf("\n\n\t\t\t Enter amount of payment :");
			scanf("%d", &amount);
			s[i].amount = s[i].amount - amount;
			getchar();
			break;
		}
	}
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t THANK YOU %s FOR YOUR TIMELY PAYMENTS", s[i].name);
	getch();
}
void searchrecords()
{
    char phonenumber[50];
	int flag = 1, i;
	system("cls");
	system("COLOR 86");
	printf("Enter Phone Number to search in our database: ");
	scanf("%s", phonenumber);
	getchar();
	for (i = 1; i < cnt - counter; i++) {
		if(strcmp(s[i].phonenumber, phonenumber) == 0) {
            system("cls");
            system("COLOR F4");
			printf("\n\n\n\n\n\n\t\t\t Record Found ");
			printf("\n\n\t\t\t Phonenumber: %s\n\t\t\t Name: %s\n\t\t\t Amount: %d Tk.\n",s[i].phonenumber,s[i].name,s[i].amount);
			flag = 0;
			break;
		}
		else if(flag == 1) {
			printf("\n\n\n\n\n\n\t\t\t Requested Phone Number Not found in our database");
		}
	}
	getch();
}
void deleterecords()
{
	int found = 0, i;
	char phonenumber[50];
	system("cls");
	system("COLOR 86");
	printf("Enter the phone number to be deleted from the Database: ");
	scanf("%s", phonenumber);
	getchar();
	for (i = 1; i < cnt - counter; i++) {
		if(strcmp(s[i].phonenumber, phonenumber) == 0) {
            found = 1;
            break;
		}
	}
	if(found == 0) {
        system("cls");
        system("COLOR F4");
		printf("\n\n\n\n\n\n\t\t\t Phone number \"%s\" not found", phonenumber);
		getch();
	}
	else {
        system("cls");
        system("COLOR F4");
        for (; i < cnt - (counter + 1); i++) {
            s[i] = s[i + 1];
        }
        printf("\n\n\n\n\n\n\t\t\t The Number %s Successfully Deleted!!!!", phonenumber);
        getch();
	}
	counter++;
}
