#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define C 5
#define S 5

//definir a matriz cliente
typedef struct cliente{

    int cl_id;
    char cl_nome    [50];
    char cl_rg      [20];
    char cl_cel     [20];
    char cl_email   [40];
    char cl_end     [40];
};

//definir a matriz O.S.
typedef struct os{

    int os_id;
    int id_cliente;
    char os_tipo    [20];
    char os_marca   [20];
    char os_modelo  [20];
    char os_cor     [20];
    char os_ns      [20];
    char os_prob    [80];
};

//Inicia o programa
int main(){
     setlocale(LC_ALL, "Portuguese"); // Determinar a linguagem a ser utilizada: neste caso padrão do SO.,

        int opcao;
        struct cliente c[C];
        int cl_id=0;
        struct os s[S];
        int os_id=0;

        // Monta a tela de login

        char login[10]="admin";
        char logon[10]="a";
        long int senha = 123;
        long int senhaon= 0;
        while ((strcmp (login, logon)) || (senhaon!=senha)) // aqui strcmp
        {

            system("cls");
            printf ("\n\n\n\n");
            printf ("\t******  *****   *****   ******  **    **        *****\n");
            printf ("\t******  ******  ******  ******  ***   **       ******\n");
            printf ("\t**  **  **  **  **  **  **      ****  **       **    \n");
            printf ("\t**  **  **  **  **  **  ******  ***** **  ***  ***** \n");
            printf ("\t**  **  *****   **  **  ******  ** *****  ***   *****\n");
            printf ("\t**  **  ** **   **  **  **      **  ****           **\n");
            printf ("\t******  **  **  ******  ******  **   ***       ******\n");
            printf ("\t******  **   ** *****   ******  **    **       *****\n");
            printf ("\n");
            printf ("\t\tPROJETO CONTROLE DE ORDENS DE SERVIÇOS\n\n\n\n");
            printf ("\t------------------------------------------------------\n");
            printf ("\n\tDigite seu login: ");
            scanf("%s",login);
            fflush(stdin); // limpa buffer
            printf ("\n\tDigite sua senha:");
            scanf ("%d",&senha);
            printf ("\t------------------------------------------------------\n");
            fflush(stdin);

            if ((!strcmp(login, logon)) && (senhaon==senha))
            {

        // Apos logado, entra no menu do sistema

            do{
            system("cls");
            printf ("\n");
            printf ("\t\tPROJETO TDS ORDEM-S : VEC : v2.1.19.06      \n");
            printf ("\t-----------------------------------------------\n");
            printf ("\t 1 - Cadastrar Novo Clientes\n\n");
            printf ("\t 2 - Cadastar Nova O.S. \n\n");
            printf ("\t 3 - Visualizar Clientes\n\n");
            printf ("\t 4 - Visualizar O.S. \n\n");
            printf ("\t 5 - Gerar Relatorio O.S. \n\n");
            printf ("\t 0 - Sair \n\n");
            printf ("\t-----------------------------------------------\n");
            printf ("\t Digite uma opção: ");
            scanf (" %i", &opcao);

            switch(opcao){
            case 1:
                //tratamento do cadastro de clientes
                system("cls");
                if(cl_id < C){

                printf ("\n\t\tCADASTRAR NOVO CLIETE\n");
                printf ("\t-----------------------------------------------\n");

                setbuf(stdin,NULL);
                printf (" \n\t Nome: ");
                scanf (" %49[^\n]", c[cl_id].cl_nome);

                setbuf(stdin,NULL);
                printf (" \n\t RG: ");
                scanf (" %19[^\n]", c[cl_id].cl_rg);

                setbuf(stdin,NULL);
                printf (" \n\t Celular: ");
                scanf (" %19[^\n]", c[cl_id].cl_cel);

                setbuf(stdin,NULL);
                printf (" \n\t E-mail: ");
                scanf (" %39[^\n]", c[cl_id].cl_email);

                setbuf(stdin,NULL);
                printf (" \n\t Endere�o: ");
                scanf (" %39[^\n]", c[cl_id].cl_end);
                printf("\n\n");
                cl_id++;

                        }
                else{
                    printf("\n\t\tLimite de cadastros excedido!\n\n");
                    }
            break;

            case 2:
                //tratamento do cadastro de servi�os
                system("cls");
                if(os_id < S){

                    printf("\n\t\t CADASTAR NOVA ORDEM DE SERVI�O\n");
                    printf ("\t-----------------------------------------------\n");



                    //apresentar a lista de clientes cadastrados

                    //pe�o pro  usu�rio escolher o id do cliente e armazeno no aux

                    //verifico se o id � v�lido


                    //se for v�lido
                    //s[os_id].id_cliente = aux;

                    printf("\n\t Digite a Tipo: ");
                    setbuf(stdin, NULL);
                    scanf(" %19[^\n]", s[os_id].os_tipo);

                    printf("\n\t Digite a Marca: ");
                    setbuf(stdin, NULL);
                    scanf(" %19[^\n]", s[os_id].os_marca);

                    printf("\n\t Digite o Modelo: ");
                    setbuf(stdin, NULL);
                    scanf(" %19[^\n]", s[os_id].os_modelo);

                    printf("\n\t Digite a Cor: ");
                    setbuf(stdin, NULL);
                    scanf(" %19[^\n]", s[os_id].os_cor);

                    printf("\n\t Digite o N/S: ");
                    setbuf(stdin, NULL);
                    scanf(" %19[^\n]", s[os_id].os_ns);

                    printf("\n\t Digite o Problema informado pelo cliente:\n");
                    setbuf(stdin, NULL);
                    scanf(" %19[^\n]", s[os_id].os_prob);

                    printf("\n\n\t\t>>> Ordem de servi�o cadastrada com sucesso! <<< \n\n\n");
                    system("pause");

                    os_id++;
                }
                else{
                    printf(" \n\t\tLimite de cadastros excedido!\n\n");
                    }


            break;


            case 3:
                //tratamento do relat�rio de clientes
                system("cls");
            if(cl_id>0){
                    int i;
                    for(i=0; i<cl_id; i++){

       printf(" \n\tDADOS DO CLIENTE - ID:");
                printf(" \n-----------------------------------------------\n");
       printf(" \n Nome:\t\t%s", c[i].cl_nome);
       printf(" \n RG:\t\t%s", c[i].cl_rg);
       printf(" \n Celular:\t%s", c[i].cl_cel);
       printf(" \n E-Mail:\t%s", c[i].cl_email);
       printf(" \n Endere�o:\t%s", c[i].cl_end);
                printf("\n-----------------------------------------------\n");

            }
            }
            else{

            printf("\n\t N�o existe cliente cadastrado! \n\n");
            }
            break;

            case 4:
                // tratamento do relat�rio de O.S.
                system("cls");
                if(os_id>0){
                    int i;
                    for(i=0; i<os_id; i++){
       printf(" \n ORDEM DE SERVI�O - NUMERO:");
                printf ("\n-----------------------------------------------");
       printf(" \n DADOS DO CLIENTE\n");
       printf(" \n Nome:\t\t%s", c[i].cl_nome);
       printf(" \n RG:\t\t%s", c[i].cl_rg);
       printf(" \n Celular:\t%s", c[i].cl_cel);
       printf(" \n E-Mail:\t%s", c[i].cl_email);
       printf(" \n Endere�o:\t%s", c[i].cl_end);
                printf ("\n-----------------------------------------------");
       printf(" \n DADOS DO EQUIPAMENTO\n");
       printf(" \n Tipo:\t\t%s",s[i].os_tipo);
       printf(" \n Marca:\t\t%s",s[i].os_marca);
       printf(" \n Modelo:\t%s",s[i].os_modelo);
       printf(" \n cor:\t\t%s",s[i].os_cor);
       printf(" \n N/S:\t\t%s",s[i].os_ns);
       printf(" \n Problema:\t%s",s[i].os_prob);
       printf("\n");

            }
                }
            else{

            printf("\n >>> Nao existe O.S. cadastrada! <<< \n\n");
            }

            break;

            case 5:
                // tratamento do relat�rio de O.S.

                system("cls");


                FILE *arquivo = fopen("Relatorio.txt", "w");

                if(arquivo == NULL){
                    printf("Erro ao gerar relatorio\n");
                }
                else{
                //escrever no arquivo

                     int i;
                     for(i=0; i<os_id; i++){

                        fprintf(arquivo," \n DADOS DO CLIENTE\n");
                        fprintf(arquivo," \n Nome:\t\t%s", c[i].cl_nome);
                        fprintf(arquivo," \n RG:\t\t%s", c[i].cl_rg);
                        fprintf(arquivo," \n Celular:\t%s", c[i].cl_cel);
                        fprintf(arquivo," \n E-Mail:\t%s", c[i].cl_email);
                        fprintf(arquivo," \n Endere�o:\t%s", c[i].cl_end);
                        fprintf(arquivo,"\n-----------------------------------------------");
                        fprintf(arquivo," \n DADOS DO EQUIPAMENTO\n");
                        fprintf(arquivo," \n Tipo:\t\t%s",s[i].os_tipo);
                        fprintf(arquivo," \n Marca:\t\t%s",s[i].os_marca);
                        fprintf(arquivo," \n Modelo:\t%s",s[i].os_modelo);
                        fprintf(arquivo," \n cor:\t\t%s",s[i].os_cor);
                        fprintf(arquivo," \n N/S:\t\t%s",s[i].os_ns);
                        fprintf(arquivo," \n Problema:\t%s",s[i].os_prob);
                        fprintf(arquivo,"\n");


                    }
                    fclose(arquivo);
                    printf("Arquivo gerado com sucesso\n");

            }
            break;




            printf("\n\n\tO sistema foi encerrado...\n\n\n\n");


        }
        system("pause");
    }while (opcao != 0);

}
}

return 0;
}
