#include "batalhas.h"
#include "main.h"



int batalha_soldado()
{
    int aleat;
    char pega_op;
    int dano, vez;
	buff=0;
    soldado.vida=40;
    soldado.ataque=25;
    soldado.defesa=10;
    dano=vez=0;
    turno=1;
    
    while ((jogador.vida>0) && (soldado.vida>0))
    {
     if (turno>=0) vez=0;
     if (turno<0)vez=1;
     dano=0;
     aleat=(1+rand()%10)/10.0;
	 system("cls");
	 desenha_atributos();
	 printf("################################################################################");
	 printf("#                                                       (    )                 #");
	 printf("#    Nome: Soldado das Sombras                          ((((()))               #");
	 printf("#                                                       |o\\ /o)|               #");
	 printf("#    Vida: %2d/40                                        ( (  _')               #",soldado.vida);
	 printf("#                                                        (._.  /\\__            #");
	 printf("#    Ataque: %2d                                         ,\\___,/ '  ')          #",soldado.ataque);
	 printf("#                                         '.,_,,       (  .- .   .    )        #");
	 printf("#    Defesa: %d                            \\   \\\\     ( '        )(    )       #",soldado.defesa);
	 printf("#                                           \\   \\\\    \\.  _.__ ____( .  |      #");
	 printf("#                                            \\  /\\\\   .(   .'  /\\  '.  )       #");
	 printf("#                                             \\(  \\\\.-' ( /    \\/    \\)        #");
	 printf("#                                              '  ()) _'.-|/\\/\\/\\/\\/\\|         #");
	 printf("#                                                  '\\ .( |\\/\\/\\/\\/\\/|          #");
	 printf("#                                                    '((  \\    /\\    /         #");
	 printf("#                                                    ((((  '.__\\/__.')         #");
	 printf("#    (A)tacar                                         ((,) /   ((()   )        #");
	 printf("#    (H)abilidade                                      '..-,  (()('   /        #");
	 printf("#    (I)tem                                             _//.   ((() .'         #");
	 printf("#                                                     //,/'     ((( ',         #");
	 printf("#                                                                ((  )         #");
	 printf("#    HP:%3d/%3d                                                   / /          #",jogador.vida,jogador.max_vida);
	 printf("#    MP:%2d/%2d                                                   _/,/'          #",jogador.mana,jogador.max_mana);
	 printf("#                                                            /,/,'             #");
	 printf("################################################################################");
     
     if (vez==0)//vez do jogador
     {
        pega_op=getch();
        aleat=op_jogador(pega_op, vez);
        dano=aleat-soldado.defesa;
        //printf("\n%d / %d\n",aleat,dano);  //só para testes
        if (dano<0) dano=0;
        soldado.vida-=dano;
        printf("\n         Inimigo recebeu %d de dano\n",dano);
        Sleep(TEMPO);
     }else //vez do inimigo
     {
         aleat=(1+rand()%20)+(soldado.ataque-10);
         dano=aleat-(jogador.defesa+buff);
         buff--;
         if (buff<0) buff=0;
         //printf("\n%d / %d\n",aleat,dano); //para testes
         if (dano<0) dano=0;
         jogador.vida-=dano;
         printf("\n         Inimigo ataca");
         Sleep(TEMPO);
         printf("\n         %s recebeu %d de dano",nome,dano);
         Sleep(TEMPO);
         turno+=2;
     }
    }
	if (jogador.vida>0)
    {
       jogador.xp+=2;
       vitoria();
    }else{
       derrota();
    }
	getch();
}

