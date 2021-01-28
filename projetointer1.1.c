#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define U 5
#define P 5

//definir a matriz usuario
typedef struct usuario{

    int usuario_id;//identificação de um usuario
    char usuario_nome    [50];
    char usuario_cel     [20];
    char usuario_email   [40];
};

//definir a matriz playlist.
typedef struct playlist{

    int play_id;
    int id_usuario;
    char playlist_tipo  [20];
    char playlist_sentimento   [20];
    char playlist_lugar  [20];
    char playlistlink [20];
};

//Inicia o programa
int main(){
     setlocale(LC_ALL, "Portuguese"); // Determinar a linguagem a ser utilizada: neste caso padrão do SO.,

        int opcao;
        struct usuario u[U];
        int usuario_id=0;
        struct playlist p[P];
        int play_id=0;

        // Monta a tela de login

        char login[10]="admin";
        char logon[10]="a";
        long int senha = 123;
        long int senhaon= 0;
        while ((strcmp (login, logon)) || (senhaon!=senha)) // aqui strcmp
        {

            system("cls");
            printf ("\n\n\n\n");
            printf ("\t******  **             *****   ***      ***       ***** \n");
            printf ("\t******  **            **   **   ***    ***       ****** \n");
            printf ("\t*    *  **           ***   ***   ***  ***        **     \n");
            printf ("\t******  **           *********    *** **  *** ** *****  \n");
            printf ("\t**      **          ***     ***    ****   ******  *****  \n");
            printf ("\t**      **         ***       ***    **              **  \n");
            printf ("\t**      ******    ***         ***   **           *****  \n");
            printf ("\t**      ******   ***           ***  **           ****  \n");
            printf ("\n");
            printf ("\tPROJETO DE PLAYLISTS\n\n\n");
            printf ("\t---------------------------------------------------------\n");
            printf ("\n\tDigite o codigo de acesso: ");
            scanf("%s",login);
            fflush(stdin); // limpa buffer
            printf ("\n\tDigite sua senha:");
            scanf ("%d",&senha);
            printf ("\t---------------------------------------------------------\n");
            fflush(stdin);

            if ((!strcmp(login, logon)) && (senhaon==senha))
            {

        // Apos logado, entra no menu do sistema

            do{
            system("cls");
            printf ("\n");
            printf ("\t   PROJETO Interdisciplinar : Play-Music : v1.05.01.21      \n");
            printf ("\t   -----------------------------------------------\n");
            printf ("\t   1 - Cadastrar seu Usuario\n\n");
            printf ("\t   2 - Cadastar Nova Playlist. \n\n");
            printf ("\t   3 - Visualizar seu Cadastro\n\n");
            printf ("\t   4 - Visualizar sua Playlist \n\n");
            printf ("\t   5 - Gerar Relatorio de Playlist. \n\n");
            printf ("\t   0 - Sair \n\n");
            printf ("\t   -----------------------------------------------\n");
            printf ("\t   Digite uma opcao: ");
            scanf (" %i", &opcao);

            switch(opcao){
            case 1:
                //tratamento do cadastro de usuarios
                system("cls");
                if(usuario_id < U){

                printf ("\n\t\tCADASTRAR NOVO Usuario\n");
                printf ("\t-----------------------------------------------\n");

                setbuf(stdin,NULL);
                printf (" \n\t Nome: ");
                scanf (" %49[^\n]", u[usuario_id].usuario_nome);

                setbuf(stdin,NULL);
                printf (" \n\t Celular: ");
                scanf (" %19[^\n]", u[usuario_id].usuario_cel);

                setbuf(stdin,NULL);
                printf (" \n\t Email: ");
                scanf (" %39[^\n]", u[usuario_id].usuario_email);

                printf("\n\n");
                usuario_id++;

                        }
                else{
                    printf("\n\t\tLimite de usuarios excedido!\n\n");
                    }
            break;

            case 2:
                //tratamento do cadastro
                system("cls");
                if(play_id < P){

                    printf("\n\t\t Diga como voce está se sentindo hoje!\n");
                    printf ("\t-----------------------------------------------\n");


                    printf("\n\t Digite a Tipo de Musica que normalmente você escuta: ");
                    setbuf(stdin, NULL);
                    scanf(" %19[^\n]", p[play_id].playlist_tipo);

                    printf("\n\t Digite um Sentimento: ");
                    setbuf(stdin, NULL);
                    scanf(" %19[^\n]", p[play_id].playlist_sentimento);

                    printf("\n\t Digite o Lugar que você está ou deseja estar: ");
                    setbuf(stdin, NULL);
                    scanf(" %19[^\n]", p[play_id].playlist_lugar);


                    printf("\n\n\t\t>>> Suas informaçoes vão ser analisadas! <<< \n\n\n");
                    system("pause");

                    play_id++;
                    }
                    else{
                    printf(" \n\t\tLimite de cadastros excedido!\n\n");
                    }


                    break;


            case 3:
                //tratamento do relat�rio de clientes
                    system("cls");
              if(usuario_id>0){
                    int i;
                    for(i=0; i<usuario_id; i++){

                printf(" \n\tDados do Usuario - ID:");
                printf(" \n-----------------------------------------------\n");
                printf(" \n Nome:\t\t%s", u[i].usuario_nome);
                printf(" \n Celular:\t%s", u[i].usuario_cel);
                printf(" \n E-Mail:\t%s", u[i].usuario_email);
                printf("\n-----------------------------------------------\n");
                printf(" \n\t Dados da Playlist\n");
                printf(" \n Tipo:\t\t%s",p[i].playlist_tipo);
                printf(" \n Sentimento:\t%s",p[i].playlist_sentimento);
                printf(" \n Lugar:\t\t%s",p[i].playlist_lugar);
                printf("\n-----------------------------------------------\n");
                }
            }
              else{

                printf("\n\t Nao existe cadastrados! \n\n");
            }
            break;

            case 4:
                // tratamento do relat�rio de exibiçao.
                system("cls");
                if(play_id > 0){
                 if(p[play_id].playlist_sentimento == "Felicidade" && p[play_id].playlist_lugar == "Praia" && p[play_id].playlist_tipo == "Brasileira"){
                  printf("A playlist ideal para você é essa: https: //open.spotify.com/playlist/6or0CjGMU5xffefjSwIeLK?si=vrnPCgIxRWO8YM_D72Kplw");

                 }
                 else if(p[play_id].playlist_sentimento == "Felicidade" && p[play_id].playlist_lugar == "Casa" && p[play_id].playlist_tipo == "internacional"){
                  printf("A playlist ideal para você é essa: https: //open.spotify.com/playlist/37i9dQZF1DWYBO1MoTDhZI?si=oNHo1MSsShSVg53RD2Xl9Q ");
                 }

                 else if(p[play_id].playlist_sentimento == "Felicidade"&& p[play_id].playlist_lugar=="Academia" && p[play_id].playlist_tipo=="Pop"){
                  printf("A playlist ideal para você é essa: https: ");
                 }
                 else{
                   printf("Nao foi encontrada nenhuma playlist :( \n");
                 }


            }

            else{

            printf("\n >>> Nao existe informaçoes cadastradas! <<< \n\n");
            }

            break;

            case 5:
                // tratamento do relat�rio de informaçoes para a playlist.

                system("cls");


                FILE *arquivo = fopen("Playlists.txt", "w");

                if(arquivo == NULL){
                    printf("Erro ao gerar relatorio\n");
                }
                else{
                //escrever no arquivo

                     int i;
                     for(i=0; i<play_id; i++){

                        fprintf(arquivo," \n DADOS DO CLIENTE\n");
                        fprintf(arquivo," \n Nome:\t\t%s", u[i].usuario_nome);
                        fprintf(arquivo," \n Celular:\t%s", u[i].usuario_cel);
                        fprintf(arquivo," \n E-Mail:\t%s", u[i].usuario_email);
                        fprintf(arquivo,"\n-----------------------------------------------");
                        fprintf(arquivo," \n DADOS DO EQUIPAMENTO\n");
                        fprintf(arquivo," \n Tipo:\t\t%s",p[i].playlist_tipo);
                        fprintf(arquivo," \n Sentimento:\t\t%s",p[i].playlist_sentimento);
                        fprintf(arquivo," \n Lugar:\t%s",p[i].playlist_lugar);
                        fprintf(arquivo," \n Link:\t%s",p[i].playlistlink);
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


return 0;
}
}
