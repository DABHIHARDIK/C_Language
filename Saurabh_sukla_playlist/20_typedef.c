/*
typedef is a keyword

we can use typedef to give new name to a type

typesdef int LENGHT;

now you can use LENGHT as a data type which is just same as int
LENGHT x , y ;

*/

#include <stdio.h>
#include<string.h>
typedef struct student
{
    int rollno;
    char name[20];
    int age;

} STUDENT;

int main()
{

    STUDENT s1; // benifit of typedef keyword genereally use UPPER LATTER NAME so we can identify this variable made by type def
    // struct student s1;
    s1.age = 20;
    strcpy(s1.name, " hardik Dabhi ");
    s1.rollno = 20;
    printf( " roll number = %d, name = %s , age = %d",s1.rollno, s1.name, s1.age);
    return 0;
}