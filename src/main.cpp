// Universidade Federal do Rio de Janeiro
// EEL670 - Linguagens de Programção
// Prof.: Miguel Campista
// Exercício avaliado 04
// Autor: Artur Amaral | DRE: 119057968 | Agosto 2021

#include "../include/arvore.h"

int main ()
{
	PacienteDiabetes p1("Artur", 20, MASCULINO, 133.6);
	PacienteHipertensao p2("Juliana", 30, FEMININO, 120.0);
	PacienteCancer p3("Marcos", 23, MASCULINO, "Pulmao");
	
	Arvore <PacienteBase> arvore;
	
	arvore += &p3;

	arvore.raiz.paciente->mostrarDados();

	return 0;

}
