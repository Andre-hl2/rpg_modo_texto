#include "atributos.h"
#include "main.h"

void muda_atributos() //muda os atributos dependendo da classe escolhida pelo jogador
{
     switch(classe)
     {
         case '1': //GUERREIRO
              jogador.vida=40;
              jogador.max_vida=40;
              jogador.ataque=25;
              jogador.defesa=24;
              jogador.mana=0;
              jogador.max_mana=20;
              jogador.pocoes=2;
              jogador.chaves=0;
              jogador.xp=0; //experiencia
              jogador.lv=1; //nível
              break;
         case '2': //MAGO
              jogador.vida=20;
              jogador.max_vida=20;
              jogador.defesa=20;
              jogador.mana=50;
              jogador.max_mana=50;
              jogador.ataque=jogador.max_mana*0.25;
              jogador.pocoes=3;
              jogador.chaves=0;
              jogador.xp=0; //experiencia
              jogador.lv=1; //nivel
              break;
         case '3': //ASSASSINO
              jogador.vida=25;
              jogador.max_vida=23;
              jogador.ataque=35;
              jogador.defesa=20;
              jogador.mana=0;
              jogador.max_mana=0;
              jogador.pocoes=1;
              jogador.chaves=0;
              jogador.xp=0; //exoeriecia
              jogador.lv=1; //nível
              break;
     }
}

void god_atributos()
{
	jogador.vida=200;
    jogador.max_vida=200;
	jogador.ataque=100;
    jogador.defesa=100;
    if (classe == '1')
		jogador.mana=0;
	else
		jogador.mana=99;
    jogador.max_mana=99;
    jogador.pocoes=9;
    jogador.chaves=9;
    jogador.xp=0; //experiencia
    jogador.lv=25; //nível
}
