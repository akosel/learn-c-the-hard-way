#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 56893.9013;
  char initial = 'A';
  char first_name[] = "Zed";
  char last_name[] = "Shaw";
  char empty[] = "";

  printf("You are %d miles away.\n", distance);
  printf("You are %f miles away.\n", power);
  printf("You are %f miles away.\n", super_power);
  printf("I have an initial %c.\n", initial);
  printf("I have a first name %s.\n", first_name);
  printf("I have a last name %s%s.\n", last_name, empty);
  printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);

  return 0;
}
