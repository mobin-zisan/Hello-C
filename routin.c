#include <stdio.h>

int main() {
  int day;

  printf("Enter a day number (1-7): ");
  scanf("%d", &day);

  switch (day) {
    case 1:
      printf("Saturday:\n");
      printf("ICE114 (9:00 AM - 12:00 PM)\nMAT1031 (02:30PM - 04:00 PM");
      break;
    case 2:
      printf("Sunday:\n");
      printf("ICE113 (8:30 AM - 10:00 AM)\nICE111 (10:00 AM - 11:30 PM)\nGED 101 (11:30 PM - 01:00 PM)\nPHY102 (01:00PM-04:00PM)");
      break;
    case 3:
      printf("Monday:\nHoliday");
      break;
    case 4:
      printf("Tuesday:\n");
      printf("MAT 1031 (10:00 AM - 11:30 AM)\nENG 100 (01:00 PM - 02:30 PM)\nPHY 101 (02:00 PM - 04:00 PM)");
      break;
    case 5:
      printf("Wednesday:\n");
      printf("ICE 111 (08:30 AM - 10:30 AM)\nICE 113 (11:00 AM - 12:00 PM)\nGED 101 (01:00 PM - 02:30 PM)\nPHY101  (02:30PM-04:00PM)");
      break;
    case 6:
      printf("Thursday:\nHoliday");
      break;
    case 7:
      printf("Friday\nHoliday");
      break;
    default:
      printf("Invalid day number. Please enter a number between 1 and 7.");
  }

  return 0;
}


