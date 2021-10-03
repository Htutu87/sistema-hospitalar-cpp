// Universidade Federal do Rio de Janeiro
// EEL670 - Linguagens de Programção
// Prof.: Miguel Campista
// Exercício avaliado 04
// Autor: Artur Amaral | DRE: 119057968 | Agosto 2021

#include "../include/cadastro.h"

int main ()
{

	PacienteDiabetes p1("Artur", 20, MASCULINO, 133.6);
	PacienteHipertensao p2("Juliana", 30, FEMININO, 120.0);
	PacienteCancer p3("Marcos", 23, MASCULINO, "Pulmao");
	PacienteCancer p4("Jorge", 23, MASCULINO, "Pulmao");
	PacienteCancer p5("Jose", 23, MASCULINO, "Pulmao");
	PacienteHipertensao p6("Marcelo", 30, FEMININO, 120.0);
	PacienteDiabetes p7("Claudia", 20, MASCULINO, 133.6);
	PacienteCancer p8("Luis", 23, MASCULINO, "Pulmao");
	PacienteCancer p9("Rodrigo", 23, MASCULINO, "Pulmao");
	
	Cadastro cadastro;//Arvore <PacienteBase> cadastro.getArvore();

	cadastro.getArvore() += &p3;
	cadastro.getArvore() += &p1;
	cadastro.getArvore() += &p9;
	cadastro.getArvore() += &p4;
	cadastro.getArvore() += &p5;
	cadastro.getArvore() += &p6;
	cadastro.getArvore() += &p7;
	cadastro.getArvore() += &p8;
	//cadastro.getArvore() += &p9;

/*
	node_t* noTmp;

	cadastro.getArvore().raiz->paciente = &p1;

	cadastro.getArvore().raiz->noEsquerda = new node();
	cadastro.getArvore().raiz->noEsquerda->paciente = &p2;	
	
	cadastro.getArvore().raiz->noDireita = new node();
	cadastro.getArvore().raiz->noDireita->paciente = &p3;

	noTmp = cadastro.getArvore().raiz->noDireita;

	noTmp->noEsquerda = new node();
	noTmp->noEsquerda->paciente = &p4;	
	
	noTmp->noDireita = new node();
	noTmp->noDireita->paciente = &p5;

	noTmp = cadastro.getArvore().raiz->noEsquerda;

	noTmp->noEsquerda = new node();
	noTmp->noEsquerda->paciente = &p6;	
	
	noTmp->noDireita = new node();
	noTmp->noDireita->paciente = &p7;

	noTmp = noTmp->noEsquerda;

	noTmp->noEsquerda = new node();
	noTmp->noEsquerda->paciente = &p8;	
	
	noTmp->noDireita = new node();
	noTmp->noDireita->paciente = &p9;

*/

	cout << cadastro.getArvore();

//------------------------------------------------
// Teste Operador ()

	cout << "Teste operador '()'" << endl;

	string nome = "Luisa";
	node_t * n;

	try{
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
