#include <stdio.h>

struct Distance {
   int feet;
   float inch;
} d1, d2, result;

int main() {
   scanf("%d %f", &d1.feet ,&d1.inch);
   scanf("%d %f", &d2.feet,&d2.inch);
   
   result.feet = d1.feet + d2.feet;
   result.inch = d1.inch + d2.inch;
   while (result.inch >= 12.0) {
      result.inch = result.inch - 12.0;
      ++result.feet;
   }
   printf("\n%0.2f\' - %.2f\"\n", (float)result.feet, result.inch);
   return 0;
}