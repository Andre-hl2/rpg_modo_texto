#include "mapa.h"
#include "main.h"

//condição do puzzle


//PARTE RESPONSAVEL PELA CRIAÇÃO DOS MAPAS


//PRIMEIRO MAPA
void cria_mapa_um()
{
    system("cls");
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("###########################                         ############################");Sleep(100);
    printf("###########################     TORRE SOMBRIA       ############################");Sleep(100);
    printf("###########################    -PRIMEIRO ANDAR-     ############################");Sleep(100);
    printf("###########################                         ############################");Sleep(100);
    printf("################################################################################");Sleep(100);;
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("                         Pressione 'Enter' para comecar");
    getch();
    
    //CRIAÇÃO DAS PAREDES
     for (i=0;i<=14;i++)  //"for" duplo para criação das paredes externas
     {
         for (j=0;j<=14;j++)
         {
             if ((i==14) || (i==0) || (j==14) || (j==0))
             m1[i][j]='#';
             else
             m1[i][j]='0';
         }
     }
     for (i=1;i<=12;i++)
     {
         m1[i][2]='#';
     }
     for (i=3;i<=6;i++)
     {
         m1[6][i]='#';
     }
     for (i=5;i>=2;i--)
     {
         m1[i][6]='#';
     }
     for (i=8;i<=13;i++)
     {
         m1[i][4]='#';
     }
     for (i=8;i<=12;i++)
     {
         for (j=6;j<=8;j++)
         {
             m1[i][j]='#';
         }
     }
     for (i=1;i<=7;i++)
     {
         m1[i][8]='#';
     }
     for (i=10;i<=13;i++)
     {
         m1[2][i]='#';
     }
     for (i=4;i<=12;i++)
     {
         m1[i][12];
     }
     for (i=3;i<=7;i++)
     {
         m1[i][10]='#';
     }
     for (i=9;i<=12;i++)
     {
         m1[12][i]='#';
     }
     for (i=4;i<=11;i++)
     {
         m1[i][12]='#';
     }
     
     //CRIAÇÃO DOS OBJETOS DO MAPA
     px=1; py=1;
     m1[py][px]=1; //PLAYER
     m1[1][13]='E'; //ESCADA
     if (puzzle_um_ok==0)
        m1[1][6]='D';  //PORTA COM O PUZZLE
     m1[5][4] = m1[5][3] = m1[4][3] = 'B'; //BAU COM POTION
     m1[5][5] = '*'; //ATTRIB BOOST
     Ny[0]=10;Nx[0]=10; //POSIÇÃO INICIAL DO INIMIGO
     m1[Ny[0]][Nx[0]]='N'; //INIMIGO MOVEL
     m1[2][4] = m1[1][3] = 'N'; //INIMIGO PARADO
     matou[0]=0; //variavel de controle para evitar continuar batalhando com inimigo
     desenha_mapa_um();
}

//SEGUNDO MAPA
void cria_mapa_dois()
{
    system("cls");
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("###########################                         ############################");Sleep(100);
    printf("###########################     TORRE SOMBRIA       ############################");Sleep(100);
    printf("###########################    -SEGUNDO ANDAR-      ############################");Sleep(100);
    printf("###########################                         ############################");Sleep(100);
    printf("################################################################################");Sleep(100);;
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("                        Pressione 'Enter' para comecar");
    getch();
    
    //CRIAÇÃO DAS PAREDES
     for (i=0;i<=14;i++)
     {
         for (j=0;j<=14;j++)
         {
             if ((i==14) || (i==0) || (j==14) || (j==0))
             m2[i][j]='#';
             else
             m2[i][j]='0';
         }
     }
     for (i=2;i<=13;i++)
     {
         m2[2][i]='#';
     }
     for (i=3;i<=12;i++)
     {
         m2[i][10]='#';
     }
     for (i=4;i<=13;i++)
     {
         m2[i][12]='#';
     }
     for (i=7;i<=13;i++)
     {
         m2[i][8]='#';
     }
     for (i=1;i<=7;i++)
     {
         m2[7][i]='#';
     }
     m2[7][4]='0';
     m2[6][3]=m2[6][5]='#';
     
     //CRIAÇÃO DOS OBJETOS DO MAPA
     py=1;px=13;
     m2[py][px]=1; //PLAYER
     m2[13][13]='E'; //ESCADA
     m2[6][4]='D';  //PORTA COM INIMIGO
     m2[13][10]='L'; //PORTA TRANCADA
     m2[13][1]='k'; //CHAVES
     m2[8][1] = m2[8][7] = '*'; //ATTRIB BOOST
     m2[13][7] = m2[12][7] = m2[11][7] = 'B'; //BAU COM POTION
     m2[13][3] = m2[13][5] = m2[12][4] = 'N'; //INIMIGO PARADO
     matou[0]=0; //variavel de controle para evitar continuar batalhando com inimigo
     desenha_mapa_dois();
}

//TERCEIRO MAPA

