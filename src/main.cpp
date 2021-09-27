// Universidade Federal do Rio de Janeiro
// EEL670 - Linguagens de Programção
// Prof.: Miguel Campista
// Exercício avaliado 04
// Autor: Artur Amaral | DRE: 119057968 | Agosto 2021

#include "../include/paciente.h"

int main ()
{
	string a = "Artur";

	PacienteDiabetes p1(a, 20, MASCULINO, 133.6);
	//PacienteHipertensao p2(a, 30, FEMININO, 120.0);
	//PacienteCancer p3(a, 23, MASCULINO, "Pulmao");
	
	cout << p1;

	p1.mostrarDados();	
	//p2.mostrarDados();	
	//p3.mostrarDados();	

	return 0;
}
