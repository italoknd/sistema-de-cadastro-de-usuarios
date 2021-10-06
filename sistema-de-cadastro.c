/*
CRIAR UM PROGRAMA QUE REALIZE O CADASTRO DE USUARIOS O PROGRAMA REALIZA AS SEGUINTES FUNCIONALIDADES:

1 - REALIZAR O CADASTRO DO USUARIO, CADA USUARIO POSSUIRÁ NOME, LOGIN, SENHA, EMAIL E IDADE, APENAS O ADM COM LOGIN E SENHA
"ADM" E "12345" PODERA REALIZAR CADASTRO 

2 - IMPLEMENTE UMA FUNÇÃO PARA REALIZAR A ATUALIZAÇÃO DE UM CADASTRO. ESSA FUNÇÃO SOMENTE PODERÁ SER FEITA PELO ADM OU PELO PROPRIO USER POR MEIO DE LOGIN E SENHA

3 - IMPLEMENTE UMA FUNÇÃO PARA IMPRIMIR TODOS OS USERS JUNTO COM TODAS AS SUAS INFOS.

4 - IMPLEMENTE UMA FUNÇÃO PARA DELETAR TODOS OS USUARIOS, APENAS O ADEMIRO PODERA REALIZAR ESSA AÇÃO

OBS: IMPLEMENTE A SOLUÇÃO USANDO ALOCAÇÃO DINAMICA A CADA 5 USUARIOS CADASTRADOS
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
  system ("color 02");

  int escolha;

  char login_adm[3];
  char senha_adm[4];

  do{
    printf ("\n [1] - LOGIN");
    printf("\n [0] - FINALIZAR PROGRAMA");
    
    printf("\n Escolha: ");
    scanf("\n%d", &escolha);

  switch (escolha){
  case 1:
    printf("\n LOGIN: ");
    fflush(stdin);
    gets(login_adm);

    printf("\n SENHA: ");
    fflush(stdin);
    gets(senha_adm);

      if (strcmp(senha_adm, "12345") == 0 && strcmp(login_adm, "adm") == 0){
        //MENU DE ADM
      }else{
      printf("\n Senha ou usuario incorreto!");
      escolha = 9;
      }
    break;

  case 0:
    printf("\nAte mais!");
    break;
  
  default:
    printf("\nOpcao Invalida\n");
    break;
  }
  system("pause");
  } while (escolha !=0);
}
