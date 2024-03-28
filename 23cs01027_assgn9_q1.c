#include <stdio.h>

typedef struct company{
    char name[100];
    char address[100];
    long long int number;
    int noOfEmployees;
}company;

int main(){
    company c;
    printf("Enter Company's name: ");
    fgets(c.name, 100, stdin);
    // scanf("%s", &c.name) ;
    printf("\nEnter Company's address: ");
    fgets(c.address, 100, stdin);
    // scanf("%s", &c.address);
    printf("\nEnter Company's phone no: ");
    scanf("%ld", &c.number);
    printf("\nEnter the number of employees in the company: ");
    scanf("%d", &c.noOfEmployees);

    printf("Here are the details you entered: \n");
    printf("Name: %s", c.name);
    printf("Address: %s", c.address);
    printf("Phone No. %ld\n", c.number);
    printf("No of Employees: %d\n", c.noOfEmployees);
    return 0;
}