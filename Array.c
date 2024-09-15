
#include <stdio.h>

int main() {
  int city1[7], city2[7], i, sum1 = 0, sum2 = 0;
  float avg1, avg2, total_avg;

  printf("Enter temperatures for city 1 for the week:\n");
  for (i = 0; i < 7; i++) {
    printf("Day %d: ", i + 1);
    scanf("%d", &city1[i]);
    sum1 += city1[i];
  }

  printf("Enter temperatures for city 2 for the week:\n");
  for (i = 0; i < 7; i++) {
    printf("Day %d: ", i + 1);
    scanf("%d", &city2[i]);
    sum2 += city2[i];
  }

  printf("\nTemperatures for city 1:\n");
  for (i = 0; i < 7; i++) {
    printf("Day %d: %d\n", i + 1, city1[i]);
  }

  printf("\nTemperatures for city 2:\n");
  for (i = 0; i < 7; i++) {
    printf("Day %d: %d\n", i + 1, city2[i]);
  }

  //avg1 = (float)sum1 / 7;
  //avg2 = (float)sum2 / 7;

  total_avg = (sum1/7 + sum2/7) / 2;

 // printf("\nAverage temperature for city 1: %.2f\n", avg1);
 // printf("Average temperature for city 2: %.2f\n", avg2);
  printf("Total average temperature: %.2f\n", total_avg);

  return 0;
}
