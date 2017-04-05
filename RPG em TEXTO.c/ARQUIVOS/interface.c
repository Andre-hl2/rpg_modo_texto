#include "interface.h"
#include "main.h"

// PARTE RESPONSÁVEL PELO MENU E PELA INTRODUÇÃO
int menuu()
{
	  god_mode=0;
	  desenha_menu();
	  printf("\n            *Maximize a tela para o total aproveitamento do jogo.  \n\n");
      printf("                                           \n");
      printf("                                           \n");
      printf("                                 -1- Iniciar  \n\n");
      printf("                                 -2- Como jogar  \n\n");
      printf("                                 -3- Sobre    \n\n");
      printf("                         -4- 'demo para o professor'\n\n");
      printf("                                 -5- Sair     \n\n");
      printf("                                     ");menu=getch();
      switch (menu)
      {
             case '1':
				  printf(" 1");
                  Sleep(500);
                  cria_personagem();
                  break;
             case '2':
                  printf(" 2");
                  Sleep(500);
                  desenha_menu();
                  printf("               ######################################################\n");
	              printf("               #                                                    #\n"); 
                  printf("               #             -COMO JOGAR 'RPG EM TEXTO'-            #\n");
	              printf("               #                                                    #\n"); 
	              printf("               #  Utilize 'w''a''s''d' para controlar o personagem  #\n");
	              printf("               #                                                    #\n");
                  printf("               #  Utilize 'i' para abrir o inventario               #\n");
                  printf("               #                                                    #\n"); 
	              printf("               #  Utilize 'p' para usar uma pocao                   #\n");
	              printf("               #                                                    #\n");
                  printf("               #  Utilize 'L' para abrir a legenda do mapa          #\n");
                  printf("               #                                                    #\n"); 
	              printf("               #  Puzzles utilizam o teclado numero                 #\n");
	              printf("               #                                                    #\n");
                  printf("               #                                                    #\n");
                  printf("               ######################################################\n");
                  getch();
                  system("cls");
                  menuu();
                  break;
             case '3':
				  printf(" 3");
				  Sleep(500);
                  desenha_menu();
                  printf("                                           \n");
                  printf("                                           \n");
                  printf("                    Programador dos mapas e desenhista:   \n\n");
                  printf("                                Andre Ferreira     \n\n\n");
                  printf("                       Artista e programador do menu:     \n\n");
                  printf("                               Guilherme Andretta     \n\n\n");
                  printf("                      Programador do sistema de batalhas:\n\n");
                  printf("                               Vinicius Figueiro \n\n\n\n\n");
                  printf("                  Pressione qualquer tecla para voltar ao menu...\n\n");
                  getch();
                  system("cls");
                  menuu();
                  break;
             case '4':
				  god_mode=1;
				  printf(" 4");
                  Sleep(500);
                  desenha_menu();
                  printf("               ######################################################\n");
	              printf("               #                                                    #\n"); 
                  printf("               #               -VOCE VAI JOGAR UMA-                 #\n");
	              printf("               #      -DEMONSTRCAO DAS FUNCIONALIDADES DO JOGO-     #\n"); 
	              printf("               #                                                    #\n");
	              printf("               #   - Voce passara por 3 dos 6 niveis                #\n");
                  printf("               #                                                    #\n");
	              printf("               #   - Comecara com atributos altos                   #\n");
	              printf("               #                                                    #\n");
	              printf("               #   - Comecara com todas habilidades da sua classe   #\n");
                  printf("               #                                                    #\n");
	              printf("               #   - iniciara com x9 pocoes e x9 chaves             #\n");
	              printf("               #                                                    #\n");
                  printf("               #                                                    #\n");
	              printf("               #                                                    #\n");
                  printf("               ######################################################\n");
                  printf("                           Pressione 'enter' para comecar");
                  getch();
                  cria_personagem();
                  break;
             case '5':
                  system("cls");
                  desenha_menu();
                  printf("\n\n\n\n                 O jogo esta sendo fechado...");
                  Sleep(1000);
                  break;
             default:
                  printf("\n\n                     ERRO... Jogo fechando...");
                  Sleep(1000);
                  break;
      }
}

