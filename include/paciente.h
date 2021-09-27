
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
		
		void mostrarDados() {cout << "Diabetes." << endl;}

	private:
		double glicemia;
};

class PacienteHipertensao : public PacienteBase
{
	public:
		PacienteHipertensao(string, unsigned, bool, double);
		void mostrarDados() {cout << "Hipertensao." << endl;}

	private:
		double pressaoArterial;
};

class PacienteCancer : public PacienteBase
{
	public:
		PacienteCancer(string, unsigned, bool, string);
		void mostrarDados() {cout << "Cancer." << endl;}

	private:
		string tipoCancer;
};

