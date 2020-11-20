#include <iostream>
#include <stdio.h>
#include "dataroot.h"

TDataRoot::TDataRoot(int Size) :TDataCom() {
	DataCount = 0;
	MemSize = Size;
	if (Size == 0) //память будет установлена методом SetMem
	{
		pMem = NULL;
		MemType = MEM_RENTER;
	}
	else //память выделяется объектом
	{
		pMem = new TElem[MemSize];
		MemType = MEM_HOLDER;
	}
}

TDataRoot :: ~TDataRoot() {
	if (MemType == MEM_HOLDER) delete pMem;
	pMem = NULL;
}

void TDataRoot::SetMem(void* pMem, int Size) //задание памяти
{
	if (MemType == MEM_HOLDER) delete pMem; //информация не сохраняется
	pMem = (TElem*)pMem;
	MemType = MEM_RENTER;
	MemSize = Size;
}

int TDataRoot::IsEmpty(void) const //контроль пустоты
{
	return DataCount == 0;
}

int TDataRoot::IsFull(void) const//контроль переполнения
{
	return DataCount == MemSize;
}