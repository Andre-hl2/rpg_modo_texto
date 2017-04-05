#include "puzzles.h"
#include "main.h"

void puzzle_porta_um()
{
     for (i=0;i<=2;i++)
     {
         for (j=0;j<=2;j++)
         {
          on_off[i][j]=0;
         }
     }
     on_off[1][1]=1;
     system("cls");
     desenha_atributos();
     printf("\n\n       #####################################################################\n");
     printf("       #                                                                   #\n");
     printf("       #    Essa Porta esta selada, conclua o puzzle para que ela abra.    #\n");
     printf("       #                                                                   #\n");
     printf("       #####################################################################\n\n");
     printf("                         Pressione 'enter' para comecar...");
     getch();
     system("cls");
     while ((on_off[0][0]!= 1) || (on_off[0][1]!=1) || (on_off[0][2]!=1) || (on_off[1][0]!=1) || (on_off[1][1]!=1) || (on_off[1][2]!=1) || (on_off[2][0]!=1) || (on_off[2][1]!=1) || (on_off[2][2]!=1))
	{
       desenha_atributos();
	   printf(" \n\n\n                    Voce deve deixar todos os botoes ligados,\n                   use o teclado numerico para ligar e desligar,\n                   a porta se abrira quando todos forem '1'.");
       printf("\n\n");
       printf("                                              \n");
       printf("                                              \n");
       printf("                                              \n");
       printf("                                       ____            \n");
       printf("                                   ___/    \\___        \n");
       printf("                               ___/            \\___    \n");
       printf("                           ___/                    \\___\n");
       printf("                          |   ______________________   |\n");
       printf("                          |  |                      |  |\n");
       printf("                          |  |  _________________   |  |\n");
       printf("                          |  |  |     |     |    |  |  |\n");
       printf("                          |  |  |  %d  |  %d  | %d  |  |  |\n",on_off[0][0],on_off[0][1],on_off[0][2]);
       printf("                          |  |  |_____|_____|____|  |  |\n");
       printf("                          |  |  |     |     |    |  |  |\n");
       printf("                          |  |  |  %d  |  %d  |  %d |  |  |\n",on_off[1][0],on_off[1][1],on_off[1][2]);
       printf("                          |  |  |_____|_____|____|  |  |\n");
       printf("                          |  |  |     |     |    |  |  |\n");
       printf("                          |  |  |  %d  |  %d  |  %d |  |  |\n",on_off[2][0],on_off[2][1],on_off[2][2]);
       printf("                          |  |  |_____|_____|____|  |  |\n");
       printf("                          |  |                      |  |\n");
       printf("                          |  |                      |  |\n");
       printf("                          |  |                      |  |\n");
       printf("                          |  |                      |  |\n");
       printf("                          |  |                      |  |\n");
       printf("                          |  |                      |  |\n");
       printf("                          |__|______________________|__|\n");
       

       pega_numero=getch();
       if (pega_numero=='9')  //BOTAO 9
       {
           if (on_off[0][2]==0)
              on_off[0][2]=1;
           else
              on_off[0][2]=0;
           if (on_off[0][1]==0)
              on_off[0][1]=1;
           else
               on_off[0][1]=0;
           if (on_off[1][2]==0)
              on_off[1][2]=1;
           else
               on_off[1][2]=0;

       }
       if (pega_numero=='8')  //BOTAO 8
       {
           if (on_off[0][1]==0)
              on_off[0][1]=1;
           else
               on_off[0][1]=0;
           if (on_off[0][0]==0)
              on_off[0][0]=1;
           else
               on_off[0][0]=0;
           if (on_off[1][1]==0)
              on_off[1][1]=1;
           else
               on_off[1][1]=0;
           if (on_off[0][2]==0)
              on_off[0][2]=1;
           else
               on_off[0][2]=0;

       }
       if (pega_numero=='7')  //BOTAO 7
       {
           if (on_off[0][0]==0)
              on_off[0][0]=1;
           else
               on_off[0][0]=0;
           if (on_off[1][0]==0)
              on_off[1][0]=1;
           else
               on_off[1][0]=0;
           if (on_off[0][1]==0)
              on_off[0][1]=1;
           else
               on_off[0][1]=0;

       }
       if (pega_numero=='6') //BOTAO 6
       {
           if (on_off[1][2]==0)
              on_off[1][2]=1;
           else
               on_off[1][2]=0;
           if (on_off[0][2]==0)
              on_off[0][2]=1;
           else
               on_off[0][2]=0;
           if (on_off[1][1]==0)
              on_off[1][1]=1;
           else
               on_off[1][1]=0;
           if (on_off[2][2]==0)
              on_off[2][2]=1;
           else
               on_off[2][2]=0;
       }
       if (pega_numero=='5') //BOTAO 5
       {
           if (on_off[1][1]==0)
              on_off[1][1]=1;
           else
               on_off[1][1]=0;
           if (on_off[0][1]==0)
              on_off[0][1]=1;
           else
               on_off[0][1]=0;
           if (on_off[1][0]==0)
              on_off[1][0]=1;
           else
               on_off[1][0]=0;
           if (on_off[1][2]==0)
              on_off[1][2]=1;
           else
               on_off[1][2]=0;
           if (on_off[2][1]==0)
              on_off[2][1]=1;
           else
               on_off[2][1]=0;
               
           
       }
       if (pega_numero=='4') //BOTAO 4
       {
           if (on_off[1][0]==0)
              on_off[1][0]=1;
           else
               on_off[1][0]=0;
           if (on_off[0][0]==0)
              on_off[0][0]=1;
           else
               on_off[0][0]=0;
           if (on_off[2][0]==0)
              on_off[2][0]=1;
           else
               on_off[2][0]=0;
           if (on_off[1][1]==0)
              on_off[1][1]=1;
           else
               on_off[1][1]=0;
       }
       if (pega_numero=='3')//BOTAO 3
       {
          if (on_off[2][2]==0)
             on_off[2][2]=1;
          else
              on_off[2][2]=0;
          if (on_off[2][1]==0)
             on_off[2][1]=1;
          else
              on_off[2][1]=0;
          if (on_off[1][2]==0)
             on_off[1][2]=1;
          else
              on_off[1][2]=0;
       }
       if (pega_numero=='2') //BOTAO 2
       {
           if (on_off[2][1]==0)
              on_off[2][1]=1;
           else
               on_off[2][1]=0;
           if (on_off[2][0]==0)
              on_off[2][0]=1;
           else
               on_off[2][0]=0;
           if (on_off[2][2]==0)
              on_off[2][2]=1;
           else
               on_off[2][2]=0;
           if (on_off[1][1]==0)
              on_off[1][1]=1;
           else
               on_off[1][1]=0;
       }
       if (pega_numero=='1') //BOTAO 1
       {
          if (on_off[2][0]==0)
             on_off[2][0]=1;
          else
              on_off[2][0]=0;
          if (on_off[1][0]==0)
             on_off[1][0]=1;
          else
              on_off[1][0]=0;
          if (on_off[2][1]==0)
             on_off[2][1]=1;
          else
              on_off[2][1]=0;
       }
       if ((pega_numero=='i')||(pega_numero=='I')) //PASSA DIRETO
       {
          on_off[0][0]=on_off[0][1]=on_off[0][2]=on_off[1][0]=on_off[1][1]=on_off[1][2]=on_off[2][0]=on_off[2][1]=on_off[2][2]=1;
       };
    system("cls");
    }
 system("cls");
 desenha_atributos();
 printf("\n\n       #####################################################################\n");
 printf("       #                                                                   #\n");
 printf("       #                             PARABENS!!!                           #\n");
 printf("       #                                                                   #\n");
 printf("       #####################################################################\n\n");
 printf("                        Pressione 'enter' para voltar ao mapa...");
 getch();
}
