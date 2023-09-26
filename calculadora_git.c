#include <stdio.h>



int main(void)
{


  int a = 0;
  int b = 0;
  char c = 0;
  int r = 0;

  printf ("\n\nINTRODUZCA EL PRIMER NUMERO\n");
  scanf("%d", &a);
  
  printf ("\n\nINTRODUZCA EL SEGUNDO NUMERO\n");
  scanf("%d", &b);
  
  printf ("\n\nINTRODUZCA EL CARACTER\n");
  getchar();
  scanf("%char", &c);
  
  
  
  
  
  switch(c)
    {
      
    case'+':
      printf("SUMA");
      break;
      
    case'-':
      printf("RESTA");
      break;
      
    case'*':
      printf("MULTIPLICACION");
      break;
      
    case'/':
      printf("DIVISION");
      break;
      
      
    default:
      printf("ERROR");

      break;
      
    }
  
  printf("\n\nSU RESPUESTA ES\n: %d",r);
  
  
  getchar();
}


