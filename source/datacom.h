//обработка кодов завершения
#ifndef __DATACOM_H
#define __DATACOM_H

#define DataOK 0
#define DataErr -1

class TDataCom {
protected:
	int RetCode; //код завершения
	int SetRetCode(int ret) { return RetCode = ret; };
public:
	TDataCom() :RetCode(DataOK) {};
	virtual ~TDataCom() {};
	int GetRetCode() {
		int temp = RetCode;
		RetCode = DataOK;
		return temp;
	};

};


#endif // !__DATACOM_H
