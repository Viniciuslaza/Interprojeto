#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define U 5
#define P 5
#define S 5

//definir a matriz usuario
typedef struct {

    int usuario_id;//identificação de um usuario
    char usuario_nome    [50];
    char usuario_cel     [20];
    char usuario_email   [40];
}usuario;

//definir a matriz playlist.
typedef struct {

    int play_id;
    int id_usuario;
    char playlist_tipo  [20];
    char playlist_sentimento   [20];
    char playlist_lugar  [10];
}playlist;

typedef struct {

    int status;
    int  id_playlist;
    char  tipo[12] ;
    char sentimento  [12];
    char lugar  [12];
    char link  [80];
}sugestoes;
 sugestoes s[12];



void preenche_sugestoes(){
    s[0].status = 1;
    s[0].id_playlist = 1;
    strcpy(s[0].tipo, "Brasileira");
    strcpy(s[0].sentimento, "Felicidade");
    strcpy(s[0].lugar, "Praia");
    strcpy(s[0].link, "https://open.spotify.com/playlist/1O9TBKn3SaD2poaGLlPQ5q?si=BKWOOlcpTh2wMt72yMMnaQ");

    s[1].status = 1;
    s[1].id_playlist = 1;
    strcpy(s[1].tipo, "Internacional");
    strcpy(s[1].sentimento, "Felicidade");
    strcpy(s[1].lugar, "Exterior");
    strcpy(s[1].link, "https://open.spotify.com/playlist/37i9dQZF1DXcBWIGoYBM5M?si=by0U15Y7RXGh8A_MWKdjCw");

    s[2].status = 1;
    s[2].id_playlist = 1;
    strcpy(s[2].tipo, "Sertanejo");
    strcpy(s[2].sentimento, "Felicidade");
    strcpy(s[2].lugar, "Interior");
    strcpy(s[2].link, "https://open.spotify.com/playlist/37i9dQZF1DXdSjVZQzv2tl?si=1njFfb9eSXKxEcyVOox8ng");

    s[3].status = 1;
    s[3].id_playlist = 1;
    strcpy(s[3].tipo, "Pop");
    strcpy(s[3].sentimento, "Felicidade");
    strcpy(s[3].lugar, "Casa");
    strcpy(s[3].link, "https://open.spotify.com/playlist/37i9dQZF1DWUIDYTCle9M9?si=4aHZiWa7TUSIQdMpwuikNQ");

    s[4].status = 1;
    s[4].id_playlist = 1;
    strcpy(s[4].tipo, "Trap");
    strcpy(s[4].sentimento, "Confianca");
    strcpy(s[4].lugar, "Por ai");
    strcpy(s[4].link, "https://open.spotify.com/playlist/04hlIu4UnZ0VWNWYSOsTK7?si=Z3jFV_szSdyo33_NdTl0VA");

    s[5].status = 1;
    s[5].id_playlist = 1;
    strcpy(s[5].tipo, "Pop");
    strcpy(s[5].sentimento, "Tristeza");
    strcpy(s[5].lugar, "Cama");
    strcpy(s[5].link, "https://open.spotify.com/playlist/4rFp8l9vekheKOpeJLVkar?si=EM8Hfw8JTvyo4dzUnj09nA");

    s[6].status = 1;
    s[6].id_playlist = 1;
    strcpy(s[6].tipo, "Brasileira");
    strcpy(s[6].sentimento, "Amor");
    strcpy(s[6].lugar, "Casa");
    strcpy(s[6].link, "https://open.spotify.com/playlist/37i9dQZF1E4lPwTvZuF2Kq?si=De6yIligTOikrJUHY8buWQ");


}

