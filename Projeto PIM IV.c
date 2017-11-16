/*Pim IV
* Controle de Locação de Veículos
*Empresa: Legal Rent a Car
*
* Alunos:
* => Leandro
* => Luciano
* => Mariana
* => Will
*/

#include <stdio.h>    // Biblioteca Principal Para Entrada e Saída de Informação. 
#include <stdlib.h>   // Necessário para o comando 'system ("PAUSE");' por ser um comando externo não pertencente à Linguagem C.
#include <locale.h>   // Necessário para Realizar acentuação de Caracteres.
#include <conio.h>    // Necessário para a manupulação de Caracteres.
#include <math.h>     // Necessário para realização de Calculos Complexos.
#include <string.h>   // Necessário para Manipulação de strings(cadeia de Caracteres).


// Declaração de Funções
int MenuPrincipal (); // Menu Principal do Programa
int dados_cliente (); // Testa o Tipo de Cliente
int Funcionarios ();  // Controla os Funcionários
int Veiculos ();      // Controle de Veículos
int Agendamentos ();  // Controle de Agendamentos
int Voltar ();        // Volta ao Menu Principal


////////////////////// Bloco Principal //////////////////////////////////////////
int main()
{
	//Defini o Idioma do Sistema como Padrão para a Execução do Código
	setlocale(LC_ALL, "");

	//Declaração de Variáveis
	int cliente=0;
	int idade=0;
	char resp1=s;
	char Sim=s;

	while (resp1 != Sim) {

		fprintf(stdout);
		printf("Bem-Vindo à Legal Rent a Car\n");
		printf("****************************\n");
		printf("\n");
		printf("Você deseja fazer locação de veículo?\nDigite [s/n]: \n");
		scanf("%c", &resp1);

		if (resp1 == Sim){
			MenuPrincipal();
		}else{
			printf("Pressione Qualquer Tecla para Sair!\n");
			getche();
			break;
		}
	} // Fim do Loop Principal
	return 0;
} //Fim do Bloco Principal



////////////////////// Bloco de Sub Funções /////////////////////////////////////

////////////////////// Menu Principal ///////////////////////////////////////////
int MenuPrincipal () {

	fprintf(stdout);
	printf("Locação de Veículos\n");
	printf("\n");
	printf("[ 1 ] - Efetuar locação\n");
	printf("[ 2 ] - Controle de funcionários\n");
	printf("[ 3 ] - Controle de Veículos\n");
	printf("[ 4 ] - Controle de Agendamentos\n");
	printf("[ 5 ] - Encerrar Locação e Efetuar Pagamento\n");
	printf("[ 6 ] - Voltar\n");
	printf("\n\n");
	scanf("%d", &resp1);


	switch (resp1) // Menu Principal do Programa.
	{
		// Comando 1: Efetuar locação
		case 1:
		{
			dados_cliente ();
			break;

		}

		// Comando 2: Controle de funcionários
		case 2:
		{
			
			break;
		}


		// Comando 3: Controle de Veículos
		case 3:
		{
			
			break;
		}


		// Comando 4: Controle de Agendamentos
		case 4:
		{
			
			break;
		}


		// Comando 5: Encerrar Locção e Efetuar Pagamento
		case 5:
		{
			
			break;
		}
	} 

	return 0;
}



//////////////// Função 1 - Identifica o Tipo de Cliente /////////////////////////
// Cadastro do Cliente
int dados_cliente () {
	fprintf(stdout);
	printf("Qual é o tipo de cliente?\n");
	printf("\n");
	printf("[ 1 ] Empresa\n");
	printf("[ 2 ] Pessoa física\n");
	scanf("%d", &escolha);

	switch (escolha)

	case 1: {
		fprintf(stdout);
		printf("Cliente\n");
		printf("\n");
		printf("A Empresa é conveniada?\nDigite [s/n]: \n");
		scanf("%c" &resp1)
		if (resp1 == Sim){



		}

		else {

		}

	} // fim da Opção 1 (Empresa)

	case 2: {
		fprintf(stdout);
		printf("Cliente\n");
		printf("\n");

		idade=0;
		printf("Qual a Idade \n");
		scanf("%d", idade);

		if (idade >= 18) {
			fprintf(stdout);
			printf("Cliente Autorizado!\n");
		}

		else {
			fprintf(stdout);
			printf("Cliente Não Autorizado!\n");
			printf("Veiculos automotores não podem ser alugados para pessoas menores de 18 anos!\n");
		}

	} // fim da opção 2 (Pessoa Física)
	system("pause");
	return 0;
}


///////////////////////Função 2 Dados do Cliente //////////////////////////////////
int dados_cliente (); // Testa o Tipo de Cliente
{

} // Fim da Coleta de Dados dos Clientes


///////////////////////Função 3 Controle de Funcionários //////////////////////////
int Funcionarios ();  // Controla os Funcionários
{

} // Fim do Controle de Funcionários


///////////////////////Função 4 Controle de Veículos //////////////////////////////
int Veiculos ();      // Controle de Veículos
{

} // Fim do Controle de Veículos


/////////////////////Função 5 Agendamentos //////////////////////////////////////// 
int Agendamentos ();  // Controle de Agendamentos
{

} // Fim do Controle de Agendamentos


////////////////////Função 6 Voltar ao Menu Principal /////////////////////////////
int Voltar ();        // Volta ao Menu Principal
{

} // Fim da Função Voltar ao Menu Principal 
