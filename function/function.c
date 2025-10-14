
#include <stdio.h>
int add(int a, int b)
{
    int sum = a + b;
    printf("SUM = %d \n ", sum);
    return sum;
}
int subtract(int a, int b)
{
    int subtract = a - b;
    printf("SUBTRACT = %d\n", subtract);
    return subtract;
}
int multiply(int a, int b)
{

    int multiply = a * b;
    printf("MULTIPLY IS %d\n", multiply);
    return multiply;
}
int divide(int a, int b)
{
    int divide = a / b;
    printf("DIVIDE IS %d", divide);
    return divide;
}

int main()
{
    int firstnumber, secondnumber, option;

    printf("Enter first number");
    scanf("%d", &firstnumber);
    printf("Enter secondnumber");
    scanf("%d", &secondnumber);
    printf("Choose an Option: \n1. Addtion\n2. Subtraction\n3. Multipliction\n4. Division\nEnter choice (1-4): ");
    scanf("%d", &option);

  switch (option)
  {
  case 1: add(firstnumber,secondnumber);
  break;
  case 2: subtract(firstnumber,secondnumber);
  break;
  case 3: multiply(firstnumber,secondnumber);
  break;
  case 4: divide(firstnumber,secondnumber);
  break;
  }

    return 0;
}