
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
// Paciente Diabetes

PacienteDiabetes::PacienteDiabetes(string _nome, unsigned _idade,
 bool _sexo, double _glicemia) : PacienteBase(_nome, _idade, _sexo)
{
	glicemia = _glicemia;
}

double PacienteDiabetes::getGlicemia(){
	return glicemia;
}

ostream & operator<<(ostream & _cout, PacienteDiabetes _p)
{

	_cout << "---\nFicha do paciente:\n" << endl;
	_cout << "Nome: " << _p.getNome() << "." << endl;
	_cout << "Idade: " << _p.getIdade() << " anos." << endl;
	_cout << "Sexo: " << (_p.getSexo() ? "Feminino" : "Masculino.") << endl;
	_cout << "Enfermidade: Diabetes." << endl;
	_cout << "Glicemia: " << _p.getGlicemia() <<" mg/dL." << endl; 
	_cout << "---" << endl;

	return _cout;
}

void PacienteDiabetes::mostrarDados(){
	cout << *this;
}

// ---------------------
// Paciente Hipertensao

PacienteHipertensao::PacienteHipertensao(string _nome, unsigned _idade, bool _sexo, double _pressaoArterial) : PacienteBase(_nome, _idade, _sexo)
{
	pressaoArterial = _pressaoArterial;
}

double PacienteHipertensao::getPressaoArterial() {
	return pressaoArterial;
}

ostream & operator<<(ostream & _cout, PacienteHipertensao _p)
{

	_cout << "---\nFicha do paciente:\n" << endl;
	_cout << "Nome: " << _p.getNome() << "." << endl;
	_cout << "Idade: " << _p.getIdade() << " anos." << endl;
	_cout << "Sexo: " << (_p.getSexo() ? "Feminino" : "Masculino.") << endl;
	_cout << "Enfermidade: Hipertensao." << endl;
	_cout << "Glicemia: " << _p.getPressaoArterial() << " mm Hg." << endl; 
	_cout << "---" << endl;

	return _cout;
}

void PacienteHipertensao::mostrarDados(){
	cout << *this;
}

// ---------------------
// Paciente Cancer

PacienteCancer::PacienteCancer(string _nome, unsigned _idade,
 bool _sexo, string _tipoCancer) : PacienteBase(_nome, _idade, _sexo)
{
	tipoCancer = _tipoCancer;
}

string PacienteCancer::getTipoCancer(){
	return tipoCancer;
}

ostream & operator<<(ostream & _cout, PacienteCancer _p)
{

	_cout << "---\nFicha do paciente:\n" << endl;
	_cout << "Nome: " << _p.getNome() << "." << endl;
	_cout << "Idade: " << _p.getIdade() << " anos." << endl;
	_cout << "Sexo: " << (_p.getSexo() ? "Feminino" : "Masculino.") << endl;
	_cout << "Enfermidade: Cancer." << endl;
	_cout << "Tipo: " << _p.getTipoCancer() << "." << endl; 
	_cout << "---" << endl;

	return _cout;
}

void PacienteCancer::mostrarDados(){
	cout << *this;
}
