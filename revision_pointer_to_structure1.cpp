#include<iostream>
#include<cstdio>

struct Rectangle 
{
	int length;
	int breadth;
};

int main()
{

	struct Rectangle *ptr;

	ptr=(struct Rectangle*)malloc(sizeof(struct Rectangle));


	ptr->length=10;
	ptr->breadth=7;


	printf("%d\n", ptr->length*ptr->breadth);

	return 0;
}