void desenha_introducao() //desenha história inicial do jogo
{
	system("cls");
	desenha_menu();
	printf("               ##################################################\n"); Sleep(25);
	printf("               #                                                #\n"); Sleep(25);
	printf("               #                                                #\n");Sleep(25);
	printf("               #                                                #\n"); Sleep(25);
	printf("               #                                                #\n");Sleep(25);
	printf("               #                                                #\n"); Sleep(25);
	printf("               #                                                #\n");Sleep(25);
	printf("               #                                                #\n"); Sleep(25);
	printf("               #                  BEM - VINDO                   #\n");Sleep(25);
	printf("               #                      AO                        #\n"); Sleep(25);
	printf("               #                  RPG EM TEXTO                  #\n");Sleep(25);
	printf("               #                                                #\n"); Sleep(25);
	printf("               #                                                #\n");Sleep(25);
	printf("               #                                                #\n"); Sleep(25);
	printf("               #                                                #\n");Sleep(25);
	printf("               #                  Sua aventura                  #\n"); Sleep(25);
	printf("               #                  comeca agora...               #\n");Sleep(25);
	printf("               #                                                #\n"); Sleep(25);
	printf("               #      Pressione Enter para passar de quadro     #\n");Sleep(25);
	printf("               #                                                #\n"); Sleep(25);
	printf("               ##################################################\n");Sleep(25);
	getch();
	system("cls");
	desenha_menu();
	printf("               ##################################################\n"); Sleep(25);
	printf("               #   .:'                                  `:.     #\n");Sleep(25);
	printf("               #  ::'                                      `::  #\n");Sleep(25);
 	printf("               #  :: :.                                  .: ::  #\n");Sleep(25);
  	printf("               #    `:. `:.             .             .:'  .:'  #\n");Sleep(25);
   	printf("               #     `::. `::           !           ::' .::'    #\n");Sleep(25);
	printf("               #         `::.`::.    .' ! `.    .::'.::'        #\n");Sleep(25);
	printf("               #           `:.  `::::'':!:``::::'   ::'         #\n");Sleep(25);
	printf("               #           :'*:::.  .:' ! `:.  .:::*`:          #\n");Sleep(25);
	printf("               #          :: HHH::.   ` ! '   .::HHH ::         #\n");Sleep(25);
	printf("               #         ::: `H TH::.  `!'  .::HT H' :::        #\n");Sleep(25);
	printf("               #         ::..  `THHH:`:   :':HHHT'  ..::        #\n");Sleep(25);
	printf("               #        `::      `T: `. .' :T'      ::'         #\n");Sleep(25);
	printf("               #           `:. .   :         :   . .:'          #\n");Sleep(25);
	printf("               #             `::'               `::'            #\n");Sleep(25);
	printf("               #               :'  .`.  .  .'.  `:              #\n");Sleep(25);
	printf("               #               :' ::.       .:: `:              #\n");Sleep(25);
	printf("               #               :' `:::     :::' `:              #\n");Sleep(25);
	printf("               #                `.  ``     ''  .'               #\n");Sleep(25);
	printf("               #                 :`...........':                #\n");Sleep(25);
	printf("               #                 ` :`.     .': '                #\n");Sleep(25);
	printf("               #                  `:  `''''  :'                 #\n");Sleep(25);
	printf("               ##################################################\n");Sleep(25);
	printf("\n Um mal esta voltando a terra, um poderoso necromante esta o trazendo devolta,");
	getch();	
	system("cls");
	desenha_menu();
	printf("               ##################################################\n"); Sleep(25);
	printf("               #         |______|______|______|______|          #\n"); Sleep(25);
	printf("               #         |___|______|______|______|__|          #\n");Sleep(25);
	printf("               #         |______|______|______|______|    /\\    #\n"); Sleep(25);
	printf("               #         |___|______|______|______|__|   /  \\   #\n");Sleep(25);
	printf("               #         |______|______|______|______|  /    \\  #\n");Sleep(25);
	printf("               #         |___|______|______|______|__| /      \\ #\n");Sleep(25);
	printf("               #         |______|______|______|______|/        \\#\n");Sleep(25);
	printf("               #         |___|___TORRE SOMBRIA____|__|          #\n");Sleep(25);
	printf("               #         |___|______|______|______|__|          #\n");Sleep(25);
	printf("               #     /\\  |______|______|______|______|          #\n");Sleep(25);
	printf("               #    /  \\ |___|______|______|______|__|          #\n");Sleep(25);
	printf("               #   /    \\|______|______|______|______|          #\n");Sleep(25);
	printf("               #  /      |___|______|______|______|__|          #\n");Sleep(25);
	printf("               # /       |______|______|______|______|          #\n");Sleep(25);
	printf("               #/        |___|______|______|______|__|  _______ #\n");Sleep(25);
	printf("               #         |______|_____________|______| |  Nao  |#\n"); Sleep(25);
	printf("               #         |___|______|ººººº|_|_____|__| | Entre |#\n"); Sleep(25);
	printf("               #         |______|___|ººººº|___|______| |_______|#\n");Sleep(25);
	printf("               #         |___|______|ººººº|_|_____|__|    ||    #\n");Sleep(25);
	printf("               ##################################################\n");Sleep(25);
	printf("\n   O necromante esta instalado na torre sombria, cabe a voce derrota-lo...");
	getch();
	system("cls");
	desenha_menu();
	printf("               ##################################################\n"); Sleep(25);
	printf("               #          NMM`         MMM`          MMM        #\n"); Sleep(25);
	printf("               #          NMM`         MMM`          MMM        #\n"); Sleep(25);
	printf("               #       . -MMm          NMM`          MMM`       #\n");Sleep(25);
	printf("               #       . -MMm          NMM`          MMM`       #\n"); Sleep(25);
	printf("               #hhhhhhhhhhMMNhhhhhhhhhhMMMhhhhhhhhhhhMMMhhhhhhhh#\n");Sleep(25);
	printf("               #hhhhhhhhhhhhhhmMMMNNNNNNNNNNNNNNNNMMNhhhhhhhhhhh#\n"); Sleep(25);
	printf("               #   NMM         oMMs_______________/MMd          #\n");Sleep(25);
	printf("               #   NMM         oMMo|   |    |    |-MMd          #\n"); Sleep(25);
	printf("               #   NMM         oMMo|   |    |    |-MMm------    #\n");Sleep(25);
	printf("               #dddddddddddddddNMMo|   |    |    |-MMMMMMMMMMMMM#\n"); Sleep(25);
	printf("               #               oMMo|   |    |    |-MMd          #\n");Sleep(25);
	printf("               #               oMMo|   |    |___ |-MMd          #\n");Sleep(25);
	printf("               #               oMMo|   |    |   ||-MMd          #\n"); Sleep(25);
	printf("               #               sMMo|   |    |___||-MMd          #\n");Sleep(25);
	printf("               #NNNNNNNNNNNNNNNNMMo|   |    |    |-MMNdddddddddd#\n"); Sleep(25);
	printf("               #ddddddddooooooohMMo|   |    |    |-MMNyyyyyyyyyy#\n");Sleep(25);
	printf("               #   NMM         oMMo|   |    |    |-MMd          #\n"); Sleep(25);
	printf("               #   NMM         oMMo|   |    |    |-MMd          #\n"); Sleep(25);
	printf("               #   NMM         +dd+|   |    |    |-ddy          #\n");Sleep(25);
	printf("               ##################################################\n");Sleep(25);
	printf("\n  Entre agora na torre e passe por todos seu niveis para derrotar o necromante.");
	getch();
    if (genero=='1')
    {	
	  system("cls");
	  desenha_menu();
	  printf("               ##################################################\n"); Sleep(25);
	  printf("               #                                                #\n"); Sleep(25);
	  printf("               #                                                #\n");Sleep(25);
	  printf("               #                                                #\n"); Sleep(25);
	  printf("               #                                                #\n");Sleep(25);
	  printf("               #                                                #\n"); Sleep(25);
	  printf("               #                                                #\n");Sleep(25);
	  printf("               #                                                #\n"); Sleep(25);
	  printf("               #                  SEJA SABIO,                   #\n");Sleep(25);
	  printf("               #                 SEJA CUIDADOSO,                #\n"); Sleep(25);
	  printf("               #                 SEJA CORAJOSO.                 #\n");Sleep(25);
	  printf("               #                                                #\n"); Sleep(25);
	  printf("               #                                                #\n");Sleep(25);
	  printf("               #                                                #\n"); Sleep(25);
	  printf("               #                                                #\n");Sleep(25);
	  printf("               #           Destrua o poderodo necromante        #\n"); Sleep(25);
	  printf("               #             poderoso  %7s                  #\n",nome);Sleep(25);
	  printf("               #                                                #\n"); Sleep(25);
	  printf("               #                                                #\n");Sleep(25);
	  printf("               #                                                #\n"); Sleep(25);
	  printf("               ##################################################\n");Sleep(25);
   }
   if (genero=='2')
   {
	  system("cls");
	  desenha_menu();
      printf("               ##################################################\n"); Sleep(25);
	  printf("               #                                                #\n"); Sleep(25);
	  printf("               #                                                #\n");Sleep(25);
	  printf("               #                                                #\n"); Sleep(25);
	  printf("               #                                                #\n");Sleep(25);
	  printf("               #                                                #\n"); Sleep(25);
	  printf("               #                                                #\n");Sleep(25);
	  printf("               #                                                #\n"); Sleep(25);
	  printf("               #                  SEJA SABIA,                   #\n");Sleep(25);
	  printf("               #                 SEJA CUIDADOSA,                #\n"); Sleep(25);
	  printf("               #                 SEJA CORAJOSA.                 #\n");Sleep(25);
	  printf("               #                                                #\n"); Sleep(25);
	  printf("               #                                                #\n");Sleep(25);
	  printf("               #                                                #\n"); Sleep(25);
	  printf("               #                                                #\n");Sleep(25);
	  printf("               #           Destrua o poderodo necromante        #\n"); Sleep(25);
	  printf("               #             poderosa  %7s                  #\n",nome);Sleep(25);
	  printf("               #                                                #\n"); Sleep(25);
	  printf("               #                                                #\n");Sleep(25);
	  printf("               #                                                #\n"); Sleep(25);
	  printf("               ##################################################\n");Sleep(25); 
   }     
   getch();
   system("cls");
   if (god_mode == 1)
   	cria_mapa_quatro();
   else
   	cria_mapa_um();
}



