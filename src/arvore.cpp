
#include "../include/arvore.h"

template <class P>
Arvore<P>::Arvore(){
	raiz = new node();
}


template <class P>
inline void Arvore<P>::listaNos(node_t* _n)
{
	static int c = 0;
	c++;
	
	stack <node_t*> pilha;	
	node_t * noTmp;
	
	if (raiz->paciente == NULL){
		cout << "Nenhum paciente cadastrado." << endl;
		return;
	}

	if (_n->paciente != NULL)
		pilha.push(_n);

	if (_n->noDireita != NULL)
		listaNos(_n->noDireita);
	if (_n->noEsquerda != NULL)
		listaNos(_n->noEsquerda);

	while(!pilha.empty())
	{
		noTmp = pilha.top();
		noTmp->paciente->mostrarDados();
		pilha.pop();
	}
}



ostream & operator<<(ostream & _cout, Arvore<PacienteBase> _a)
{
	_a.listaNos(_a.raiz);
	return _cout;
}
		
template <class P>
inline void Arvore<P>::operator+=(P *_p)
{		
	bool registrado = false;
	node_t * noTmp = raiz;

	int i = 0;

	cout << "u" << endl;i++;

	if (raiz->paciente == NULL){
		cout << "Paciente " << _p->getNome() << " registrado(a)." << endl;
		raiz->paciente = _p;
	}
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
				noTmp->paciente = _p;
				registrado = true;
			}
		}
	}
}

		
template <class P>
inline void Arvore<P>::operator()(string) {};


template class Arvore<PacienteBase>;

