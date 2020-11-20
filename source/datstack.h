#ifndef __DATSTACK_H
#define __DATSTACK_H

#include "dataroot.h"

#define StackID 101

class TStack : public TDataRoot {
protected:
	int Hi; //индекс последнего элемента структуры
	virtual int GetNextIndex(int index);
	//служебные методы
	virtual void Paint(int y, int x1, int x2);//показать рисунок структуры
	virtual int IsValid();//тестирование структруры
	virtual void Print();
	virtual void CopyToVector(TElem v[]);//копировать в очередь
public:
	TStack(int Size = DefMemSize) :TDataRoot(Size) { Hi = -1; }
	virtual void Put(const TData& Val); //положить в стек
	virtual TData Get(void);//взять из стека с удалением

	

};

#endif // !__DATSTACK_H
