#include<stdio.h>
int main()
{
  float a,b,c;
  char ch;
  printf("Enter first number :");
  scanf("%f",&a);
  printf("Enter user choice to perform operation ");
  scanf("%d",&ch);
  printf("Enter Second Number :");
  scanf("%f",&b);
  switch (ch)
    {
      case '+':
        {
          c=a+b;
          printf("output=%f",c);
          break;
        }
      case '-':
        {
          c=a-b;
          printf("output=%f",c);
          break;
        }
      case '*':
        {
          c=a*b;
          printf("output=%f",c);
          break;
        }
      case '/':
        {
          c=a/b;
          printf("output=%f",c);
          break;
        }
      default:
      printf("Invalid Operator");
    }
}