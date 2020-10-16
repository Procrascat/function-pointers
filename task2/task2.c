#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
typedef int (*operation) (int a, int b);
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exitp ();

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  operation choices[5] = {add, subtract, multiply, divide, exitp};
  int Input;
  int power = 1;
  while(power != 0) {
    printf("Operand ‘a’ : 6 | Operand ‘b’ : 3 \n Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
    printf("\n");
    scanf("%d", &Input);
    printf("x = %d", choices[Input](6,3));
    power = choices[Input](6,3);
    printf("\n");
  }
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { 
  printf ("Adding 'a' and 'b'\n"); 
  return a + b; 
}

int subtract (int a, int b) {
  printf ("Subtracting 'b' from 'a'\n"); 
  return a - b; 
}
int multiply (int a, int b) {
  printf ("Multiplying 'a' and 'b'\n"); 
  return a * b; 
}
int divide (int a, int b) {
  printf ("Dividing 'b' from 'a'\n"); 
  return a / b; 
}
int exitp () {
  return 0;
}