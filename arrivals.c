#include <stdio.h>

#define MAX_ARRIVALS 26
int arrivals[MAX_ARRIVALS + 1]; /* index 0 not used */
int n_arrivals;

int get_arrivals(void);

main()
{
  n_arrivals = get_arrivals();
  printf("Número de chegadas:    %2d\n"
         "Número de desistentes: %2d\n",
         n_arrivals, MAX_ARRIVALS - n_arrivals);
  return 0;
}

int get_arrivals(void)
{
  int i;
  int number;
  for (i = 1; i <= MAX_ARRIVALS; ++i)
    {
      printf("%2dº. lugar (0 para terminar): ", i);
      scanf("%d", &number);
      if (!number)
        break;
      arrivals[i] = number;
    }
  return i - 1;
}

