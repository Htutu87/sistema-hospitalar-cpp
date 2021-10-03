
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
