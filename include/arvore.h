
#ifndef ARVORE_H
#define ARVORE_H

#include "paciente.h"

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


template <class P>
ostream & operator<<(ostream & _cout, Arvore<P> _a)
{
	// Percorre todos os elementos da árvore, printando-os.

	stack <node_t> pilha;
	node_t * noTmp = &_a.raiz;

	if (_a.raiz.paciente == NULL) 
		cout << "Nao existem pacientes cadastrados." << endl;

	return _cout;
}


template <class P>
class Arvore {

	public:
		node_t raiz;

		inline Arvore() {
			raiz = *( new node() );
		};

		inline void operator+=(P *_p)
		{	
	
			bool registrado = false;
			node_t* noTmp = &raiz;

			if (raiz.paciente == NULL){
				cout << "Paciente " << _p->getNome() << " registrado(a)." << endl;
				raiz.paciente = _p;}
			else 
			{
				while(!registrado)
				{
					if (_p->getNome() > noTmp->paciente->getNome())
					{
						noTmp->noEsquerda = new node();
						noTmp = noTmp->noEsquerda;
					}

					else if (_p->getNome() < noTmp->paciente->getNome())
					{
						noTmp->noDireita = new node();
						noTmp = noTmp->noDireita;
					}
					
					else {
						cout << "Este nome ja existe." << endl;
						registrado = true;
					}			
	
					if (noTmp->paciente == NULL)
					{
						cout << "Paciente " << _p->getNome() << " registrado(a)." << endl;
						noTmp->paciente = _p;
						registrado = true;
					}
				}
			}
		};


		inline void operator()(string) {};
};

#endif