void cria_mapa_tres()
{
    system("cls");
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("###########################                         ############################");Sleep(100);
    printf("###########################     TORRE SOMBRIA       ############################");Sleep(100);
    printf("###########################    -TERCEIRO ANDAR-     ############################");Sleep(100);
    printf("###########################                         ############################");Sleep(100);
    printf("################################################################################");Sleep(100);;
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("                        Pressione 'Enter' para comecar");
    getch();
    
    //CRIAÇÃO DAS PAREDES
     for (i=0;i<=14;i++)
     {
         for (j=0;j<=14;j++)
         {
             if ((i==14) || (i==0) || (j==14) || (j==0))
             m3[i][j]='#';
             else
             m3[i][j]='0';
         }
     }
     for (i=2;i<=13;i++)
     {
         m3[12][i]='#';
     }
     for (i=2;i<=9;i++)
     {
         m3[i][12]='#';
     }
     for (i=1;i<=12;i++)
     {
         m3[10][i]='#';
     }
     for (i=2;i<=7;i++)
     {
         for (j=6;j<=8;j++)
         {
             m3[i][j]='#';
         }
     }
     for (i=2;i<=10;i++)
     {
         m3[8][i]='#';
     }
     for (i=1;i<=7;i++)
     {
         m3[i][2]='#';
     }
     //CRIAÇÃO DOS OBJETOS DO MAPA
     py=13; px=13;
     m3[py][px]=1; //PLAYER
     m3[1][1]='E'; //ESCADA
     m3[1][7]='D'; //PORTA
     m3[7][3] = 'B'; //BAU COM POTION
     m3[5][3] = 'k'; //CHAVE
     m3[7][5] = m3[6][5] = m3[5][5] = '*'; //ATTRIB BOOST
     m3[8][1] = 'L'; //PORTA TRANCADA
     m3[9][10] = m3[1][12] = 'N'; //INIMGO PARADO
     desenha_mapa_tres();
}


//QUARTO MAPA
int cria_mapa_quatro()
{
    system("cls");
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("###########################                         ############################");Sleep(100);
    printf("###########################     TORRE SOMBRIA       ############################");Sleep(100);
    printf("###########################     -QUARTO ANDAR-      ############################");Sleep(100);
    printf("###########################                         ############################");Sleep(100);
    printf("################################################################################");Sleep(100);;
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("                        Pressione 'Enter' para comecar");
    getch();
    
    //CRIAÇÃO DAS PAREDES
     for (i=0;i<=14;i++)
     {
         for (j=0;j<=14;j++)
         {
             if ((i==14) || (i==0) || (j==14) || (j==0))
                m4[i][j]='#';
             else
                 m4[i][j]='0';
         }
     }
     for (i=1;i<=5;i++)
     {
         m4[i][2]='#';
     }
     for (i=9;i<=13;i++)
     {
         m4[i][2]='#';
     }
     for (i=1;i<=3;i++)
     {
         m4[7][i]='#';
     }
     for (i=2;i<=12;i++)
     {
         m4[i][4]='#';
     }
     for (i=11;i<=13;i++)
     {
         m4[6][i]='#';
         m4[8][i]='#';
     }
     
     //CRIAÇÃO DOS OBJETOS DO MAPA
     py=1; px=1;
     m4[py][px]=1; //PLAYER
     m4[13][1]='E'; //ESCADA
     m4[8][2]='L';  //PORTA TRANCADA
     m4[1][13] = m4[13][13] = m4[5][13] = m4[9][13] = 'B'; //BAU COM POTION
     m4[13][4] = m4[1][5] = m4[10][10] = m4[3][10] = m4[8][5] = m4[12][7] = m4[7][8] = 'N'; //INIMIGOS PARADOS
     m4[7][11] = m4[12][1] = m4[8][1] = 127; //MEGA MONSTRO
     m4[7][13]='k'; //CHAVES
     desenha_mapa_quatro();
}

//QUINTO MAPA
void cria_mapa_cinco()
{
    puzzle_um_ok=0;
    system("cls");
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("###########################                         ############################");Sleep(100);
    printf("###########################     TORRE SOMBRIA       ############################");Sleep(100);
    printf("###########################     -QUINTO ANDAR-      ############################");Sleep(100);
    printf("###########################                         ############################");Sleep(100);
    printf("################################################################################");Sleep(100);;
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("                        Pressione 'Enter' para comecar");
    getch();
    
    //CRIAÇÃO DAS PAREDES
     for (i=0;i<=14;i++)
     {
         for (j=0;j<=14;j++)
         {
             if ((i==14) || (i==0) || (j==14) || (j==0))
             m5[i][j]='#';
             else
             m5[i][j]='0';
         }
     }
     for (i=1;i<=5;i++)
     {
         m5[12][i]='#';
     }
     for (i=7;i<=12;i++)
     {
         m5[12][i]='#';
     }
     for (i=3;i<=7;i++)
     {
         for (j=5;j<=7;j++)
         {
             m5[i][j]='#';
         }
     }
     for (i=2;i<=13;i++)
     {
         m5[2][i]='#';
     }
     for (i=2;i<=10;i++)
     {
         m5[9][i]='#';
     }
     m5[9][6]='0';
     for (i=3;i<=11;i++)
     {
         m5[i][12]='#';
     }
     for (i=10;i<=11;i++)
     {
         m5[i][5]='#';
         m5[i][7]='#';
     }
     m5[10][2]='#';
     m5[10][10]='#';
     
     
     
     //CRIAÇÃO DOS OBJETOS DO MAPA
     px=1; py=13;
     m5[py][px]=1; //PLAYER
     m5[1][13]='E'; //ESCADA
     m5[11][10] = m5[11][2] = m5[4][13]='L'; //PORTA TRANCADA
     m5[10][4] = m5[10][8] = m5[1][9] = 'k'; //CHAVES
     m5[3][13] = m5[10][3] = m5[10][9] = 'B'; //BAU COM POTION
     m5[2][1] = m5[3][4] = 'V'; //BRUXA
     m5[3][8] = m5[6][13] = 'A'; //BRUXO
     desenha_mapa_cinco();
}

