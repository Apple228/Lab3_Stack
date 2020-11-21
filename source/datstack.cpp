#include <stdio.h>
#include <conio.h>
#include "datstack.h"
#include "iostream"
void TStack :: Put (const TData &Val){// положить в очередь
	if (pMem == NULL) SetRetCode(DataNoMem);
	else if (IsFull()) SetRetCode(DataFull);
	else {
		Hi = GetNextIndex(Hi);
		pMem[Hi] = Val;
		DataCount++;
	}
}//Put


TData TStack::Get(void) //взять из стека с удалением
{
	TData temp = -1;
	if (pMem == NULL) SetRetCode(DataNoMem);
	//else if (IsFull()) SetRetCode(DataFull);
	else {
		temp = pMem[Hi--];
		DataCount--;
	}
	return temp;
}//Get


int TStack::GetNextIndex(int index)//получить следующее значение индекса
{
	return ++index;
}
void TStack::Paint(int y, int x1, int x2) //показать рисунок структры
{
	int i, px;
	//gotoxy (x1, y);
	if (DataCount == 0)
		px = x1 - 1;
	else {
		px = x1 + double(DataCount) * (x2 - x1 + 1) / MemSize - 1;
		if ((px < x1) && (DataCount > 0))
			px = x1;
		if (DataCount == MemSize)
			px = x2;
	}
	for (i = x1; i <= px; i++)
	{
		cprintf("#");
	}
	for (i = px + 1; i <= x2; i++)
	{
		cprintf(" ");
	}
	if ((x1 < 1) || (x1 > 79) || (px < 1) || (px > 79) || (x2 < 1) || (x2 > 79)) {
		printf("Error in parameters of painting..\n");
		getch();
	}
}

void TStack::Print() {//печать значений стека
	for (int i = 0; i < DataCount; i++)
		{
		std::cout << pMem[i]<<" ";
		}
	std::cout << "\n";
}
int TStack::IsValid(){//тестирование структуры
	int res = 0;
	if (pMem == NULL)
		res = 1;
	if (MemSize < DataCount)
		res += 2;
	return res;
}

void TStack::CopyToVector(TElem v[]) {//копировать в очередь
	for (int i = 0; i < DataCount; i++)
	{
		v[i] = pMem[i];
	}
}