//---------------------------------
int batalha_algoz()
{
    
    int aleat;
    char pega_op;
    int dano, vez;
	buff=0;
    algoz.vida=70;
    algoz.ataque=40;
    algoz.defesa=25;
    dano=vez=0;
    turno=1;
    
    while ((jogador.vida>0) && (algoz.vida>0))
    {
     if (turno>=0) vez=0;
     if (turno<0)vez=1;
     dano=0;
     aleat=(1+rand()%10)/10.0;
	 system("cls");
	 desenha_atributos();
	 printf("################################################################################");
	 printf("#                                                                              #");
	 printf("#    Nome: Algoz das Sombras                                                   #");
	 printf("#                                                                              #");
	 printf("#    Vida: %2d/70                              ,/         \\.                    #",algoz.vida);
	 printf("#                                             ((          ))                   #");
	 printf("#    Ataque: %2d                               \\`.       ,'/                    #",algoz.ataque);
	 printf("#                                              )')      (`(                    #");
	 printf("#    Defesa: %2d                              ,'`/       \\,`.                   #",algoz.defesa);
	 printf("#                                            (`-(         )-')                 #");
	 printf("#                                             \\-'\\,-'´`-./`-/                  #");
	 printf("#                                              \\-')     (`-/                   #");
	 printf("#                                              /`'       `'\\                   #");
	 printf("#                                             (  _       _  )                  #");
	 printf("#                                             | ( \\     / ) |                  #");
	 printf("#                                             |  `.\\   /,'  |                  #");
	 printf("#    (A)tacar                                 |    `\\ /'    |                  #");
	 printf("#    (H)abilidade                             (             )                  #");
	 printf("#    (I)tem                                    \\           /                   #");
	 printf("#                                               \\         /                    #");
	 printf("#                                                `.     ,'                     #");
	 printf("#    HP:%3d/%3d                                    `-.-'                       #",jogador.vida,jogador.max_vida);
	 printf("#    MP:%2d/%2d                                                                  #",jogador.mana,jogador.max_mana);
	 printf("#                                                                              #");
	 printf("################################################################################");
     
     if (vez==0)//vez do jogador
     {
        pega_op=getch();
        aleat=op_jogador(pega_op, vez);
        dano=aleat-algoz.defesa;
        //printf("\n%d / %d\n",aleat,dano);  //só para testes
        if (dano<0) dano=0;
        algoz.vida-=dano;
        printf("\n         Inimigo recebeu %d de dano\n",dano);
        Sleep(TEMPO);
     }else //vez do inimigo
     {
         if (rand()%3==0)
         {
            aleat=(1+rand()%10)+(algoz.ataque-5);
            dano=aleat-(jogador.defesa+buff);
            buff--;
            if (buff<0) buff=0;
            //printf("\n%d / %d\n",aleat,dano); //para testes
            if (dano<0) dano=0;
            jogador.vida-=dano;
            printf("\n         Inimigo usou Estocada");
            Sleep(TEMPO);
            printf("\n         %s recebeu %d de dano",nome,dano);
            Sleep(TEMPO);
            turno+=1;
         }else{
            aleat=(1+rand()%20)+(algoz.ataque-10);
            dano=aleat-(jogador.defesa+buff);
            buff--;
            if (buff<0) buff=0;
            //printf("\n%d / %d\n",aleat,dano); //para testes
            if (dano<0) dano=0;
            jogador.vida-=dano;
            printf("\n         Inimigo ataca");
            Sleep(TEMPO);
            printf("\n         %s recebeu %d de dano",nome,dano);
            Sleep(TEMPO);
            turno+=2;
         }
     }
    }
	if (jogador.vida>0)
    {
       jogador.xp+=4;
       vitoria();
    }else{
       derrota();
    }
	getch();
}

//---------------------------------

int batalha_porta()
{
    
    int aleat;
    char pega_op;
    int dano, vez;
	buff=0;
    porta.vida=60;
    porta.ataque=20;
    porta.defesa=15;
    dano=vez=0;
    turno=1;
    while ((jogador.vida>0) && (porta.vida>0))
    {
       if (turno>=0) vez=0;
       if (turno<0)vez=1;
       system("cls");
       desenha_atributos();
	   printf("\n\n");
       printf("################################################################################");
       printf("#                                                         ____                 #");
       printf("#    Nome: Porta Demoniaca                            ___/    \\___             #");
       printf("#                                                 ___/            \\___         #");
       printf("#    Vida: %2d/60                              ___/                    \\___     #",porta.vida);
       printf("#                                            |   ______________________   |    #");
       printf("#    Ataque: %d                              |  |                      |  |    #",porta.ataque);
       printf("#                                            |  |     __         __    |  |    #");
       printf("#    Defesa: %d                              |  |    /  \\       /  \\   |  |    #",porta.defesa);
       printf("#                                            |  |     /\\ \\     / /\\    |  |    #");
       printf("#                                            |  |     \\/         \\/    |  |    #");
       printf("#                                            |  |         /| |\\        |  |    #");
       printf("#                                            |  |        /_| |_\\       |  |    #");
       printf("#                                            |  |    _______________   |  |    #");
       printf("#                                            |  |   | \\/ \\/ \\/ \\/ \\|   |  |    #");
       printf("#                                            |  |   |              |   |  |    #");
       printf("#    (A)tacar                                |  |   |              |   |  |    #");
       printf("#    (H)abilidade                            |  |   |/\\_/\\_/\\_/\\_/\\|   |  |    #");
       printf("#    (I)tem                                  |  |                      |  |    #");
       printf("#                                            |  |                      |  |    #");
       printf("#                                            |  |                      |  |    #");
       printf("#    HP:%3d/%3d                              |  |                      |  |    #",jogador.vida,jogador.max_vida);
       printf("#    MP:%2d/%2d                                |  |                      |  |    #",jogador.mana,jogador.max_mana);
       printf("#                                            |__|______________________|__|    #");
       printf("################################################################################");
       //printf("%c / %d / %d / %f\n",classe,vez,turno,aleat);
     
     if (vez==0)//vez do jogador
     {
        pega_op=getch();
        aleat=op_jogador(pega_op, vez);
        dano=aleat-porta.defesa;
        //printf("\n%d / %d\n",aleat,dano);  //só para testes
        if (dano<0) dano=0;
        porta.vida-=dano;
        printf("\n         Inimigo recebeu %d de dano\n",dano);
        Sleep(TEMPO);
     }else //vez do inimigo
     {
         if (rand()%5==0)
         {
            aleat=(1+rand()%10)+(porta.ataque-5);
            dano=aleat-jogador.defesa;
            if (classe==1)
            {
               if (jogador.mana+dano>jogador.max_mana)
               {
                  jogador.mana=jogador.max_mana;
                  if (jogador.mana>jogador.max_mana)
                     jogador.mana = jogador.max_mana;
               }else{
                  jogador.mana+=dano;
               }
            }else{
               if (jogador.mana-dano<0)
               {
                  jogador.mana=0;
               }else{
                  jogador.mana-=dano;
               }
            }
            printf("\n         Inimigo usou Fadiga");
            Sleep(TEMPO);
            printf("\n         %s recebeu %d de dano... NO MP!!!",nome,dano);
            Sleep(TEMPO);
            turno+=2;
         }else{  
            aleat=(1+rand()%20)+(porta.ataque-10);
            dano=aleat-(jogador.defesa+buff);
            buff--;
            if (buff<0) buff=0;
            //printf("\n%d / %d\n",aleat,dano); //para testes
            if (dano<0) dano=0;
            jogador.vida-=dano;
            printf("\n         Inimigo ataca");
            Sleep(TEMPO);
            printf("\n         %s recebeu %d de dano",nome,dano);
            Sleep(TEMPO);
            turno+=2;
         }
     }
     
    }
    if (jogador.vida>0)
    {
       jogador.xp+=3;
       vitoria();
    }
}