//SEXTO MAPA
void cria_mapa_seis()
{
	jogador.chaves-=1;
    system("cls");
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("###########################                         ############################");Sleep(100);
    printf("###########################     TORRE SOMBRIA       ############################");Sleep(100);
    printf("###########################     -SEXTO ANDAR-       ############################");Sleep(100);
    printf("###########################                         ############################");Sleep(100);
    printf("################################################################################");Sleep(100);;
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("################################################################################");Sleep(100);
    printf("                        Pressione 'Enter' para comecar");
    getch();
    
    //CRIAÇÃO DAS PAREDES
     for (i=0;i<=19;i++)
     {
         for (j=0;j<=29;j++)
         {
             if ((i==19) || (i==0) || (j==29) || (j==0))
             m6[i][j]='#';
             else
             m6[i][j]='0';
         }
     }
     for (i=1;i<=17;i++)
     {
         m6[i][5]='#';
     }
     for (i=1;i<=5;i++)
     {
         m6[5][i]='#';
         m6[11][i]='#';
     }
     for (i=1;i<=3;i++)
     {
         m6[13][i]='#';
         m6[15][i]='#';
     }
     for (i=2;i<=4;i++)
     {
         m6[17][i]='#';
     }
     for (i=1;i<=6;i++)
     {
         for (j=15;j<=27;j++)
         {
             m6[i][j]='#';
         }
     }
     for (i=1;i<=2;i++)
     {
         for (j=20;j<=21;j++)
         {
             m6[i][j]='0';
         }
     }
     for (i=3;i<=6;i++)
     {
         m6[i][21]='0';
     }
     for (i=7;i<=14;i++)
     {
         m6[2][i]='#';
     }
     for (i=3;i<=18;i++)
     {
         m6[i][7]='#';
     }
     for (i=9;i<=27;i++)
     {
			m6[13][i]='#';
			m6[15][i]='#';
			m6[17][i]='#';
	 }
	 m6[15][8]='#';
	 m6[17][28]='#';
	 for (i=15;i<=27;i++)
	 {
			m6[8][i]='#';
			m6[10][i]='#';
	 }
	 m6[8][28]='#';
	 m6[10][14]='#';
	 for (i=6;i<=12;i++)
	 {
			m6[i][9]='#';
	 }
	 for (i=10;i<=14;i++)
	 {
			m6[6][i]='#';
	 }
	 for (i=7;i<=10;i++)
	 {
			m6[i][13]='#';
	 }
	
     
     
     //CRIAÇÃO DOS OBJETOS DO MAPA
     m6[py][px]=1; //PLAYER
     m6[1][28] = 'E'; //ESCADA
     m6[8][1] = m6[1][1] = m6[14][1] = m6[7][11] = '*'; //ATRRIB BOOST
     for (i=22;i<=28;i++)
     {
         m6[18][i]= '*';
     }
     m6[12][1] = m6[8][11] = m6[7][10] = m6[7][12] = 'B'; //BAU COM POTION
     m6[4][5] = m6[8][5] = 'D';  //PORTA
     m6[6][28] = m6[14][7] = 'L'; //PORTA TRANCADA
     m6[12][4] = m6[1][20] = 'k'; //CHAVES
     for (i=3;i<=5;i++)
     {
         for (j=13;j<=14;j++)
         {
             m6[i][j] ='*';  //ATTRIB BOOST
         }
     }
     
     //INIMIGOS
     m6[1][2] = m6[8][2] = m6[17][1] = m6[8][14] = m6[9][15] = m6[11][14] = m6[12][14] = 127; //ALGOZ
     m6[2][1] = m6[7][1] = m6[9][1] = 'N'; //SOLDADO
     for (i=17;i<=20;i++)
     {
         m6[18][i] = 'N';
     }
     
     if (batalha_beholder_ok == 0)
        m6[7][21] = 'H'; //THE MIGHTY "DARKEST BEHOLDER"
     desenha_mapa_seis();
}


