#include <stdio.h>
#include <conio.h>
#include "datstack.h"

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
	else if (IsFull()) SetRetCode(DataFull);
	else {
		temp = pMem[Hi--];
		DataCount--;
	}
	return temp;
}//Get


//int TStack::GetNextIndex(int index) {
//
//}