#include "main.h"
#include "puzzles.h"
#include "mapa.h"
#include "interface.h"
#include "atributos.h"
#include "batalhas.h"
#include "dragao.h"

/*

  Esse código como um todo está bem comentado (as vezes até para partes desnecessárias,
  mas isso ocorre devido ao fato de que, no futuro os programadores esperam olhar para ele denovo e,
  caso nao entendam alguma parte que eles mesmo escreveram, os comentários poderam ajudar, 
  além é claro de ajudar o profesor a entender nosso código.
  
*/

main()
{
      srand(time(NULL)); //semente de uso de todos os "rand()"
      puzzle_um_ok=0;
      batalha_beholder_ok=0;
      desenha_abertura();
      system("cls");
} 
