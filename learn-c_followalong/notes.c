// 001 Introduction.
// Print provided text.
#include <stdio.h>

int main() {
  printf("Hello, world");
  return 0;
}

// 002 Variables and types.
// Integers - whole numbers which can be either positive or negative. Defined using:
char, int, short, long, long long.
// Unsigned integers - whole numbers which can only be positive. Defined using:
unsigned char, unsigned int, unsigned short, unsigned long, unsigned long long.
// Floating point numbers - real numbers (numbers with fractions). Defined using:
float, double.
// Define a boolean type, typically by the following:
#define BOOL char
#define FALSE 0
#define TRUE 1
// Define variables foo and bar using the following syntax.
int foo; // We do not know what is in it.
int bar = 1;
// Prints out the sum of numbers a, b, and c.
#include <stdio.h> 
int main() {
    int a = 3;
    float b = 4.5;
    double c = 5.25;
    float sum;
    // The sum itself. 
    sum = a + b + c;
    // Prints the result.
    printf("The sum of a, b, and c is %f.", sum);
    return 0;

}

// 003 Arrays.
// Define an array of 10 integers using:
int numbers[10];
// Populate the array using:
numbers[0] = 10;
numbers[1] = 20;
numbers[2] = 30;
numbers[3] = 40;
numbers[4] = 50;
numbers[5] = 60;
numbers[6] = 70;
// Print the 7th number from the array, which has an index of 6 using:
printf("The 7th number in the array is %d", numbers[6]);
// Gives the average of some grades:
#include <stdio.h>
int main() {
    // Define the grades and average variables
    int average;
    int grades[3];
    // Populates the array.
    grades[0] = 80;
    grades[1] = 85;
    grades[2] = 90;
    // The sum itself.
    average = (grades[0] + grades[1] + grades[2]) / 3;
    // Prints the sum.
    printf("The average of the 3 grades is: %d", average);
    return 0;
}

// 004 Multidimensional Arrays.
// General form of a multidimesional array declaration:
type name[size1][size2]...[sizeN];
char vowels[1][5] = {
    {'a', 'e', 'i', 'o', 'u'}
};
// Two-dimensional array, declared using:
type arrayName [x][y]; // Type can be any C data type. 
// TDA can be considered as a table, with the firs and second values relating to collums/rows.
// No need to put an X value as compiler knows there are two dimentions as there are 2 lines
// Example of a TDA defined using:
char vowels[][5] = {
    {'A', 'E', 'I', 'O', 'U'},
    {'a', 'e', 'i', 'o', 'u'}
};
// Initializing Multi-Dimensional Arrays
int a[3][4] = {  
   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
   {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
};
// Gives the 4th element from the 3rd row (11):
int val = a[2][3];
// Gives the average marks for for a group of 5 students in two subjects:
#include <stdio.h>
int main() {
// Declares the array grades, the float average and the integers for both subjects.
int grades[2][5];
float average;
int i;
int j;
// Array values for grades.
grades[0][0] = 80;
grades[0][1] = 70;
grades[0][2] = 65;
grades[0][3] = 89;
grades[0][4] = 90;
grades[1][0] = 85;
grades[1][1] = 80;
grades[1][2] = 80;
grades[1][3] = 82;
grades[1][4] = 87;
// For loop, adds up the values to a certain count.
for (i = 0; i < 2; i++) {
average = 0;
for (j = 0; j < 5; j++) {
average += grades[i][j];
}
average /= 5.0;
// Prints the message.
printf("The average marks obtained in subject %d is: %.2f\n", i, average);
}
return 0;
}
// 005 Conditions. 
// General form of the decision making structures in C:
int target = 10;
if (target == 10) {
    printf("Target is equal to 10");
}
// Inequality operators, with IF can be used to evaluate expressions. For example:
int foo = 1;
int bar = 2;
if (foo < bar) {
    printf("foo is smaller than bar.");
}
if (foo > bar) {
    printf("foo is greater than bar.");
}
// Else keyword used to execute code when the expression evaluates to false. 
int foo = 1;
int bar = 2;
if (foo < bar) {
    printf("foo is smaller than bar.");
} else {
    printf("foo is greater than bar.");
}






// 006
// 007
// 008
// 009
// 010





