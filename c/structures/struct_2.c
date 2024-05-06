/*
Name : K.Y.Naga Sai Vinay
Date : 06-05-2024
Description : WAP to store student record using array of structures
*/
#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    int marks;
};
int main()
{
   struct student s1={1,"vinay",100};
   struct student s2={2,"manikanta",100};
   printf("%d\t%s\t\t%d",s1.rollno,s1.name,s1.marks);
   printf("\n%d\t%s\t%d",s2.rollno,s2.name,s2.marks);
   return 0;
}

