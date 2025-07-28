#include<iostream>
#include<cstdio>

struct Student
{
	int roll;
	char name[25];
	char address[50];
	char _class[10];
	float fees;

};

int main()
{

	struct Student s1={2, "Mike", "Adenta", "2A", 2000};

	printf("The student's name is %s\n", s1.name);
	printf("The student is in class %s\n", s1._class);
	printf("The student owes school fees of %f\n", s1.fees);



	return 0;
}
