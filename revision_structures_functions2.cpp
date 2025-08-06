#include<iostream>
#include<cstdio>

class Rectangle
{
	private:
		int length;
		int breadth;
	public:	
		Rectangle(int l, int b)
		{
			length=l;
			breadth=b;
		}

		int Area()
		{
			return length*breadth;
		}

		void changeLength(int l)
		{
			length=l;
		}

};


int main()
{

	struct Rectangle r1(3,5);

	printf("The area of the rectangle is %d\n",r1.Area());

	r1.changeLength(6);


	return 0;
}
