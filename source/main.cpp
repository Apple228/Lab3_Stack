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
	cout << "������������ �������� ��������� ��������� ���� �������" << endl;
	for (int i = 0; i < 25; i++)
	{
		st.Put(i);
		cout << "�������� �������� " << i << " ��� " << st.GetRetCode() << endl;
	}
	getch();
	int k;
	while (!st.IsEmpty())
	{
		temp = st.Get();
		cout << "����� �������� " << temp << " ��� " << st.GetRetCode() << endl;
	}
	cout << "������� ����� ����� " << endl;
	getch();
	return 0;
}