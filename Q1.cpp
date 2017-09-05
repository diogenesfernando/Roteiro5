#include <iostream>

using namespace std;

class data{
public:
	int dia, mes, ano;
	void ini(int tipo);//pq tem que declarar aqui tbm???	
	
private:
};

void data::ini(int tipo){
	if(tipo == 1){
		this->dia = 1;
		this->mes = 3;
		this->ano = 2017;
	}
	else if(tipo == 2){
		this->dia = 5;
		this->mes = 9;
		this->ano = 2010;
		}	
	else if(tipo == 3){
		this->dia = 12;
		this->mes = 12;
		this->ano = 2012;
	}
}

int main(){
	data *dat1 = new data(); //construtor...
	dat1->ini(3);

	cout << dat1->dia << "/" << dat1->mes << "/" << dat1->ano << endl;
	

	return 0;
}
