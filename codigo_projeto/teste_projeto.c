#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void funcCadastroDados();

int main(){
	setlocale(LC_ALL, "Portuguese");
	funcCadastroDados();
}

void funcCadastroDados(){
	system("cls");
	char tipo_usuario[20], nome_resp[50], nome_crianca[50], transtorno_crianca[50], email_resp[50], nome_edu[50], nome_crianca_associada[50], email_edu[50];
	int cpf_resp, tel_resp, cpf_edu, tel_edu;
	printf("Você é pai/responsável da criança ou educador? \nDigite 'responsavel' ou 'educador' \n");
	scanf("%s", tipo_usuario);
	if ((strcmp(tipo_usuario, "responsavel")) == 0){
		printf("Insira o nome do responsável: \n");
		scanf("%[^\n]s", nome_resp);//fgets(nome_resp, 50, stdin);
		printf("Insira o CPF do responsável: \n");
		scanf("%d", &cpf_resp);
		printf("Insira o nome da criança: \n");
		scanf("%[^\n]s", nome_crianca);//fgets(nome_crianca, 50, stdin);
		printf("Insira o transtorno mental que a criança possui: \n");
		scanf("%[^\n]s", transtorno_crianca);//fgets(transtorno_crianca, 50, stdin);
		printf("Insira o telefone do responsável: \n");
		scanf("%d", &tel_resp);
		printf("Insira o email do responsável: \n");
		scanf("%s", email_resp);
		
		printf("\nSeus dados são: \n Nome do responsável: %s \n CPF do responsável: %s \n Nome da criança: %s \n Transtorno mental: %s \n "
		"Telefone do responsável: %d \n Email do responsável: %s \n", nome_resp, cpf_resp, nome_crianca, transtorno_crianca, tel_resp, email_resp);
	}
	else if ((strcmp(tipo_usuario, "educador")) == 0){
		printf("Insira o nome do educador: \n");
		scanf("%[^\n]s", nome_edu);//fgets(nome_edu, 50, stdin);
		printf("Insira o CPF do educador: \n");
		scanf("%d", &cpf_edu);
		printf("Insira o nome da criança associada a este educador: \n");
		scanf("%[^\n]s", nome_crianca_associada);//fgets(nome_crianca_associada, 50, stdin);
		printf("Insira o telefone do educador: \n");
		scanf("%d", &tel_edu);
		printf("Insira o email do educador: \n");
		scanf("%s", email_edu);
		printf("\nSeus dados são: \n Nome do educador: %s \n CPF do educador: %s \n Nome da criança associada: %s \n Telefone do educador: %d \n"
		"Email do educador: %s \n", nome_edu, cpf_edu, nome_crianca_associada, tel_edu, email_edu);
	}
}