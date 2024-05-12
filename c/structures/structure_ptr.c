/*
Name : K.Y.Naga Sai Vinay
Description : Wap to print the values in structure using pointers
*/
#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
    int marks;
};

int main()
{
    struct student s1;
    struct student *ptr=&s1;
    printf("Enter the details of a student : ");
    scanf("%d %s %d",&s1.rollno,s1.name,&s1.marks);
    printf("%d %s %d\n",ptr->rollno,ptr->name,ptr->marks);
    return 0;
}

