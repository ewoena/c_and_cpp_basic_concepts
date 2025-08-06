#include<iostream>
#include<cstdio>

template <class T>
class Arithmetric
{
	private:
		T a;
		T b;
	public:
		Arithmetric();
		Arithmetric(T a, T b);
		T Add();
		T Sub();

};

template <class T>
Arithmetric<T>::Arithmetric()
{
	a=b=1;
}

template <class T>
Arithmetric<T>::Arithmetric(T a, T b)
{
	this->a=a;
	this->b=b;
}

template <class T>
T Arithmetric<T>::Add()
{
	return a+b;
}

template <class T>
T Arithmetric<T>::Sub()
{
	return a-b;
}

int main()
{

	Arithmetric<int>arr(1,3);

	printf("The sum is %d\n",arr.Add());

	Arithmetric<float>arr1(1,3);

	printf("The sum is %f\n",arr1.Add());


	return 0;
}
