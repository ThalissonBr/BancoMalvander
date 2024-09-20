#include "funcoes.h"

void Cadastra_CP(){
	Conta_Poupanca conta;
	FILE* arquivo;
	
	arquivo = fopen("Conta_Poupanca.txt", "ab");
	
		if(arquivo == NULL) {
				printf("Arquivo não encontrado ou inexistente!");
			}
			else
			{
				printf("\tInsira as informações do cliente abaixo");
		fflush(stdin);
				printf("\n1.Nome completo: ");
					gets(conta.nome);
		fflush(stdin);
				printf("\n2.Data de nascimento (DD/MM/AAAA): ");
					scanf("%d %d %d", &conta.data_de_nascimento.dia, &conta.data_de_nascimento.mes, &conta.data_de_nascimento.ano);
		fflush(stdin);
				printf("\n3.CPF do cliente: ");
					gets(conta.cpf);
		fflush(stdin);
				printf("\n4.Endereco do cliente: ");
				printf("\nCEP:");
					scanf("%d", &conta.endereco.cep);
		fflush(stdin);
				printf("\nRua: ");
					gets(conta.endereco.rua);
		fflush(stdin);
				printf("\nNumero da casa: ");
					scanf("%d", &conta.endereco.numero_da_casa);
		fflush(stdin);
				printf("\nBairro: ");
					gets(conta.endereco.bairro);
		fflush(stdin);
				printf("\nCidade: ");
					gets(conta.endereco.cidade);
		fflush(stdin);
				printf("\nEstado: ");
					gets(conta.endereco.estado);
		fflush(stdin);
				printf("\n5.Numero da conta: ");
					scanf("%d", &conta.numero_da_conta);
		fflush(stdin);
				printf("\n6.Telefone de contato (modelo -> XXXXXXXXXXX): ");
					gets(conta.telefone);
		fflush(stdin);
				printf("\n7.Senha do cliente (Senha numérica): ");  
					scanf("%d", &conta.senha);
					
				strcpy(conta.tipo_conta, "Conta Poupança (CP)");	
				conta.saldo = 0.00;
				conta.agencia = 20301;
			}
		fwrite(&conta,sizeof(Conta_Poupanca), 1,arquivo);
			fclose(arquivo);
		Sleep(750);
		system("cls");
			printf("Conta cadastrada com sucesso! \n");			
		getch();
		system("cls");
}
void Cadastra_CC(){
	Conta_Corrente conta;
	FILE* arquivo;
	
	arquivo = fopen("Conta_Corrente.txt", "ab");
	
	if(arquivo == NULL) {
				printf("Arquivo não encontrado ou inexistente!");
			}
			else
			{
				printf("\tInsira as informações do cliente abaixo");
		fflush(stdin);
				printf("\n1.Nome completo: ");
					gets(conta.nome);
		fflush(stdin);
				printf("\n2.Data de nascimento (DD/MM/AAAA): ");
					scanf("%d %d %d", &conta.data_de_nascimento.dia, &conta.data_de_nascimento.mes, &conta.data_de_nascimento.ano);
		fflush(stdin);
				printf("\n3.CPF do cliente: ");
					gets(conta.cpf);
		fflush(stdin);
				printf("\n4.Endereco do cliente: ");
				printf("\nCEP:");
					scanf("%d", &conta.endereco.cep);
		fflush(stdin);
				printf("\nRua: ");
					gets(conta.endereco.rua);
		fflush(stdin);
				printf("\nNumero da casa: ");
					scanf("%d", &conta.endereco.numero_da_casa);
		fflush(stdin);
				printf("\nBairro: ");
					gets(conta.endereco.bairro);
		fflush(stdin);
				printf("\nCidade: ");
					gets(conta.endereco.cidade);
		fflush(stdin);
				printf("\nEstado: ");
					gets(conta.endereco.estado);
		fflush(stdin);
				printf("\n5.Limite da conta: ");
					scanf("%f", &conta.limite_da_conta);
		fflush(stdin);
				printf("\n6.Data de vencimento (DD/MM/AAAA): ");
					scanf("%d %d %d" ,&conta.data_de_vencimento.dia, &conta.data_de_vencimento.mes, &conta.data_de_vencimento.ano);					
		fflush(stdin);
				printf("\n7.Numero da conta: ");
					scanf("%d", &conta.numero_da_conta);
		fflush(stdin);
				printf("\n8.Telefone de contato: ");
					gets(conta.telefone);
		fflush(stdin);
				printf("\n9.Senha do cliente (Senha numérica): ");  
					scanf("%d", &conta.senha);
					
				strcpy(conta.tipo_conta, "Conta Corrente (CC)");
				conta.saldo = 0.00;
				conta.agencia = 20301;
			}
			
		fwrite(&conta,sizeof(Conta_Corrente), 1,arquivo);
			fclose(arquivo);
		Sleep(750);
		system("cls");
			printf("Conta cadastrada com sucesso! \n");			
		getch();
		system("cls");
}
void CadastraFuncionario(){
	Cadastro_Funcionario cadastro;
	FILE* arquivo_funcionario;
	
	arquivo_funcionario = fopen("Cadastro_Funcionario.txt", "ab");
	
	if(arquivo_funcionario==NULL) printf("Arquivo não encontrado ou inexistente.");
	else
	{
		system("cls");
				printf("\tInsira as informações do funcionário abaixo");
		fflush(stdin);
				printf("\n1.Código do funcionário: ");
					scanf("%d",&cadastro.codigo_funcionario);
		fflush(stdin);
				printf("\n2.Cargo: ");
					gets(cadastro.cargo);
		fflush(stdin);
				printf("\n3.CPF do funcionário: ");
					gets(cadastro.cpf);
		fflush(stdin);
				printf("\n4.Nome completo: ");
					gets(cadastro.nome);
		fflush(stdin);
				printf("\n5.Data de nascimento (DD/MM/AAAA): ");
					scanf("%d %d %d",&cadastro.data_nascimento.dia,&cadastro.data_nascimento.mes,&cadastro.data_nascimento.ano);
		fflush(stdin);
				printf("\n6.Telefone: ");
					gets(cadastro.telefone);
		fflush(stdin);
				printf("\n7.Endereco do funcionário: ");
				printf("\nCEP:");
					scanf("%d",&cadastro.endereco.cep);
		fflush(stdin);
				printf("\nRua: ");
					gets(cadastro.endereco.rua);
		fflush(stdin);
				printf("\nNumero da casa: ");
					scanf("%d",&cadastro.endereco.numero_da_casa);
		fflush(stdin);
				printf("\nBairro: ");
					gets(cadastro.endereco.bairro);
		fflush(stdin);
				printf("\nCidade: ");
					gets(cadastro.endereco.cidade);
		fflush(stdin);
				printf("\nEstado: ");
					gets(cadastro.endereco.estado);
		fflush(stdin);
				printf("\n8.Digite a senha: ");
					scanf("%d",&cadastro.senha);
										
		fwrite(&cadastro,sizeof(Cadastro_Funcionario),1,arquivo_funcionario);
			fclose(arquivo_funcionario);
		Sleep(750);
		system("cls");
			printf("Funcionário cadastrado com sucesso! \n");			
		system("pause");
		system("cls");
	}
}
void ConsultaFuncionario(){
	char nome[50];
	Cadastro_Funcionario cadastro;
	FILE* arquivo;
	
	arquivo = fopen("Cadastro_Funcionario.txt", "r");
	
	system("cls");
		fflush(stdin);
		printf("Digite o nome do funcionário: ");
		gets(nome);
	
	while(fread(&cadastro,sizeof(struct Cadastro_Funcionario),1,arquivo)==1){
		if(strcmp(nome,cadastro.nome)==0)
		{
			system("cls");
			printf("Dados do Funcionário\n======================================#");
			printf("\nCódigo do funcionário: %d",cadastro.codigo_funcionario);
			printf("\nCargo ocupado: %s",cadastro.cargo);
			printf("\nNome: %s",cadastro.nome);
			printf("\nCPF: %s",cadastro.cpf);
			printf("\nData de nascimento: %d/%d/%d",cadastro.data_nascimento.dia,cadastro.data_nascimento.mes,cadastro.data_nascimento.ano);
			printf("\nTelefone: %s",cadastro.telefone);
			printf("\n\nEndereço  \n======================================#");
			printf("\nEstado: %s",cadastro.endereco.estado);
			printf("\nCidade: %s",cadastro.endereco.cidade);
			printf("\nBairro: %s",cadastro.endereco.bairro);
			printf("\nRua: %s",cadastro.endereco.rua);
			printf("\nCEP: %d",cadastro.endereco.cep);
			printf("\nNúmero da casa: %d",cadastro.endereco.numero_da_casa);
			printf("\n======================================#");
			
		}
		else {printf("Funcionário não encontrado!");}
	}
	
	fclose(arquivo);
	getch();
}
void Consulta_Conta(){
	Conta_Poupanca conta_cp;
	Conta_Corrente conta_cc;
	FILE* arquivo_cp;
	FILE* arquivo_cc;
	char nome[50];
	int controle=0;
	
	arquivo_cp = fopen("Conta_Poupanca.txt", "r");
	
	if(arquivo_cp==NULL){
		printf("Arquivo não encontrado ou inexistente.");
		controle = 1;
	}	
	else
	{
		fflush(stdin);
		printf("Digite o nome do cliente: ");
		gets(nome);
		system("cls");
		
		while(fread(&conta_cp,sizeof(struct Conta_Poupanca),1,arquivo_cp)==1)
		{
			if(strcmp(nome,conta_cp.nome)==0)
			{
					printf("\n==========Dados da Conta==========#");
					printf("\nTipo da conta: %s",conta_cp.tipo_conta);
					printf("\nNome do titular: %s",conta_cp.nome);
					printf("\nCPF: %s",conta_cp.cpf);
					printf("\nAgência: %d",conta_cp.agencia);
					printf("\nNúmero da conta: %d",conta_cp.numero_da_conta);
					printf("\nSaldo disponível: R$%.2f",conta_cp.saldo);
					printf("\n==================================#\n");
					
					controle = 1;
			}
			
		}
	}
	
	fclose(arquivo_cp);

			arquivo_cc = fopen("Conta_Corrente.txt","r");
			
		if(arquivo_cc==NULL){
			printf("Arquivo não encontrado ou inexistente.");
		}
			else
			{
				while(fread(&conta_cc,sizeof(struct Conta_Corrente),1,arquivo_cc)==1)
				{
					if(strcmp(nome,conta_cc.nome)==0)
					{
					printf("\n==========Dados da Conta==========#");
					printf("\nTipo da conta: %s",conta_cc.tipo_conta);
					printf("\nNome do titular: %s",conta_cc.nome);
					printf("\nCPF: %s",conta_cc.cpf);
					printf("\nAgência: %d",conta_cc.agencia);
					printf("\nNúmero da conta: %d",conta_cc.numero_da_conta);
					printf("\nSaldo disponível: R$%.2f",conta_cc.saldo);
					printf("\nLimite da conta: R$%.2f",conta_cc.limite_da_conta);
					printf("\nData de vencimento: %d/%d/%d", conta_cc.data_de_vencimento.dia,conta_cc.data_de_vencimento.mes,conta_cc.data_de_vencimento.ano);
					printf("\n==================================#");
					
						controle = 1;
					}
					
				}
			}	
		
	if(controle!=1) 
	printf("Cliente não encontrado.");
		
	fclose(arquivo_cc);
	getch();
}
void ConsultaCliente(){
	FILE* arquivo_cp;
	FILE* arquivo_cc;
	Conta_Poupanca conta_cp;
	Conta_Corrente conta_cc;
	char nome[50];
	int controle,controle_1=0;
	
	arquivo_cp = fopen("Conta_Poupanca.txt", "r");
	
	if(arquivo_cp==NULL){
		printf("Arquivo não encontrado ou inexistente.");
	}
	else
	{
		fflush(stdin);
		printf("Digite o nome do cliente: ");
		gets(nome);
		
		while(fread(&conta_cp,sizeof(struct Conta_Poupanca),1,arquivo_cp)==1)
		{
			if(strcmp(nome,conta_cp.nome)==0)
			{
					system("cls");
					printf("Dados do Cliente\n======================================#");
					printf("\nNome: %s",conta_cp.nome);
					printf("\nCPF: %s",conta_cp.cpf);
					printf("\nData de nascimento: %d/%d/%d",conta_cp.data_de_nascimento.dia,conta_cp.data_de_nascimento.mes,conta_cp.data_de_nascimento.ano);
					printf("\nTelefone: %s",conta_cp.telefone);
					printf("\n\nEndereço  \n======================================#");
					printf("\nEstado: %s",conta_cp.endereco.estado);
					printf("\nCidade: %s",conta_cp.endereco.cidade);
					printf("\nBairro: %s",conta_cp.endereco.bairro);
					printf("\nRua: %s",conta_cp.endereco.rua);
					printf("\nCEP: %d",conta_cp.endereco.cep);
					printf("\nNúmero da casa: %d",conta_cp.endereco.numero_da_casa);
					printf("\n======================================#");
					
					controle_1 = 1;
			}
				else 
				controle = 0;
		}
	}
	fclose(arquivo_cp);
	
		if(controle==0)
		{
			arquivo_cc = fopen("Conta_Corrente.txt","r");
			
		if(arquivo_cc==NULL){
			printf("Arquivo não encontrado ou inexistente.");
		}
			else
			{
				while(fread(&conta_cc,sizeof(struct Conta_Corrente),1,arquivo_cc)==1)
				{
					if(strcmp(nome,conta_cc.nome)==0)
					{
						system("cls");
						printf("Dados do Cliente\n======================================#");
						printf("\nNome: %s",conta_cc.nome);
						printf("\nCPF: %s",conta_cc.cpf);
						printf("\nData de nascimento: %d/%d/%d",conta_cc.data_de_nascimento.dia,conta_cc.data_de_nascimento.mes,conta_cc.data_de_nascimento.ano);
						printf("\nTelefone: %s",conta_cc.telefone);
						printf("\n\nEndereço  \n======================================#");
						printf("\nEstado: %s",conta_cc.endereco.estado);
						printf("\nCidade: %s",conta_cc.endereco.cidade);
						printf("\nBairro: %s",conta_cc.endereco.bairro);
						printf("\nRua: %s",conta_cc.endereco.rua);
						printf("\nCEP: %d",conta_cc.endereco.cep);
						printf("\nNúmero da casa: %d",conta_cc.endereco.numero_da_casa);
						printf("\n======================================#");
						
						controle_1 = 1;
					}
				}
			}	
		}
		if(controle_1 != 1) printf("Cliente não encontrado.");
		
		fclose(arquivo_cc);
		
	getch();
}
void EncerramentoConta_CP(){
	FILE* arquivo;
	FILE* encerramento;
	char nome[50];
	Conta_Poupanca conta;
	
	system("cls");
	arquivo = fopen("Conta_Poupanca.txt", "r");
	encerramento = fopen("Encerramento.txt", "ab");
	
	if(arquivo==NULL || encerramento==NULL){
		printf("Arquivo não encontrado ou inexistente.");
	}
	else
	{
		fflush(stdin);
		printf("Digite o nome do titular da conta: ");
		gets(nome);
	
		while(!feof(arquivo))
		{
			system("cls");
			fread(&conta,sizeof(struct Conta_Poupanca),1,arquivo);
			if(strcmp(nome,conta.nome))
			{
			fwrite(&conta,sizeof(struct Conta_Poupanca),1,encerramento);
			}
		}
	
	}
	
	printf("Conta encerrada com sucesso!");
	fclose(arquivo);
	fclose(encerramento);
	remove("Conta_Poupanca.txt");
	rename("Encerramento.txt","Conta_Poupanca.txt");
	getch();
	system("cls");
}
void EncerramentoConta_CC(){
	FILE* arquivo;
	FILE* encerramento;
	char nome[50];
	Conta_Corrente conta;
	
	system("cls");
	arquivo = fopen("Conta_Corrente.txt", "r");
	encerramento = fopen("Encerramento.txt", "ab");
	
	if(arquivo==NULL || encerramento==NULL){
		printf("Arquivo não encontrado ou inexistente.");
	}
	else
	{
		fflush(stdin);
		printf("Digite o nome do titular da conta: ");
		gets(nome);
	
		while(!feof(arquivo))
		{
			system("cls");
			fread(&conta,sizeof(struct Conta_Corrente),1,arquivo);
			if(strcmp(nome,conta.nome))
			{
			fwrite(&conta,sizeof(struct Conta_Corrente),1,encerramento);
			}
		}
	
	}
	
	printf("Conta encerrada com sucesso!");
	fclose(arquivo);
	fclose(encerramento);
	remove("Conta_Corrente.txt");
	rename("Encerramento.txt","Conta_Corrente.txt");
	getch();
	system("cls");
}
void MenuEncerramento(){
	int option;
	
	system("cls");
	do{
		printf("\n======================================#");
		printf("\nDigite o tipo de conta a ser encerrada:");
		printf("\n1.Conta Poupança. \n2.Conta Corrente. \n3.Voltar.");
		printf("\n======================================#");
		printf("\nOpção selecionada: ");
		scanf("%d",&option);
		
		switch(option){
			case 1:
				EncerramentoConta_CP(); 
				break;
			case 2:
				EncerramentoConta_CC();
				break;
			default:
				if(option!=3){
					system("cls");
					printf("Opção Inválida!");
					getch();
				}
				system("cls");
				break;
		}
	}while(option<3);
}
void AlteraDados(){//Não funciona
	Conta_Poupanca conta_cp;
	Conta_Corrente conta_cc, conta_cc2;
	FILE* arquivo;
	char nome[50];
	int option;
	
	system("cls");
	do{
		printf("\n======================================#");
		printf("\nQuais dados deseja alterar:");
		printf("\n1.Dados do Cliente. \n2.Dados do Funcionário. \n3Voltar.");
		printf("\n======================================#");
		printf("\nOpção selecionada: ");
		scanf("%d",&option);
		
		switch(option){
			case 1:	
				system("cls");	
			//	Altera_CP();		
				break;
			case 2:
				EncerramentoConta_CC();
				break;
			default:
				if(option!=2){
					system("cls");
					printf("Opção Inválida!");
					getch();
				}
				system("cls");
				break;
		}
	}while(option<2);
	
	
}
void Relatorio(){
	char relatorio[100] = "start excel.exe Relatorio.xlsx";
	system(relatorio);
	printf("Relatório gerado com sucesso!");
	getch();
	system("cls");
}
void Extrato(){
	char extrato[100] = "start excel.exe Extrato.xlsx";
	system(extrato);
	printf("Extrato gerado com sucesso!");
	getch();
	system("cls");
}

