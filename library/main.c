/*
Project: County Library System
Author: Maureen Chebet Tallam
Date: 26/02/2022
Compiler:GNU GCC
Language: C99
License: MIT
 */


#include <stdio.h>
#include <stdlib.h>
struct Patron {
     char name [100];
     char email [50];
     char pasword [30];
     int is_staff;
};
int main()
{
void add_patron() {
struct Patron patron;
printf("enter name: ");
getchar();
gets(patron.name);
printf("Enter Email: ");
gets(patron.email);
printf("Enter initial password: ");
gets(patron.email);
printf("Enter 1 if staff 0 otherwise: ");
scanf("%d",&patron.is_staff);
printf("%s added\n",patron.name);
}

    printf("COUNTY LIBRARY SYSTEM!\n");
    char name [20];
    printf ("Enter your name: ");
    fgets (name , 20, stdin);
    printf("Welcome %s To COUNTY LIBRARY SYSTEM\n", name);


    int action;
        printf("What would you like to do?\n");
        printf("1.Add new User\n");
        printf("2.Add book.\n");
        printf("3.Borrow book.\n");
        printf("4.Return Book.\n");
        printf("5.Books borrowed.\n");
        printf("6.Delete members.\n");
        printf("selected action: ");
        scanf("%d",&action);
        return action;

        void execute_action(int action) {
        switch (action)
        case 1:
        printf("adding a new patron\n");
        break;
        case 2:
        printf("list of all patrons\n");
        break;
        case 3:
        printf("list of all books\n");
        break;
        case 4:
        printf("adding a new book\n");
        break;
        default: printf("Invalid_action.\n");
return 0;

}
