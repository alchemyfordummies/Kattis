#include <stdio.h>
#include <math.h>

int main() {
  int cases;
  scanf("%d", &cases);
  int i;
  for (i = 0; i < cases; i++) {
    float x = 0, y = 0, direction = 0;
    int segments, j;
    scanf("%d", &segments);
    for (j = 0; j < segments; j++) {
        float distance, angle;
        scanf("%f %f", &angle, &distance);
        direction += angle;
        float radians = direction * M_PI / 180;
        y += distance * cos(radians);
        x += distance * sin(radians);
      //  printf("%f %f", cos(direction), sin(direction));
    }

    printf("%f %f\n", -x, y);
  }

  return 0;
}
