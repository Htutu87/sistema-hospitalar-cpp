
#include "deps.h"

class PacienteNaoExiste : public exception {

	public:

		const char * what () const throw()
		{
			return "Paciente com este nome nao existe na arvore.";
		}

};
