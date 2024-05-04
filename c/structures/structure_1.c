/*
Name : K.Y.Naga Sai Vinay
Date : 04-05-2024
Description :  program to accept name, age and address of five persons and display the name of each person.
*/
#include<stdio.h>
int main()
{
    struct student
    {
	char name[20];
	int age;
	char address[20];
    };
    struct student stu[5];
    for(int i=0;i<5;i++)
    {
	printf("Enter the name of the student %d :\n",i+1);
	scanf("%s",stu[i].name);
	printf("\nEnter the age of the student %d : \n",i+1);
	scanf("%d",&stu[i].age);
	printf("\nEnter the address of the student %d :\n",i+1);
	scanf("%s",stu[i].address);
    }
    printf("-----------------------------------------------\n");
    printf("\nName\tage\taddress\n");
    printf("-----------------------------------------------\n");
    for(int i=0;i<5;i++)
    {
	printf("%s\t%d\t%s\n",stu[i].name,stu[i].age,stu[i].address);
    }
    printf("-----------------------------------------------\n");

    return 0;

}

