#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct books{
char Title[30];
int Id;
}bookks[10];

struct registe{
    int id;
    char name[50], email[100], password[32];
}registr[100];

bool running = true;
int n= 0, ext;
int Books_counter = 10;

void menu();
void regist();
void noStudents();
void exit0();
void show_books();
void search_for_books();
void add_book();



int main()
{
   //books bookks[Books_counter];


    while (running)
    {
        menu();
        if (ext== 1)
        {
            break;
        }
    }


    return 0;
}

void show_books()
{
	for (int i = 0; i < Books_counter; i++)
	{
		printf(" %d -   Book Title : %s  \n\n",i+1 ,bookks[i].Title);
	}
}

void search_for_books()
{
	char search[30];
	int search_num;
	int search_int;
	int is_found = 0;
	printf(" Do you want to Search For Your Book Using its :  \n ");
	printf(" 1. Title \n ");
	printf(" 2. ID  \n");
	printf(" Enter the number of your choice : \n");
    scanf("%d",&search_int);
	printf("-------------------------------------\n");
	if (search_int == 1)
	{
		printf(" Enter the book's title :  \n ");
		scanf("%s",search);

		for (int b = 0; b < Books_counter; b++)
		{
			if (search == bookks[b].Title)
			{
				printf("Book Title : %s", bookks[b].Title);
				printf("Book ID : %d", bookks[b].Id);
				is_found = 1;
				break;
			}

		}
		if (is_found == 0)
		{
			printf("\n Sorry we couldn't Find this book :( \n");
		}

	}
   else if (search_int == 2)
	{
		printf(" Enter the book's ID :  \n ");
		scanf("%d",&search_num);
		for (int b = 0; b < Books_counter; b++)
		{
           if (search_num == bookks[b].Id)
		   {
			printf("Book Title : %s \n",bookks[b].Title);
			printf("Book ID : %d \n\n",bookks[b].Id);
			is_found = 1;
			break;
		   }
		}
		if (is_found == 0)
		{
			printf("\n Sorry we couldn't Find this book :( \n");
		}
	}
	else
		printf(" \n Invalid Input ! \n\n");


}

void add_book()
{
	int num_of_books;
	printf(" How many books you want to add ? ");
	scanf("%d",&num_of_books);
		for (int r = 0; r < num_of_books; r++)
		{
			printf("Enter the new Book title  :  ");
			scanf("%s",&bookks[Books_counter + r].Title);
			printf("Enter the new Book ID  :  ");
			scanf("%d",&bookks[Books_counter + r].Id);

			printf("This book has been added sucssesfully ! \n\n\n");
		}
		Books_counter+= num_of_books;
}

void menu(){


            int choice;
    printf("\npress 1 to registrate \npress 2 to know number of students registred in the system \npress 3 to add a book\npress 4 to show the library\npress 5 to search for a certain book\npress 6 to exit\n\nplease enter your choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        regist();
    }
    else if(choice == 2)
    {
        noStudents();

    }
    else if (choice ==3 )
    {
        add_book();
    }
    else if (choice ==4 )
    {
        show_books();
    }
    else if (choice ==5 )
    {
        search_for_books();
    }
    else if (choice == 6)
    {
        exit0(running);
        running = false;
    }
    else{
        printf("Please Enter Valid Input !!!!\n");
    }
}

void regist(){
    int registers, i;
    printf("Please Enter the Number Of Registers That you want to Do Now : ");
    scanf("%d", &registers);

    for (i=0; i<registers; i++){
        printf("Enter Student Number %d Name : ", i+1);
        scanf("%S", &registr[i].name);
        printf("Enter Student Number %d ID : " , i+1);
        scanf("%d", &registr[i].id);
        printf("Enter Student Number %d E-mail : ",i+1);
        scanf("%S", &registr[i].email);
        printf("Enter Student Number %d password : ",i+1);
        scanf("%S", &registr[i].password);
        printf("\nsuccesful registration\n\n");
        n+= 1;
    }

}
void noStudents(){
    printf("\Number of students Registrated till now equals : %d\n", n);

}

void exit0(){
    bool run;
    int rate;
    run= true;

    while (run){
        printf("Enter you feedback as a number form 1 to 5 (1 means bad 5 means excellent): ");
        scanf("%d", &rate);
        if (rate<0 | rate>5){
            printf("Please Enter valid rate !!!!\n");
        }
        else if (rate>0 && rate <5){
            printf("Thanks For Using Our system :) ");
            break;
        }

    }
    ext= 1;

}


