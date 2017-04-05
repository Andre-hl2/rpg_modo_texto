
#include "dragao.h"
#include "main.h"

int cria_batalha_dragao() //primeiro desenha a introdução do draga, depois inicia de verdade a batalha
{
    system("cls");
	printf("	                                      ,   , \n"); Sleep(50); 
	printf("                                        $,  $,     ,            \n");Sleep(50); 
	printf("                                        ´ss.$ss. .s     \n");Sleep(50); 
	printf("                                ,     .ss$$$$$$$$$$s,              \n");Sleep(50); 
	printf("                                $. s$$$$$$$$$$$$$$`$$Ss       \n");Sleep(50); 
	printf("                                ´$$$$$$$$$$$$$$$$$$o$$$       ,    \n");   Sleep(50); 
	printf("                               s$$$$$$$$$$$$$$$$$$$$$$$$s,  ,s  \n");Sleep(50); 
	printf("	                           s$$$$$$$$$´$$$$$$´´´´$$$$$$´$$$$$,    \n"); Sleep(50); 
	printf("                              s$$$$$$$$$$s´´$$$$ssssss´$$$$$$$$´   \n");Sleep(50); 
	printf("                             s$$$$$$$$$$´         `´´´ss´$´$s´´      \n");Sleep(50); 
	printf("                             s$$$$$$$$$$,              `´´´´´$  .s$$s\n");Sleep(50); 
	printf("                             s$$$$$$$$$$$$s,...               `s$$'  `\n");Sleep(50); 
	printf("                         `ssss$$$$$$$$$$$$$$$$$$$$####s.     .$$´$.   , s-\n");Sleep(50); 
	printf("                           `""""$$$$$$$$$$$$$$$$$$$$#####$$$$$$´     $.$'\n");Sleep(50); 
	printf("                                 ´$$$$$$$$$$$$$$$$$$$$$####s´´     .$$$|\n");Sleep(50); 
	printf("                                  ´$$$$$$$$$$$$$$$$$$$$$$$$##s    .$$´ $ \n");Sleep(50); 
	printf("                                   $$´´$$$$$$$$$$$$$$$$$$$$$$$$$$$$$´   `\n");Sleep(50); 
	printf("                                  $$´  ´$´$$$$$$$$$$$$$$$$$$$$S´´´´´ \n");Sleep(50); 
	printf("                             ,   ,´     ´  $$$$$$$$$$$$$$$$####s  \n");Sleep(50); 
	printf("                             $.          .s$$$$$$$$$$$$$$$$$####´\n");Sleep(50); 
	printf("                 ,           ´$s.   ..ssS$$$$$$$$$$$$$$$$$$$####´\n");Sleep(50); 
	printf("                 $           .$$$S$$$$$$$$$$$$$$$$$$$$$$$$#####´\n");Sleep(50); 
	printf("                 Ss     ..sS$$$$$$$$$$$$$$$$$$$$$$$$$$$######´´\n");Sleep(50); 
	printf("                  ´$$sS$$$$$$$$$$$$$$$$$$$$$$$$$$$########´\n");Sleep(50); 
	printf("           ,      s$$$$$$$$$$$$$$$$$$$$$$$$#########´´'\n");Sleep(50); 
	printf("           $    s$$$$$$$$$$$$$$$$$$$$$#######´´´      s´    \n");Sleep(50); 
	printf("           $$..$$$$$$$$$$$$$$$$$$######´´       ....,$$....    ,$\n");Sleep(50); 
	printf("            ´$$$$$$$$$$$$$$$######´´ ,     .sS$$$$$$$$$$$$$$$$s$$\n");Sleep(50); 
	printf("              $$$$$$$$$$$$#####´     $, .s$$$$$$$$$$$$$$$$$$$$$$$$s.\n");Sleep(50); 
	printf("   )          $$$$$$$$$$$#####´      ´$$$$$$$$$###########$$$$$$$$$$$.\n");Sleep(50); 
	printf("  ((          $$$$$$$$$$$#####       $$$$$$$$###´       ´####$$$$$$$$$$ \n");Sleep(50); 
	printf("  ) \\         $$$$$$$$$$$$####.     $$$$$$###"             "###$$$$$$$$$   s'\n");Sleep(50); 
	printf(" (   )        $$$$$$$$$$$$$####.   $$$$$###´                ####$$$$$$$$s$$'\n");Sleep(50); 
	printf(" )  ( (       $$´$$$$$$$$$$$#####.$$$$$###´                .###$$$$$$$$$$´\n");Sleep(50); 
	printf(" (  )  )   _,$´   $$$$$$$$$$$$######.$$##´                .###$$$$$$$$$$\n");Sleep(50); 
	printf(" ) (  ( \\.         ´$$$$$$$$$$$$$#######,,,.          ..####$$$$$$$$$$$´\n");Sleep(50); 
	printf("(   )$ )  )        ,$$$$$$$$$$$$$$$$$$####################$$$$$$$$$$$´       \n"); Sleep(50); 
	printf("(   ($$  ( \\     _sS´  `´$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$S$$,       \n");Sleep(50); 
	printf(" )  )$$$s ) )  .      .   `$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$´´  `$$   \n");Sleep(50); 
	printf("  (   $$$Ss/  .$,    .$,,s$$$$$$##S$$$$$$$$$$$$$$$$$$$$$$$$S´´        ´ \n");Sleep(50); 
	printf("    \\)_$$$$$$$$$$$$$$$$$$$$$$$##´  $$        `$$.        `$$.\n");Sleep(50); 
	printf("        `´S$$$$$$$$$$$$$$$$$#´      $          `$          `$\n");Sleep(50); 
	printf("            ´´´´´´´´´´´´´´´         ´           '           '\n\n\n");Sleep(50); 
	printf("                           A BATALHA FINAL VAI COMECAR!!!\n\n");
	printf("                                  pressione 'enter'");
    getch();
    desenha_necromante();
}

void desenha_necromante()
{
	system("cls");
	printf("                                     `'-._                    \n");
	printf("                                       `. '-._                \n");
	printf("                                         T.   '-.             \n");
	printf("                                          $$p.   '-.          \n");
	printf("                                          $$$$b.    `,        \n");
	printf("                                       .g$$$$$$$b    ;        \n");
	printf("                                     .d$$$$$$$$$$;   ;        \n");
	printf("                                  __d$$$$$$P''^T$$   :        \n");
	printf("                                .d$$$$P^^''___       :        \n");
	printf("                               d$P'__..gg$$$$$$$$$$; ;        \n");
	printf("                              d$$ :$$$$$$$$$$$$$$$$;  ;       \n");
	printf("                             :$$; $$$$$$$$$$$$$$$$P  :$       \n");
	printf("                             $$$  $$$$$$$$$$$$$$$$b  $$       \n");
	printf("                            :$$$ :$$$$$$$$$$$$$$$$$; $$;      \n");
	printf("                            $$$; $$$$$$$$$$$$$$$$$$; $$;      \n");
	printf("                           :$$$  $$$$$$$$$^$$$$$$$$$ :$$      \n");
	printf("                           $$$; :$$$p__gP' `Tp__g$$$ :$$      \n");
	printf("                          :$$$  $$P`T$P' .$. `T$P'T$; $$;     \n");
	printf("                          $$$; :$$;     :P^T;     :$; $$;     \n");
	printf("                         :$$$  $$$$-.           .-$$$ :$$     \n");
	printf("                         $$$$ :$$$$; \\   T$P   / :$$$  $$     \n");
	printf("                        :$$$; $$$$$$  ; b:$;d :  $$$$; $$;    \n");
	printf("                        $$$$; $$$$$$; : T T T ; :$$$$$ :$$    \n");
	printf("                     .g$$$$$  :$$$$$$  ;' | ':  $$$$$$  T$b   \n");
	printf("                  .g$$$$$$$$   $$$$$$b :     ; d$$$$$;   `Tb  \n");
	printf("                 :$$$$$$$$$;   :$$$$$$$;     :$$$$$$P       \\ \n");
	printf("                 :$$$$$$$$$;    T$$$$$$$p._.g$$$$$$P         ;\n");
	printf("                 $$$P^^T$$$$p.   `T$$$$$$$$$$$$$$P'     _/`. :\n");
	printf("                        `T$$$$$b.  `T$$$$$$$$$$P'    .g$P   \\;\n");
	printf("                          `T$$$$$b.  '^T$$$$P^'     d$P'      \n");
	printf("                            `T$$$$$b.             .dP'        \n");
	printf("                              '^T$$$$b.        .g$P'          \n");
	printf("                                 '^T$$$b    .g$P^'            \n");
	printf("                                    '^T$b.g$P^'               \n");
	printf("                                       '^$^'                  \n\n");
	printf("################################################################################");
	printf("#   Necromante:                                                                #");
	printf("#      Voce chegou tarde demais, eu ja terminei o ritual para invocar          #");
	printf("#      o dragao devorador do tempo, venha e nos enfrente caso queira.          #");
	printf("#      Sera o primeiro a morrer em suas garras.                                #");
	printf("#                                                                              #");
	printf("################################################################################");
	printf("                                 pressione 'enter'");
	getch();
	batalha_dragao();
}

int batalha_dragao()
{
    
    int aleat;
    char pega_op;
    int dano, vez;
	buff=0;
    dragao.vida=9999;
    dragao.ataque=250;
    dragao.defesa=300;
    dano=vez=0;
    turno=1;
    
    while ((jogador.vida>0) && (dragao.vida>0))
    {
     if (turno>=0) vez=0;
     if (turno<0)vez=1;
     dano=0;
     aleat=(1+rand()%10)/10.0;
	 system("cls");
	printf("	                           _\n");
	printf("                            ==(W{==========-      /===-\n");
	printf("   Vida: %4d / 9999          ||  (.--.)         /===-_---~~~~~~~~~------_\n",dragao.vida);
	printf("                              | \\_,|**|,__      |===-~___                _,-'\n");
	printf("                 -==\\        `\\ ' `--'   ),    `//~\\\\   ~~~~`---.___.-~~\n");
	printf("             ______-==|        /`\\_. .__/\\ \\    | |  \\\\           _-~`\n");
	printf("       __--~~~  ,-/-==\\\\      (   | .  |~~~~|   | |   `\\        ,'\n");
	printf("    _-~       /'    |  \\\\     )__/==0==-\\<>/   / /      \\      /\n");
	printf("  .'        /       |   \\\\      /~\\___/~~\\/  /' /        \\   /'\n");
	printf(" /  ____  /         |    \\`\\.__/-~~   \\  |_/'  /          \\/'\n");
	printf("/-'~    ~~~~~---__  |     ~-/~         ( )   /'        _--~`\n");
	printf("                  \\_|      /        _) | ;  ),   __--~~\n");
	printf("                    '~~--_/      _-~/- |/ \\   '-~ \\             \n");
	printf("                   {\\__--_/}    / \\\\_>-|)<__\\      \\\n");
	printf("                   /'   (_/  _-~  | |__>--<__|      | \n");
	printf("                  |   _/) )-~     | |__>--<__|      |   \n");
	printf("                  / /~ ,_/       / /__>---<__/      |  \n");
	printf("                 o-o _//        /-~_>---<__-~      / \n");
	printf("                 (^(~          /~_>---<__-      _-~     \n");         
	printf("                ,/|           /__>--<__/     _-~                 \n");
	printf("             ,//('(          |__>--<__|     /                  .----_ \n");
	printf("            ( ( '))          |__>--<__|    |                 /' _---_~\\\n");
	printf("         `-)) )) (           |__>--<__|    |               /'  /     ~\\`\\\n");
	printf("        ,/,'//( (             \\__>--<__\\    \\            /'  //        ||\n");
	printf("      ,( ( ((, ))              ~-__>--<_~-_  ~--____---~' _/'/        /'\n");
	printf("    `~/  )` ) ,/|                 ~-_~>--<_/-__       __-~ _/ \n");
	printf("  ._-~//( )/ )) `                    ~~-'_/_/ /~~~~~~~__--~ \n");
	printf("   ;'( ')/ ,)(                              ~~~~~~~~~~ \n");
	printf("  ' ') '( (/\n");   
	printf("       Vida: %3d/%3d",jogador.vida,jogador.max_vida);
	printf("       Mana: %2d / %2d",jogador.mana, jogador.max_mana);
	 printf("                                      (A)tacar\n\n");
	 printf("                                    (H)abilidades\n\n");
	 printf("                                       (I)tens\n\n");
	 printf("       ");
     if (vez==0)//vez do jogador
     {
        pega_op=getch();
        aleat=op_jogador(pega_op, vez);
        dano=aleat-dragao.defesa;
        //printf("\n%d / %d\n",aleat,dano);  //só para testes
        if (dano<0) dano=0;
        dragao.vida-=dano;
        printf("\n         Dragao recebeu %d de dano\n",dano);
        Sleep(TEMPO);
     }else //vez do inimigo
     {
         if (dragao.vida>2000)
         {
            if (rand()%5==0) {
                   printf("\n         Dragao usou bafo de Fogo!!!");
                   Sleep(TEMPO);
                   aleat=(1+rand()%100)+(dragao.ataque-40);
                   dano=aleat-(jogador.defesa+buff);
                   buff--;
                   if (buff<0) buff=0;
                   if (dano<0) dano=0;
                   jogador.vida-=dano;
                   printf("\n         %s recebeu %d de dano",nome,dano);
                   Sleep(TEMPO);
                   turno+=4;
            }
            else
            {
                if (rand()%10==0) {
                      printf("\n         Dragao usou MORTE CERTA!!!");
                      Sleep(TEMPO);
                      if (rand()%2==0)
                      {
                         printf("\n\n         O JOGADOR MORREU!!!");
                         Sleep(TEMPO);
                         dano=0;
                         jogador.vida=0;
                         derrota();
                      }
                      else
                      {
                          printf("\n         Dragao errou golpe e tera que descansar");
                          Sleep(TEMPO);
                          dano=0;
                          turno+=8;
                      }
                }
                else
                {
                    printf("\n         Dragao usou ataque com a cauda");
                    Sleep(TEMPO);
                    aleat=(1+rand()%30) + (dragao.ataque-50);
                    dano=aleat-(jogador.defesa + buff);
                    buff--;
                    if (buff<0) buff=0;
                    if (dano<0) dano=0;
                    jogador.vida-=dano;
                    printf("\n         %s recebeu %d de dano",nome,dano);
                    Sleep(TEMPO);
                    turno+=4;
                }
            }
         }
         else //DRAGAO COM VIDA NO CRITICO
         {
            if (rand()%3==0) {
                   printf("\n         Dragao usou bafo de Fogo!!!");
                   Sleep(TEMPO);
                   aleat=(1+rand()%100)+(dragao.ataque);
                   dano=aleat-(jogador.defesa+buff);
                   buff--;
                   if (buff<0) buff=0;
                   if (dano<0) dano=0;
                   jogador.vida-=dano;
                   printf("\n         %s recebeu %d de dano",nome,dano);
                   Sleep(TEMPO);
                   turno+=4;
            }
            else
            {
                if (rand()%5==0) {
                      printf("\n         Dragao usou MORTE CERTA!!!");
                      Sleep(TEMPO);
                      if (rand()%10==0)
                      {
                         printf("\n\n         O JOGADOR MORREU!!!");
                         Sleep(TEMPO);
                         dano=0;
                         jogador.vida=0;
                         derrota();
                      }
                      else
                      {
                          printf("\n         Dragao errou golpe e tera que descansar");
                          Sleep(TEMPO);
                          dano=0;
                          turno+=8;
                      }
                }
                else
                {
                    printf("\n         Dragao usou ataque com a cauda");
                    Sleep(TEMPO);
                    aleat=(1+rand()%50) + (dragao.ataque);
                    dano=aleat-(jogador.defesa + buff);
                    buff--;
                    if (buff<0) buff=0;
                    if (dano<0) dano=0;
                    jogador.vida-=dano;
                    printf("\n         %s recebeu %d de dano",nome,dano);
                    Sleep(TEMPO);
                    turno+=4;
                }
            }
         }
     }
    }
	if (jogador.vida>0)
    {
       fim_de_jogo();
    }else{
       derrota();
    }
	getch();
}

void fim_de_jogo()
{
	system("cls");
	printf("\n\n\n\n\n################################################################################");
	printf("#                                                                              #");
	printf("#                                                                              #");
	printf("#                        PARABENS!!! VOCE DERROTOU O DRAGAO                    #");
	printf("#                                                                              #");
	printf("#                                                                              #");
	printf("################################################################################");
	printf("                                 pressione 'enter'");
	getch();
	system("cls");
	printf("                                     `'-._                    \n");
	printf("                                       `. '-._                \n");
	printf("                                         T.   '-.             \n");
	printf("                                          $$p.   '-.          \n");
	printf("                                          $$$$b.    `,        \n");
	printf("                                       .g$$$$$$$b    ;        \n");
	printf("                                     .d$$$$$$$$$$;   ;        \n");
	printf("                                  __d$$$$$$P''^T$$   :        \n");
	printf("                                .d$$$$P^^''___       :        \n");
	printf("                               d$P'__..gg$$$$$$$$$$; ;        \n");
	printf("                              d$$ :$$$$$$$$$$$$$$$$;  ;       \n");
	printf("                             :$$; $$$$$$$$$$$$$$$$P  :$       \n");
	printf("                             $$$  $$$$$$$$$$$$$$$$b  $$       \n");
	printf("                            :$$$ :$$$$$$$$$$$$$$$$$; $$;      \n");
	printf("                            $$$; $$$$$$$$$$$$$$$$$$; $$;      \n");
	printf("                           :$$$  $$$$$$$$$^$$$$$$$$$ :$$      \n");
	printf("                           $$$; :$$$p__gP' `Tp__g$$$ :$$      \n");
	printf("                          :$$$  $$P`T$P' .$. `T$P'T$; $$;     \n");
	printf("                          $$$; :$$;     :P^T;     :$; $$;     \n");
	printf("                         :$$$  $$$$-.           .-$$$ :$$     \n");
	printf("                         $$$$ :$$$$; \\   T$P   / :$$$  $$     \n");
	printf("                        :$$$; $$$$$$  ; b:$;d :  $$$$; $$;    \n");
	printf("                        $$$$; $$$$$$; : T T T ; :$$$$$ :$$    \n");
	printf("                     .g$$$$$  :$$$$$$  ;' | ':  $$$$$$  T$b   \n");
	printf("                  .g$$$$$$$$   $$$$$$b :     ; d$$$$$;   `Tb  \n");
	printf("                 :$$$$$$$$$;   :$$$$$$$;     :$$$$$$P       \\ \n");
	printf("                 :$$$$$$$$$;    T$$$$$$$p._.g$$$$$$P         ;\n");
	printf("                 $$$P^^T$$$$p.   `T$$$$$$$$$$$$$$P'     _/`. :\n");
	printf("                        `T$$$$$b.  `T$$$$$$$$$$P'    .g$P   \\;\n");
	printf("                          `T$$$$$b.  '^T$$$$P^'     d$P'      \n");
	printf("                            `T$$$$$b.             .dP'        \n");
	printf("                              '^T$$$$b.        .g$P'          \n");
	printf("                                 '^T$$$b    .g$P^'            \n");
	printf("                                    '^T$b.g$P^'               \n");
	printf("                                       '^$^'                  \n\n");
	printf("################################################################################");
	printf("#   Necromante:                                                                #");
	printf("#                                                                              #");
	printf("#      Agora chega!!!  Enfrente meu verdadeiro poder!!!                        #");
	printf("#                                                                              #");
	printf("#                                                                              #");
	printf("################################################################################");
	printf("                                 pressione 'enter'");
	getch();
	system("cls");
	printf("\n\n\n\n\n################################################################################");
	printf("#                                                                              #");
	printf("#                                                                              #");
	printf("#                                   CONTINUA...?                               #");
	printf("#                                                                              #");
	printf("#                                                                              #");
	printf("################################################################################");
	printf("                                 pressione 'enter'");
	getch();
	menuu();
}

