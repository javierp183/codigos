#include <stdio.h>

int main()

{

/* Inicializo las variables para el for(x),num y el acumulador - todos estos como numeros enteros - */
  int x;
  int num;
  int acum;


/* Armo ciclo for */
for ( x = 0; x < 101; x++ ) {
  /* Asigno un valor a num */
  num = 101;
  acum = x + 1;
  num = num - acum;
  printf("%i\n", num);

}

  return 0;

}
