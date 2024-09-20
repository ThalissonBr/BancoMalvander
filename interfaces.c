#include "funcoes.h"
void Color(){
	int i=1;
	
	for(i = 1; i<10; i++){
		system("color 1");
		Sleep(75);
		system("color 2");
		Sleep(75);
		system("color 3");
		Sleep(75);
		system("color 4");
		Sleep(75);
		system("color 5");
		Sleep(75);
		system("color 6");
		Sleep(75);
		system("color 7");
		Sleep(75);		
	}
}
void exibirLogo() {
	printf("#################################################\n");
	printf("#                                               #\n");
	printf("#        Bem-vindo ao Banco Malvader!           #\n");
	printf("#                                               #\n");
	printf("#################################################\n");
}
void exibirMenuPrincipal() {
	Color();
	system("cls");
	system("color f");
	printf("================================================#\n");
	printf("\t\t  Menu Principal                #\n");
	printf("================================================#\n");
	printf("1. Funcionario                                  #\n");
	printf("2. Cliente                                      #\n");
	printf("3. Sair                                         #\n");
	printf("================================================#\n");
	printf("Opcao selecionada: ");
}
void exibirMenuFuncionario() {
	printf("================================================");
	printf("\n\t\tMenu do Funcionario            #\n");
	printf("================================================\n");
	printf("1. Abertura de Conta                           #\n");
	printf("2. Encerramento de Conta                       #\n");
	printf("3. Consultar Dados                             #\n");
	printf("4. Alterar Dados                               #\n");
	printf("5. Cadastro de Funcionarios                    #\n");
	printf("6. Gerar Relatorios                            #\n");
	printf("7. Voltar                                      #\n");
	printf("================================================\n");
	printf("Opcao selecionada: ");
}
void exibirMenuCliente() {
	printf("===============================================");
	printf("\n\t\tMenu do Cliente               #\n");
	printf("===============================================\n");
	printf("1. Saldo                                      #\n");
	printf("2. Deposito                                   #\n");
	printf("3. Saque                                      #\n");
	printf("4. Extrato                                    #\n");
	printf("5. Consultar Limite                           #\n");
	printf("6. Sair                                       #\n");
	printf("===============================================\n");
	printf("Opcao selecionada: ");
}
void MenuFuncionario(){ // Interface apresentada para o FuncionÃ¡rio
		int option, senha_funcionario, senha_admin;
		int conta_encerramento;

				system("cls");
				printf("Digite a senha: ");//Registro senha funcionario
				scanf("%d",&senha_funcionario);
				// VerificaÃ§Ã£o da senha do funcionÃ¡rio
				if (senha_funcionario == 0) {
					system("cls");
					do {
						exibirMenuFuncionario();
						scanf("%d", &option);
						switch (option) { // OpÃ§Ãµes do menu do funcionÃ¡rio
							case 1: { // Abertura de conta
								system("cls");
								printf("======================================#");
								printf("\n1.Conta poupanca - CP. \n2.Conta corrente - CC. \n3.Voltar.");
								printf("\n======================================#");
								printf("\nOpção selecionada: ");
								scanf("%d", &option);
								system("cls");

								switch (option) { // Abertura de Contas
									case 1:  // Criação de Conta Poupança
										Cadastra_CP(); 
										break;
									
									case 2:  // Criação de Conta Corrente
										Cadastra_CC();
										break;
									
									default:
										if (option > 3 && option < 1) {
											printf("Opcao invalida!\n");
											sleep(2);
										}
										system("cls");
										break;
								}
								break;
							}
							case 2: { // Encerramento de conta
								system("cls");
								printf("\n\t||Encerramento de conta||\n");
								printf("\nDigite a senha de administrador: ");
								scanf("%d", &senha_admin);
								system("cls");
								if (senha_admin == 1) { // ManipulaÃ§Ã£o de arquivos
									MenuEncerramento();
								} else {
									printf("Senha incorreta!\n");
									sleep(2);
									system("cls");
								}
								break;
							}
							case 3: { // Consulta de dados
								system("cls");
								do {
									system("cls");
									printf("======================================#");
									printf("\n1.Consultar Conta. \n2.Consultar Dados do Funcionario. \n3.Consultar Dados do Cliente. \n4.Voltar.");
									printf("\n======================================#");
									printf("\nOpção selecionada: ");
									scanf("%d", &option);
									system("cls");

									switch (option) { // ManipulaÃ§Ã£o de strings
										case 1: {
											Consulta_Conta();
											break;
										}
										case 2: 
											ConsultaFuncionario();
											break;
										
										case 3: {
											ConsultaCliente();
											break;
										}
										default:
											if (option > 4) {
												printf("Opcao invalida!\n");
												sleep(2);
											}
											system("cls");
											break;
									}
								} while (option != 4);
								break;
							}
							case 4: { // Alterar Dados
								system("cls");
								do {
									printf("Digite a senha de administrador: "); // VerificaÃ§Ã£o da senha de ADM
									scanf("%d", &senha_admin);
									if (senha_admin == 1) {
										AlteraDados();
									} else {
										printf("Senha incorreta!!\n");
										sleep(3);
										system("cls");
									}
								} while (option != 4);
								break;
							}
							case 5: { // Cadastro de Funcionario
								system("cls");
								printf("\nDigite a senha de administrador: ");
								scanf("%d", &senha_admin);
								system("cls");
								if (senha_admin == 1) {
									printf("\t||Cadastrar novo funcionario|| ");
									printf("\n\nDigite a senha de administrador novamente: ");
									scanf("%d", &senha_admin);
									if(senha_admin==1) { //Registro de novo funcionario
										CadastraFuncionario();
									} else {
										printf("Senha incorreta!!\n");
										sleep(3);
										system("cls");
									}
								} else {
									printf("Senha incorreta!!\n");
									sleep(3);
									system("cls");
								}
								break;
							}
							case 6: { // Gerar RelatÃ³rios
								system("cls");
								printf("\n\t||Gerar Relatorios||\n");
								printf("\nRelatorio Geral\n");
								printf("\nDigite a senha de funcionario: ");
								scanf("%d",&senha_funcionario);
								if(senha_funcionario==0) {
									system("cls");
									Relatorio(); //Aplicar aÃ§Ã£o necessaria
									sleep(3);
								} else {
									printf("Senha incorreta!!");
									sleep(3);
									system("cls");
								}
								break;
							}
							default:
								if (option>7 || option<=0) {
									printf("Opcao invalida!\n");
									sleep(3);
								}
								system("cls");
								break;
						}
					} while (option != 7);
				} else {
					system("cls");
					printf("\nSenha incorreta!\n");
					sleep(3);
				}
			}