//---------------------------------

int batalha_bruxa()
{
    
    int aleat;
    char pega_op;
    int dano, vez;
	buff=0;
    bruxa.vida=80;
    bruxa.ataque=40;
    bruxa.defesa=30;
    dano=vez=0;
    turno=1;
    
    while ((jogador.vida>0) && (bruxa.vida>0))
    {
     if (turno>=0) vez=0;
     if (turno<0)vez=1;
     dano=0;
     aleat=(1+rand()%10)/10.0;
	 system("cls");
	 desenha_atributos();
	 printf("################################################################################");
	 printf("#                                                                              #");
	 printf("#    Nome: Bruxa das Sombras                                                   #");
	 printf("#                                                                              #");
	 printf("#    Vida: %2d/80                                                               #",bruxa.vida);
	 printf("#                                                                              #");
	 printf("#    Ataque: %2d                                   ,@@@@                        #",bruxa.ataque);
	 printf("#                                             __ _ )x\\\\(\\   _,::;              #");
	 printf("#    Defesa: %2d                             .)\\)\\\\_(((\\),:::::;                #",bruxa.defesa);
	 printf("#                                              `\\`._,)))))::::::`,             #");
	 printf("#                                                `.__/(((:::::::'              #");
	 printf("#                                                   \\  (`:::::::.              #");
	 printf("#                                                    ) .. `:::::;              #");
	 printf("#                                                   /   ))  `::                #");
	 printf("#                                                  |  //                       #");
	 printf("#                                                  | //                        #");
	 printf("#    (A)tacar                                      \\ \\\\                        #");
	 printf("#    (H)abilidade                                   `.\\\\                       #");
	 printf("#    (I)tem                                           \\((                      #");
	 printf("#                                                      ` `                     #");
	 printf("#                                                                              #");
	 printf("#    HP:%3d/%3d                                                                #",jogador.vida,jogador.max_vida);
	 printf("#    MP:%2d/%2d                                                                  #",jogador.mana,jogador.max_mana);
	 printf("#                                                                              #");
	 printf("################################################################################");
     
     if (vez==0)//vez do jogador
     {
        pega_op=getch();
        aleat=op_jogador(pega_op, vez);
        dano=aleat-bruxa.defesa;
        //printf("\n%d / %d\n",aleat,dano);  //só para testes
        if (dano<0) dano=0;
        bruxa.vida-=dano;
        printf("\n         Inimigo recebeu %d de dano\n",dano);
        Sleep(TEMPO);
     }else //vez do inimigo
     {
         if (rand()%10==0)
         {
            printf("\n         Inimigo usou Buraco Negro");
            Sleep(TEMPO);
            printf("\n         %s foi teleportado para o primeiro andar!",nome,dano);
            Sleep(TEMPO);
            cria_mapa_um();
         }else{
            aleat=(1+rand()%20)+(bruxa.ataque-10);
            dano=aleat-(jogador.defesa+buff);
            buff--;
            if (buff<0) buff=0;
            //printf("\n%d / %d\n",aleat,dano); //para testes
            if (dano<0) dano=0;
            jogador.vida-=dano;
            printf("\n         Inimigo ataca");
            Sleep(TEMPO);
            printf("\n         %s recebeu %d de dano",nome,dano);
            Sleep(TEMPO);
            turno+=2;
         }
     }
    }
	if (jogador.vida>0)
    {
       jogador.xp+=5;
       vitoria();
    }else{
       derrota();
    }
	getch();
}

//---------------------------------

