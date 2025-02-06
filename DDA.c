#include <stdio.h>
#include <math.h>

void DDA(int x1, int y1, int x2, int y2){
  float x = x1, y = y1;

  int dx = x2 - x1;
  int dy = y2 - y1;

  int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

  float xinc = (float)dx / steps;
  float yinc = (float)dy / steps;

  for(int i = 0; i <= steps; i++){
    x = x + xinc;
    y = y + yinc;
    printf("%.2f | %.2f\n", x, y);
  }
}

int main() {
  DDA(4, 8, 6, 12);  
  return 0;
}