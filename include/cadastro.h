// Universidade Federal do Rio de Janeiro
// EEL670 - Linguagens de Programção
// Prof.: Miguel Campista
// Exercício avaliado 04
// Autor: Artur Amaral | DRE: 119057968 | Agosto 2021

#ifndef CADASTRO_H
#define CADASTRO_H

#include "arvore.h"

class Cadastro 
{
	public:
		Arvore<PacienteBase> getArvore()
		{
			return arvore;
		}

	private:
		Arvore<PacienteBase> arvore;

};

#endif
