#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	funcLogin();
}

void funcLogin(){
	int result1, result2;
	char confirm;
	char email_cadastro[100], email_login[100], senha_cadastro[100], senha_login[100];
	printf("Você já possui um cadastro? \nDigite 1 para sim ou 2 para não \n");
	scanf("%d", &confirm);
	switch(confirm){
		case 1:
			login:
			system("cls");
			printf("Login: \n\n");
			printf("Digite seu email: \n");
			scanf("%s", &email_login);
			printf("Digite sua senha: \n");
			scanf("%s", &senha_login);
			result1 = strcmp(email_login, email_cadastro);
			result2 = strcmp(senha_login, senha_cadastro);
			if (result1 != 0 || result2 != 0){
				printf("\nSeu email e/ou senha não estão corretos, digite novamente... \n");
				system("pause");
				goto login;
			}
			else {
				printf("\nLogin efetuado com sucesso! \n");
			}
			break;
		case 2:
			system("cls");
			printf("Realize seu cadastro: \n\n");
			printf("Digite seu email: \n");
			scanf("%s", &email_cadastro);
			printf("Digite sua senha: \n");
			scanf("%s", &senha_cadastro);
			printf("\nCadastro concluído! \n");
			printf("Você será redirecionado à página de login... \n\n");
			system("pause");
			goto login;
			break;
	}
}