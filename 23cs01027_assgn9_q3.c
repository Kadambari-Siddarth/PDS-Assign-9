#include <stdio.h>

typedef struct date{
    int year;
    int month;
    int day;
}date;

int check_date(date d1, date d2){
    if(d1.year < d2.year){
        return 1;
    }
    else if(d1.year > d2.year){
        return -1;
    }
    else{
        if(d1.month > d2.month)
            return -1;
        else if(d1.month < d2.month)
            return 1;
        else{
            if(d1.day > d2.day)
                return -1;
            else if(d1.day < d2.day)
                return 1;
            else
                return 0;
        }
    }
}

int main(){
    date d1, d2;
    return 0;
}