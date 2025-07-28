#include<iostream> // allows for input out like cout and cin in c++
#include<cstdio> //allows for the use of c standard library 


int main()
{
	int c[6]; // creates an array with 6 similar data elements;
		  //
	
	c[0]=7;
	c[1]=9;
	c[2]=11;

	int d[3]={1,3,5};

	//accessing members in an array
	//
	
	for(int i=0; i<3;i++)
		printf("%d", d[i]);

	return 0;
}


