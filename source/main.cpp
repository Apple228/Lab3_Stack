#include <iostream>
#include <conio.h>
//#include "tstack.h"
#include "datstack.h"
#include "dataroot.h"
#include "datqueue.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	TQueue st;
	int temp;
	cout << "Тестирование программ поддержки структуры типа очереди" << endl;
	for (int i = 0; i < 25; i++)
	{
		st.Put(i);
		cout << "Положили значение " << i << " Код " << st.GetRetCode() << endl;
	}
	getch();
	int k;
	while (!st.IsEmpty())
	{
		temp = st.Get();
		cout << "Взяли значение " << temp << " Код " << st.GetRetCode() << endl;
	}
	cout << "Нажмите любую клаву " << endl;
	getch();
	return 0;
}