//PARTE RESPONSÁVEL PELOS DESENHOS DO MAPA

//PRIMEIRO MAPA
int desenha_mapa_um()
{
    system("cls");
    desenha_atributos();
    printf("\n\n");
    for (i=0;i<=14;i++) //"for" duplo para desneho do mapa
     {
         printf("                   ");
         for (j=0;j<=14;j++)
         {
             if (m1[i][j]=='0') //imprimir espaço quando for "chão", facilitando a visualização
                    printf("   ");
             else
                    printf("%c  ",m1[i][j]); //demais elementos do mapa
         }
         printf("\n\n");
     }
     printf("\n\n           Para acessar o inventario e conseguir mais ajuda pressione 'I'");

     //Movimento do inimigo soldado
     if (matou[0]==0)
     {
        last_x=Nx[0];
        last_y=Ny[0];
        direction=1+rand()%4;
        switch(direction)
        {
           case 1:
                 if (m1[Ny[0]-1][Nx[0]]!= '#')
                    Ny[0]--;
                 break;
           case 2:
                 if (m1[Ny[0]][Nx[0]+1]!='#')
                    Nx[0]++;   
                 break;
           case 3:
                 if (m1[Ny[0]+1][Nx[0]]!='#')
                     Ny[0]++;
                 break;
           case 4:
                 if (m1[Ny[0]][Nx[0]-1] != '#')
                     Nx[0]--;
                 break;
        }
        m1[Ny[0]][Nx[0]]='N';
        m1[last_y][last_x]='0'; 
        if (m1[last_y][last_x]==m1[Ny[0]][Nx[0]])
            m1[last_y][last_x]='N';
     }
     else //evitar que o player continue colidindo com o inimigo
     {
			Ny[0]=-1;
			Nx[0]=-1;
	}
	
    //apagar o ultimo
    last_x=px;
    last_y=py;
    
     // TESTE DE MOVIMENTO
    pega_tecla_movimento=getch();
        // sempre antes de mudar o valor da varíavel de localização do jogador ele faz uma checagem
    switch (pega_tecla_movimento)
    {
       case 's':
            if (m1[py+1][px]!='#')
            {
               switch (m1[py+1][px])
               {
                case 'N':
                   matou[0]=1;
                   py++;
                   batalha_soldado();
                   break;
                case '*':
                     py++;
                     desenha_ganhou_attrib();
                     break;
                case 'B':
                   py++;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
                default:
                   py++;
                   break;
               }
            }
            break;
       case 'w':
        if (m1[py-1][px]!='#')
        {
          switch (m1[py-1][px])
           {
              case 'N':
                   matou[0]=1;
                   py--;
                   batalha_soldado();
                   break;
                case '*':
                     py--;
                     desenha_ganhou_attrib();
                     break;
              case 'B':
                   py--;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
              default:
                   py--;
                   break;
           }
        }
        break;
       case 'd':
        if (m1[py][px+1]!='#')
        {
           switch (m1[py][px+1])
           {
              case 'N':
                   matou[0]=1;
                   px++;
                   batalha_soldado();
                   break;
                case '*':
                     px++;
                     desenha_ganhou_attrib();
                     break;
              case 'B':
                   px++;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
              default:
                   px++;
                   break;
           }
        }
        break;
       case 'a':
        if (m1[py][px-1]!='#')
        {
           switch (m1[py][px-1])
           {
              case 'N':
                   matou[0]=1;
                   px--;
                   batalha_soldado();
                   break;
                case '*':
                     px++;
                     desenha_ganhou_attrib();
                     break;
              case 'B':
                   px--;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
              default:
                   px--;
                   break;
           }  
        }
        break;
       case 'i':
     	desenha_inventario();
     	break;
   	   case 'p':
            desenha_usou_pocao();
            break;
    }
     
     //desenhar o jogador denovo no mapa e apagar o anterior (caso nao seja no mesmo lugar)
     m1[py][px]=1;
     m1[last_y][last_x]='0';
     if (m1[last_y][last_x] == m1[py][px])
     m1[last_y][last_x]=1;
     
     if ((py==1) && (px==13))
     cria_mapa_dois();
     
     
     //PUZZLE
     if ((py==1) && (px==6))
     {
       if(puzzle_um_ok == 0)
       {
          puzzle_um_ok=1;
       	  puzzle_porta_um(); 	
       }
     }	
     
     desenha_mapa_um();
     
}

