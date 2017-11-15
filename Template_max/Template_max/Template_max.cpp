#include<iostream>

using namespace std;


template<typename T>
T Max(T a, T b, T c)
{
	T res = a;
	if (res < b)
	{
		res = b;
	}
	if (res < c)
	{
		res = c;
	}
	return res;
}



void main()
{

	cout << Max(3, 4, 5) << endl;
	cout << Max(2.3, 4.5, 1.3) << endl;

}