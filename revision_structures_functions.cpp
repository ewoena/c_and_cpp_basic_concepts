#include<iostream>
#include<cstdio>


struct Rectangle
{
	int length;
	int breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
	r->length=l;
	r->breadth=b;
}

void changeLength(struct Rectangle *r, int l)
{
	r->length=l;
}

int area(struct Rectangle r)
{
	return (r.length*r.breadth);
}


int main()
{
	struct Rectangle r1;
	int a;

	initialize(&r1,3,5);

	a=area(r1);

	printf("Area of the rectangle is %d\n", a);

	changeLength(&r1, 7);

	printf("Area of the rectangle is now %d\n", area(r1));


	return 0;
}
