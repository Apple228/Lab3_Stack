#ifndef __TSTACK_H
#define __TSTACK_H

#define MemSize 25 //������ ������ ��� �����

class TStack
{
protected:  //����
	int Mem[MemSize]; //������ ��� ��
	int Top; //������ ���������� �������� � Mem
public:
	TStack() { Top = -1; }
	int IsEmpty(void) const { Top == -1; } //�������� �������
	int IsFull(void) const { Top == MemSize - 1; } //�������� ������������
	void Put(const int Val) {
		Top++;
		Mem[Top] = Val;// �������� ��������
	} 
	int Get(void) { return Mem[Top--]; } //������� �������� 

};
#endif // ! __TSTACK_H
