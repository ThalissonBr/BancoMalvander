#include "funcoes.h"

int main() {
	exibirLogo();
	setlocale(LC_ALL, "Portuguese");
	int main_option, option, senha_usuario,senha_cliente,option_cliente;
	int conta_encerramento;
	float saque_cliente, saldo_cliente=50, valor_deposito;

	//senha cliente = 1
	//senha funcion�rio = 0
	//senha admin = 1


	do {
		exibirMenuPrincipal();
		scanf("%d", &main_option);

		switch (main_option) {
			case 1: 
				MenuFuncionario();
				system("cls");
				break;
			case 2: { //Interface apresentada para o Cliente
				system("cls");
				printf("Digite a senha: ");//Registro senha cliente
				scanf("%d",&senha_cliente);
				//Verificação da senha Cliente
				if(senha_cliente==1) {
					system("cls");
					do {
						exibirMenuCliente();
						scanf("%d",&option_cliente);
						switch(option_cliente) {
							case 1: { // Saldo
								system("cls");
								printf("\n\t||Verificacao de Saldo||\n");
								printf("\nDigite a senha do cliente: ");
								scanf("%d",&senha_cliente);
								if(senha_cliente==1) {
									system("cls");
									printf("\nSaldo atual: ");//Registro de Saldo
									sleep(3);
									system("cls");
								} else {
									system("cls");
									printf("\nSenha Incorreta!");
									sleep(3);
									system("cls");
								}
								break;
							}
							case 2: { // Deposito
								system("cls");
								printf("\n\t||Deposito||\n");
								printf("\nDigite o valor a ser depositado: R$ ");
								scanf("%f",&valor_deposito); //Valor tem que ser somado ao registro de saldo
								sleep(3);
								system("cls");
								printf("\nValores registrados no banco de dados!!");
								sleep(3);
								system("cls");
								break;
							}
							case 3: { // Saque
								system("cls");
								printf("\n\t||Saque||\n");
								printf("\nDigite a senha do cliente: ");
								scanf("%d",&senha_cliente);
								if(senha_cliente==1) {
									system("cls");
									printf("\n\t||Saque||\n");
									printf("\nInforme o valor do saque: R$");
									//valor do saldo em registro para a subtração de saque (saldo-saque)
									scanf("%f",&saque_cliente);
									system("cls");
									printf("\nValor sera debitado do saldo!!\n\n");
									if(saque_cliente>saldo_cliente) {
										system("cls");
										printf("\nO Valor do saque e maior que o valor do saldo!!\n");
										printf("\nO valor do saque deve ser menor que o valor do saldo, tente novamente!!");
									}
									sleep(3);
									system("cls");
								} else {
									printf("\nSenha incorreta!!");
									sleep(3);
									system("cls");
								}
								break;
							}
							case 4: { // Extrato
								system("cls");
								printf("\n\t||Extrato||\n\n");
								printf("Digite a senha do cliente: ");
								scanf("%d",&senha_cliente);
								if(senha_cliente==1) {
									system("cls");
									printf("\n\t||Extrato||\n\n");
									Extrato();// Registro de tela excel
									sleep(3);
									system("cls");
								} else {
									system("cls");
									printf("\nSenha incorreta!!");
									sleep(3);
									system("cls");
								}
								break;
									}
							case 5: { // Consultar limites
								system("cls");
								printf("\n\t||Consultar Limite||\n\n");
								printf("Digite a senha do cliente: ");
								scanf("%d",&senha_cliente);
								if(senha_cliente==1) {
									system("cls");
									printf("\n\t||Limites||\n\n");
									printf("Limite disponivel: R$ "); //Registro de limites
									printf("\nLimite indisponivel: R$"); // Registro de limites
									sleep(3);
									system("cls");
								} else {
									system("cls");
									printf("\nSenha incorreta!!");
									sleep(3);
									system("cls");
								}
								break;
							}
							default:
								if(option_cliente>6 || option_cliente<=0) {
									printf("Opcao invalida!!");
									sleep(3);}
									system("cls");
									break;
								
						}
					} while(option_cliente!=6);
				} else {
					system("cls");
					printf("\nSenha incorreta!!\n");
					sleep(3);
				}
				system("cls");
				break;
			}
			default:
				if (main_option > 3 || main_option < 1) {
					system("cls");
					printf("Opcao invalida!\n");
					sleep(3);
					system("cls");
				}
				break;
		}
	} while (main_option != 3);

	return 0;
}
