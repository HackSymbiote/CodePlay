#include <stdio.h>

int main() {
  int num1, num2, operation;
  float result;

  printf("Enter two numbers: ");
  scanf("%d%d", &num1, &num2);

  printf("Enter operation (+, -, *, /): ");
  scanf(" %c", &operation);

  switch (operation) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      printf("Invalid operation.\n");
      return 0;
  }

  printf("The result is: %f\n", result);

  return 0;
}