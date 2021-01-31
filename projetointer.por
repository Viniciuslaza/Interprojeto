programa
{
	
	funcao inicio()
	{
		inteiro id_play=0, opcao=0, i=0
		caracter continuar='c'
		cadeia sentimento="", tipo="", lugar=""
		cadeia sentimentoS[7]={"Felicidade", "Felicidade", "Felicidade", "Felicidade", "Confianca", "Tristeza", "Amor"}, 
		tipoS[7]={"Brasileira", "Internacional", "Sertanejo", "Pop", "Trap", "Pop", "Brasileira"}, 
		lugarS[7]={"Praia", "Exterior", "Interior", "Casa", "Por ai", "Cama", "Casa"},
		linkS[7]={"https://open.spotify.com/playlist/1O9TBKn3SaD2poaGLlPQ5q?si=BKWOOlcpTh2wMt72yMMnaQ", 
				"https://open.spotify.com/playlist/37i9dQZF1DXcBWIGoYBM5M?si=by0U15Y7RXGh8A_MWKdjCw", 
			     "https://open.spotify.com/playlist/37i9dQZF1DXdSjVZQzv2tl?si=1njFfb9eSXKxEcyVOox8ng",
				"https://open.spotify.com/playlist/37i9dQZF1DWUIDYTCle9M9?si=4aHZiWa7TUSIQdMpwuikNQ",
				"https://open.spotify.com/playlist/04hlIu4UnZ0VWNWYSOsTK7?si=Z3jFV_szSdyo33_NdTl0VA", 
				"https://open.spotify.com/playlist/4rFp8l9vekheKOpeJLVkar?si=EM8Hfw8JTvyo4dzUnj09nA",
				"https://open.spotify.com/playlist/37i9dQZF1E4lPwTvZuF2Kq?si=De6yIligTOikrJUHY8buWQ"}
		
		
		  escreva("\t\tBem vindo ao Projeto Feel Music")
		
	faca{
            escreva ("\n")
            escreva ("\t   PROJETO Interdisciplinar : Play-Music : v1.05.01.21      \n")
            escreva ("\t   -----------------------------------------------\n")
            escreva ("\t   1 - Cadastar Nova Playlist. \n\n")
            escreva ("\t   2 - Visualizar seu Cadastro\n\n")
            escreva ("\t   3 - Visualizar sua Playlist \n\n")
            escreva ("\t   0 - Sair \n\n")
            escreva ("\t   -----------------------------------------------\n")
            escreva ("\t   Digite uma opcao: ")
            leia (opcao);
		
		
            
           se(opcao==1){
                //tratamento do cadastro
            

                    escreva ("\t-----------------------------------------------\n")

				
                    escreva("\n\t Digite a Tipo de Musica que normalmente você escuta: ")
                   // setbuf(stdin, NULL);
                    leia(tipo)

                    escreva("\n\t Digite um Sentimento: ")
                    //setbuf(stdin, NULL);
                    leia(sentimento)

                    escreva("\n\t Digite o Lugar que você está ou deseja estar: ")
                   // setbuf(stdin, NULL);
                    leia(lugar)

                    escreva("\n\n\t\t>>> Suas informaçoes vão ser analisadas! <<< \n\n\n")
                    //system("pause")
           }
            senao se(opcao==2){
                //tratamento do relat�rio de clientes
                    //system("cls");
              se(tipo!="" e sentimento!="" e lugar!=""){
                   

                escreva("\n-----------------------------------------------\n")
                escreva(" \n\t Dados da Playlist\n")
                escreva(" \n Tipo:\t", tipo)
                escreva(" \n Sentimento:\t",sentimento)
                escreva(" \n Lugar:\t\t",lugar)
                escreva("\n-----------------------------------------------\n")

             }
              senao{

                escreva("\n\t Nao existe cadastrados! \n\n")
              }
           }
           
            senao se(opcao==3){
            	
			para(i=0; i<6; i++){
            	 se(sentimento==sentimentoS[i] e tipo==tipoS[i] e lugar==lugarS[i]){
            	 escreva("\nA playlist sugerida para você é está: ", linkS[i])
            	 }
			}
		    
		}   
          
          escreva("\nDigite 'c' para continuar o programa: \n ")
          leia(continuar)
	  }enquanto(continuar=='c')

        	
		
}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 3468; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */