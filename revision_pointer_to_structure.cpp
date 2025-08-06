#include<iostream>
#include<cstdio>

struct Rectangle
{
	int length;
	int breadth; 
};

int main()
{

	struct Rectangle r={13,10};

	r.length=13;

	struct Rectangle *r1;

	r1=&r;

	(*r1).length=7;

	r1->length=20;

	printf("%d\n", r1->length*r1->breadth);



	return 0;
}

