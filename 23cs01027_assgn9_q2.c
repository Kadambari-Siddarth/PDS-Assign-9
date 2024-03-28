#include <stdio.h>

typedef struct student{
    char rollNo[100];
    char name[100];
    char address[100];
    int age;
    int averageMarks;
}student;

void read_details(student *s){
    printf("Enter name: ");
    fflush(stdin);
    fgets(s->name, 100, stdin);
    printf("Enter rollNo: ");
    fgets(s->rollNo, 100, stdin);
    printf("Enter address: ");
    fgets(s->address, 100, stdin);
    printf("Enter age: ");
    scanf("%d", &(s->age));
    printf("Enter average: ");
    scanf("%d", &(s->averageMarks));
}

void print_details(student *s){
    printf("Name: %s", s->name);
    printf("RollNo: %s", s->rollNo);
    printf("Address: %s", s->address);
    printf("Age: %d\n", s->age);
    printf("Average: %d\n", s->averageMarks);
}

int main(){
    student s[6];
    for(int i =0 ;i < 6; ++i){
        student *stdu = &s[i];
        printf("Enter the %dth student's detais: \n", i+1);
        read_details(stdu);
    }
    printf("Here are the details you entered: \n");
    for(int i = 0;i < 6; ++i)
    {
        student *tmp = &s[i];
        print_details(tmp);
    }
    return 0;
}