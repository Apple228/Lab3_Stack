#include <iostream>
#include "tstack.h"
using namespace std;
int main()
{
	TStack a;
	
	for (int i = 0; i < 25; i++)
	{
		a.Put(i);
	}

	for (int i = 0; i < 25; i++)
	{
		cout << a.Get()<<endl;
	}
	return 0;
}