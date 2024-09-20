#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<locale.h>
#include<unistd.h>
#include<windows.h>

struct Data {
	int dia;
	int mes;
	int ano;
};
struct Endereco {
	char bairro[40];
	char cidade[40];
	char rua[40];
	char estado[40];
	int numero_da_casa;
	long int cep;
};
struct Conta_Corrente {
	int agencia;
	char nome[50];
	int numero_da_conta;
	char cpf[11];
	float saldo;
	char telefone[11];
	struct Data data_de_nascimento;
	int senha;
	char tipo_conta[30];
	struct Endereco endereco;
	float limite_da_conta;
	struct Data data_de_vencimento;
};	
struct Conta_Poupanca{
	char nome[50];
	int agencia;
	int numero_da_conta;
	char cpf[11];
	float saldo;
	char telefone[11];
	struct Data data_de_nascimento;
	int senha;
	char tipo_conta[30];
	struct Endereco endereco;
};
struct Cadastro_Funcionario{
	char nome[50];
	char cargo[20];
	char telefone[11];
	int codigo_funcionario;
	char cpf[11];
	int senha;
	struct Data data_nascimento;
	struct Endereco endereco;
};
//Funções
void Cadastra_CC();
void Cadastra_CP();
void Consulta_Conta();
void Consulta_CC();
void CadastraFuncionario();
void ConsultaFuncionario();
void ConsultaCliente();
void MenuEncerramento();
void AlteraDados();
void Relatorio();
void Extrato();

//Interfaces
void exibirLogo();
void exibirMenuPrincipal();
void exibirMenuFuncionario();
void exibirMenuCliente();
void MenuFuncionario();
 #endif // FUNCOES_H_INCLUDED
