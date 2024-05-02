/*
Name : K.Y.Naga Sai Vinay
Date : 02-05-2024
Description : WAP to accept students record
Sample input :
Sample output :
*/
#include <stdio.h>

struct Student {
    char name[50];
    int maths;
    int physics;
    int chemistry;
};

int main() {
    int num_students, i;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    struct Student students[num_students];

    for (i = 0; i < num_students; i++) {
	printf("Enter name of student %d: ", i + 1);
	scanf("%s", students[i].name);
	printf("Enter P, C, and M marks for %s: ", students[i].name);
	scanf("%d %d %d", &students[i].physics, &students[i].chemistry, &students[i].maths);
    }

    printf("--------------------------------------------------------------\n");
    printf("Name\tMaths\tPhysics\tChemistry\n");
    printf("--------------------------------------------------------------\n");

    float total_math = 0, total_physics = 0, total_chemistry = 0;

    for (i = 0; i < num_students; i++) {
	printf("%s\t%d\t%d\t%d\n", students[i].name, students[i].maths, students[i].physics, students[i].chemistry);
	total_math += students[i].maths;
	total_physics += students[i].physics;
	total_chemistry += students[i].chemistry;
    }

    printf("--------------------------------------------------------------\n");
    printf("Average\t%.2f\t%.2f\t%.2f\n", total_math / num_students, total_physics / num_students, total_chemistry / num_students);
    printf("--------------------------------------------------------------\n");

    return 0;
}