int batalha_bruxo()
{
    
    int aleat;
    char pega_op;
    int dano, vez;
	buff=0;
    bruxo.vida=80;
    bruxo.ataque=50;
    bruxo.defesa=39;
    dano=vez=0;
    turno=1;
    
    while ((jogador.vida>0) && (bruxo.vida>0))
    {
     if (turno>=0) vez=0;
     if (turno<0)vez=1;
     dano=0;
     aleat=(1+rand()%10)/10.0;
	 system("cls");
	 desenha_atributos();
	 printf("################################################################################");
	 printf("#                                                                              #");
	 printf("#    Nome: Bruxo da Luz Sombria                                                #");
	 printf("#                                                                              #");
	 printf("#    Vida: %2d/80                            \\                  /               #",bruxo.vida);
	 printf("#                                  _________))                ((__________     #");
	 printf("#    Ataque: %2d                   /.-------./\\\\    \\    /    //\\.--------.\\    #",bruxo.ataque);
	 printf("#                                 //#######//##\\\\   ))  ((   //##\\########\\\\   #");
	 printf("#    Defesa: %2d                 //#######//###((  ((    ))  ))###\\\\########\\\\  #",bruxo.defesa);
	 printf("#                              ((#######((#####\\\\  \\\\  //  //#####))########)) #");
	 printf("#                               \\##' `###\\######\\\\  \\)(/  //######/####' `##/  #");
	 printf("#                                )'    ``#)'  `##\\`->oo<-'/##'  `(#''     `(   #");
	 printf("#                                        (       ``\\`..'/''       )            #");
	 printf("#                                                   \\´´(                       #");
	 printf("#                                                    `- )                      #");
	 printf("#                                                     / /                      #");
	 printf("#    (A)tacar                                         ( /\\                     #");
	 printf("#    (H)abilidade                                     /\\| \\                    #");
	 printf("#    (I)tem                                          (  \\                      #");
	 printf("#                                                        )                     #");
	 printf("#                                                       /                      #");
	 printf("#    HP:%3d/%3d                                          (                     #",jogador.vida,jogador.max_vida);
	 printf("#    MP:%2d/%2d                                                                #",jogador.mana,jogador.max_mana);
	 printf("#                                                                              #");
	 printf("################################################################################");
     
     if (vez==0)//vez do jogador
     {
        pega_op=getch();
        aleat=op_jogador(pega_op, vez);
        dano=aleat-bruxo.defesa;
        //printf("\n%d / %d\n",aleat,dano);  //só para testes
        if (dano<0) dano=0;
        bruxo.vida-=dano;
        printf("\n         Inimigo recebeu %d de dano\n",dano);
        Sleep(TEMPO);
     }else //vez do inimigo
     {
         if (rand()%10==0)
         {
            printf("\n         Inimigo usou Buraco Branco");
            Sleep(TEMPO);
            printf("\n         %s foi teleportado para o ultimo andar!",nome,dano);
            Sleep(TEMPO);
			cria_batalha_dragao();
         }else{
            aleat=(1+rand()%20)+(bruxo.ataque-10);
            dano=aleat-(jogador.defesa+buff);
            buff--;
            if (buff<0) buff=0;
            //printf("\n%d / %d\n",aleat,dano); //para testes
            if (dano<0) dano=0;
            jogador.vida-=dano;
            printf("\n         Inimigo ataca");
            Sleep(TEMPO);
            printf("\n         %s recebeu %d de dano",nome,dano);
            Sleep(TEMPO);
            turno+=2;
         }
     }
    }
	if (jogador.vida>0)
    {
       jogador.xp+=10;
       vitoria();
    }else{
       derrota();
    }
	getch();
}

//------------------------

