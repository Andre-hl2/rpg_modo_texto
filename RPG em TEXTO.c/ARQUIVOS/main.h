#define TEMPO 1400
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>

int i,j; //para uso de "for" em geral
int god_mode; //variavel para contorle da demonstração do professor

char menu; //variavel que pega a escolha do jogador no menu


// controle de mapa

char pega_tecla_movimento; //variavel responsavel por pegar a tecla que o jogador pressiona
int px,py,last_x,last_y;  // "px" e "py" sao as coordenadas do player, "last_x" e "last_y"" apaga o ultimo lugar que o player esteve
int Nx[5],Ny[5],direction,matou[5]; //"Nx e Ny sao as coordenadas dos inimigos, direction e a direção que ele andara, matou é a variávle de controle para saber se o inimigo ainda esta no mapa
char m1[15][15]; //matriz do primeiro andar
char m2[15][15]; //matriz do segundo andar
char m3[15][15]; //matriz do terceiro andar
char m4[15][15]; //matriz do quarto andar
char m5[15][15]; //matriz do quinto andar
char m6[20][30]; //matriz do sexto andar


//criação do personagem
char* str_classe;
char nome[8];
char classe;
char genero;

struct atributos
{
	int vida;
	int max_vida;
	int ataque;
	int defesa;
	int mana;
	int max_mana;
	int pocoes;
	int chaves;
	int xp; //experiencia
	int lv; //nível do jogador
} ;

struct atributos jogador;

//puzzles

//puzzle porta um
int on_off[3][3]; //matriz da porta 
char pega_numero, status; //variavel que pega a esolha do jogador, 
int puzzle_um_ok; //controle de desaparecimento no mapa, fazendo com que o jogador o complete uma vez durante todo o jogo

//atributos inimigos

struct inimigos
{
       int vida;
       int ataque;
       int defesa;
};

struct inimigos soldado;
struct inimigos algoz;
struct inimigos porta;
struct inimigos bruxo;
struct inimigos bruxa;
struct inimigos beholder;
struct inimigos dragao;


// vaiáveis de contorle de batalha

char pega_op;
int dano, vez;
int batalha_beholder_ok;
float aleat;
int turno; 
int buff;
