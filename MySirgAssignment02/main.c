#include <stdio.h>
#include <stdlib.h>

int main()
{
    swap_two_number();
    swap_two_number_without_third_var();
    print_last_digit();
    print_without_last_digit();
    print_ASCII_code();
    return 0;
}

void swap_two_number()
{
  int num1, num2, temp;

  printf("Enter three digit -> ");
  scanf("%d %d", &num1, &num2);

  printf("\nnum1 = %d and num2 = %d", num1, num2);

  temp = num1;
  num1 = num2;
  num2 = temp;

  printf("\nAfter swaping num1 = %d and num2 = %d", num1, num2);
  return;
}

void swap_two_number_without_third_var()
{
  int num1, num2;

  printf("Enter three digit -> ");
  scanf("%d %d", &num1, &num2);

  printf("\nnum1 = %d and num2 = %d", num1, num2);

  num1 = num1 - num2;
  num2 = num1 + num2;
  num1 = num2 - num1;

  printf("\nAfter swaping num1 = %d and num2 = %d", num1, num2);
  return;
}

void print_last_digit()
{
  int var;

  printf("Enter a positive integer ->");
  scanf("%d", &var);

  printf("Last digit of %d is %d",var, var%10);
  return;
}

void print_without_last_digit()
{
  int var;

  printf("Enter a positive integer -> ");
  scanf("%d", &var);

  printf("Without last digit of %d is %d",var, var/10);
  return;
}

void print_ASCII_code()
{
  char ch;
  printf("Enter any character -> ");
  scanf("%c", &ch);

  printf("ASCII code of %c is %d", ch, ch);

  return;
}
