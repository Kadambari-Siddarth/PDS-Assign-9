#include <stdio.h>

typedef struct Address {
    char city[25];
    char street[25];
    int zip_code;
}Address;

typedef struct person{
    char name[30];
    Address address;
}person;

void read_address(Address *a){
    printf("Enter the city name: ");
    fgets(a->city, 100, stdin);
    printf("\nEnter the name of the street: ");
    fgets(a->street, 100, stdin);
    printf("\nEnter the zip code: ");
    scanf("%d", &(a->zip_code));
}

int main(){
    person p;
    printf("Enter the name of the person: ");
    fgets(p.name, 100, stdin);
    person *tmp = &p;
    read_address(tmp);
    printf("%s", p.address.city);
    prinf("%s", p.address.street);
    printf("%d", p.address.zip_code);
    return 0;
}