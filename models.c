#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "models.h"

DateOfBirth *BirthdayConstructor(char* s)
{
    DateOfBirth *birthday = (DateOfBirth*)malloc(sizeof(DateOfBirth));
    int i = 0;
    char *p = strtok(s,"/'\'- ");
    while(p)
    {
        if (i == 0) {
            strcpy(birthday->day, p);
        }
        else if (i == 1) {
            strcpy(birthday->month, p);
        }
        else if (i == 2) {
            strcpy(birthday->year, p);
        }
        p = strtok(NULL, "/'\'- ");
        i++;
    }
    return birthday;
}

void printContact(Contact c){
    printf("First Name = %s\n", c.firstName);
    printf("Last Name = %s\n", c.lastName);
    printf("Street Name = %s\n", c.stName);
    printf("email = %s\n", c.email);
    printf("Phone Number = %s\n", c.phoneNum);
    printf("Birthday = %s - %s - %s\n", c.dateOfBirth.day,c.dateOfBirth.month,c.dateOfBirth.year);
}