//SEGUNDO MAPA
int desenha_mapa_dois()
{
    system("cls");
    last_x=px;
    last_y=py;
    desenha_atributos();
    printf("\n\n");
    for (i=0;i<=14;i++) //"for" duplo para desneho do mapa
     {
         printf("                   ");
         for (j=0;j<=14;j++)
         {
             if (m2[i][j]=='0') //imprimir espaço quando for "chão", facilitando a visualização
                    printf("   ");
             else
                    printf("%c  ",m2[i][j]); //demais elementos do mapa
         }
         printf("\n\n");
     }
     printf("\n\n           Para acessar o inventario e conseguir mais ajuda pressione 'I'");
      // TESTE DE MOVIMENTO
    pega_tecla_movimento=getch();
        // sempre antes de mudar o valor da varíavel de localização do jogador ele faz uma checagem
    switch (pega_tecla_movimento)
    {
       case 's':
            if (m2[py+1][px]!='#')
            {
               switch (m2[py+1][px])
               {
                case 'N':
                   matou[0]=1;
                   py++;
                   batalha_soldado();
                   break;
                case 'B':
                   py++;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
                case '*':
                     py++;
                     desenha_ganhou_attrib();
                     break;
                case 'D':
                     py++;
                     batalha_porta();
                     break;
                case 'k':
                     py++;
                     desenha_ganhou_chave();
                     break;
                case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        py++;
                     }
                     break;
                default:
                   py++;
                   break;
               }
            }
            break;
       case 'w':
        if (m2[py-1][px]!='#')
        {
          switch (m2[py-1][px])
           {
              case 'N':
                   matou[0]=1;
                   py--;
                   batalha_soldado();
                   break;
              case 'B':
                   py--;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
                case '*':
                     py--;
                     desenha_ganhou_attrib();
                     break;
              case 'D':
                     py--;
                     batalha_porta();
                     break;
                case 'k':
                     py--;
                     desenha_ganhou_chave();
                     break;
                case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        py--;
                     }
                     break;
              default:
                   py--;
                   break;
           }
        }
        break;
       case 'd':
        if (m2[py][px+1]!='#')
        {
           switch (m2[py][px+1])
           {
              case 'N':
                   matou[0]=1;
                   px++;
                   batalha_soldado();
                   break;
                case '*':
                     px++;
                     desenha_ganhou_attrib();
                     break;
              case 'B':
                   px++;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
              case 'D':
                     px++;
                     batalha_porta();
                     break;
              case 'k':
                     px++;
                     desenha_ganhou_chave();
                     break;
              case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        px++;
                     }
                     break;
              default:
                   px++;
                   break;
           }
        }
        break;
       case 'a':
        if (m2[py][px-1]!='#')
        {
           switch (m2[py][px-1])
           {
              case 'N':
                   matou[0]=1;
                   px--;
                   batalha_soldado();
                   break;
                case '*':
                     px--;
                     desenha_ganhou_attrib();
                     break;
              case 'B':
                   px--;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
              case 'D':
                     px--;
                     batalha_porta();
                     break;
              case 'k':
                     px--;
                     desenha_ganhou_chave();
                     break;
              case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        px--;
                     }
                     break;
              default:
                   px--;
                   break;
           }  
        }
        break;
       case 'i':
     	desenha_inventario();
     	break;
   	   case 'p':
            desenha_usou_pocao();
            break;
    }
     
     m2[py][px]=1;
     m2[last_y][last_x]='0';
     if (m2[last_y][last_x] == m2[py][px])
     m2[last_y][last_x]=1;
     
     if ((px==13) && (py==13))
        cria_mapa_tres();

     
     desenha_mapa_dois();
     
}

