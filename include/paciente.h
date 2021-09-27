#ifndef PACIENTE_H
#define PACIENTE_H

#include "deps.h"

class PacienteBase {

	public:
		PacienteBase(string, unsigned, bool); 
		void virtual mostrarDados() = 0;
	 	string getNome();
		unsigned getIdade();
		bool getSexo();

	private:
		string nome;
		unsigned idade;
		bool sexo;		
	
};

// Heranças públicas para manter as mesmas permissões de acesso
// fornecidas pela classe base.
//

class PacienteDiabetes : public PacienteBase
{
	public:
		PacienteDiabetes(string, unsigned, bool, double);
		void mostrarDados();
		friend ostream & operator<<(ostream &, PacienteDiabetes);
		double getGlicemia();	

	private:
		double glicemia;
};

class PacienteHipertensao : public PacienteBase
{
	public:
		PacienteHipertensao(string, unsigned, bool, double);
		void mostrarDados();
		friend ostream & operator<<(ostream &, PacienteHipertensao);
		double getPressaoArterial();	

	private:
		double pressaoArterial;
};

class PacienteCancer : public PacienteBase
{
	public:
		PacienteCancer(string, unsigned, bool, string);
		void mostrarDados();
		friend ostream & operator<<(ostream &, PacienteCancer);
		string getTipoCancer();	

	private:
		string tipoCancer;
};

#endif
