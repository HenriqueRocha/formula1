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
  case 1:
    return 10;
  case 2:
    return 6;
  case 3:
    return 4;
  case 4:
    return 3;
  case 5:
    return 2;
  case 6: 
    return 1;
  default:
    return 0;
  }
}