//TERCEIRO MAPA
int desenha_mapa_tres()
{
    system("cls");
    last_x=px;
    last_y=py;
    desenha_atributos();
    printf("\n");
    for (i=0;i<=14;i++) //"for" duplo para desneho do mapa
     {
         printf("                   ");
         for (j=0;j<=14;j++)
         {
             if (m3[i][j]=='0') //imprimir espaço quando for "chão", facilitando a visualização
                    printf("   ");
             else
                    printf("%c  ",m3[i][j]); //demais elementos do mapa
         }
         printf("\n\n");
     }
     printf("\n\n           Para acessar o inventario e conseguir mais ajuda pressione 'I'");
     // TESTE DE MOVIMENTO
    pega_tecla_movimento=getch();
        // sempre antes de mudar o valor da varíavel de localização do jogador ele faz uma checagem
    switch (pega_tecla_movimento)
    {
       case 's':
            if (m3[py+1][px]!='#')
            {
               switch (m3[py+1][px])
               {
                case 'N':
                   matou[0]=1;
                   py++;
                   batalha_soldado();
                   break;
                case '*':
                     py++;
                     desenha_ganhou_attrib();
                     break;
                case 'B':
                   py++;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
                case 'D':
                     py++;
                     batalha_porta();
                     break;
                case 'k':
                     py++;
                     desenha_ganhou_chave();
                     break;
                case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        py++;
                     }
                     break;
                default:
                   py++;
                   break;
               }
            }
            break;
       case 'w':
        if (m3[py-1][px]!='#')
        {
          switch (m3[py-1][px])
           {
              case 'N':
                   matou[0]=1;
                   py--;
                   batalha_soldado();
                   break;
                case '*':
                     py--;
                     desenha_ganhou_attrib();
                     break;
              case 'B':
                   py--;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
              case 'D':
                     py--;
                     batalha_porta();
                     break;
                case 'k':
                     py--;
                     desenha_ganhou_chave();
                     break;
                case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        py--;
                     }
                     break;
              default:
                   py--;
                   break;
           }
        }
        break;
       case 'd':
        if (m3[py][px+1]!='#')
        {
           switch (m3[py][px+1])
           {
              case 'N':
                   matou[0]=1;
                   px++;
                   batalha_soldado();
                   break;
                case '*':
                     px++;
                     desenha_ganhou_attrib();
                     break;
              case 'B':
                   px++;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
              case 'D':
                     px++;
                     batalha_porta();
                     break;
              case 'k':
                     px++;
                     desenha_ganhou_chave();
                     break;
              case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        px++;
                     }
                     break;
              default:
                   px++;
                   break;
           }
        }
        break;
       case 'a':
        if (m3[py][px-1]!='#')
        {
           switch (m3[py][px-1])
           {
              case 'N':
                   matou[0]=1;
                   px--;
                   batalha_soldado();
                   break;
                case '*':
                     px--;
                     desenha_ganhou_attrib();
                     break;
              case 'B':
                   px--;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
              case 'D':
                     px--;
                     batalha_porta();
                     break;
              case 'k':
                     px--;
                     desenha_ganhou_chave();
                     break;
              case 'L':
                     if (jogador.chaves>=1)
                     {                     
                        jogador.chaves--;
                        px--;
                     }
                     break;
              default:
                   px--;
                   break;
           }  
        }
        break;
       case 'i':
     	    desenha_inventario();
     	    break;
   	   case 'p':
            desenha_usou_pocao();
            break;
    }
     m3[py][px]=1;
     m3[last_y][last_x]='0';
     if (m3[last_y][last_x] == m3[py][px])
     m3[last_y][last_x]=1;

     if ((py==1) && (px==1))
        cria_mapa_quatro();
     
     desenha_mapa_tres();
     
}

//QUARTO ANDAR
int desenha_mapa_quatro()
{
    system("cls");
    last_x=px;
    last_y=py;
    desenha_atributos();
    printf("\n\n");
    for (i=0;i<=14;i++) //"for" duplo para desneho do mapa
     {
         printf("                   ");
         for (j=0;j<=14;j++)
         {
             if (m4[i][j]=='0') //imprimir espaço quando for "chão", facilitando a visualização
                    printf("   ");
             else
                    printf("%c  ",m4[i][j]); //demais elementos do mapa
         }
         printf("\n\n");
     }
     printf("\n\n           Para acessar o inventario e conseguir mais ajuda pressione 'I'");
     // TESTE DE MOVIMENTO
    pega_tecla_movimento=getch();
        // sempre antes de mudar o valor da varíavel de localização do jogador ele faz uma checagem
    switch (pega_tecla_movimento)
    {
       case 's':
            if (m4[py+1][px]!='#')
            {
               switch (m4[py+1][px])
               {
                case 'N':
                   matou[0]=1;
                   py++;
                   batalha_soldado();
                   break;
                case '*':
                     py++;
                     desenha_ganhou_attrib();
                     break;
              case 127:
                   py++;
                   batalha_algoz();
                   break;
                case 'B':
                   py++;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
                case 'D':
                     py++;
                     batalha_porta();
                     break;
                case 'k':
                     py++;
                     desenha_ganhou_chave();
                     break;
                case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        py++;
                     }
                     break;
                default:
                   py++;
                   break;
               }
            }
            break;
       case 'w':
        if (m4[py-1][px]!='#')
        {
          switch (m4[py-1][px])
           {
              case 'N':
                   matou[0]=1;
                   py--;
                   batalha_soldado();
                   break;
                case '*':
                     py--;
                     desenha_ganhou_attrib();
                     break;
              case 127:
                   py--;
                   batalha_algoz();
                   break;
              case 'B':
                   py--;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
              case 'D':
                     py--;
                     batalha_porta();
                     break;
                case 'k':
                     py--;
                     desenha_ganhou_chave();
                     break;
                case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        py--;
                     }
                     break;
              default:
                   py--;
                   break;
           }
        }
        break;
       case 'd':
        if (m4[py][px+1]!='#')
        {
           switch (m4[py][px+1])
           {
              case 'N':
                   matou[0]=1;
                   px++;
                   batalha_soldado();
                   break;
                case '*':
                     px++;
                     desenha_ganhou_attrib();
                     break;
              case 'B':
                   px++;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
              case 'D':
                     px++;
                     batalha_porta();
                     break;
              case 'k':
                     px++;
                     desenha_ganhou_chave();
                     break;
              case 127:
                   px++;
                   batalha_algoz();
                   break;
              case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        px++;
                     }
                     break;
              default:
                   px++;
                   break;
           }
        }
        break;
       case 'a':
        if (m4[py][px-1]!='#')
        {
           switch (m4[py][px-1])
           {
              case 'N':
                   matou[0]=1;
                   px--;
                   batalha_soldado();
                   break;
                case '*':
                     px--;
                     desenha_ganhou_attrib();
                     break;
              case 127:
                   px--;
                   batalha_algoz();
                   break;
              case 'B':
                   px--;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
              case 'D':
                     px--;
                     batalha_porta();
                     break;
              case 'k':
                     px--;
                     desenha_ganhou_chave();
                     break;
              case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        px--;
                     }
                     break;
              default:
                   px--;
                   break;
           }  
        }
        break;
       case 'i':
     	desenha_inventario();
     	break;
   	   case 'p':
            desenha_usou_pocao();
            break;
    }
     m4[py][px]=1;
     m4[last_y][last_x]='0';
     if (m4[last_y][last_x] == m4[py][px])
     m4[last_y][last_x]=1;
           
     if ((py==13) && (px==1))
        cria_mapa_cinco();
     
     desenha_mapa_quatro();
     
}

