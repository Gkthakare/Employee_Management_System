#include <stdio.h>
#include <stdlib.h>

int date_validation(int dd, int mm, int yy) {
  if (dd < 1 || dd > 31 || mm < 1 || mm > 12 || yy < 1900 || yy > 2100) {
    return 0;
  }
  return 1;
}

int basic_salary_validate(float basic_salary) {
  if (basic_salary < 0) {
    return 0;
  }
  return 1;
}