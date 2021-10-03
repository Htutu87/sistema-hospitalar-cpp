// Universidade Federal do Rio de Janeiro
// EEL670 - Linguagens de Programção
// Prof.: Miguel Campista
// Exercício avaliado 04
// Autor: Artur Amaral | DRE: 119057968 | Agosto 2021

#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include "deps.h"

class PacienteNaoExiste : public exception {

	public:

		const char * what () const throw()
		{
			return "Paciente com este nome nao existe na arvore.";
		}

};


class PacienteJaExiste : public exception {

	public:

		const char * what () const throw()
		{
			return "Paciente com este nome ja existe na arvore.";
		}

};
#endif
