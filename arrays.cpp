#include <stdio.h>
//mike@flashmike.com
struct student {
	int record;
	char studentName[10];
	int age;
	float gpa;
	char gradeLevel[3];
}s[10];

int main(){
	int i;
	printf("Student Information System:\n");
	
	//storing student information
	for (i=0; i<10; i++){
		s[i].record = i + 1;
		printf("\nRecord number: %d\n", s[i].record);
		printf("Enter Student Name: ");
		scanf("%s", s[i].studentName);
		printf("Age: ");
		scanf("%i", &s[i].age);
		printf("Enter GPA: ");
		scanf("%f", &s[i].gpa);
		printf("Grade Level: ");
		scanf("%s", s[i].gradeLevel);
		printf("\n");
	}
	
	printf("\n");
	printf("Displaying Information:\n\n");
	
	//displaying student information
	for (i=0; i<10; i++){
		printf("\nRecord Number: %d\n", i+1);
		printf("Student Name: ");
		puts(s[i].studentName);
		printf("Age: %i", s[i].age);
		printf("\n");
		printf("GPA: %.1f", s[i].gpa);
		printf("\n");
		printf("Grade Level: %s", s[i].gradeLevel);
		printf("\n");
	}
	
	return 0;
}
