// Universidade Federal do Rio de Janeiro
// EEL670 - Linguagens de Programção
// Prof.: Miguel Campista
// Exercício avaliado 04
// Autor: Artur Amaral | DRE: 119057968 | Agosto 2021

#include "../include/arvore.h"

template <class P>
Arvore<P>::Arvore(){
	raiz = new node();
}


template <class P>
inline void Arvore<P>::listaNos(node_t* _n, stack <node_t*> * _pilha)
{
	node_t * noTmp;
	
	if (raiz->paciente == NULL){
		cout << "Nenhum paciente cadastrado." << endl;
		return;
	}

	if (_n->paciente != NULL)
		_pilha->push(_n);
	if (_n->noDireita != NULL)
		listaNos(_n->noDireita, _pilha);
	if (_n->noEsquerda != NULL)
		listaNos(_n->noEsquerda, _pilha);

	while(!_pilha->empty())
	{
		noTmp = _pilha->top();
		noTmp->paciente->mostrarDados();
		_pilha->pop();
	}
}

ostream & operator<<(ostream & _cout, Arvore<PacienteBase> _a)
{
	stack <node_t*> pilha;	
	_a.listaNos(_a.raiz, &pilha);
	return _cout;
}
		
template <class P>
void Arvore<P>::operator+=(P *_p)
{		
	bool registrado = false;
	node_t * noTmp = raiz;

	if (raiz->paciente == NULL)
	{
		raiz->paciente = _p;
		registrado = true;
		cout << "Paciente " << _p->getNome()
			<< " registrado com sucesso!" << endl;
	}

	noTmp = raiz;

	while(!registrado)
	{
		if (noTmp->paciente->getNome() > _p->getNome())
		{
			if (noTmp->noEsquerda == NULL)
			{
				noTmp->noEsquerda = new node();
				noTmp->noEsquerda->paciente = _p;
				registrado = true;
				cout << "Paciente " << _p->getNome()
					<< " registrado com sucesso!" << endl;
			} 
			else
			{	
				noTmp = noTmp->noEsquerda;
			}
			
		}

		else if (noTmp->paciente->getNome() < _p->getNome())
		{
			if (noTmp->noDireita == NULL)
			{
				noTmp->noDireita = new node();
				noTmp->noDireita->paciente = _p;
				registrado = true;
				cout << "Paciente " << _p->getNome()
					<< " registrado com sucesso!" << endl;
			} 
			else
			{	
				noTmp = noTmp->noDireita;
			}
		}
		else
		{
			throw PacienteJaExiste();
		}
	}
}

		
template <class P>
node_t* Arvore<P>::operator()(string _nome)
{
	stack <node_t*> pilha;
	node_t * noTmp;

	noTmp = raiz;
	pilha.push(noTmp);

	while(!pilha.empty())
	{
		noTmp = pilha.top();
		pilha.pop();
		
		if (noTmp->paciente->getNome() == _nome)
			return noTmp;

		if(noTmp->noDireita != NULL)
			pilha.push(noTmp->noDireita);
		if(noTmp->noEsquerda != NULL)
			pilha.push(noTmp->noEsquerda);	
	}

	throw PacienteNaoExiste();

	return NULL;
}

template class Arvore<PacienteBase>;