int batalha_beholder()
{
    
    int aleat;
    char pega_op;
    int dano, vez;
	buff=0;
    beholder.vida=600;
    beholder.ataque=80;
    beholder.defesa=80;
    dano=vez=0;
    turno=1;
    
    while ((jogador.vida>0) && (beholder.vida>0))
    {
     if (turno>=0) vez=0;
     if (turno<0)vez=1;
     dano=0;
     aleat=(1+rand()%10)/10.0;
	 system("cls");
	 printf("\n\n\n\n\n###############################################################################\n");
     printf("#                  	          .'''''-.              ,-'````.                #\n");
     printf("#    Nome: DARKEST BEHOLDER      '-.._  |              |  _..-'               #\n");
     printf("#                                   \\    `,          ,'    /                  #\n");
     printf("#    Vida: %3d/600                  '=   ,/          \\,   =`                  #\n",beholder.vida);
     printf("#                                   '=   (            )   =`                  #\n");
     printf("#    Ataque: %2d                    .\\    /            \\    /.                 #\n",beholder.ataque);
     printf("#                                 /  `,.'              `.,'  \\                #\n");
     printf("#    Defesa: %2d                   \\   `.                ,'   /                #\n",beholder.defesa);
     printf("#                                  \\    \\              /    /                 #\n");
     printf("#                                   \\   .`.  __.---. ,`.   /                  #\n");
     printf("#                                    \\.' .'``        `. `./                   #\n");
     printf("#                                     \\.'  -'''-..     `./                    #\n");
     printf("#                                     /  /        '.      \\                   #\n");
     printf("#                                    /  / .--  .-'''`      '.                 #\n");
     printf("#                                   '   |    ,---.    _      \\                #\n");
     printf("#                       /``-----._.-.   \\   / ,-. '-'   '.   .-._.-----``\\    #\n");
     printf("#                       \\__ .     | :    `.' ((O))   ,-.  \\  : |     . __/    #\n");
     printf("#                        `.  '-...\\_`     |   '-'   ((O)) |  '_/...-`  .'     #\n");
     printf("#                   .----..)    `    \\     \\      /  '-'  / /    '    (..---  #\n");
     printf("#                  (o      `.  /      \\     \\    /\\     .' /      \\  .'       #\n");
     printf("#                   ```---..   `.     /`.    '--'  '---' .'\\     .'   ..---`  #\n");
     printf("#                           `-.  `.  /`.  `.           .' .'\\  .'  .-'        #\n");
     printf("#                              `..` /   `.'  ` - - - ' `.'   \\ '..'           #\n");
     printf("#                                  /    /                \\    \\               #\n");
     printf("#    (A)tacar                     /   ,'                  `.   \\              #\n");
     printf("#    (H)abilidade                 \\  ,'`.                .'`.  /              #\n");
     printf("#    (I)tem                        `/    \\              /    \\'               #\n");
     printf("#                                   ,=   (              )   =,                #\n");
     printf("#                                   ,=   '\\            /`   =,                #\n");
     printf("#    HP: %3d/%3d                      /    .'            `.    \\                #\n",jogador.vida,jogador.max_vida);
     printf("#    MP: %2d/%2d                   .-'''  |                |  ```-.             #\n",jogador.mana,jogador.max_mana);
     printf("#                                `......'                `......'               #");
     printf("##############################################################################\n");     
     if (vez==0)//vez do jogador
     {
        pega_op=getch();
        aleat=op_jogador(pega_op, vez);
        dano=aleat-beholder.defesa;
        //printf("\n%d / %d\n",aleat,dano);  //só para testes
        if (dano<0) dano=0;
        beholder.vida-=dano;
        printf("\n         Inimigo recebeu %d de dano\n",dano);
        Sleep(TEMPO);
     }else //vez do inimigo
     {
         if (rand()%5==0)
         {
            printf("\n         Inimigo usou Golpe Fatal");
            Sleep(TEMPO);
            aleat=(1+rand()%20)+(beholder.ataque*2-10);
            dano=aleat-(jogador.defesa+buff);
            buff--;
            if (buff<0) buff=0;
            //printf("\n%d / %d\n",aleat,dano); //para testes
            if (dano<0) dano=0;
            jogador.vida-=dano;
            printf("\n         %s recebeu %d de dano",nome,dano);
            Sleep(TEMPO);
			turno+=4;
         }else{
            aleat=(1+rand()%20)+(beholder.ataque-10);
            dano=aleat-(jogador.defesa+buff);
            buff--;
            if (buff<0) buff=0;
            //printf("\n%d / %d\n",aleat,dano); //para testes
            if (dano<0) dano=0;
            jogador.vida-=dano;
            printf("\n         Inimigo ataca");
            Sleep(TEMPO);
            printf("\n         %s recebeu %d de dano",nome,dano);
            Sleep(TEMPO);
            turno+=2;
         }
     }
    }
	if (jogador.vida>0)
    {
       jogador.xp+=15;
       vitoria();
    }else{
       derrota();
    }
	getch();
}

//-----------------------VEZ DO JOGADOR-----------------------------------------

