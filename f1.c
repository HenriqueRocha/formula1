#include <stdio.h>

int points (int place);
int sorted3(int x, int y, int z);

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
  return sorted3(1, place, 2) * (12 - 2 * place) +
          sorted3(3, place, 8) * (9 - place);
}

int sorted3(int x, int y, int z)
{
  return x <= y && y <= z;
}

