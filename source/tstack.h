//простой стек
#ifndef __TSTACK_H
#define __TSTACK_H

#define MemSize 25 //размер памяти для стека

class TStack
{
protected:  //поля
	int Mem[MemSize]; //память для СД
	int Top; //индекс последнего занятого в Mem
public:
	TStack() { Top = -1; }
	int IsEmpty(void) const { Top == -1; } //контроль пустоты
	int IsFull(void) const { Top == MemSize - 1; } //контроль переполнения
	void Put(const int Val) {
		Top++;
		Mem[Top] = Val;// добавить значение
	} 
	int Get(void) { return Mem[Top--]; } //извлечь значение 

};
#endif // ! __TSTACK_H
