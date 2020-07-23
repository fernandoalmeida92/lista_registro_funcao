#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LIMITE 5

void menu();
void cadastrar();
void listar();
void sair();

struct st_cliente {
	int id;
	char nome[30];
	char telefone[20];
	char email[30];
} cliente[LIMITE];


int cont = 0;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	menu();

	return(0);
}

void menu() {
	system("cls");
	int op = 5;
	
	printf("     MENU     \n");
	printf("\n1 - Criar cadastro");
	printf("\n2 - Listar cadastros");
	printf("\n0 - Encerrar\n\n");
	printf("Opção: ");
	scanf("%d", &op);
	fflush(stdin);
	
	switch(op) {
	    
	    case 1:
	    	cadastrar();
	    	break;
	    	
	    case 2:
	    	listar();
	    	break;
	    	
	    case 0:
	    	sair();
	    	break;
	    
	   default:
	   	    system("cls");
	   	    printf("ERRO! Opção Invalida!\n\n");
	   	    system("pause");
	   	    menu();
	   	    break;
	}
}

void cadastrar(){
	if(cont>= 5){
		system("cls");
		printf("Agenda Lotada!\n\n");
		system("pause");
		menu();
	} else{
		system("cls");
		printf("     CADASTRAR CLIENTE     \n\n");
		cliente[cont].id = cont + 1;
		printf("Código: %d\n", cliente [cont].id);
		printf("Nome: ");
		gets(cliente[cont].nome);
		fflush(stdin);
		printf("Telefone: ");
		gets(cliente[cont].telefone);
		fflush(stdin);
		printf("Email: ");
		gets(cliente[cont].email);
		fflush(stdin);
		
		cont++;
		
		printf("\n\n Cliente cadastrado com Sucesso! \n\n");
		system("pause");
		menu();	
	}
	
};
void listar() {
	system("cls");
	if(cont == 0) {
		system("cls");
		printf("Agenda Vazia!\n\n");
		system("pause");
		menu();
	} else{
			int i;
	
		printf("     Listar Clientes     \n\n");
		for(i = 0; i < cont; i++){
			printf("Código: %d\n", cliente[i]. id);
			printf("Nome: %s\n", cliente[i].nome);
			printf("Telefone : %s\n", cliente[i].telefone);
			printf("Email: %s\n\n", cliente[i].email);
		}
		system("pause");
		menu();
	}

};
void sair(){
	system("cls");
	printf("Encerrando o Programa!\n\n");
	system("pause");
	exit(0);
};
	

