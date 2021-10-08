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

typedef struct usuario{
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

//DECLARAÇÃO DE FUNÇÕES 
void realizar_cadastro();
void atualizar_dados();
void mostrar_usuarios();
void deletar_usuarios();


main(){
  system ("color 02");
  setlocale (LC_ALL, "PORTUGUESE");
  
  usuario cad_usuario[5];
  int escolha, escolha2, i=0;
  char login_adm[3], senha_adm[4];

  do{
  	system("cls");
    printf ("\n [1] - LOGIN");
    printf("\n [0] - FINALIZAR PROGRAMA");
    
    printf("\n Escolha: ");
    scanf("\n%d", &escolha);

  switch (escolha){
  case 1://
    printf("\n LOGIN: ");
    fflush(stdin);
    gets(login_adm);

    printf("\n SENHA: ");
    fflush(stdin);
    gets(senha_adm);
    
    //tela de load
    for(i=0; i<=100; i++){
    	system("cls");
    	printf("\nCARREGANDO %d%%", i);
    	Sleep(5);
	}

      if (strcmp(senha_adm, "12345") == 0 && strcmp(login_adm, "adm") == 0){	
        	
			do{
				system("cls");
        		printf("\n BEM VINDO(A)! O QUE DESEJA FAZER?");
        		printf("\n (1) - Realizar Cadastro de Usuário");
        		printf("\n (2) - Atualizar Cadastro de Usuário");
        		printf("\n (3) - Imprimir lista de usuários");
        		printf("\n (4) - Deletar Base de Dados");
        		printf("\n (0) - Voltar");
        		printf("\n Escolha: ");
        		scanf("%d", &escolha2);
        	
        		switch (escolha2){
        			case 1:
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
        				printf("\nOpcao Invalida!");
        				break;	
			}
			system("pause");
		}while(escolha2 !=0);
      }else{
      printf("\n Senha ou usuario incorreto!\n");
      escolha = 9;	//forcar saida do do-while
      }
    break;

  case 0: // sair do sistema
    printf("\nAte mais!");
    break;
  
  default:
    printf("\nOpcao Invalida\n");
    break;
  }
  
  } while (escolha !=0);
}



//FUNÇÕES

void realizar_cadastro(){
	// >>> PAREI AQUI <<< 
	
	printf("\n Informe o nome do usuário: ");
	fflush(stdin);
	gets(cad_usuario[i].nome_user);
	
	printf("\n Informe o login do usuário: ");
	fflush(stdin);
	gets(cad_usuario[i].login_user);
	
	printf("\n Informe a senha do usuário: ");
	fflush(stdin);
	gets(cad_usuario[i].senha_user);
	
	printf("\n Informe o email do usuário: ");
	fflush(stdin);
	gets(cad_usuario[i].email_user);
	
	printf("\n Informe a idade do usuário: ");
	scanf("%d",&cad_usuario[i].idade_user);
}

void atualizar_dados(){
	
}

void mostrar_usuarios(){

}

void deletar_usuarios(){
	
}