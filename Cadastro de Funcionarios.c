#include<stdio>
#include<stdlib.h>
#include<conio.h>
#include<iostream> /* permite que o programa gere entrada e saida de dados na tela */
typedef struct Funcionario{
	char Nome_Funcionario[60];
	char Cargo_Funcionario[60];
	int Codigo_Funcionario;
	struct Funcionario* Proximo;
	};Funcionario;
	Funcionario *primeiro, *atual, *Novo_Funcionario;
	void GetFuncionario(){
		char temp[80];
		Novo_Funcionario=(Funcionario*)malloc(sizeof(Funcionnario));
		if(primeiro==(Funcionario *)NULL)
			primeiro=atual=Novo_Funcionario;
		else
			{
				atual=primeirio;
				while(atual->Proximo !=(Funcionario*)NULL)
				atual=atual->Proximo;
				atual->Proximo=Novo_Funcionario;
				atual=Novo_Funcionario;
			}
			printif("Digite o nome do funcionario: ");
			gets(atual->Nome_Funcionario);
			printf("Digite o cargo do funcionario: ");
			gets(atual->Cargo_Funcionario);
			printf("Digite o codigo do funcionario: ");
			gets(atual->Codigo_Funcionario);
	}
