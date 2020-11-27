#include "datqueue.h"
#include <stddef.h >
int TQueue::GetNextIndex(int index) { //�������� ��������� �������� �������
	return ++index % MemSize; //���������� ������������� ���������� ������
}

TData TQueue::Get(void) { //����� �� ����� � ���������
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