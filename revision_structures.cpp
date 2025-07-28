#include<iostream>
#include<cstdio>

struct Triangle
{
	int base;
	int pen_height;
};

int main()
{
	struct Triangle t1;
	struct Triangle t2={10,11};

	t2.pen_height=12;

	printf("Area of the triangle is %f\n", 0.5*t2.base*t2.pen_height);


	return 0;
}
