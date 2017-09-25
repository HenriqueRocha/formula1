#include <stdio.h>

int points (int place);
int isbtwn(int n, int lb, int ub);

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
  return isbtwn(place, 1, 2) * (14 - 4 * place) +
          isbtwn(place, 3, 6) * (7 - place);
}

int isbtwn(int n, int lb, int ub)
{
  return lb <= n && n <= ub;
}

