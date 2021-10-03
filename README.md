// Universidade Federal do Rio de Janeiro
// EEL670 - Linguagens de Programção
// Prof.: Miguel Campista
// Exercício avaliado 04
// Autor: Artur Amaral | DRE: 119057968 | Agosto 2021
-----------------------------------------------------

-- Descrição do programa --

	O presente programa consiste em um sistema de gerenciamento hospitalar em C++, que armazena os
dados dos pacientes em uma classe 'Cadastro', cuja estrutura de armazenamento de dados é uma árvore
binária. Esta árvore, por sua vez, é implementada como uma classe template, e instanciada no cadastro
como uma árvore da classe 'PacienteBase'.
	Como os objetos de pacientes podem apresentar diferentes conjuntos de atributos, utilizou-se a
técnica de herança, de forma que há três derivações da 'PacienteBase', que representam pacientes com
as doenças diabetes, hipertensão e câncer. 
	Já que a árvore que armazena os objetos paciente é um template instanciado com a base, sua 
implementação leva em conta que receberá ponteiros para as classes derivadas, dessa forma exibindo
um comportamento polimórfico.

	Por simplicidade (e um tanto de falta de tempo), não implementei um menu de interação com usuário.
A main deste programa basicamente executa as três funcionalidades básicas do cadastro (adicionar,
imprimir e buscar), e possui um mínimo de interação, quando necessário. Espero que esta main seja 
suficiente para comprovar o funcionamento das classes, da sobrecarga dos operadores, dos algoritmos
da árvore, das exceções, etc.

-- Compilando e executando --

Baixe o diretório do projeto na sua máquina. Através da linha de comando,
navegue até este diretório. Nele há um makefile para compilação dos códigos.

- Para gerar o executável digite no shell:
	- "make" ou "make sistema-hospitalar"
- Para deletar o executável e seus arquivos objeto digite no shell:
	- "make clean"
- O executavel é o arquivo "sistema-hospitalar"