int op_jogador(pega_op, vez)
{
    int aleat;
    switch (pega_op)
             {
                    case 'a'://atacou
                         switch (classe)
                         {
                                case '1':
                                     printf("\n         %s ataca",nome);
                                     aleat=(1+rand()%20)+(jogador.ataque-5);
                                     Sleep(TEMPO);
                                     turno-=4;
                                     break;
                                case '2': 
                                     printf("\n         %s recarrega mana",nome);
                                     jogador.mana+=((1+rand()%10)+(jogador.ataque))-5;
									 aleat=0;
                                     if (jogador.mana>jogador.max_mana)
                                     {
                                        jogador.mana=jogador.max_mana;
                                     }
                                     Sleep(TEMPO);
                                     turno-=2;
                                     break;
                                case '3':
                                     printf("\n         %s ataca",nome);
                                     aleat=(1+rand()%30)+(jogador.ataque-10);
                                     Sleep(TEMPO);
                                     turno--;
                                     break;
                                default:
									turno=9000;
									break;  //verificador de erros
                         }
                         break;
                    case 'h'://skill
                         switch (classe)//skill diferente para cada classe
                         {
                                case '1'://--skill guerreiro
                                     printf("\n  1 - Ataque Rapido (5MP)\n");
                                     if (jogador.lv>=2)
                                        printf("  2 - Ataque Preciso (10MP)\n");
                                     if (jogador.lv>=3)
                                        printf("  3 - Golpe de Furia (20MP)\n");
                                     if (jogador.lv>=5)
                                        printf("  4 - Hyper Strike (100%MP)\n");
                                     pega_op=getch();
                                     
                                     switch (pega_op)
                                     {
                                            case '1'://ataque rapido
                                                 printf("         %s usou Ataque Rapido\n",nome);
                                                 Sleep(TEMPO);
                                                 if (jogador.mana+5<=jogador.max_mana)
                                                 {
                                                    aleat=jogador.ataque-(1+rand()%10);
                                                    jogador.mana+=5;
                                                    turno-=2;
                                                 }else
                                                 {
                                                      printf("         energia insuficiente\n");
                                                      printf("         %s descansa essa rodada\n",nome);
                                                      jogador.mana=0;
                                                      turno-=4;
													  aleat=0;
                                                      Sleep(TEMPO);
                                                 }
                                                 break;
                                            case '2'://ataque preciso
                                                 printf("         %s usou Ataque Preciso\n",nome);
                                                 Sleep(TEMPO);
                                                 if (jogador.mana+10<=jogador.max_mana)
                                                 {
                                                    aleat=(1+rand()%20)+(jogador.ataque-4);
                                                    jogador.mana+=10;
                                                    turno-=4;
                                                    Sleep(TEMPO);
                                                 }else
                                                 {
                                                      printf("         energia insuficiente\n");
                                                      printf("         %s descansa essa rodada\n",nome);
                                                      jogador.mana=0;
                                                      turno-=4;
													  aleat=0;
                                                      Sleep(TEMPO);
                                                 }
                                                 break;
                                            case '3'://golpe de furia
                                              if (jogador.lv>=3)
                                              {  
                                                 printf("         %s usou Golpe de Furia\n",nome);
                                                 Sleep(TEMPO);
                                                 if (jogador.mana+20<=jogador.max_mana)
                                                 {
                                                    aleat=(1+rand()%40)+jogador.ataque;
                                                    buff+=3;
                                                    jogador.mana+=20;
                                                    Sleep(TEMPO);
                                                    turno-=6;
                                                 }else
                                                 {
                                                      printf("         energia insuficiente\n");
                                                      printf("         %s descansa essa rodada\n",nome);
                                                      jogador.mana=0;
                                                      turno-=4;
													  aleat=0;
                                                      Sleep(TEMPO);
                                                 }
                                              }
                                              break;
                                            case '4'://hyper strike
                                                 if (jogador.lv>=5)
                                                 {
                                                    printf("         %s usou HYPER STRIKE!!!\n",nome);
                                                    Sleep(TEMPO);
                                                    if (jogador.mana==0)
                                                    {
                                                       aleat=(1+rand()%80)+jogador.ataque+20;
                                                       jogador.mana==jogador.max_mana;
                                                       turno-=6;
                                                    }else
                                                    {
                                                         printf("         energia insuficiente\n");
                                                         printf("         %s descansa essa rodada\n",nome);
                                                         jogador.mana=0;
                                                         turno-=4;
														 aleat=0;
                                                         Sleep(TEMPO);
                                                    }
                                                 }
                                                 break;
                                            
                                            
                                     }
                                     break;
                                case '2'://--skill mago
                                     printf("\n  1 - Bola de Fogo (10MP)\n");
                                     printf("  2 - Vento Congelante (15MP)\n");
                                     if (jogador.lv>=2)
                                        printf("  3 - Barreira (20MP)\n");
                                     if (jogador.lv>=3)
                                        printf("  4 - Ataque Magia Negra (30MP)\n");
                                     if (jogador.lv>=4)
                                        printf("  5 - Tempestade Cosmica (50%MP)\n");
                                     if (jogador.lv>=5)
                                        printf("  6 - Manna Overblast (100%%MP)\n");
                                     pega_op=getch();
                                     
                                     switch (pega_op)
                                     {
                                            case '1'://bola de fogo 
                                                 printf("         %s usou Bola de Fogo\n",nome);
                                                 Sleep(TEMPO);
                                                 if (jogador.mana>=10)
                                                 {
                                                    aleat=20+(jogador.lv*10);
                                                    jogador.mana-=10;
                                                    turno-=2;
                                                 }else
                                                 {
                                                      printf("         mana insuficiente\n");
                                                      printf("         %s recupera mana nessa rodada\n",nome);
                                                      aleat=0;
													  jogador.mana+=(1+rand()%10)+(jogador.ataque-5);
                                                      if (jogador.mana>jogador.max_mana)
                                                      {
                                                         jogador.mana=jogador.max_mana;
                                                      }
                                                      Sleep(TEMPO);
                                                 }
                                                 break;
                                            case '2'://vento congelante
                                                 printf("         %s usou Vento Congelante\n",nome);
                                                 Sleep(TEMPO);
                                                 if (jogador.mana>=15)
                                                 {
                                                    aleat=15;
                                                    jogador.mana-=15;
                                                    turno+=2;
                                                    printf("         inimigo foi congelado\n");
                                                    Sleep(TEMPO);
                                                 }else
                                                 {
                                                      printf("         mana insuficiente\n");
                                                      printf("         %s recupera mana nessa rodada\n",nome);
                                                      aleat=0;
													  jogador.mana+=(1+rand()%10)+(jogador.ataque-5);
                                                      if (jogador.mana>jogador.max_mana)
                                                      {
                                                         jogador.mana=jogador.max_mana;
                                                      }
                                                      Sleep(TEMPO);
                                                 }
                                                 break;
                                            case '3'://barreira
                                              if (jogador.lv>=2)
                                              {  
                                                 printf("         %s usou Bareira\n",nome);
                                                 Sleep(TEMPO);
                                                 if (jogador.mana>=20)
                                                 {
                                                    aleat=-10;
                                                    buff+=5;
                                                    jogador.mana-=20;
                                                    printf("         sua defesa aumentou\n",nome);
                                                    Sleep(TEMPO);
                                                    turno-=2;
                                                 }else
                                                 {
                                                      printf("         mana insuficiente\n");
                                                      printf("         %s recupera mana nessa rodada\n",nome);
                                                      aleat=0;
													  jogador.mana+=(1+rand()%10)+(jogador.ataque-5);
                                                      if (jogador.mana>jogador.max_mana)
                                                      {
                                                         jogador.mana=jogador.max_mana;
                                                      }
                                                 }
                                              }
                                              break;
                                            case '4'://ataque magia negra
                                                 if (jogador.lv>=3)
                                                 {
                                                    printf("         %s usou Ataque Magia Negra\n",nome);
                                                    Sleep(TEMPO);
                                                    if (jogador.mana>=30)
                                                    {
                                                       aleat=60+(jogador.lv*15);
                                                       jogador.mana-=30;
                                                       turno-=2;
                                                    }else
                                                    {
                                                         printf("         mana insuficiente\n");
                                                         printf("         %s recupera mana nessa rodada\n",nome);
                                                         aleat=0;
														 jogador.mana+=(1+rand()%10)+(jogador.ataque-5);
                                                         if (jogador.mana>jogador.max_mana)
                                                         {
                                                            jogador.mana=jogador.max_mana;
                                                         }
                                                         Sleep(TEMPO);
                                                    }
                                                 }
                                                 break;
                                            case '5'://tempestade cosmica
                                                 if (jogador.lv>=4)
                                                 {
                                                    printf("         %s usou Tempestade Cosmica\n",nome);
                                                    Sleep(TEMPO);
                                                    if (jogador.mana>=jogador.max_mana/2)
                                                    {
                                                       aleat=30+(jogador.lv*20);
                                                       jogador.mana-=jogador.max_mana/2;
                                                       turno-=2;
                                                    }else
                                                    {
                                                         printf("         mana insuficiente\n");
                                                         printf("         %s recupera mana nessa rodada\n",nome);
                                                         aleat=0;
														 jogador.mana+=(1+rand()%10)+(jogador.ataque-5);
                                                         if (jogador.mana>jogador.max_mana)
                                                         {
                                                            jogador.mana=jogador.max_mana;
                                                         }
                                                         Sleep(TEMPO);
                                                    }
                                                 }
                                                 break;
                                            case '6'://mana overblast
                                                 if (jogador.lv>=5)
                                                 {
                                                    printf("         %s usou MANA OVERBLAST!!!\n",nome);
                                                    Sleep(TEMPO);
                                                    if (jogador.mana==jogador.max_mana)
                                                    {
                                                       aleat=100+(jogador.lv*30);
                                                       jogador.mana=0;
                                                       turno-=4;
                                                    }else
                                                    {
                                                         printf("         mana insuficiente\n");
                                                         printf("         %s recupera mana nessa rodada\n",nome);
                                                         aleat=0;
														 jogador.mana+=(1+rand()%10)+(jogador.ataque-5);
                                                         if (jogador.mana>jogador.max_mana)
                                                         {
                                                            jogador.mana=jogador.max_mana;
                                                         }
                                                         Sleep(TEMPO);
                                                    }
                                                 }
                                                 break;
                                            
                                     }
                                                 
                                     
                                     break;
                                case '3'://---skill assassino
                                     if (jogador.lv>=2)
                                        printf("  1 - Bomba de Fumaca (10MP)\n");
                                     if (jogador.lv>=3)
                                        printf("  2 - Stealth (20MP)\n");
                                     if (jogador.lv>=4)
                                        printf("  3 - Laminas Mortais (300MP)\n");
                                     if (jogador.lv>=5)
                                        printf("  4 - Berserk Unleash (100%MP)\n");// ou final blow
                                     pega_op=getch();
                                     
                                     switch (pega_op)
                                     {
                                            case '1'://bomba de fumaca
                                              if (jogador.lv>=2)
                                              {  
                                                 printf("         %s usou Bomba de Fumaca\n",nome);
                                                 Sleep(TEMPO);
                                                 if (jogador.mana-10>0)
                                                 {
                                                    aleat=0;
                                                    buff+=5;
                                                    jogador.mana-=10;
                                                    printf("         os ataques inimigos ficaram mais fracos devido a fumaca");//mudar essa fraze tosca!!!
                                                    Sleep(TEMPO);
                                                    turno--;
                                                 }else
                                                 {
                                                      printf("         mana insuficiente\n");
                                                      printf("         %s descansa essa rodada\n",nome);
                                                      aleat=0;
													  jogador.mana=jogador.max_mana*0.2;
                                                      if (jogador.mana>jogador.max_mana)
                                                      {
                                                         jogador.mana=jogador.max_mana;
                                                      }
                                                      turno-=1;
                                                      Sleep(TEMPO);
                                                 }
                                              }
                                              break;
                                            case '2'://stealth
                                              if (jogador.lv>=3)
                                              {  
                                                 printf("         %s usou Stealth\n",nome);
                                                 Sleep(TEMPO);
                                                 if (jogador.mana-20>0)
                                                 {
                                                    aleat=0;
                                                    jogador.mana-=20;
                                                    printf("         voce está escondido");
                                                    Sleep(TEMPO);
                                                    turno+=2;
                                                 }else
                                                 {
                                                      printf("         mana insuficiente\n");
                                                      printf("         %s descansa essa rodada\n",nome);
                                                      aleat=0;
													  jogador.mana=jogador.max_mana*0.2;
                                                      if (jogador.mana>jogador.max_mana)
                                                      {
                                                         jogador.mana=jogador.max_mana;
                                                      }
                                                      turno-=1;
                                                      Sleep(TEMPO);
                                                 }
                                              }
                                              break;
                                            case '3'://laminas mortais
                                              if (jogador.lv>=3)
                                              {  
                                                 printf("         %s usou Laminas Mortais\n",nome);
                                                 Sleep(TEMPO);
                                                 if (jogador.mana-30>0)
                                                 {
                                                    aleat=0;
                                                    jogador.mana-=30;
                                                    aleat=(1+rand()%80)+(jogador.ataque*2);
                                                    Sleep(TEMPO);
                                                    turno-=2;
                                                 }else
                                                 {
                                                      printf("         mana insuficiente\n");
                                                      printf("         %s descansa essa rodada\n",nome);
                                                      aleat=0;
													  jogador.mana=jogador.max_mana*0.2;
                                                      if (jogador.mana>jogador.max_mana)
                                                      {
                                                         jogador.mana=jogador.max_mana;
                                                      }
                                                      turno-=1;
                                                      Sleep(TEMPO);
                                                 }
                                              }
                                              break;
                                            case '4'://berserk unleash
                                                 if (jogador.lv>=5)
                                                 {
                                                    printf("         %s usou BERSERK UNLEASH!!!\n",nome);
                                                    Sleep(TEMPO);
                                                    if (jogador.mana==jogador.max_mana)
                                                    {
                                                       aleat=(1+rand()%80)+(jogador.ataque*4);
                                                       jogador.mana==0;
                                                       turno-=6;
                                                    }else
                                                    {
                                                         printf("         mana insuficiente\n");
                                                         printf("         %s descansa essa rodada\n",nome);
                                                         aleat=0;
														 jogador.mana=0;
                                                         turno-=4;
                                                         Sleep(TEMPO);
                                                    }
                                                 }
                                                 break;
                                     }
                                     break;
                                
                         }
                         break;
                    case 'i'://poções
						if (jogador.pocoes>=1)
						{
							desenha_usou_pocao();
							aleat=0;
						}
						else
						{
							printf("\n\n          Voce nao tem pocoes no momento");
							aleat=0;
						}
                         break;
                    
                    default:
						printf("         invalido\n");
						aleat=0;
						break;
                          
             }
     return aleat;
}
//---------------------
void vitoria()
{
     printf("\n         Voce Venceu!\n");
     if ((jogador.xp>=10) && (jogador.lv<99))
     {
        jogador.xp-=10;
        jogador.lv++;
        printf("         Progrediu para o LV %d\n",jogador.lv);
        switch (classe)
        {
               case '1':
					if (jogador.max_vida<999)
                    	jogador.vida=jogador.max_vida+= jogador.lv*3;
                    if (jogador.ataque<999)
                    	jogador.ataque+=4;
                    if (jogador.defesa<999)
                    	jogador.defesa+=jogador.lv*1.5;
                    jogador.mana= 0;
                    if (jogador.max_mana<99)
                    	jogador.max_mana+=5;
					break;
               case '2':
					if (jogador.max_vida<999)
                    	jogador.vida=jogador.max_vida+=5;
                    if (jogador.defesa<999)
                    	jogador.defesa+=3;
                    if (jogador.max_mana<99)
                    	jogador.mana=jogador.max_mana+=jogador.lv*3;
                    if (jogador.ataque<999)
                    	jogador.ataque+=2;
					break;
               case '3':
					if (jogador.max_vida<999)
                    	jogador.vida=jogador.max_vida+=3;
                    if (jogador.ataque<999)
                    	jogador.ataque+=jogador.lv*3;
                    if (jogador.defesa<999)
                    	jogador.defesa+=1;
                    if (jogador.max_mana<99)
                    	jogador.mana=jogador.max_mana+=10;
					break;
        }
        if (jogador.max_vida>999)
           jogador.max_vida = jogador.vida = 999;
        if (jogador.max_mana>99)
           jogador.max_mana = jogador.mana = 99;
        if (jogador.ataque>999)
        	jogador.ataque=999;
        if (jogador.defesa>999)
        	jogador.defesa=999;
     }
     printf("\n         Pressione ENTER para continuar");
}
//----------------------
void derrota()
{
     printf("\n         Voce Perdeu! Mas que fracasso!\n");
     Sleep(TEMPO);
     printf("\n         Tente novamente antes que o mundo caia nas trevas \n   sombrias eternas da escuridao negra e obscura\n");
     Sleep(TEMPO);
     printf("\n         Pressione ENTER para continuar");
	 jogador.vida=jogador.max_vida;
	 switch(classe)
	 {
	 case '1':
		 jogador.mana=0;
		 break;
	 default:
		 jogador.mana=jogador.max_mana;
		 break;
	 }
     getch();
     cria_mapa_um();
}
