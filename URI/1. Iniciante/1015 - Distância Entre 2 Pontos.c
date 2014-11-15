// Problem: 1015 - Distância Entre 2 Pontos (https://www.urionlinejudge.com.br/judge/pt/problems/view/1015)

#include "stdio.h"
#include "math.h"
int main()
{
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    int x = 0, y = 0;
 
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    x = (x2 - x1) * (x2 - x1);
    y = (y2 - y1) * (y2 - y1);
 
    printf("%.4lf\n", sqrtf(x + y));
 
    return 0;
}