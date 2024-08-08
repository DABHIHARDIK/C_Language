#include <stdio.h>
#include<string.h>
#include<stdlib.h>

// structure is a way of to group variable
//  structure is a collection of dissimilar element
//  defining structure means creating new data types

// Example of structure
//  want to store student data like Roll Number, Name , Address , Marks etc.

// that types of data called group of variable and that allow to store in structure data types
struct date
{
    int day, month, year;
};

struct student
{
    int rollno;
    char name[20];
    int age;
};

int main()
{

    struct date today, d1;

    today.day = 20;
    today.month = 07;
    today.year = 2024;
    printf(" Enter today's date ");
    scanf(" %d/%d/%d", &d1.day, &d1.month, &d1.year); // Note very important user need to separate data with / becasue we used / in %d between the data ;
    printf(" Date: %d/%d/%d \n", d1.day, d1.month, d1.year);

    struct student data;

    data.rollno = 20;
    strcpy(data.name, "Hardik dabhi"); // best way to input string in structure
    // scanf( " %s",data.name); // space not allowed if you enter the :"hardik dabhi " it will take hardik only it will not take dabhi becasue scanf terminated with space charachter 
    // fflush(stdin);
    // gets(data.name);
    data.age = 23;
    printf(" roll number = %d , name = %s, age = %d", data.rollno, data.name, data.age);
    return 0;
}