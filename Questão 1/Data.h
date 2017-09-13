#ifndef DATA_H
#define DATA_H 
#include <iostream>

class Data{
public:

	Data(int d, int m, int a){
		setData(d, m, a);
		verificar(d, m, a);
		avancarDia(d, m, a);
	}
	
	void verificar(int d, int m, int a);
	void avancarDia(int d, int m, int a);
	void setData(int d, int m, int a){
		dia = d;
		mes = m;
		ano = a;
	} 
	int getDia(){
		return dia;
	}
	int getMes(){
		return mes;
	}
	int getAno(){
		return ano;
	}
	
private:
	int dia, mes, ano;

};

#endif
