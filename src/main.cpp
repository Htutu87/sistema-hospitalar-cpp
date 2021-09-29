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
	PacienteCancer p4("Jorge", 23, MASCULINO, "Pulmao");
	PacienteCancer p5("Jose", 23, MASCULINO, "Pulmao");
	PacienteHipertensao p6("Marcelo", 30, FEMININO, 120.0);
	PacienteDiabetes p7("Claudia", 20, MASCULINO, 133.6);
	PacienteCancer p8("Luis", 23, MASCULINO, "Pulmao");
	PacienteCancer p9("Rodrigo", 23, MASCULINO, "Pulmao");
	
	Arvore <PacienteBase> arvore;

/*
	arvore += &p1;
	arvore += &p2;
	arvore += &p3;
	arvore += &p4;
	arvore += &p5;
*/

	node_t* noTmp;

	arvore.raiz->paciente = &p1;

	arvore.raiz->noEsquerda = new node();
	arvore.raiz->noEsquerda->paciente = &p2;	
	
	arvore.raiz->noDireita = new node();
	arvore.raiz->noDireita->paciente = &p3;

	noTmp = arvore.raiz->noDireita;

	noTmp->noEsquerda = new node();
	noTmp->noEsquerda->paciente = &p4;	
	
	noTmp->noDireita = new node();
	noTmp->noDireita->paciente = &p5;

	noTmp = arvore.raiz->noEsquerda;

	noTmp->noEsquerda = new node();
	noTmp->noEsquerda->paciente = &p6;	
	
	noTmp->noDireita = new node();
	noTmp->noDireita->paciente = &p7;

	noTmp = noTmp->noEsquerda;

	noTmp->noEsquerda = new node();
	noTmp->noEsquerda->paciente = &p8;	
	
	noTmp->noDireita = new node();
	noTmp->noDireita->paciente = &p9;


	cout << arvore;


	return 0;

}
