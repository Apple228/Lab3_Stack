#include "datqueue.h"
#include <stddef.h >
int TQueue::GetNextIndex(int index) { //получить следующее значение индекса
	return ++index % MemSize; //логическое представление кольцевого буфера
}

TData TQueue::Get(void) { //взять из стека с удалением
	TData temp = -1;
	if (pMem == NULL) SetRetCode(DataNoMem);
	else if (IsEmpty()) SetRetCode(DataEmpty);
	else {
		temp = pMem[Li];
		Li = GetNextIndex(Li);
		DataCount--;
	}
	return temp;

}