// Universidade Federal do Rio de Janeiro
// EEL670 - Linguagens de Programção
// Prof.: Miguel Campista
// Exercício avaliado 04
// Autor: Artur Amaral | DRE: 119057968 | Agosto 2021

#include "../include/cadastro.h"

int main ()
{	
	string op;
	//---------------------------------------------------------------------------------
	// Criação de uma série de pacientes arbitrários, de diferentes classes derivadas.
	//
	PacienteDiabetes p1("Artur", 20, MASCULINO, 133.6);
	PacienteHipertensao p2("Juliana", 30, FEMININO, 150.0);
	PacienteCancer p3("Marcos", 23, MASCULINO, "Pulmao");
	PacienteCancer p4("Jorge", 23, MASCULINO, "Pele");
	PacienteCancer p5("Jose", 23, MASCULINO, "Pulmao");
	PacienteHipertensao p6("Marcelo", 30, FEMININO, 120.0);
	PacienteDiabetes p7("Claudia", 20, MASCULINO, 130.0);
	PacienteCancer p8("Luis", 23, MASCULINO, "Intestino");
	PacienteCancer p9("Rodrigo", 23, MASCULINO, "Pulmao");
	
	Cadastro cadastro; //Arvore <PacienteBase> cadastro.getArvore();

	//------------------------------------------------
	// Teste Operador +=
	// Todos os pacientes instanciados acima são inseridos na árvore template da classe cadastro.

	try
	{
		// A árvore recebe um ponteiro para objetos de classes derivada, uma vez que a intenção
		// é obter um comportamento polimórfico da árvore.
		//
		cadastro.getArvore() += &p1;
		cadastro.getArvore() += &p2;
		cadastro.getArvore() += &p3;
		cadastro.getArvore() += &p4;
		cadastro.getArvore() += &p5;
		cadastro.getArvore() += &p6;
		cadastro.getArvore() += &p7;
		cadastro.getArvore() += &p8;
		cadastro.getArvore() += &p9;
	
		cout << "Deseja, intencionalmente, inserir um paciente já existente? [s/n]: ";
		getline(cin, op);
		if (op == "s" || op == "S")
			cadastro.getArvore() += &p9;
	}
	catch(PacienteJaExiste & e)
	{
		cout << "Excecao disparada! " << endl;
		cout << "what(): " << e.what() << endl;
	}
	//------------------------------------------------
	// Teste Operador <<
	// Printa todos os elementos da árvore.

	cout << "Deseja printar todos os pacientes no cadastro? [s/n]: ";
	getline(cin, op);
	if (op == "s" || op == "S")
		cout << cadastro.getArvore();

	//------------------------------------------------
	// Teste Operador ()
	// Procura por um paciente que tem o nome que o usuário pediu.
	cout << "----\nTeste operador '()'" << endl;

	string nome;
	node_t * n;

	cout << "Insira um nome para buscar na arvore: ";
	getline(cin, nome);	

	try
	{
		n = cadastro.getArvore()(nome);
		n->paciente->mostrarDados();
	}
	catch(exception& p)
	{
		cout << "Excecao disparada! \nwhat(): ";
		cout << p.what() << endl;
	}

	return 0;
}
