/*
CRIAR UM PROGRAMA QUE REALIZE O CADASTRO DE USUARIOS O PROGRAMA REALIZA AS SEGUINTES FUNCIONALIDADES:

1 - REALIZAR O CADASTRO DO USUARIO, CADA USUARIO POSSUIRÃ NOME, LOGIN, SENHA, EMAIL E IDADE, APENAS O ADM COM LOGIN E SENHA
"ADM" E "12345" PODERA REALIZAR CADASTRO 

2 - IMPLEMENTE UMA FUNÃ‡ÃƒO PARA REALIZAR A ATUALIZAÃ‡ÃƒO DE UM CADASTRO. ESSA FUNÃ‡ÃƒO SOMENTE PODERÃ SER FEITA PELO ADM OU PELO PROPRIO USER POR MEIO DE LOGIN E SENHA

3 - IMPLEMENTE UMA FUNÃ‡ÃƒO PARA IMPRIMIR TODOS OS USERS JUNTO COM TODAS AS SUAS INFOS.

4 - IMPLEMENTE UMA FUNÃ‡ÃƒO PARA DELETAR TODOS OS USUARIOS, APENAS O ADEMIRO PODERA REALIZAR ESSA AÃ‡ÃƒO

OBS: IMPLEMENTE A SOLUÃ‡ÃƒO USANDO ALOCAÃ‡ÃƒO DINAMICA A CADA 5 USUARIOS CADASTRADOS
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

//STRUCTS
typedef struct { //Struct do usuario
	char nome_user[20];
	char login_user[20];
	char senha_user[20];
	char email_user[50];
	int idade_user;
	
	char nome_user_updated[20];
	char login_user_updated[20];
	char senha_user_updated[20];
	char email_user_updated[50];
	int idade_user_updated;
}usuario;

//DECLARAÇÃO DE STRUCT
usuario cad_usuario[5];

//DECLARAÇÃO DE FUNÇÕES 
void realizar_cadastro();
void atualizar_dados();
void mostrar_usuarios();
void deletar_usuarios();

//CONTADORES GLOBAIS
int cont_usuario = 0;

main(){
  int escolha, escolha2, i=0;
  char login_adm[3], senha_adm[4];
	
  system ("color 17");
  system("title TELA INICIAL DO SISTEMA");
  setlocale (LC_ALL, "PORTUGUESE");

  do{
  	system("cls");
    printf (" [1] - LOGIN");
    printf("\n [0] - FINALIZAR PROGRAMA");
    
    printf("\n Escolha: ");
    scanf("\n%d", &escolha);

    switch (escolha){
	    case 1://	LOGIN ADM	
	      printf("\n LOGIN: ");
	      fflush(stdin);
	      gets(login_adm);
	
	      printf("\n SENHA: ");
	      fflush(stdin);
	      gets(senha_adm);
      
		  //tela de load
		  for(i=0; i<=100; i++){
		    system("cls");
		    printf("\nCARREGANDO... %d%%\n", i);
		    Sleep(5);
		  }
    
	    printf("\nCARREGAMENTO CONCLUÍDO!\n");
	    system("pause");

    if (strcmp(senha_adm, "12345") == 0 && strcmp(login_adm, "adm") == 0){	
        	
		do{
			system("cls");
			system("color 17");
	      	printf("\n BEM VINDO(A)! O QUE DESEJA FAZER?");
	      	printf("\n (1) - Realizar Cadastro de Usuário"); //"FEITO"
	      	printf("\n (2) - Atualizar Cadastro de Usuário"); //1/2 FEITO
	      	printf("\n (3) - Imprimir lista de usuários"); //FEITO
	      	printf("\n (4) - Deletar Base de Dados"); //1/2 FEITO
	      	printf("\n (0) - Voltar"); //FEITO
	      	printf("\n Escolha: ");
	      	scanf("%d", &escolha2);
	        	
	      	switch (escolha2){
	        	case 1:
	        		for(i=0; i<=50; i++){
					    system("cls");
					    printf("\nUM MOMENTO... %d%%\n", i);
					    Sleep(1);
				  	}
				  	
				  	for(i=50; i<=100; i++){
						system("cls");
						printf("\nCARREGANDO TELA DE CADASTRO DE USUÁRIOS... %d%%\n", i);
						Sleep(2);
		  			}
		        	realizar_cadastro();
		        	break;
	        		
		        case 2:
		        	atualizar_dados();
		        	break;
	        			
		        case 3:
		        	mostrar_usuarios();
		        	break;
	        			
		        case 4:
		        	deletar_usuarios();
		        	break;
	        				
		        case 0:
		        	printf("\nSaindo...");
		        	escolha2 = 0;
		        	break;
	        				
		        default:
		        	printf("\nOpcao Invalida!\n");
		        	break;	
			}
			system("pause");
		}while(escolha2 !=0);

    }else{
      printf("\n Senha ou usuario incorreto!\n");
      escolha = 9;	//forçar saída do do-while
    }
    
    break;

  case 0: // sair do sistema
    printf("\nAte mais!");
    break;
  
  default:
    printf("\nOpcao Invalida!\n");
    break;
  }
  system("pause");
  } while (escolha !=0);
}



//FUNÇÕES

void realizar_cadastro(){
	
	system("cls");
	system("color 17");
	system("title ********** SEÇÃO DE CADASTRO DE USUÁRIOS **********");
	
	if(cont_usuario == 5){
		printf("\nNúmero máximo de cadastros atingidos!\n");
	}else{
		printf("\n BEM VINDO(A)!\n");
		
		printf("\n Informe o nome do usuário: ");
		fflush(stdin);
		gets(cad_usuario[cont_usuario].nome_user);
		
		printf("\n Informe o login do usuário: ");
		fflush(stdin);
		gets(cad_usuario[cont_usuario].login_user);
		
		printf("\n Informe a senha do usuário: ");
		fflush(stdin);
		gets(cad_usuario[cont_usuario].senha_user);
		
		printf("\n Informe o email do usuário: ");
		fflush(stdin);
		gets(cad_usuario[cont_usuario].email_user);
		
		printf("\n Informe a idade do usuário: ");
		scanf("%d",&cad_usuario[cont_usuario].idade_user);
		
		printf("\nCADASTRO REALIZADO COM SUCESSO!\n");
		cont_usuario++;
	}
}

void atualizar_dados(){
	system("cls");
	system("title ********** SEÇÃO DE ATUALIZAÇÃO DE DADOS **********");
	
	if(cont_usuario == 0){
		printf("\nNão existem usuários cadastrados ainda!\n");
	}else{
		//ATUALIZAR DADOS
	}
}

void mostrar_usuarios(){
	int i=0;
	
	system("cls");
	system("title ********** LISTA DE USUARIOS CADASTRADOS **********");
	
	if(cont_usuario > 0){
		for(i=0; i<cont_usuario; i++){
			printf("\nNOME: %s", cad_usuario[i].nome_user);
			printf("\nIDADE: %d", cad_usuario[i].idade_user);
			printf("\nE-MAIL: %s\n", cad_usuario[i].email_user);
			
			//OS DADOS MAIS SENSÍVEIS FORAM DEIXADOS DE FORA POR QUESTÃO DE "ÉTICA"
		}
	}else{
		printf("\nNão existem usuários cadastrados ainda!\n");
	}
}

void deletar_usuarios(){
	system("cls");
	system("title ********** SEÇÃO DE ATUALIZAÇÃO DE DADOS **********");
	
	if(cont_usuario == 0){
		printf("\nNão existem usuários cadastrados ainda!\n");
	}else{
		//DELETAR BASE DE DADOS
	}
}