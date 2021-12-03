#include <stdio.h> //Padrão
#include <stdlib.h> //Padrão
#include <string.h> //Necessária para comparar 2 strings
#include <conio.h> //Para utilizar o getch
#include <ctype.h> //Para utilizar o isalpha()


rNome:
    printf("Digite o nome (Sem acentos, Numerais ou caracteres Especiais): ");
    do
    {
       c=getch();//captura o caractere digitado pelo usuário
       if (isalpha(c)!=0 || c==32)//se for uma letra
       {
          cadas.nome[i] = c;//armazena no vetor de caracteres
          i++;//incrementa o índice do vetor de caracteres
          printf ("%c", c);//exibe o caractere digitado
       }
       else if(c==8&&i)//se for pressionada a tecla BACKSPACE e houver caracteres já digitados
       {
          cadas.nome[i]='\0';//o índice atual do vetor de caracteres recebe a terminação da string
          i--;//o índice do vetor de caracteres é decrementado
          printf("\b \b");//o caractere digitado é apagado da tela
       }
    }while(c!=13);//o loop vai ser executado até que a tecla pressionada seja o ENTER (código 13 na tabela ASCII)

    cadas.nome[i]='\0';//o índice atual do vetor de caracteres recebe a terminação da string
    if (strlen(cadas.nome) ==0){
        printf("%s\n\nERROR - Voce deve inserir uma resposta...\n\n%s",KRED,KNRM);
        sleep(2);
        goto rNome;
    }
    printf("\n");
