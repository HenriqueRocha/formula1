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
  if (pts)
    printf("Ganhou %d ponto%s.\n", pts, pts == 1 ? "" : "s");
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

