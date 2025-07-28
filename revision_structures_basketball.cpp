#include<iostream>
#include<cstdio>

struct Basketball
{
	char name[25];
	int pos;
	int race;
	float height;
};


int main()
{

	struct Basketball b1[5]={{"Mike", 1, 0, 7}, {"Evans", 2, 0, 6}, {"Rodney", 3, 0, 6.5}, {"Kofi", 4, 0, 8}, {"Daniel", 5, 0, 5}};

	struct Basketball b2[5]={{"Sam", 1, 1, 6}, {"Derrick", 2, 1, 5.6}, {"Charles", 3, 1, 6.75}, {"Ronald", 4, 1, 6}, {"Frank", 5, 1, 5.9 }};



	return 0;
}
