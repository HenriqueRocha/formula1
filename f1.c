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
  switch (place) {
  case 1: case 2:
    return 14 - 4 * place;
  case 3: case 4: case 5: case 6: 
    return 7 - place;
  default:
    return 0;
  }
}