//QUINTO ANDAR
int desenha_mapa_cinco()
{
    system("cls");
    last_x=px;
    last_y=py;
    desenha_atributos();
    printf("\n\n");
    for (i=0;i<=14;i++) //"for" duplo para desneho do mapa
     {
         printf("                   ");
         for (j=0;j<=14;j++)
         {
             if (m5[i][j]=='0') //imprimir espaço quando for "chão", facilitando a visualização
                    printf("   ");
             else
                    printf("%c  ",m5[i][j]); //demais elementos do mapa
         }
         printf("\n\n");
     }
     printf("\n\n           Para acessar o inventario e conseguir mais ajuda pressione 'I'");
     // TESTE DE MOVIMENTO
    pega_tecla_movimento=getch();
        // sempre antes de mudar o valor da varíavel de localização do jogador ele faz uma checagem
    switch (pega_tecla_movimento)
    {
       case 's':
            if (m5[py+1][px]!='#')
            {
               switch (m5[py+1][px])
               {
                case 'N':
                   matou[0]=1;
                   py++;
                   batalha_soldado();
                   break;
                case '*':
                     py++;
                     desenha_ganhou_attrib();
                     break;
                case 'B':
                   py++;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
              case 'A':
                   py--;
                   batalha_bruxo();
                   break;
              case 'V':
                   py--;
                   batalha_bruxa();
                   break;
                case 'D':
                     py++;
                     batalha_porta();
                     break;
                case 'k':
                     py++;
                     desenha_ganhou_chave();
                     break;
                case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        py++;
                     }
                     break;
                default:
                   py++;
                   break;
               }
            }
            break;
       case 'w':
        if (m5[py-1][px]!='#')
        {
          switch (m5[py-1][px])
           {
              case 'N':
                   matou[0]=1;
                   py--;
                   batalha_soldado();
                   break;
                case '*':
                     py--;
                     desenha_ganhou_attrib();
                     break;
              case 'B':
                   py--;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
              case 'A':
                   py--;
                   batalha_bruxo();
                   break;
              case 'V':
                   py--;
                   batalha_bruxa();
                   break;
              case 'D':
                     py--;
                     batalha_porta();
                     break;
                case 'k':
                     py--;
                     desenha_ganhou_chave();
                     break;
                case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        py--;
                     }
                     break;
              default:
                   py--;
                   break;
           }
        }
        break;
       case 'd':
        if (m5[py][px+1]!='#')
        {
           switch (m5[py][px+1])
           {
              case 'N':
                   matou[0]=1;
                   px++;
                   batalha_soldado();
                   break;
              case '*':
                     px++;
                     desenha_ganhou_attrib();
                     break;
              case 'B':
                   px++;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
              case 'A':
                   px++;
                   batalha_bruxo();
                   break;
              case 'V':
                   px++;
                   batalha_bruxa();
                   break;
              case 'D':
                     px++;
                     batalha_porta();
                     break;
              case 'k':
                     px++;
                     desenha_ganhou_chave();
                     break;
              case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        px++;
                     }
                     break;
              default:
                   px++;
                   break;
           }
        }
        break;
       case 'a':
        if (m5[py][px-1]!='#')
        {
           switch (m5[py][px-1])
           {
              case 'N':
                   matou[0]=1;
                   px--;
                   batalha_soldado();
                   break;
              case '*':
                     px--;
                     desenha_ganhou_attrib();
                     break;
              case 'B':
                   px--;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
              case 'A':
                   py--;
                   batalha_bruxo();
                   break;
              case 'V':
                   py--;
                   batalha_bruxa();
                   break;
              case 'D':
                     px--;
                     batalha_porta();
                     break;
              case 'k':
                     px--;
                     desenha_ganhou_chave();
                     break;
              case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        px--;
                     }
                     break;
              default:
                   px--;
                   break;
           }  
        }
        break;
       case 'i':
     	desenha_inventario();
     	break;
   	   case 'p':
            desenha_usou_pocao();
            break;
    }
     
     m5[py][px]=1;
     m5[last_y][last_x]='0';
     if (m5[last_y][last_x] == m5[py][px])
     m5[last_y][last_x]=1;
     
     if (py==1 && px==13)
        cria_mapa_seis();
           

     
     desenha_mapa_cinco();
     
}

