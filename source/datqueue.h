#ifndef __DATQUEUE_H
#define __DATQUEUE_H

#include "datstack.h"
#define QueueID 102

class TQueue : public TStack {
protected:
	int Li; //������ ������� �������� ���������
	virtual int GetNextIndex(int index); // �������� ��������� ������
public:
	TQueue(int Size = DefMemSize) : TStack(Size) {
		Li = 0;
	}
	virtual TData Get(void);//����� �� ����� � ���������
};



#endif // !__DATQUEUE_H
