#ifndef __DATSTACK_H
#define __DATSTACK_H

#include "dataroot.h"

#define StackID 101

class TStack : public TDataRoot {
protected:
	int Hi; //������ ���������� �������� ���������
	virtual int GetNextIndex(int index);
	//��������� ������
	virtual void Paint(int y, int x1, int x2);//�������� ������� ���������
	virtual int IsValid();//������������ ����������
	
	virtual void CopyToVector(TElem v[]);//���������� � �������
public:
	TStack(int Size = DefMemSize) :TDataRoot(Size) { Hi = -1; }
	virtual void Put(const TData& Val); //�������� � ����
	virtual TData Get(void);//����� �� ����� � ���������

	virtual void Print();//� ��������� ������� � protected
	
};

#endif // !__DATSTACK_H
