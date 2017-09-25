#include <stdio.h>

int points (int place);

int main()
{
  int place;
  int pts;
  printf("Qual é o lugar? ");
  scanf("%d", &place);
  pts = points(place);
  if (pts > 1)
    printf("Ganhou %d pontos.\n", pts);
  else if (pts == 1)
    printf("Ganhou 1 ponto.\n");
  else
    printf("Não ganhou pontos.\n");

  return 0;
}

int points(int place)
{
  if (place <= 2)
    return 14 - 4 * place;
  else if (place <= 6)
    return 7 - place;
  else
    return 0;
}

