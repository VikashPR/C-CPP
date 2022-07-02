#include <stdio.h>
#include <math.h>
struct midpoint
{
    int x;
    int y;
};
void midpoint(float x1, float y1, float x2, float y2)
    {
        float midx = (x1 + x2) / 2;
        float midy = (y1 + y2) / 2;
        printf("\nMidpoint : %0.2f %0.2f\n", midx, midy);
    }

int main()
{
    float x1, y1, x2, y2, gdistance;
    scanf("%f %f", &x1, &y1 );
    scanf("%f %f", &x2, &y2);
    gdistance = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
    printf("Distance : %.2f", sqrt(gdistance));
    midpoint(x1, y1, x2, y2);
    printf("\n");
    return 0;
}