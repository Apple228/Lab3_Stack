#ifndef __DATAROOT_H
#define __DATAROOT_H

#include "datacom.h"

#define DefMemSize 25 //размер памяти по умолчанию

#define DataEmpty -101 //СД пуста
#define DataFull  -102 //СД переполнена
#define DataNoMem -103 //нет памяти

typedef int TElem; //тип элемента СД
typedef TElem* PTElem;
typedef int TData; //тип значений в СД

enum TMemType 
{
	MEM_HOLDER, MEM_RENTER
};

class TDataRoot : public TDataCom {
protected: //поля
	PTElem pMem; //память для СД
	int MemSize; //размер памяти для СД
	int DataCount; //количество элементов в СД
	TMemType MemType; //режим управления памятью
protected: //методы
	void SetMem(void* pMem, int Size); //задание памяти
public:
	~TDataRoot();
	TDataRoot(int Size = DefMemSize);
	virtual int IsEmpty(void) const; //контроль пустоты СД
	virtual int IsFull(void) const; //контроль переполнения
	virtual void Put(const TData& Val) = 0; //добавить значение
	virtual TData Get(void) = 0; //извлечь значение
	//служебные методы
	virtual void Print() = 0;//печать значений
	virtual int IsValid() = 0; //тестирование структуры
	//дружественные классы
	friend class TMultiStack;
	friend class TSuperMultiStack;
	friend class TComplexMultiStack;
};

#endif // !__DATAROOT_H
