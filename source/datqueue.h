#ifndef __DATQUEUE_H
#define __DATQUEUE_H

#include "datstack.h"
#define QueueID 102

class TQueue : public TStack {
protected:
	int Li; //индекс первого элемента структуры
	virtual int GetNextIndex(int index); // получить следующий индекс
public:
	TQueue(int Size = DefMemSize) : TStack(Size) {
		Li = 0;
	}
	virtual TData Get(void);//взять из стека с удалением
};



#endif // !__DATQUEUE_H
