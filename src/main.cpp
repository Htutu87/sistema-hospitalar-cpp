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
	
	Arvore <PacienteBase> arvore;

	arvore += &p1;
	arvore += &p2;
	arvore += &p3;
	arvore += &p4;
	arvore += &p5;

	cout << (p1.getNome() < p2.getNome()) << endl;

	/* Alocação dinâmica de uma estrutura
	node_t* n = new node();
	cout << n->paciente << endl;
	cout << n->noDireita << endl;
	cout << n->noEsquerda << endl; */

	/* Essa alocação funfa
	arvore.raiz.noDireita = new node();	
	arvore.raiz.noEsquerda = new node();	

	arvore.raiz.noDireita->paciente = &p1;
	arvore.raiz.noEsquerda->paciente = &p3;
	*/

	//cout << arvore;
	
/*	
	arvore += &p1;
	arvore += &p2;
	arvore += &p3;
*/	
	return 0;

}