//Inicia o programa
int main(){
     setlocale(LC_ALL, "Portuguese"); // Determinar a linguagem a ser utilizada: neste caso padrão do SO.,

        preenche_sugestoes();
        int statuscadastro=0;
        int opcao;
        usuario u;
        playlist p;
        //struct sugestoes s[S];
        int status=0;

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
                if(statuscadastro == 0 ){

                printf ("\n\t\tCADASTRAR NOVO Usuario\n");
                printf ("\t-----------------------------------------------\n");

                setbuf(stdin,NULL);
                printf (" \n\t Nome: ");
                scanf (" %49[^\n]", u.usuario_nome);

                setbuf(stdin,NULL);
                printf (" \n\t Celular: ");
                scanf (" %19[^\n]", u.usuario_cel);

                setbuf(stdin,NULL);
                printf (" \n\t Email: ");
                scanf (" %39[^\n]", u.usuario_email);

                printf("\n\n");
                statuscadastro=1;

                        }
                else{
                    printf("\n\t\tUsuario ja cadastrado!\n\n");
                    }
            break;

            case 2:
                //tratamento do cadastro
                system("cls");


                    printf("\n\t\t Diga como voce está se sentindo hoje!\n");
                    printf ("\t-----------------------------------------------\n");


                    printf("\n\t Digite a Tipo de Musica que normalmente você escuta: ");
                    setbuf(stdin, NULL);
                    scanf(" %19[^\n]", p.playlist_tipo);

                    printf("\n\t Digite um Sentimento: ");
                    setbuf(stdin, NULL);
                    scanf(" %19[^\n]", p.playlist_sentimento);

                    printf("\n\t Digite o Lugar que você está ou deseja estar: ");
                    setbuf(stdin, NULL);
                    scanf(" %19[^\n]", p.playlist_lugar);


                    printf("\n\n\t\t>>> Suas informaçoes vão ser analisadas! <<< \n\n\n");
                    system("pause");



                    break;


            case 3:
                //tratamento do relat�rio de clientes
                    system("cls");
              if(statuscadastro==1){
                    int i;


                printf(" \n\tDados do Usuario - ID:");
                printf(" \n-----------------------------------------------\n");
                printf(" \n Nome:\t\t%s", u.usuario_nome);
                printf(" \n Celular:\t%s", u.usuario_cel);
                printf(" \n E-Mail:\t%s", u.usuario_email);
                printf("\n-----------------------------------------------\n");
                printf(" \n\t Dados da Playlist\n");
                printf(" \n Tipo:\t\t%s",p.playlist_tipo);
                printf(" \n Sentimento:\t%s",p.playlist_sentimento);
                printf(" \n Lugar:\t\t%s",p.playlist_lugar);
                printf("\n-----------------------------------------------\n");

            }
              else{

                printf("\n\t Nao existe cadastrados! \n\n");
            }
            break;

            case 4:
                // tratamento do relat�rio de exibiçao.
                system("cls");
                int i, status=0;

                for(i=0; i<6; i++){

            if(strcmp(p.playlist_lugar, s[i].lugar)==0 && strcmp(p.playlist_sentimento, s[i].sentimento)==0 && strcmp(p.playlist_tipo, s[i].tipo)==0){
            printf("Sua Sugestao:\n\n %s:",s[i].link);
            printf("\t\n\n");
            status = 1;
            }
            }

            if(status == 0){
            printf("\nNão foi encontrado nenhuma sugestão de playlist\n");
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


                        fprintf(arquivo," \n DADOS DO Usuario\n");
                        fprintf(arquivo," \n Nome:\t\t%s", u.usuario_nome);
                        fprintf(arquivo," \n Celular:\t%s", u.usuario_cel);
                        fprintf(arquivo," \n E-Mail:\t%s", u.usuario_email);
                        fprintf(arquivo,"\n-----------------------------------------------");
                        fprintf(arquivo," \n DADOS DA PLAYLIST\n");
                        fprintf(arquivo," \n Tipo:\t\t%s",p.playlist_tipo);
                        fprintf(arquivo," \n Sentimento:\t\t%s",p.playlist_sentimento);
                        fprintf(arquivo," \n Lugar:\t%s",p.playlist_lugar);
                        fprintf(arquivo," \n Link:\t%s",s[i].link);
                        fprintf(arquivo,"\n");



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
