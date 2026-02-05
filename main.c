//name:     date:   period:

#include <stdlib.h>
#include <stdio.h>
const int NUMITEMS = 10;
int main(void)
{
  double *fahrenheit;
  double *celsius;
  fahrenheit = (double *)malloc(NUMITEMS * sizeof(double));
  celsius = (double *)malloc(NUMITEMS * sizeof(double));
  for(int x = 0; x < NUMITEMS; x++)
  {
      printf("Fahrenheit #%i: ", x+1);
      scanf("%d", &fahrenheit[x]);
  }
  for(int x = 0; x < NUMITEMS; x++)
  {
      celsius[x] = (int)((5 * (fahrenheit[x] - 32)) / 9.0);
  }
  printf("Fahrenheit\t | Celsius\n");
  printf("----------\t | --------------\n");
  for(int i = 0; i < NUMITEMS; i++)
      printf("%d\t | %d", &fahrenheit[i], &celsius[i]);
  free(fahrenheit);
  free(celsius);
  return 1;
}
        
        
        

    
    }
}
