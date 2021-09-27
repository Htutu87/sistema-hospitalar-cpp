
#include "../include/paciente.h"

// ----------------------
// Paciente Base 

PacienteBase::PacienteBase(string _nome, unsigned _idade, bool _sexo)
{
	nome = _nome;
	idade = _idade;
	sexo = _sexo;
}

string PacienteBase::getNome() {
	return nome;
}

unsigned PacienteBase::getIdade(){
	return idade;
}

bool PacienteBase::getSexo(){
	return sexo;
}

// ---------------------
// Paciente Diabtes

PacienteDiabetes::PacienteDiabetes(string _nome, unsigned _idade,
 bool _sexo, double _glicemia) : PacienteBase(_nome, _idade, _sexo)
{
	glicemia = _glicemia;
}

/*
ostream & operator<<(ostream & _cout, PacienteDiabetes _p)
{
	_cout << "---\nFicha do paciente:\n" << endl;
	_cout << "Nome: " << _p.getNome() << "." << endl;
	_cout << "Idade: " << _p.getIdade() << "anos." << endl;
	_cout << "Sexo: " << (_p.getSexo() ? "Feminino" : "Masculino.") << endl;
	_cout << "---" << endl;

	return _cout;
}*/

// ---------------------
// Paciente Hipertensao

PacienteHipertensao::PacienteHipertensao(string _nome, unsigned _idade, bool _sexo, double _pressaoArterial) : PacienteBase(_nome, _idade, _sexo)
{
	pressaoArterial = _pressaoArterial;
}

// ---------------------
// Paciente Cancer

PacienteCancer::PacienteCancer(string _nome, unsigned _idade,
 bool _sexo, string _tipoCancer) : PacienteBase(_nome, _idade, _sexo)
{
	tipoCancer = _tipoCancer;
}
