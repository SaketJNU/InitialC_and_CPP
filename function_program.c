/* Functions in C:  
A function four entities.
1. return type 2. Function name  3. parameters  4. function body
Function Signature =  return type + function name + parameters.

There are two types of functions in C .
1. Call by value  2. Call by reference  [Address operator  & *  **]   
Difference between call by value and call by reference functions types
Modular Coding
*/

// Call by value function.    print hello word

#include<stdio.h>
void print_my_name(char );

void main()  // void: return type,  main: function name, () : no parameter is passed
{
char name = 'S';
print_my_name(name);
} // function body


void print_my_name(char n)
{
	printf("Hello %c", n);
}
  
