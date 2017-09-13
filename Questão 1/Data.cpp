#include <iostream>
#include "Data.h"


void Data::verificar(int d, int m, int a){
	std::cout << "Data: " <<d<<"/" <<m<<"/" <<a << std::endl;
	if(d <= 0)
		std::cout << "Data inválida!\n";
	else if((m < 1) || (m > 12)){
		std::cout << "Data inválida!\n";
	}	
	else if((d > 28) && (m == 2)){
		std::cout << "Data inválida!\n";
	}else if((d > 31) && ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12))){
		std::cout << "Data inválida!\n";	
	}else if((d > 30) && ((m == 4) || (m == 6) || (m == 9) || (m == 11))){
		std::cout << "Data inválida!\n";
	}else{std::cout << "Data válida!\n";}
}

void Data::avancarDia(int d, int m, int a){
	if((d == 31) && ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12))){
		d = 1;
		if(m == 12){
			m = 1;
			a += 1;
		}else{ m += 1;}
	}else if((d == 30) && ((m == 4) || (m == 6) || (m == 9) || (m == 11))){
			d = 1;
			m += 1;
		}
	else if((d == 28) && (m == 2)){
			dia = 1;
			m += 1;
	}else{d += 1;}
	std::cout <<"Avançando um dia!!!\n";
	std::cout << "Data: " <<d<<"/" <<m<<"/" <<a << std::endl;
}