// PARTE RESPONSÁVEL PELOS DESENHOS
void desenha_menu()
{
	system("cls");
printf("                                    /   \\  \n");
printf("   _                        )      ((   ))     (\n");
printf("  (@)                      /|\\      ))_((     /|\\\n");
printf("  |-|                     / | \\    (/\\|/\\)   / | \\                      (@)\n");
printf("  | | -------------------/--|-voV---\\`|'/--Vov-|--\\---------------------|-|\n");
printf("  |-|                         '^`   (o o)  '^`                          | |\n");
printf("  | |                               `\\Y/'                               |-|\n");
printf("  |-|                                                                   | |\n");
printf("  | |                             RPG EM TEXTO                          |-|\n");
printf("  |-|                                                                   | |\n");
printf("  | |                                                                   |-|\n");
printf("  |_|___________________________________________________________________| |\n");
printf("  (@)              l   /\\ /         ( (       \\ /\\   l                `\\|-|\n");
printf("                   l /   V           \\ \\       V   \\ l                  (@)\n");
printf("                   l/                _) )_          \\I\n");
printf("                                     `\\ /'\n");
printf("  				       `\n");
}

void desenha_atributos()
{
        printf("                                    /   \\  \n");
        printf("   _                        )      ((   ))     (\n");
        printf("  (@)                      /|\\      ))_((     /|\\\n");
        printf("  |-|                     / | \\    (/\\|/\\)   / | \\                      (@)\n");
        printf("  | | -------------------/--|-voV---\\`|'/--Vov-|--\\---------------------|-|\n");
        printf("  |-|                         '^`   (o o)  '^`                          | |\n");
        printf("  | |                               `\\Y/'                               |-|\n");
        printf("  |-|                                                                   | |\n");
        printf("  | |       Nome: %7s     Classe: %9s    Lv.: %2d              |-|\n",nome,str_classe, jogador.lv);
        printf("  |-|                                                                   | |\n");
        printf("  | |                                                                   |-|\n");
        printf("  |_|___________________________________________________________________| |\n");
        printf("  (@)              l   /\\ /         ( (       \\ /\\   l                `\\|-|\n");
        printf("                   l /   V           \\ \\       V   \\ l                  (@)\n");
        printf("                   l/                _) )_          \\I\n");
        printf("                                     `\\ /'\n");
        printf("  				       `\n");
}

