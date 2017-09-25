#include <stdio.h>

int points (int place);
int ntrl(int);

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
  return place <= 2 ? 14 - 4 * place : ntrl(7 - place);
}

int ntrl(int n)
{
  return n >= 0 ? n : 0;
}

