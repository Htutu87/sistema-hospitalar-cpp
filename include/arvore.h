// Universidade Federal do Rio de Janeiro
// EEL670 - Linguagens de Programção
// Prof.: Miguel Campista
// Exercício avaliado 04
// Autor: Artur Amaral | DRE: 119057968 | Agosto 2021

#ifndef ARVORE_H
#define ARVORE_H

#include "paciente.h"
#include "exceptions.h"

typedef struct node node_t;
template <class P> class Arvore;

struct node
{
	PacienteBase *paciente;
	node_t *noDireita;
	node_t *noEsquerda;	

	node()
	{
		this->paciente = NULL;
		this->noDireita = NULL;
		this->noEsquerda = NULL;
	}
};

//ostream & operator<<(ostream &, Arvore<PacienteBase>);

template <class P>
class Arvore {

	public:

		node_t* raiz;

		Arvore();
		void listaNos(node_t*, stack <node_t*> *);
		friend ostream & operator<<(ostream &, Arvore<PacienteBase>);
		void operator+=(P*);
		node_t* operator()(string);
};

#endif
