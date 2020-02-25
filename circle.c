#include <stdio.h>
int main() {
  float x, y, r, s, d;
  printf("Введите координаты центра окружности!\n");
  scanf("%f %f", &x, &y);
  printf("Введите радиус окружности\n");
  scanf("%f", &r);
  s = 3.14 * (r * r);
  d = 3.14 * 2 * r;
  printf("Площадь равна %f\n", s);
  printf("Длина равна %f\n", d);
  return 0;
}

