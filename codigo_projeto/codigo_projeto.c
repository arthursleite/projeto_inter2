#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void funcHome();
void funcPosts();
void funcLogin();
void funcCadastroDados();

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	inicio:
	funcHome();
	system("pause");
	do{
		system("cls");
		funcHome();
		printf(" Digite 1 para acessar os posts \n");
		printf(" Digite 2 fazer login e agendar seu atendimento \n");
		printf(" Digite 3 para sair do site \n");
		printf(" Aperte qualquer tecla para voltar ao in�cio \n");
		scanf("%d", &opcao);
		switch (opcao){
			case 1:
				funcPosts();
				break;
			case 2:
				funcLogin();
				break;
			case 3:
				opcao = 3;
				break;
			default:                                         
				system("cls");
				goto inicio;
				break;
		}
	} while (opcao!=3);
}

void funcHome(){
	system("cls");
	printf("\t--------------------------------------\n");
	printf("\t Instituto Crian�a Brilhante\n\n");
	printf("\t Um mundo com mentes mais brilhantes\n");
	printf("\t--------------------------------------\n\n");
}

void funcPosts(){
	system("cls");
	printf("\n Todos os posts\n\n\n");
	printf(" Artigo publicado por Diogo Souza \n H� 6 dias - Tempo de leitura aprox.: 2min \n\n\n");
	printf(" Psicologia Infantil: o que � e como funciona \n\n\n");
	
	printf(" A psicologia infantil tem um papel muito importante na identifica��o da origem de transtornos e dificuldades que a \n"
	" crian�a venha a apresentar durante seu crescimento. \n\n A inf�ncia, assim como as demais fases do desenvolvimento humano, \n"
	" tem caracter�sticas espec�ficas, mas nem sempre � f�cil para os pais ou cuidadores perceberem quando buscar ajuda da \n"
	" psicologia infantil. \n\n Choro, pirra�a, manha, hiperatividade, dispers�o e retraimento s�o alguns exemplos de comportamentos \n"
	" esperados das crian�as, mas h� um limite entre o normal e o excessivo. \n\n � comum que as quest�es psicol�gicas infantis sejam \n"
	" ignoradas pois os adultos acreditam que: �crian�a � assim mesmo�, �isso � bobeira�, �crian�a n�o tem preocupa��o� \n"
	" �eles querem chamar aten��o�. \n\n � necess�rio voltar o olhar n�o para o comportamento em si, mas para o que est� causando \n"
	" essas a��es ou rea��es. Estudos apontam que cerca de 10% das crian�as brasileiras sofrem com algum transtorno psicol�gico. \n\n"
	" Tamb�m � crescente em todo o mundo n�meros de casos de depress�o infantil, o que torna o cuidado com a sa�de mental \n"
	" na inf�ncia e adolesc�ncia uma quest�o ainda mais s�ria e urgente. \n\n Estar atento a sinais como mudan�as no padr�o alimentar, \n"
	" insist�ncia em dormir na cama dos pais, altera��es no sono, irrita��o e isolamento (sinais que na maioria das vezes s�o \n"
	" o ind�cio e n�o o problema em si) � fundamental para garantir um desenvolvimento feliz e saud�vel para a crian�a e uma \n"
	" conviv�ncia harm�nica para toda a fam�lia. \n");
	printf("\n\nAperte qualquer tecla para voltar ao in�cio \n");
	system("pause");
}

void funcLogin(){
	system("cls");
	//int result1, result2, confirm; nao foi necessario usar essas duas variaveis, deixei pra lembrar o raciocinio
	int confirm;
	char email_cadastro[100], email_login[100], senha_cadastro[100], senha_login[100];
	printf("Voc� j� possui um cadastro? \nDigite 1 para sim ou 2 para n�o \n");
	scanf("%d", &confirm);
	switch(confirm){
		case 1:
			login:
			system("cls");
			printf("Login: \n\n");
			printf("Digite seu email: \n");
			scanf("%s", email_login);
			printf("Digite sua senha: \n");
			scanf("%s", senha_login);
			//result1 = strcmp(email_login, email_cadastro);
			//result2 = strcmp(senha_login, senha_cadastro);
			//if (result1 != 0 || result2 != 0){
			if ((strcmp(email_login, email_cadastro)) != 0 || (strcmp(senha_login, senha_cadastro)) != 0){
				printf("\nSeu email e/ou senha n�o est�o corretos, digite novamente... \n");
				system("pause");
				goto login;
			}
			else {
				printf("\nLogin efetuado com sucesso! \n");
				funcCadastroDados();
			}
			break;
		case 2:
			system("cls");
			printf("Realize seu cadastro: \n\n");
			printf("Digite seu email: \n");
			scanf("%s", email_cadastro);
			printf("Digite sua senha: \n");
			scanf("%s", senha_cadastro);
			printf("\nCadastro conclu�do! \n");
			printf("Voc� ser� redirecionado � p�gina de login... \n\n");
			system("pause");
			goto login;
			break;
	}
	printf("\n\nAperte aperte qualquer tecla para voltar ao in�cio \n");
	system("pause");
}

void funcCadastroDados(){
	system("cls");
	char tipo_usuario[20], nome_resp[50], nome_crianca[50], transtorno_crianca[50], email_resp[50], nome_edu[50], nome_crianca_associada[50], email_edu[50];
	int cpf_resp, tel_resp, cpf_edu, tel_edu;
	printf("Voc� � pai/respons�vel da crian�a ou educador? \nDigite 'responsavel' ou 'educador' \n");
	scanf("%s", tipo_usuario);
	if ((strcmp(tipo_usuario, "responsavel")) == 0){
		printf("Insira o nome do respons�vel: \n");
		getchar();
		fgets(nome_resp, 50, stdin);
		printf("Insira o CPF do respons�vel: \n");
		scanf("%d", &cpf_resp);
		printf("Insira o nome da crian�a: \n");
		getchar();
		fgets(nome_crianca, 50, stdin);
		printf("Insira o transtorno mental que a crian�a possui: \n");
		getchar();
		fgets(transtorno_crianca, 50, stdin);
		printf("Insira o telefone do respons�vel: \n");
		scanf("%d", &tel_resp);
		printf("Insira o email do respons�vel: \n");
		getchar();
		fgets(email_resp, 50, stdin);
		
		printf("\nSeus dados s�o: \nNome do respons�vel: %s \nCPF do respons�vel: %d \nNome da crian�a: %s \nTranstorno mental: %s \n"
		"Telefone do respons�vel: %d \nEmail do respons�vel: %s \n", nome_resp, cpf_resp, nome_crianca, transtorno_crianca, tel_resp, email_resp);
	}
	else if ((strcmp(tipo_usuario, "educador")) == 0){
		printf("Insira o nome do educador: \n");
		getchar();
		fgets(nome_edu, 50, stdin);
		printf("Insira o CPF do educador: \n");
		scanf("%d", &cpf_edu);
		printf("Insira o nome da crian�a associada a este educador: \n");
		getchar();
		fgets(nome_crianca_associada, 50, stdin);
		printf("Insira o telefone do educador: \n");
		scanf("%d", &tel_edu);
		printf("Insira o email do educador: \n");
		getchar();
		fgets(email_edu, 50, stdin);
		printf("\nSeus dados s�o: \n Nome do educador: %s \nCPF do educador: %d \nNome da crian�a associada: %s \nTelefone do educador: %d \n"
		"Email do educador: %s \n", nome_edu, cpf_edu, nome_crianca_associada, tel_edu, email_edu);
	}
}