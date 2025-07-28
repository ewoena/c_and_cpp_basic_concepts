#include<iostream>
#include<cstdio>

struct Complex
{
	int real;
	int img;
};

int main()
{

	struct Complex c[2]={{1,5}, {7,6}}; // array of structure Complex numbers. 

	printf("sum is %d+%di\n", c[0].real+c[1].real, c[0].img+c[1].img);


	return 0;
}
