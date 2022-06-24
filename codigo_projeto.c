#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void funcHome();
void funcPosts();
void funcLogin();

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	inicio:
	funcHome();
	system("pause");
	do{
		system("cls");
		funcHome();
		printf("Digite 1 para acessar os posts \n");
		printf("Digite 2 fazer login e agendar seu atendimento \n");
		printf("Digite 3 para sair do site \n");
		printf("Aperte qualquer tecla para voltar ao início \n");
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
	printf("\t Instituto Criança Brilhante\n\n");
	printf("\t Um mundo com mentes mais brilhantes\n");
	printf("\t--------------------------------------\n");
}

void funcPosts(){
	system("cls");
	printf("\n Todos os posts\n\n\n");
	printf(" Artigo publicado por Diogo Souza \n Há 6 dias - Tempo de leitura aprox.: 2min \n\n\n");
	printf(" Psicologia Infantil: o que é e como funciona \n\n\n");
	
	printf(" A psicologia infantil tem um papel muito importante na identificação da origem de transtornos e dificuldades que a \n"
	" criança venha a apresentar durante seu crescimento. \n\n A infância, assim como as demais fases do desenvolvimento humano, \n"
	" tem características específicas, mas nem sempre é fácil para os pais ou cuidadores perceberem quando buscar ajuda da \n"
	" psicologia infantil. \n\n Choro, pirraça, manha, hiperatividade, dispersão e retraimento são alguns exemplos de comportamentos \n"
	" esperados das crianças, mas há um limite entre o normal e o excessivo. \n\n É comum que as questões psicológicas infantis sejam \n"
	" ignoradas pois os adultos acreditam que: “criança é assim mesmo”, “isso é bobeira”, “criança não tem preocupação” \n"
	" “eles querem chamar atenção”. \n\n É necessário voltar o olhar não para o comportamento em si, mas para o que está causando \n"
	" essas ações ou reações. Estudos apontam que cerca de 10% das crianças brasileiras sofrem com algum transtorno psicológico. \n\n"
	" Também é crescente em todo o mundo números de casos de depressão infantil, o que torna o cuidado com a saúde mental \n"
	" na infância e adolescência uma questão ainda mais séria e urgente. \n\n Estar atento a sinais como mudanças no padrão alimentar, \n"
	" insistência em dormir na cama dos pais, alterações no sono, irritação e isolamento (sinais que na maioria das vezes são \n"
	" o indício e não o problema em si) é fundamental para garantir um desenvolvimento feliz e saudável para a criança e uma \n"
	" convivência harmônica para toda a família. \n");
	printf("\n\nAperte qualquer tecla para voltar ao início \n");
	system("pause");
}

void funcLogin(){
	system("cls");
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
	printf("\n\nAperte aperte qualquer tecla para voltar ao início \n");
	system("pause");
}