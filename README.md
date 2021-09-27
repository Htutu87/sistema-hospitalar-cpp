
---------------------------------
| classe Cadastro 				|	
---------------------------------
								
Classes:						
-----------						
								
- Cadastro						
- Arvore (classe template)		
- PacienteBase					
	|_>Paciente					
								
Obs.:							
* Cadastro "tem uma" Árvore		
	 (Composição de classes).	
* Árvore "tem um" paciente.		
* Paciente é um PacienteBase 	
	(Herança).					
---------------------------------

Operadores:
------------

- Inserção de pacientes:
	- arvore += paciente
	- implementado na classe
template arvore.
	- Retorna ponteiro para o nó
inserido ou NULL na falha.
	- Não é permitido inserir dois
pacientes com o mesmo nome.

- Busca de paciente por nome:
	- arvore("nome")
	- Retorna um ponteiro para o
elemento encontrado ou NULL na 

- Imprimir arvore:
	- método imprime();
	- sobrecarga do operador <<
	- cout << arvore;
	- cout << paciente;

Herança
--------

PacienteBase
	- nome
	- idade
	- sexo
	- operator << (PURAMENTE VIRTUAL)
	OBS: NÃO TEM COMO, tem que ser global (cout é o lvalue) 

PacienteDiabetes
	- double glicemia;

PacienteHipertensao
	- double pressaoArterial;

PacienteCancer
	- string tipoCancer;

Exceção
--------

Busca e inserção podem retornar NULL, o que indica
uma exceção a ser tratada na main. Quando forem
pegas, usarão o método what da classe abstrata exception(); 
	