void desenha_abertura() //auto-explicativo
{
    printf("################################################################################");Sleep(100);
    printf("#                                     /\\                                       #");Sleep(100);
    printf("#                                    /  \\                                      #");Sleep(100);
    printf("#                                   /    \\                                     #");Sleep(100);
    printf("#                                  /      \\                                    #");Sleep(100);
    printf("#                                 /        \\                                   #");Sleep(100);
    printf("#                                /          \\                                  #");Sleep(100);
    printf("#                               /            \\                                 #");Sleep(100);
    printf("#                              /              \\                                #");Sleep(100);
    printf("#                             /                \\                               #");Sleep(100);
    printf("#                            /__________________\\                              #");Sleep(100);
    printf("#                           / \\                 /\\                             #");Sleep(100);
    printf("#                          /   \\               /  \\                            #");Sleep(100);
    printf("#                         /     \\             /    \\                           #");Sleep(100);
    printf("#                        /       \\           /      \\                          #");Sleep(100);
    printf("#                       /         \\         /        \\                         #");Sleep(100);
    printf("#                      /           \\       /          \\                        #");Sleep(100);
    printf("#                     /             \\     /            \\                       #");Sleep(100);
    printf("#                    /               \\   /              \\                      #");Sleep(100);
    printf("#                   /                 \\ /                \\                     #");Sleep(100);
    printf("#                  /___________________\\/_________________\\                    #");Sleep(100);
    printf("#                                  \\PUC-PR/                                    #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("################################################################################");Sleep(1000);
    
    printf("################################################################################");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                           TURMA DE JOGOS DIGITAIS                            #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                1 PERIDODO                                    #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                   2013                                       #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("#                                                                              #");Sleep(100);
    printf("################################################################################");Sleep(2000);
    menuu();
}

void desenha_inventario() //auto-explicativo
{
	system("cls");
	desenha_menu();
    printf("################################################################################");Sleep(25);
    printf("#                 ITENS                       #            STATUS              #");Sleep(25);
    printf("#                                             #                                #");Sleep(25);
    printf("#                                             #     Nome: %7s              #",nome);Sleep(25);
    printf("#                                             #                                #");Sleep(25);
    printf("#       ()                                    #     Classe: %9s          #",str_classe);Sleep(25);
    printf("#       )(                                    #                                #");Sleep(25);
    printf("#      (__)  X %d                              #     Lv.: %2d                    #",jogador.pocoes, jogador.lv);Sleep(25);
    printf("#                                             #                                #");Sleep(25);
    printf("#       __                                    #     Vida: %3d/%3d              #",jogador.vida, jogador.max_vida);Sleep(25);
    printf("#      /  \\                                   #     Ataque: %3d                #",jogador.ataque);Sleep(25);
    printf("#      \\  /                                   #     Defesa: %3d                #",jogador.defesa);Sleep(25);
    printf("#       ||                                    #     Mana/cansaco: %2d/%d        #", jogador.mana, jogador.max_mana);Sleep(25);
    printf("#       | >                                   #                                #");Sleep(25);
    printf("#       |_>  X %d                              #     Exp.: %2d/10                #",jogador.chaves,jogador.xp);Sleep(25);
    printf("#                                             #                                #");Sleep(25);
    printf("#                                             #                                #");Sleep(25);
    printf("################################################################################");Sleep(25);
    printf("#                                                                              #");Sleep(25);
    printf("#    'W' 'A' 'S' 'D' movimentam o personagem                                   #");Sleep(25);
    printf("#    'I' abre e fecha o inventario                                             #");Sleep(25);
    printf("#    'P' Utiliza uma pocao para recuperar vida                                 #");Sleep(25);
    printf("#                                                                              #");Sleep(25);
    printf("################################################################################");Sleep(25);
    pega_numero=getch();
    while (pega_numero != 'i')
    {
		desenha_inventario();
	}
}

void desenha_ganhou_pocao()
{
    system("cls");
    desenha_atributos();
    //checagem de maximo de pocoes
    if (jogador.pocoes>9)
    {
       jogador.pocoes=9;
    }
    printf("\n\n\n");
    printf("           #########################################################\n");
    printf("           #                                                       #\n");
    printf("           #    ()     O jogador achou uma pocao                   #\n");
    printf("           #    )(                                                 #\n") ;
    printf("           #   (__) X %d                                            #\n",jogador.pocoes);
    printf("           #               'Voce so pode carregar ate 9 pocoes'    #\n");
    printf("           #                                                       #\n");
    printf("           #########################################################\n\n");
    printf("                         Pressione 'enter' para voltar\n");
    getch();
}

void desenha_ganhou_chave()
{
    system("cls");
    desenha_atributos();
    //checagem de maximo de chaves
    jogador.chaves++;
    if (jogador.chaves>9)
    {
       jogador.chaves=9;
    }
    printf("\n\n\n");
    printf("           #########################################################\n");
    printf("           #    __                                                 #\n");
    printf("           #   /  \\     O jogador achou uma chave                  #\n");
    printf("           #   \\  /                                                #\n") ;
    printf("           #    ||                                                 #\n");
    printf("           #    | >  X %d                                           #\n",jogador.chaves);
    printf("           #    |_>          'Voce so pode carregar ate 9 chaves'  #\n");
    printf("           #########################################################\n\n");
    printf("                         Pressione 'enter' para voltar\n");
    getch();
}

void desenha_ganhou_attrib()
{
    system("cls");
    desenha_atributos();
    if (jogador.ataque<999)
    	jogador.ataque++;
    if (jogador.defesa<999)
    	jogador.defesa++;
    if (jogador.max_mana<99)
    	jogador.max_mana++;
    if (jogador.max_vida<999)
    	jogador.max_vida++;
    printf("\n\n\n");
    printf("           #########################################################\n");
    printf("           #                                                       #\n");
    printf("           #    ()     O jogador achou uma pocao nutritiva         #\n");
    printf("           #    ||                                                 #\n") ;
    printf("           #   (__)     'Ganhou +1 ponto em cada atributo'         #\n",jogador.pocoes);
    printf("           #                                                       #\n");
    printf("           #                                                       #\n");
    printf("           #########################################################\n\n");
    printf("                         Pressione 'enter' para voltar\n");
    getch();
}

void desenha_usou_pocao()
{
    system("cls");
    desenha_atributos();
    //checagem de pocoes
    if (jogador.pocoes>0)
    {
       jogador.pocoes--;
       jogador.vida+=20;
       if (jogador.vida>jogador.max_vida)
          jogador.vida=jogador.max_vida;
       printf("\n\n\n");
       printf("           #########################################################\n");
       printf("           #                                                       #\n");
       printf("           #    ()          O jogador usou uma pocao               #\n");
       printf("           #    )(                                                 #\n") ;
       printf("           #   (__) X %d                                            #\n",jogador.pocoes);
       printf("           #               'Voce recuperou 20 pontos de vida'      #\n");
       printf("           #                                                       #\n");
       printf("           #########################################################\n\n");
       printf("                         Pressione 'enter' para voltar\n");
       getch();
    }
}

//PARTE RESPONSÁVEL PELA CRIAÇÃO DE PERSONAGEM
int cria_personagem()
{
    char certezz;
    desenha_menu();
    printf("\n\n               Digite seu nome: "); //pega o nome
    gets (nome);
	nome[7]='\0';
    system("cls");
    desenha_menu();
    printf("\n\n               Seu nome realmente sera '%7s' S/N?   ",nome); certezz=getch(); printf(" %c",certezz); Sleep(500);
    if (certezz!='s') //enquanto jogador nao pressionar "s" repete a pergunta
    {
         cria_personagem();
    }
    while ((genero!='1') && (genero!='2'))  //selecionar genero
    {
		system("cls");
		desenha_menu();
    	printf("\n\n               Voce e -1- Homem ou -2-Mulher: ");
    	genero=getch();
	}
	certezz='n';
	while (certezz!='s')  //pega a classe para atribuir os atributos (tu dum tss)
	{
		system("cls");
		desenha_menu();
    	printf("\n\n                      Qual a sua classe?\n");
    	printf("\n\n\n                      -1- Guerreiro");
    	printf("\n                      -2- Mago");
    	printf("\n                      -3- Assassino");
    	printf("\n\n                             ");
    	classe=getch();
    	switch(classe)
    	{
    	case '1':
			printf("\n\n               Voce realmente sera um guerreiro S/N?   "); certezz=getch(); printf(" %c",certezz); Sleep(500);
			break;
		case '2':
			printf("\n\n               Voce realmente sera um mago S/N?   "); certezz=getch(); printf(" %c",certezz); Sleep(500);
			break;
		case '3':
			printf("\n\n               Voce realmente sera um assassino S/N?   "); certezz=getch(); printf(" %c",certezz); Sleep(500);
			break;
		}
    }
    switch(classe)
    {
		case '1':
			str_classe="Guerreiro";
			break;
		case '2':
			str_classe="Mago";
			break;
		case '3':
			str_classe="Assassino";
			break;
	}
	if (god_mode==1)
		god_atributos();
	else
		muda_atributos();
	desenha_introducao(); 
}

