#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX_SENHA 10
#define MAX_LOGIN 50

#define CLEAN_BUFF do{ int c; while((c = getchar()) != '\n' && c != EOF);}while(0)

int Usuario (FILE* file, char* user, char* senha);
char* CriaSenha();

struct endereco{
    char rua[50];
    char numero[10];
    char bairro[15];
    char estado[15];
    char cep[20];
    char cidade[20];
};
typedef struct endereco endereco;


struct empresa{
    char name[50];
    char cnpj[20];
    char razaoSocial[50];
    char nomeFantasia[50];
    char phone[20];
    char email[50];
    char data[20];
};
typedef struct empresa empresa;



struct pessoa{
  char nome[50];
  char idade[10];
  char cpf[15];
  char nfone[20];

};
typedef struct pessoa pessoa;



int main(){
    setlocale(LC_ALL, "Portuguese");

    FILE* relatorio;

   int op1, op2, op3, op4, i, a, b, quant=0;
   int op;
   char set[20];
   char out[20];
   char novem[20];
   char valor[20];
   char t[20];
   char nm[50];
   int salvar;


  char texto[500] = "RELATORIO DA EMPRESA                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ";
  char texto1[500] = "_______________________________________________________________________________________________________________________________________________________________                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     ";
  char texto2[500] = " DADOS DA EMPRESA                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            ";
  char texto3[500] = "_____________________                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ";
  char texto4[500] = " NOME DO RESPONSAVEL: ";
  char texto5[500] = "       RAZAO SOCIAL: ";
  char texto6[500] = "       CNPJ: ";
  char texto7[500] = "       CIDADE: ";
  char texto8[500] = "       NUMERO DE TELEFONE DA EMPRESA: ";
  char texto9[500] = "______________________________________________________________________________________________________________________________________________________________                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    ";
  char texto10[500] = "ESTE RELATORIO DEVE SER ENVIADO AOS CLIENTES DESSA EMPRESA, PARA FINS DE SOLICITACOES DE BENEFICIOS FISCAIS, E PARA QUE O GOVERNO POSSA MAPEAR ZONAS COM MAIORES E MENORES INDICES DE POLUIÇAO, PRODUZIDOS POR ESSA INDUSTRIA.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ";
  char texto11[500] = "_______________________________________________________________________________________________________________________________________________________________                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    ";
  char texto12[500] = "       TIPO DE TRATAMENTO DE RESIDUOS REALIZADOS PELA EMPRESA: ";
  char texto13[500] = "       QUANTIDADE DE RESIDUOS AMBIENTAIS TRATADOS NOS ULTIMOS 3 MESES.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ";
  char texto14[500] = "       MES DE SETEMBRO: ";
  char texto15[500] = "       MES DE OUTUBRO: ";
  char texto16[500] = "       MES DE NOVEMBRO: ";
  char texto17[500] = "       VALOR TOTAL GASTO NOS ULTIMOS 3 MESES COM TRATAMENTO DE RESIDUOS: R$";





   pessoa info[20];
   empresa dados[20];
   endereco ende[20];

   FILE* fpIN;

    int option = 0;

    char *user = (char*)malloc(sizeof *user * MAX_LOGIN);
    char *senha,
         *confirmaSenha;

    do{

       printf("1- Login\n2- Cadastrar usuario\n3- Sair\n");
       scanf("%d", &option);
       CLEAN_BUFF;

       switch(option){
    case 1:
        system("cls");
        printf("Usuario: ");
        gets(user);
        printf("Senha: ");
        senha = CriaSenha();

        fpIN = fopen("usuarios.txt", "a+");
        if(Usuario(fpIN, user, senha)){
            printf("\nUsuario Registrado.");



            system("cls");
            system("color FA");

            printf("Seja-Bem vindo!!\n\nDigite 1 para iniciar: ");
            scanf("%d", &op);

            while(op != 6){

                system("cls");
                printf("..................................................\n");
                printf("\t\t\tCADASTRO E GERENCIAMENTO DE TAREFAS\n");
                printf("..................................................\n\n");
                printf("\t\tSeja Bem vindo %s\n", nm);
                printf("__________________________________________________\n");
                printf("1-Cadastrar\n");
                printf("2-Exibir empresas cadastradas\n");
                printf("3-Alterar dados de cadastro\n");
                printf("4-Excluir\n");
                printf("5-Area de Gerenciamento\n");
                printf("6-Relatorios\n");
                printf("7-Sair\n");
                printf("...................................................\n\n");
                printf("\nQual opçao voce deseja acessar? ");
                scanf("%d", &op);


                switch(op){
                    case 1:
                    system("cls");
                    printf("\n\nQuantos cadastros você deseja realizar? ");
                    scanf("%d", &quant);

                        for(i=1;i<=quant;i++){
                            system("cls");
                            printf("\n\n\t\t\t    INICIANDO CADASTRO DA INDUSTRIA CLIENTE %d\n", i);
                            printf("\t\t\t    ...........................................\n\n");
                            printf("\t\t\t\tNome e dados do Responsavel\n\n");
                            printf("\n Nome: ");
                            fflush(stdin);
                            scanf("%49[^\n]s", &info[i].nome);
                            printf("\n Idade: ");
                            fflush(stdin);
                            scanf("%9[^\n]s", &info[i].idade);
                            printf("\n CPF: ");
                            fflush(stdin);
                            scanf("%14[^\n]s", &info[i].cpf);
                            printf("\n Numero de telefone: ");
                            fflush(stdin);
                            scanf("%19[^\n]s", &info[i].nfone);
                            printf("\t\t\t\n\nNome e dados da Empresa\n\n");
                            printf("\n Nome da empresa: ");
                            fflush(stdin);
                            scanf("%49[^\n]s", &dados[i].name);
                            printf("\n CNPJ: ");
                            fflush(stdin);
                            scanf("%19[^\n]s", &dados[i].cnpj);
                            printf("\n Razao social: ");
                            fflush(stdin);
                            scanf("%49[^\n]s", &dados[i].razaoSocial);
                            printf("\n Nome Fantasia: ");
                            fflush(stdin);
                            scanf("%49[^\n]s", &dados[i].nomeFantasia);
                            printf("\n Numero de telefone da empresa: ");
                            fflush(stdin);
                            scanf("%19[^\n]s", &dados[i].phone);
                            printf("\n Email: ");
                            fflush(stdin);
                            scanf("%49[^\n]s", &dados[i].email);
                            printf("\n Data de abertura: ");
                            fflush(stdin);
                            scanf("%19[^\n]s", &dados[i].data);
                            printf("\t\t\t\n\nEndereço da Empresa\n\n");
                            printf("\n Rua: ");
                            fflush(stdin);
                            scanf("%49[^\n]s", &ende[i].rua);
                            printf("\n Nº: ");
                            fflush(stdin);
                            scanf("%9[^\n]s", &ende[i].numero);
                            printf("\n Bairro: ");
                            fflush(stdin);
                            scanf("%14[^\n]s", &ende[i].bairro);
                            printf("\n Cidade: ");
                            fflush(stdin);
                            scanf("%19[^\n]s", &ende[i].cidade);
                            printf("\n\n\t\t");
                            printf("\n\nUsuario cadastrado com sucesso!\n\n");
                            system("pause");
                            system("cls");
                        }
                        break;

                        case 2:
                        system("cls");

                            if(quant<=0){
                            printf("\nNenhum cadastro encontrado!!\n");
                            system("pause");
                            }else{

                                for(i=1;i<=quant;i++){
                                printf("%d- %s\n", i, dados[i].razaoSocial);
                                }

                                printf("\nDigite o numero da empresa: \n\n");
                                fflush(stdin);
                                scanf("%d", &a);

                                if(a>quant){
                                printf("\n\nNumero de cadastro nao encontrado!\n\n");
                                system("pause");
                                }else{
                                    system("cls");
                                    printf("\n\n\t\t\t  EXIBINDO CADASTRO DA EMPRESA: %s\n", dados[a].razaoSocial);
                                    printf("\t\t\t  .......................................\n\n");
                                    printf("\t\t\t\tNome e dados do Responsavel\n\n");
                                    printf("\n Nome: %s", info[a].nome);
                                    printf("\n Idade: %s", info[a].idade);
                                    printf("\n CPF: %s", info[a].cpf);
                                    printf("\n Numero de telefone: %s", info[a].nfone);
                                    printf("\t\t\t\n\nNome e dados da Empresa\n\n");
                                    printf("\n Nome da empresa: %s", dados[a].name);
                                    printf("\n CNPJ: %s", dados[a].cnpj);
                                    printf("\n Razao social: %s", dados[a].razaoSocial);
                                    printf("\n Nome Fantasia: %s", dados[a].nomeFantasia);
                                    printf("\n Numero de telefone da empresa: %s", dados[a].phone);
                                    printf("\n Email: %s", dados[a].email);
                                    printf("\n Data de abertura: %s", dados[a].data);
                                    printf("\t\t\t\n\nEndereço da Empresa\n\n");
                                    printf("\n Rua: %s", ende[a].rua);
                                    printf("\n Nº: %s", ende[a].numero);
                                    printf("\n Bairro: %s\n\n", ende[a].bairro);
                                    printf("\n Cidade: %s\n\n", ende[a].cidade);
                                    system("pause");
                                    }
                                    }
                    break;

                    case 3:
                    system("cls");

                    if(quant<=0){
                        printf("\nNenhum cadastro encontrado!!\n");
                        system("pause");
                    }else{

                        printf("Voce quer alterar os dados de qual empresa? \n\n");
                        for(i=1;i<=quant;i++){
                            printf("%d- %s\n", i, dados[i].razaoSocial);
                            }
                        printf("\nDigite o numero da empresa: \n\n");
                        fflush(stdin);
                        scanf("%d", &a);

                        if(a>quant){
                            printf("\n\nNumero de cadastro nao encontrado!\n\n");
                            system("pause");
                        }else{
                            system("cls");
                            printf("\n\n\t\t\t  ALTERAR CADASTRO %d\n", a);
                            printf("\t\t\t   ...........................\n\n");
                            printf("\n1- Nome");
                            printf("\n2- Idade");
                            printf("\n3- CPF");
                            printf("\n4- Numero de Telefone");
                            printf("\n5- Nome da Empresa");
                            printf("\n6- CNPJ");
                            printf("\n7- Razao social");
                            printf("\n8- Nome fantasia");
                            printf("\n9- Numero de telefone da empresa");
                            printf("\n10- Email");
                            printf("\n11- Data de abertura");
                            printf("\n12- Rua");
                            printf("\n13- Nº");
                            printf("\n14- Bairro");
                            printf("\n15- Cidade\n\n");
                            printf("O que gostaria de alterar?\n");
                            scanf("%d", &op1);


                            switch (op1){
                                case 1:

                                system("cls");
                                printf("\n\n CADASTRO %d\n", a);
                                printf("\nAtual Nome do responsavel: %s\n", info[a].nome);
                                printf("\n Alterar Nome do Responsavel: ");
                                fflush(stdin);
                                scanf("%[^\n]s", &info[a].nome);
                                printf("\n Novo Nome do Responsavel: %s\n\n\t\t", info[a].nome);
                                system("pause");

                                break;

                                case 2:

                                system("cls");
                                printf("\n\n CADASTRO %d\n", a);
                                printf("\n Atual idade do Responsavel: %s\n", info[a].idade);
                                printf("\n Alterar Idade do Responsavel: ");
                                fflush(stdin);
                                scanf("%9[^\n]s", &info[a].idade);
                                printf("\n Nova idade do Responsavel: %s\n\n\t\t", info[a].idade);
                                system("pause");

                                break;

                                case 3:

                                system("cls");
                                printf("\n\n CADASTRO %d\n", a);
                                printf("\n Atual CPF do Responsavel: %s\n", info[a].cpf);
                                printf("\n Alterar CPF do Responsavel: ");
                                fflush(stdin);
                                scanf("%[^\n]s", &info[a].cpf);
                                printf("\n Novo CPF do Responsavel: %s\n\n\t\t", info[a].cpf);
                                system("pause");

                                break;

                                case 4:

                                system("cls");
                                printf("\n\n CADASTRO %d\n", a);
                                printf("\n Atual Numero de Telefone do Responsavel: %s\n", info[a].nfone);
                                printf("\n Alterar o Numero de Telefone do Responsavel: ");
                                fflush(stdin);
                                scanf("%[^\n]s", &info[a].nfone);
                                printf("\n Novo Numero de Telefone do Responsavel: %s\n\n\t\t", info[a].nfone);
                                system("pause");

                                break;

                                case 5:

                                system("cls");
                                printf("\n\n CADASTRO %d\n", a);
                                printf("\n Atual Nome da Empresa: %s\n", dados[a].name);
                                printf("\n Alterar Nome da Empresa: ");
                                fflush(stdin);
                                scanf("%[^\n]s", &dados[a].name);
                                printf("\n Novo Nome da Empresa: %s\n\n\t\t", dados[a].name);
                                system("pause");

                                break;

                                case 6:

                                system("cls");
                                printf("\n\n CADASTRO %d\n", a);
                                printf("\n Atual CNPJ da Empresa: %s\n", dados[a].cnpj);
                                printf("\n Alterar o CNPJ da Empresa: ");
                                fflush(stdin);
                                scanf("%[^\n]s", &dados[a].cnpj);
                                printf("\n Novo CNPJ da Empresa: %s\n\n\t\t", dados[a].cnpj);
                                system("pause");

                                break;

                                case 7:

                                system("cls");
                                printf("\n\n CADASTRO %d\n", a);
                                printf("\n Atual Razao Social da Empresa: %s\n", dados[a].razaoSocial);
                                printf("\n Alterar a Razao Social da Empresa: ");
                                fflush(stdin);
                                scanf("%[^\n]s", &dados[a].razaoSocial);
                                printf("\n Nova Razao Social da Empresa: %s\n\n\t\t", dados[a].razaoSocial);
                                system("pause");

                                break;

                                case 8:

                                system("cls");
                                printf("\n\n CADASTRO %d\n", a);
                                printf("\n Atual Nome Fantasia da Empresa: %s\n", dados[a].nomeFantasia);
                                printf("\n Alterar o Nome Fantasia da Empresa: ");
                                fflush(stdin);
                                scanf("%[^\n]s", &dados[a].nomeFantasia);
                                printf("\n Novo Nome Fantasia da Empresa: %s\n\n\t\t", dados[a].nomeFantasia);
                                system("pause");

                                break;

                                case 9:

                                system("cls");
                                printf("\n\n CADASTRO %d\n", a);
                                printf("\n Atual Numero de Telefone da Empresa: %s\n", dados[a].phone);
                                printf("\n Alterar o Numero de Telefone da Empresa: ");
                                fflush(stdin);
                                scanf("%[^\n]s", &dados[a].phone);
                                printf("\n Novo Numero de Telefone da Empresa: %s\n\n\t\t", dados[a].phone);
                                system("pause");

                                break;

                                case 10:

                                system("cls");
                                printf("\n\n CADASTRO %d\n", a);
                                printf("\n Atual Email da Empresa: %s\n", dados[a].email);
                                printf("\n Alterar Email da Empresa: ");
                                fflush(stdin);
                                scanf("%[^\n]s", &dados[a].email);
                                printf("\n Novo Email da Empresa: %s\n\n\t\t", dados[a].email);
                                system("pause");

                                break;

                                case 11:

                                system("cls");
                                printf("\n\n CADASTRO %d\n", a);
                                printf("\n Atual Data de abertura da Empresa: %s\n", dados[a].data);
                                printf("\n Alterar Data de abertura da Empresa: ");
                                fflush(stdin);
                                scanf("%[^\n]s", &dados[a].data);
                                printf("\n Nova Data de abertura da Empresa: %s\n\n\t\t", dados[a].data);
                                system("pause");

                                break;

                                case 12:

                                system("cls");
                                printf("\n\n CADASTRO %d\n", a);
                                printf("\n Atual Rua: %s\n", ende[a].rua);
                                printf("\n Alterar Rua: ");
                                fflush(stdin);
                                scanf("%[^\n]s", &ende[a].rua);
                                printf("\n Nova Rua: %s\n\n\t\t", ende[a].rua);
                                system("pause");

                                break;

                                case 13:

                                system("cls");
                                printf("\n\n CADASTRO %d\n", a);
                                printf("\n Atual Nº: %s\n", ende[a].numero);
                                printf("\n Alterar Nº: ");
                                fflush(stdin);
                                scanf("%9[^\n]s", &ende[a].numero);
                                printf("\n Novo Nº: %s\n\n\t\t", ende[a].numero);
                                system("pause");

                                break;

                                case 14:

                                system("cls");
                                printf("\n\n CADASTRO %d\n", a);
                                printf("\n Atual Bairro: %s\n", ende[a].bairro);
                                printf("\n Alterar Bairro: ");
                                fflush(stdin);
                                scanf("%[^\n]s", &ende[a].bairro);
                                printf("\n Novo Bairro: %s\n\n\t\t", ende[a].bairro);
                                system("pause");

                                break;

                                case 15:

                                system("cls");
                                printf("\n\n CADASTRO %d\n", a);
                                printf("\n Atual Cidade: %s\n", ende[a].cidade);
                                printf("\n Alterar Cidade: ");
                                fflush(stdin);
                                scanf("%[^\n]s", &ende[a].cidade);
                                printf("\n Nova Cidade: %s\n\n\t\t", ende[a].cidade);
                                system("pause");

                                break;

                }
                }
                }
                break;

                case 4:

                    system("cls");
                    if(quant<=0){
                        printf("\nNenhum cadastro encontrado!!\n");
                        system("pause");
                    }else{

                        printf("Voce quer excluir os dados de qual empresa? \n\n");
                        for(i=1;i<=quant;i++){
                            printf("%d- %s\n", i, dados[i].razaoSocial);
                        }
                        printf("\nDigite o numero da empresa: \n\n");
                        fflush(stdin);
                        scanf("%d", &b);

                        if(b>quant || b<=0){
                            printf("\n\nNumero de cadastro nao encontrado!\n\n");
                            system("pause");
                        }else{
                            printf("\n\n\t\t\t  EXCLUIR CADASTRO %d\n", b);
                            printf("\t\t\t   ...........................\n\n");
                            printf("\n1- Nome");
                            printf("\n2- Idade");
                            printf("\n3- CPF");
                            printf("\n4- Numero de Telefone");
                            printf("\n5- Nome da Empresa");
                            printf("\n6- CNPJ");
                            printf("\n7- Razao social");
                            printf("\n8- Nome fantasia");
                            printf("\n9- Numero de telefone da empresa");
                            printf("\n10- Email");
                            printf("\n11- Data de abertura");
                            printf("\n12- Rua");
                            printf("\n13- Nº");
                            printf("\n14- Bairro");
                            printf("\n15- Cidade");
                            printf("\n16- EXCLUIR TODOS OS DADOS? \n\n");
                            printf("O que gostaria de excluir?\n");
                            scanf("%d", &op3);



                            switch (op3){
                                case 1:

                                    memset(info[b].nome, 0, sizeof(info[b].nome));
                                    printf("\nNome do Responsavel excluido com sucesso!!\n");
                                    system("pause");

                                break;

                                case 2:

                                    memset(info[b].idade, 0, sizeof(info[b].idade));
                                    printf("\nIdade do Responsavel excluida com sucesso!!\n");
                                    system("pause");

                                break;

                                case 3:

                                    memset(info[b].cpf, 0, sizeof(info[b].cpf));
                                    printf("\nCPF do Responsavel excluido com sucesso!!\n");
                                    system("pause");

                                break;

                                case 4:

                                    memset(info[b].nfone, 0, sizeof(info[b].nfone));
                                    printf("\nNumero de Telefone do Responsavel excluido com sucesso!!\n");
                                    system("pause");

                                break;

                                case 5:

                                    memset(dados[b].name, 0, sizeof(dados[b].name));
                                    printf("\nNome da Empresa excluido com sucesso!!\n");
                                    system("pause");

                                break;

                                case 6:

                                    memset(dados[b].cnpj, 0, sizeof(dados[b].cnpj));
                                    printf("\nCNPJ da Empresa excluido com sucesso!!\n");
                                    system("pause");

                                break;

                                case 7:

                                    memset(dados[b].razaoSocial, 0, sizeof(dados[b].razaoSocial));
                                    printf("\nRazao Social excluida com sucesso!!\n");
                                    system("pause");

                                break;

                                case 8:

                                    memset(dados[b].nomeFantasia, 0, sizeof(dados[b].nomeFantasia));
                                    printf("\nNome Fantasia excluido com sucesso!!\n");
                                    system("pause");

                                break;

                                case 9:

                                    memset(dados[b].phone, 0, sizeof(dados[b].phone));
                                    printf("\nNumero de telefone da Empresa excluido com sucesso!!\n");
                                    system("pause");

                                break;

                                case 10:

                                    memset(dados[b].email, 0, sizeof(dados[b].email));
                                    printf("\nEmail da Empresa excluido com sucesso!!\n");
                                    system("pause");

                                break;

                                case 11:

                                    memset(dados[b].data, 0, sizeof(dados[b].data));
                                    printf("\nData de abertura da empresa excluida com sucesso!!\n");
                                    system("pause");

                                break;

                                case 12:

                                    memset(ende[b].rua, 0, sizeof(ende[b].rua));
                                    printf("\nRua excluida com sucesso!!\n");
                                    system("pause");

                                break;

                                case 13:

                                    memset(ende[b].numero, 0, sizeof(ende[b].numero));
                                    printf("\nNº excluido com sucesso!!\n");
                                    system("pause");

                                break;

                                case 14:

                                    memset(ende[b].bairro, 0, sizeof(ende[b].bairro));
                                    printf("\nBairro excluido com sucesso!!\n");
                                    system("pause");

                                break;

                                case 15:

                                    memset(ende[b].cidade, 0, sizeof(ende[b].cidade));
                                    printf("\nCidade excluida com sucesso!!\n");
                                    system("pause");

                                break;

                                case 16:

                                    memset(info[b].nome, 0, sizeof(info[b].nome));
                                    memset(info[b].idade, 0, sizeof(info[b].idade));
                                    memset(info[b].cpf, 0, sizeof(info[b].cpf));
                                    memset(info[b].nfone, 0, sizeof(info[b].nfone));
                                    memset(dados[b].name, 0, sizeof(dados[b].name));
                                    memset(dados[b].cnpj, 0, sizeof(dados[b].cnpj));
                                    memset(dados[b].razaoSocial, 0, sizeof(dados[b].razaoSocial));
                                    memset(dados[b].nomeFantasia, 0, sizeof(dados[b].nomeFantasia));
                                    memset(dados[b].phone, 0, sizeof(dados[b].phone));
                                    memset(dados[b].email, 0, sizeof(dados[b].email));
                                    memset(dados[b].data, 0, sizeof(dados[b].data));
                                    memset(ende[b].rua, 0, sizeof(ende[b].rua));
                                    memset(ende[b].numero, 0, sizeof(ende[b].numero));
                                    memset(ende[b].bairro, 0, sizeof(ende[b].bairro));
                                    memset(ende[b].cidade, 0, sizeof(ende[b].cidade));
                                    printf("\nTodos os dados foram excluido com sucesso!!\n");
                                    system("pause");

                                break;



                            }
                            }
                            }

                break;

                case 5:

                    system("cls");
                    if(quant<=0){
                        printf("\nPrimeiro cadastre uma empresa!!\n");
                        system("pause");
                    }else{

                        printf("Voce quer gerenciar as atividades de qual empresa? \n\n");
                        for(i=1;i<=quant;i++){
                            printf("%d- %s\n", i, dados[i].razaoSocial);
                        }
                        printf("\nDigite o numero da empresa: \n\n");
                        fflush(stdin);
                        scanf("%d", &b);

                        if(b>quant || b<=0){
                            printf("\n\nNumero de cadastro nao encontrado!\n\n");
                            system("pause");
                        }else{
                            system("cls");
                            printf("\n\n\t\t\t  AREA DE GERENCIAMENTO DA EMPRESA %s\n", dados[b].razaoSocial);
                            printf("\t\t\t   ...................................\n\n");
                            printf("\n1- Atualizar as quantidades de residuos ambientais tratados\n");
                            printf("\n2- Atualizar valor estimado de custo\n\n");
                            scanf("%d", &op4);

                            if(op4 == 1){

                                    system("cls");
                                    printf("Digite a quantidade de residuos ambientais tratados nos ultimos 3 meses\n\n");
                                    printf("Mes de Setembro quantidade: ");
                                    scanf(" %[^\n]s", &set);
                                    fflush(stdin);
                                    printf("Mes de Outubro quantidade: ");
                                    scanf(" %[^\n]s", &out);
                                    fflush(stdin);
                                    printf("Mes de Novembro quantidade: ");
                                    scanf(" %[^\n]s", &novem);
                                    fflush(stdin);
                                    printf("\n\nQuantidades Atualizadas com Sucesso!!\n\n");
                                    system("pause");

                            }else if (op4 == 2){

                                    system("cls");
                                    printf("Digite o valor gasto nos ultimos 3 meses com tratamento de residuos: R$");
                                    scanf("%s", &valor);
                                    fflush(stdin);
                                    printf("\n\nQual foi o tipo de tratamento usado (ex: reciclagem, biodigestores, compostagem, aterro sanitario ou incinerar) \n\n");
                                    printf("Tipo escolhido: ");
                                    scanf("%[^\n]s", &t);
                                    fflush(stdin);
                                    printf("\n\nDados Atualizados com Sucesso!!\n\n");
                                    system("pause");

                            }

                            }
                            }
                    break;

                    case 6:

                        system("cls");
                        printf("Voce quer ver o relatorio de qual empresa? \n\n");
                        for(i=1;i<=quant;i++){
                            printf("%d- %s\n", i, dados[i].razaoSocial);
                        }
                        printf("\nDigite o numero da empresa: \n\n");
                        fflush(stdin);
                        scanf("%d", &b);

                        if(b>quant || b<=0){
                            printf("\n\nNumero de cadastro nao encontrado!\n\n");
                            system("pause");
                        }else{


                            system("cls");



                            printf("\n\n\t\t\t  RELATORIO DA EMPRESA %s\n", dados[b].razaoSocial);
                            printf("\t\t\t   ...................................\n\n");
                            printf("\tDADOS DA EMPRESA\n\n");
                            printf("Nome do Responsavel: %s\n", info[b].nome);
                            printf("Razao Social: %s\n", dados[b].razaoSocial);
                            printf("CNPJ: %s\n", dados[b].cnpj);
                            printf("Cidade: %s\n", ende[b].cidade);
                            printf("Numero de telefone da empresa: %s\n", dados[b].phone);
                            printf("\n\n");
                            printf("Este Relatorio deve ser enviado aos clientes dessa empresa, para fins de solicitaçoes de beneficios fiscais, e para que o governo possa mapear zonas com maiores e menores indices de poluiçao, produzidos por essa industria.");
                            fflush(stdin);
                            printf("\n\n");
                            printf("Tipo de tratamento de residuos realizado pela empresa: %s\n", t);
                            printf("Quantidade de residuos ambientais tratados nos ultimos 3 meses\n\n");
                            printf("Mes de Setembro: %s\n", set);
                            printf("Mes de Outubro: %s\n", out);
                            printf("Mes de Novembro: %s\n\n", novem);
                            printf("Valor total gasto nos ultimos 3 meses com tratamento de residuos: R$%s\n", valor);

                            printf("\n\nGostaria de Salvar esse relatorio?\n\n");
                            printf("1- Sim  /  2- Nao\n\n");
                            scanf("%d", &salvar);

                            if(salvar == 1){

                                relatorio = fopen("Relatorio.txt", "w");

                                fputs(texto, relatorio);
                                fputs(texto1, relatorio);
                                fputs(texto2, relatorio);
                                fputs(texto3, relatorio);
                                fputs(texto4, relatorio);
                                fputs(info[b].nome, relatorio);
                                fputs(texto5, relatorio);
                                fputs(dados[b].razaoSocial, relatorio);
                                fputs(texto6, relatorio);
                                fputs(dados[b].cnpj, relatorio);
                                fputs(texto7, relatorio);
                                fputs(ende[b].cidade, relatorio);
                                fputs(texto8, relatorio);
                                fputs(dados[b].phone, relatorio);
                                fputs(texto9, relatorio);
                                fputs(texto10, relatorio);
                                fputs(texto11, relatorio);
                                fputs(texto12, relatorio);
                                fputs(t, relatorio);
                                fputs(texto13, relatorio);
                                fputs(texto14, relatorio);
                                fputs(set, relatorio);
                                fputs(texto15, relatorio);
                                fputs(out, relatorio);
                                fputs(texto16, relatorio);
                                fputs(novem, relatorio);
                                fputs(texto17, relatorio);
                                fputs(valor, relatorio);












                                fclose(relatorio);














                              system("pause");
                            }else{





                            system("pause");
                            }


                        }

                }
                }

        }else
            printf("\nUsuario nao registrado\n");

        fclose(fpIN);
        free(senha);
        exit(0);

    case 2:
        system("cls");
        printf("Usuario: ");
        gets(user);

        do{
                printf("Senha: ");
                senha = CriaSenha();
                printf("\nConfirmacao de senha: ");
                confirmaSenha = CriaSenha();
                printf("\n");

                if( !strcmp(senha, confirmaSenha))
                    break;
                else
                    printf("As senhas nao sao iguais. Tente novamente.\n");
        }while(1);

        fpIN = fopen("usuarios.txt", "a+");
        fprintf(fpIN, "%s %s\n", user, senha);
        fclose(fpIN);

        free(senha);
        free(confirmaSenha);
        break;

    case 3:
        return 0;

    default:
        printf("Escolha 1, 2, ou 3...\n");
        break;
        }

    }while(1);

    return 0;
}





int Usuario (FILE* file, char* user, char* senha){

    char tmpLogin[MAX_LOGIN];
    char tmpSenha[MAX_SENHA];

    fscanf(file, "%s", tmpLogin);

    while( !feof(file)){

    if( strcmp(tmpLogin, user)){
            fscanf(file, "%s", tmpSenha);
    if( !strcmp(tmpSenha, senha))
        return 1;
    }
    else{
            fscanf(file, "%*s");
    }
    fscanf(file, "%s", tmpLogin);
    }
        return 0;
    }


char* CriaSenha(){

    register int i;

    char* senha = (char*)malloc(sizeof *senha * MAX_SENHA);

    for(i=0; i<MAX_SENHA; i++){
        senha[i] = getch();
    if(senha[i] == '\r')
        break;
    else
        printf("*");
    }
    senha[i] = '\0';

    return senha;
}








