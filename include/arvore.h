
#ifndef ARVORE_H
#define ARVORE_H

#include "paciente.h"

typedef struct node node_t;

struct node
{
	PacienteBase *paciente;
	node_t *noDireita;
	node_t *noEsquerda;	
};

//typedef struct node node_t;

template <class P>
class Arvore {

	public:
		Arvore()
		{
			raiz =
			{
				.paciente = NULL,
				.noDireita = NULL,
				.noEsquerda = NULL
			};		
		};
		//template <class P>
		void operator+=(P *_p) {
			raiz.paciente = _p;
		}

		node_t raiz;
};

#endif