//SEXTO MAPA
int desenha_mapa_seis()
{
    system("cls");
    last_x=px;
    last_y=py;
    desenha_atributos();
    printf("\n");
    for (i=0;i<=19;i++) //"for" duplo para desneho do mapa
     {
         printf("          ");
         for (j=0;j<=29;j++)
         {
             if (m6[i][j]=='0') //imprimir espaço quando for "chão", facilitando a visualização
                    printf("  ");
             else
                    printf("%c ",m6[i][j]); //demais elementos do mapa
         }
         printf("\n");
     }
     printf("\n\n           Para acessar o inventario e conseguir mais ajuda pressione 'I'");
     // TESTE DE MOVIMENTO
    pega_tecla_movimento=getch();
        // sempre antes de mudar o valor da varíavel de localização do jogador ele faz uma checagem
    switch (pega_tecla_movimento)
    {
       case 's':
            if (m6[py+1][px]!='#')
            {
               switch (m6[py+1][px])
               {
                case 'N':
                   matou[0]=1;
                   py++;
                   batalha_soldado();
                   break;
                case '*':
                     py++;
                     desenha_ganhou_attrib();
                     break;
                case 'B':
                   py++;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
                case 127:
                     py++;
                     batalha_algoz();
                     break;
                case 'A':
                   px++;
                   batalha_bruxo();
                   break;
                case 'V':
                   px++;
                   batalha_bruxa();
                   break;
                case 'D':
                     py++;
                     batalha_porta();
                     break;
                case 'k':
                     py++;
                     desenha_ganhou_chave();
                     break;
                case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        py++;
                     }
                     break;
                default:
                   py++;
                   break;
               }
            }
            break;
       case 'w':
        if (m6[py-1][px]!='#')
        {
          switch (m6[py-1][px])
           {
              case 'N':
                   matou[0]=1;
                   py--;
                   batalha_soldado();
                   break;
                case '*':
                     py--;
                     desenha_ganhou_attrib();
                     break;
              case 'B':
                   py--;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
                case 127:
                     py--;
                     batalha_algoz();
                     break;
                case 'H':
					py--;
					batalha_beholder();
					break;
              case 'A':
                   py--;
                   batalha_bruxo();
                   break;
              case 'V':
                   py--;
                   batalha_bruxa();
                   break;
              case 'D':
                     py--;
                     batalha_porta();
                     break;
                case 'k':
                     py--;
                     desenha_ganhou_chave();
                     break;
                case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        py--;
                     }
                     break;
              default:
                   py--;
                   break;
           }
        }
        break;
       case 'd':
        if (m6[py][px+1]!='#')
        {
           switch (m6[py][px+1])
           {
              case 'N':
                   matou[0]=1;
                   px++;
                   batalha_soldado();
                   break;
                case '*':
                     px++;
                     desenha_ganhou_attrib();
                     break;
				case 'H':
					px++;
					batalha_beholder();
					break;
              case 'B':
                   px++;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
                case 127:
                     px++;
                     batalha_algoz();
                     break;
              case 'A':
                   px--;
                   batalha_bruxo();
                   break;
              case 'V':
                   px--;
                   batalha_bruxa();
                   break;
              case 'D':
                     px++;
                     batalha_porta();
                     break;
              case 'k':
                     px++;
                     desenha_ganhou_chave();
                     break;
              case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        px++;
                     }
                     break;
              default:
                   px++;
                   break;
           }
        }
        break;
       case 'a':
        if (m6[py][px-1]!='#')
        {
           switch (m6[py][px-1])
           {
              case 'N':
                   matou[0]=1;
                   px--;
                   batalha_soldado();
                   break;
                case '*':
                     px--;
                     desenha_ganhou_attrib();
                     break;
              case 'B':
                   px--;
                   jogador.pocoes++;
                   desenha_ganhou_pocao();
                   break;
                case 127:
                     px--;
                     batalha_algoz();
                     break;
              case 'A':
                   px--;
                   batalha_bruxo();
                   break;
              case 'V':
                   px--;
                   batalha_bruxa();
                   break;
              case 'D':
                     px--;
                     batalha_porta();
                     break;
              case 'k':
                     px--;
                     desenha_ganhou_chave();
                     break;
              case 'L':
                     if (jogador.chaves>=1)
                     {
                        jogador.chaves--;
                        px--;
                     }
                     break;
              default:
                   px--;
                   break;
           }  
        }
        break;
       case 'i':
     	desenha_inventario();
     	break;
   	   case 'p':
            desenha_usou_pocao();
            break;
    }
     
     
     m6[py][px]=1;
     m6[last_y][last_x]='0';
     if (m6[last_y][last_x] == m6[py][px])
     m6[last_y][last_x]=1;

     if ((py==1) && (px==28))
        cria_batalha_dragao();
     
     desenha_mapa_seis();
     
}
