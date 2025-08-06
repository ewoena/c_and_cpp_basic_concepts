#include<iostream>
#include<cstdio>



int main()
{
	int *p;

	p=(int *)malloc(10*sizeof(int)); //malloc means memory allocation
					 //malloc returns a void pointer, which is a pointer which lacks a specific datatype and size
					 //thus must be type cast
					 //
	p=new int[10];				 //this is who to create an array in heap in c++


	return 0;
}
