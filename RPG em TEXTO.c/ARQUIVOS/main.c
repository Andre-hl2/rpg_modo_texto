#include "main.h"
#include "puzzles.h"
#include "mapa.h"
#include "interface.h"
#include "atributos.h"
#include "batalhas.h"
#include "dragao.h"

/*

  Esse c�digo como um todo est� bem comentado (as vezes at� para partes desnecess�rias,
  mas isso ocorre devido ao fato de que, no futuro os programadores esperam olhar para ele denovo e,
  caso nao entendam alguma parte que eles mesmo escreveram, os coment�rios poderam ajudar, 
  al�m � claro de ajudar o profesor a entender nosso c�digo.
  
*/

main()
{
      srand(time(NULL)); //semente de uso de todos os "rand()"
      puzzle_um_ok=0;
      batalha_beholder_ok=0;
      desenha_abertura();
      system("cls");
} 
