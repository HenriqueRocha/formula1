#include <stdio.h>

#define MAX_ARRIVALS 26
int arrivals[MAX_ARRIVALS];
int n_arrivals;

int get_arrivals (void);

int main (void)
{
  get_arrivals();
  printf("Número de chegadas:    %2d\n"
         "Número de desistentes: %2d\n",
         n_arrivals, MAX_ARRIVALS - n_arrivals);
  return 0;
}

int get_arrivals (void)
{
  int number;
  int i;
  for (i = 0; i < MAX_ARRIVALS; i++)
  {
    printf("%2dº. lugar (0 para terminar): ", i + 1);
    scanf("%d", &number);
    if (!number)
      break;
    arrivals[i] = number;
  }
  n_arrivals = i;
}

