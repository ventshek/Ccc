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
// Inequality operators, with IF can be used to evaluate expressions:
int foo = 1;
int bar = 2;
if (foo < bar) {
    printf("foo is smaller than bar.");
}
if (foo > bar) {
    printf("foo is greater than bar.");
}
// Else keyword used to execute code when the expression evaluates to false:
int foo = 1;
int bar = 2;
if (foo < bar) {
    printf("foo is smaller than bar.");
} else {
    printf("foo is greater than bar.");
}
// Multiple IF ELSE statements can be chained when more than 2 outcomes:
int foo = 1;
int bar = 2;
if (foo < bar) {
    printf("foo is smaller than bar.");
} else if (foo == bar) {
    printf("foo is equal to bar.");
} else {
    printf("foo is greater than bar.");
}
// Statements can be looped inside other loops (nesting):
int peanuts_eaten = 22;
int peanuts_in_jar = 100;
int max_peanut_limit = 50;
if (peanuts_in_jar > 80) {
    if (peanuts_eaten < max_peanut_limit) {
        printf("Take as many peanuts as you want!\n");
    }
} else {
    if (peanuts_eaten > peanuts_in_jar) {
        printf("You can't have anymore peanuts!\n");
    }
    else {
        printf("Alright, just one more peanut.\n");
    }
}
// AND operator (&&) can be used to check if two expressions evaluate to TRUE:
int foo = 1;
int bar = 2;
int moo = 3;
if (foo < bar && moo > bar) {
    printf("foo is smaller than bar AND moo is larger than bar.");
}
// OR operator (||) can be used to check if at least one of the expressions evaluate to TRUE:
int foo = 1;
int bar = 2;
int moo = 3;
if (foo < bar || moo > bar) {
    printf("foo is smaller than bar OR moo is larger than bar.");
}
// The NOT operator (!) can be used:
int target = 9;
if (target != 10) {
    printf("Target is not equal to 10");
}
// Checks if the guess number is equal to 555:
#include <stdio.h>
void guessNumber(int guess) {
    // TODO: write your code here
    if (guess < 555) {
        printf("Your guess is too low.\n");
    } else if (guess > 555) {
        printf("Your guess is too high.\n");
    } else {
        printf("Correct. You guessed it!\n");
    }
}
int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}

// 006 Strings.

// Strings in C are arrays of characters, pointer to character array defined:
char * name = "John Smith";
// String that can be manipulated, defined as a local character array:
char name[] = "John Smith"; // [] Tells the compiler to calculate the array size automatically.
char name[] = "John Smith";
/* is the same as */
char name[11] = "John Smith";
// Printf can be used to format a string together with other strings:
char * name = "John Smith";
int age = 27;
/* prints out 'John Smith is 27 years old.' */
printf("%s is %d years old.\n", name, age);
// The function 'strlen' returns the length of the string which has to be passed as an argument:
char * name = "Nikhil";
printf("%d\n",strlen(name));
// The function strncmp compares between two strings, returning the number 0 if equal or a different number:
char * name = "John";
if (strncmp(name, "John", 4) == 0) {
    printf("Hello, John!\n");
} else {
    printf("You are not John. Go away.\n");
}
// The function 'strncat' appends first n characters of src string to the destination string where n is min(n,length(src)). The arguments passed are destination string, source string, and n - maximum number of characters to be appended. For Example:
char dest[20]="Hello";
char src[20]="World";
strncat(dest,src,3);
printf("%s\n",dest);
strncat(dest,src,20);
printf("%s\n",dest);

// Edits the last name and prints the result using pointer for first name and local array for last name:
#include <string.h>
#include <stdio.h>
int main() {
char * first_name = "John";
char last_name[] = "Doe";
char name[100];
last_name[0] = 'B';
sprintf(name, "%s %s", first_name, last_name);
if (strncmp(name, "John Boe", 100) == 0) {
printf("Done!\n");
}
name[0]='\0';
strncat(name,first_name,4);
strncat(name,last_name,20);
printf("%s\n",name);
return 0;
}

// 007 For loops. 

/* For loops give the following functionality:
Initialize the iterator variable using an initial value
Check if the iterator has reached its final value
Increases the iterator */
// Iterate on a block 10 times:
int i;
for (i = 0; i < 10; i++) {
    printf("%d\n", i); // Prints the numbers 1 to 10.
}
// For loop iterating on array values, summing up all the values of an array:
int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int sum = 0;
int i;
for (i = 0; i < 10; i++) {
    sum += array[i];
}
/* sum now contains a[0] + a[1] + ... + a[9] */
printf("Sum of the array is %d\n", sum);
// Calculates the factorial (multiplication of all array values):
#include <stdio.h>
int main() {
int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int factorial = 1;
int i;
for (i = 0; i < 10; i++) {
factorial *= array[i];
}
  printf("10! is %d.\n", factorial);
}

// 008 While loops.

// While loops continue to execute the wile block so long as the condition in the loops is true:
// This loop will execute 10 times. 
int n = 0;
while (n < 10) {
    n++;
}
// Non-zero conditions cause a while loop to execute indefinitely:
while (1) {
   /* do something */
}
// The break directive halts a loop after ten loops, even though the while loop never finishes:
int n = 0;
while (1) {
    n++;
    if (n == 10) {
        break;
    }
}
// The continue directive causes the printf command to be skipped, only even numbers are printed:
int n = 0;
while (n < 10) {
    n++;
    /* check that n is odd */
    if (n % 2 == 1) {
        /* go back to the start of the while block */
        continue;
    }
    /* we reach this code only if n is even */
    printf("The number %d is even.\n", n);
}
// Uses a while loop with two if statements to print out only numbers greater than 10 and stops the loop if a number greater than 10 appears from the array:
#include <stdio.h>
int main() {
int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
int i = 0;
while (i < 10) {
if(array[i] < 5){
i++;
continue;
}
if(array[i] > 10){
break;
}
printf("%d\n", array[i]);
i++;
}
return 0;
}

// 009 Functions. 

/* C functions are simple, but because of how C works, the power of functions is a bit limited.
- Functions receive either a fixed or variable amount of arguments.
- Functions can only return one value, or return no value. */
// Functions are defined using the following syntax:
int foo(int bar) { // The function foo is defined and given one argument, bar.
    /* do something */
    return bar * 2; // The function receives an integer, multiplies it by two, and returns the result.
}
int main() { // Foo is given the value of 1.
    foo(1);
}
// Functions are to be defined before they are used in the code, declared first and then implemented by the use of a header file or in the beginning of the C file, or they can be implemented in the order they are used.
// Example of correct function useage:
int foo(int bar); // Declares the funcion.
int main() {
    /* calling foo from main */
    printf("The value of foo is %d", foo(1));
}
int foo(int bar) {
    return bar + 1;
}
// The keyword void can be used to create functions that do not return a value:
void moo() {
    /* do something and don't return a value */
}
int main() {
    moo();
}
// The function print_big recieves one integer argument and prints the line x is big, if the argument (x) is bigger than 10:
#include <stdio.h>
/* function declaration */
void print_big(int number);
int main() {
  int array[] = { 1, 11, 2, 22, 3, 33 };
  int i;
  for (i = 0; i < 6; i++) {
    print_big(array[i]);
  }
  return 0;
}
void print_big(int number) {
    if(number > 10){
        printf("%d is big\n",number);
    }
}

// 010 Static.

/* Static is a keyword, it can be used for variables and functions.
By default variables are local to the scope in which they are defined.
Variables can be declared as static to increase their scope to the whole file, enabling the variables to be accessed anywhere in the file. */
// Counting runners participating in a race, count is not updated as the record is removed from memory as the function completes:
#include<stdio.h>
int runner() {
    int count = 0;
    count++;
    return count;
}

int main()
{
    printf("%d ", runner());
    printf("%d ", runner());
    return 0;
}
// Example with static being used. 
#include<stdio.h>
int runner()
{
    static int count = 0;
    count++;
    return count;
}
int main()
{
    printf("%d ", runner());
    printf("%d ", runner());
    return 0;
}
// By default functions are global, if declred with static the scope of that function is reduced to the file containing it:
static void fun(void) {
   printf("I am a static function.");
}
// Global functions can be accessed outside of the file.
// Prints the numbers out with the previous number added to it:
#include <stdio.h>
int sum (int num) {
 static int total = 0; // Starting static value. 
 total += num; // Adds the running total to the num value passed in the int main printf commands. 
 return total;
}
int main() {
 printf("%d ",sum(55));
 printf("%d ",sum(45));
 printf("%d ",sum(50));
 return 0;
}

// 011 Pointers.

/* Pointers are also variables, they are used for several reasons:
Strings
Dynamic memory allocation
Sending function arguments by reference
Building complicated data structures
Pointing to functions
Building special data structures (i.e. Tree, Tries, etc...)
A pointer is a simple integer variable, it holds a memory address that points to a value, instead of holding the value itself.
The computer's memory is a sequential store of data, and a pointer points to a specific part of the memory. Our program can use pointers in such a way that the pointers point to a large amount of memory - depending on how much we decide to read from that point on. */
// 1. Allocates a local stack variable called name (Pointer to a single character)
// 2. Causes the string "john" to appear somewhere in the program memory.
// 3. Initializes the name argument to point to where the J*o*h*n characters reside. 
char * name = "John";
// If we try to access the name variable as an array, it will work, and will return the ordinal value of the character J, since the name variable actually points exactly to the beginning of the string.
// Since we know that the memory is sequential, we can assume that if we move ahead in the memory to the next character, we'll receive the next letter in the string, until we reach the end of the string, marked with a null terminator (the character with the ordinal value of 0, noted as \0).
/* Dereferencing is the act of referring to where the pointer points, instead of the memory address.
We are already using dereferencing in arrays, the brackets operator - [0] for example, accesses the first item of the array. And since arrays are actually pointers, accessing the first item in the array is the same as dereferencing a pointer. Dereferencing a pointer is done using the asterisk operator *. */
// An array that will point to a different variable in the stack:
/* define a local variable a */
int a = 1;
/* define a pointer variable, and point it to a using the & operator */
int * pointer_to_a = &a;
printf("The value a is %d\n", a);
printf("The value of a is also %d\n", *pointer_to_a);
// Changing the contents of the dereferenced variable:
#include <stdio.h>
int main() {
int a = 1;
int * pointer_to_a = &a;
/* let's change the variable a */
a += 1;
/* we just changed the variable again! */
*pointer_to_a += 1;
/* will print out 3 */
printf("The value of a is now %d\n", a);
  return 0;
}
// The pointer pointer_to_n is used to increase the value of n by one:
#include <stdio.h>
int main() {
  int n = 10;
  int * pointer_to_n = &n;
  /* your code goes here */
  *pointer_to_n += 1;
  /* testing code */
  if (pointer_to_n != &n) return 1;
  if (*pointer_to_n != 11) return 1;
  printf("Done!\n", n);
  return 0;
}

// 012 Structures.

/* Structures are the foundation for objects and classes in C, used for:
Serialization of data
Passing multiple arguments in and out of functions through a single argument
Data structures such as linked lists, binary trees, and more */
// The most basic example of structures are points, which are a single entity that contains two variables - x and y. Definition of a point:
struct point {
    int x;
    int y;
};
// Defining a new point, draw recieves a point and draws it on a screen. Without structs, using it would require two arguments - each for every coordinate:
/* draws a point at 10, 5 */
int x = 10;
int y = 5;
draw(x, y);
// Example using structs, the . operator is used to access the point's variables.
/* draws a point at 10, 5 */
struct point p;
p.x = 10;
p.y = 5;
draw(p);
// Typedefs allow definition of types with different names. To get rid of the long definition of a point structure the following syntax can be used to remove the struct keyword each time a new point is defined:
typedef struct {
    int x;
    int y;
} point;
// New point defines as:
point p;
// Structures can hold pointers, therefore strings or pointers to other structures as well. For example a vehicle structure can be defined as:
typedef struct {
    char * brand;
    int model;
} vehicle;
// Since brand is a char pointer, the vehicle type can contain a string (which, in this case, indicates the brand of the vehicle).
vehicle mycar;
mycar.brand = "Ford";
mycar.model = 2007;
// New data structure defined (person), contains a string (pointer to a char) called name and integer called age:
#include <stdio.h>
typedef struct {
    char * name;
    int age;
} person;
int main() {
    person john;
    john.name = "John";
    john.age = 27;
    printf("%s is %d years old.", john.name, john.age);
}

// 013 Function arguments by reference. 
/* Function arguments are passed by value, by which means they are copied in and out of functions.
If pointers are passed to values instead of the values themselves this will allow functions to have control over the variables and structures of the parent functions, not just a coppy of them, directly reading and writing the original object. */ 
// Function 'addone' will not be able to increment a number by one in this example:
void addone(int n) {
    // n is local variable which only exists within the function scope
    n++; // therefore incrementing it has no effect
}
int n;
printf("Before: %d\n", n);
addone(n);
printf("After: %d\n", n);
// But will in this example:
void addone(int *n) {
    // n is a pointer here which point to a memory-adress outside the function scope
    (*n)++; // this will effectively increment the value of n
}
int n;
printf("Before: %d\n", n);
addone(&n);
printf("After: %d\n", n);
// The difference is that the second version of addone receives a pointer to the variable n as an argument, and then it can manipulate it, because it knows where it is in the memory.
// When calling the addone function, we must pass a reference to the variable n, and not the variable itself - this is done so that the function knows the address of the variable, and won't just receive a copy of the variable itself.
// Deference a structure and access one of it's internal members, for the purpose of giving a function the ability to move a point forward in both x and y directions. 
// Incorrect:
void move(point * p) {
    (*p).x++;
    (*p).y++;
}
// Correct:
void move(point * p) {
    p->x++;
    p->y++;
}
// One is added to the age of a person:
#include <stdio.h>
typedef struct {
  char * name;
  int age;
} person;
void birthday(person * p);
void birthday(person * p) {
    (*p).age++;
    // p->age++; (Also valid)
}
int main() {
  person john;
  john.name = "John";
  john.age = 27;
  printf("%s is %d years old.\n", john.name, john.age);
  birthday(&john);
  printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);
  return 0;
}

// 014 Dynamic allocation.

// Dynamic allocation of memory allows building complex data structures such as linked lists.
// Allocating memory dynamically helps to store data without initially knowing the size of the data.
// To allocate a chunk of memory dynamically a pointer is needed to store the location of the newly allocated memory.
// Memory that was allocated can be accessed using that same pointer, this pointer can further be used to free the memory once use has finished.
// Dynamic allocation of a person structure, person definition:
typedef struct {
    char * name;
    int age;
} person;
// To allocate a new person in the myperson argument use the following syntax:
person * myperson = (person *) malloc(sizeof(person)); // Instructs to dynamically allocate just enough memory to hold a person struct and then return a pointer of type person to the newly allocated data.
// The memory allocation function malloc() reserves the specified memory space. In this case, this is the size of person in bytes.
// (person *) is written before the call to malloc() as malloc() returns a "void pointer," which is a pointer that doesn't have a type.
// Writing (person *) in front of it is called typecasting, and changes the type of the pointer returned from malloc() to be person.
// 'sizeof' is not an actual function, because the compiler interprets it and translates it to the actual memory size of the person struct.
// To access the person's members, we can use the -> notation:
myperson->name = "John";
myperson->age = 27;
// After we are done using the dynamically allocated struct, we can release it using free:
free(myperson); // The free does not delete the myperson variable itself, it simply releases the data that it points to. The myperson variable will still point to somewhere in the memory - but after calling myperson we are not allowed to access that area anymore. We must not use that pointer again until we allocate new data using it.
// Using malloc to dynamically allocate a point structure:
#include <stdio.h>
#include <stdlib.h>
typedef struct {
  int x;
  int y;
} point;1
int main() {
  point * mypoint = NULL;
  mypoint = (point *)malloc(sizeof(point));
  mypoint->x = 10;
  mypoint->y =5 ;
  printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);
  free(mypoint);
  return 0;
}

// 015 Arrays and Pointers. 

// In the example below the pointer variable pc stores the address of the character variable c:
char c = 'A';
char *pc = &c;
// c is a scalar variable that can store only a single value. 
// Below is an example of pointers to arrays:
#include <stdio.h>
#include <stdlib.h>
char vowels[] = {'A', 'E', 'I', 'O', 'U'};
char *pvowels = vowels;
int i;
int main() {
// Print the addresses
for (i = 0; i < 5; i++) { // &vowels[i] gives the memory locaion of the ith element of the array vowels.
    printf("&vowels[%d]: %p, pvowels + %d: %p, vowels + %d: %p\n", i, &vowels[i], i, pvowels + i, i, vowels + i);
}
// Print the values
for (i = 0; i < 5; i++) {
    printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
}
}
// As this is a character array each element occupies one byte so that the consecutive memory addresses are separated by a single byte. 
// A pointer, pvowels is created and assigned the address of the array vowels to it. 
// pvowels + i is a valid operation, although in general this may not always be meeningful (Pointer Arithmetics).
// The output shown above indicates that &vowels[i] and pvowels + i are equivalent.
// pvowels + i and vowels + i returns the same thing — address of the ith element of the array vowels. However *(pvowels + i) and *(vowels + i) both return the ith element of the array vowels. This is because the name of an array itself is a (constant) pointer to the first element of the array. In other words, the notations vowels, &vowels[0], and vowels + 0 all point to the same location. 
// Example of dynamically allocating memory for an array:
#include <stdio.h>
#include <stdlib.h>
int n = 5;
char *pvowels = (char *) malloc(n * sizeof(char));
int i;
int main() {
pvowels[0] = 'A';
pvowels[1] = 'E';
*(pvowels + 2) = 'I';
pvowels[3] = 'O';
*(pvowels + 4) = 'U';
for (i = 0; i < n; i++) {
    printf("%c ", pvowels[i]);
}
printf("\n");
free(pvowels);
}
// Above five contiguous bytes of memory are allocated to store five characters.
// Array notations were used to traverse the blocks of memory as if pvowels is an array. However pvowels is actually a pointer. Pointers and arrays, in general, are not the same. 
// While declaring an array, the number of elements that it would contain must be known beforehand. Therefore in some scenarios it might happen that the space allocated for an array is either less than the desired space or more. Using dynamic memory allocation, one can allocate just as much memory as required by a program. Additionally, unused memory can be freed as soon as it is no longer required by invoking the free() function.
// However with dynamic memory allocation one must responsibly call free() wherever relevant to prevent memory leaks. 
// Below is an example of dynamic memory allocationfor a two-dimensional array. This can be generalized to n-dimensions in a similar way. Unlike one-dimensional arrays, where we used a pointer, in this case we require a pointer to a pointer, as shown below:
#include <stdio.h>
#include <stdlib.h>
int main() {
int nrows = 2;
int ncols = 5;
int i, j;
// Allocate memory for nrows pointers
char **pvowels = (char **) malloc(nrows * sizeof(char *));
// For each row, allocate memory for ncols elements
pvowels[0] = (char *) malloc(ncols * sizeof(char));
pvowels[1] = (char *) malloc(ncols * sizeof(char));
pvowels[0][0] = 'A';
pvowels[0][1] = 'E';
pvowels[0][2] = 'I';
pvowels[0][3] = 'O';
pvowels[0][4] = 'U';
pvowels[1][0] = 'a';
pvowels[1][1] = 'e';
pvowels[1][2] = 'i';
pvowels[1][3] = 'o';
pvowels[1][4] = 'u';
for (i = 0; i < nrows; i++) {
    for(j = 0; j < ncols; j++) {
        printf("%c ", pvowels[i][j]);
    }
    printf("\n");
}
// Free individual rows
free(pvowels[0]);
free(pvowels[1]);
// Free the top-level pointer
free(pvowels);
return 0;
}
// First three rows of Pascal's triangle stored in a TDA using dynamic memory allocation:
#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, j;
    int **pnumbers; // defining the 2D pointer variable. 
    pnumbers = (int **) malloc(3  *sizeof(int *)); // Memory is allocated for holding three rows.
    // Memory is allocated for storing the individual elements in a row three rows means 1+2+3=6.
    pnumbers[0] = (int *) malloc(1 * sizeof(int));
    pnumbers[1] = (int *) malloc(2 * sizeof(int));
    pnumbers[2] = (int *) malloc(3 * sizeof(int));
    // Values are assigned to the array.
    pnumbers[0][0] = 1;
    pnumbers[1][0] = 1;
    pnumbers[1][1] = 1;
    pnumbers[2][0] = 1;
    pnumbers[2][1] = 2;
    pnumbers[2][2] = 1;
    for (i = 0; i < 3; i++) { // i starts at a value of 0, its max is set to be 3 and it is set to increment. 
        for (j = 0; j <= i; j++) { // j starts with 0, if i is greater than or equal to j then j increments.
            printf("%d", pnumbers[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++) { // Allocated memory for each row is freed.
        free(pnumbers[i]);
    }
    free(pnumbers);
  return 0;
}
/* Output:
1
11
121
*/

// 016 Recursion.

/* Recursion occurs when a function contains within it a call to itself. Recursion can result in very neat, elegant code that is intuitive to follow. It can also result in a very large amount of memory being used if the recursion gets too deep.
Common examples of where recursion is used:
Walking recursive data structures such as linked lists, binary trees, etc.
Exploring possible scenarios in games such as chess.
Recursion always consists of two main parts:
A terminating case that indicates when the recursion will finish.
A call to itself that must make progress towards the terminating case. */
// This function performs multiplicaion by recursively adding:
#include <stdio.h>
unsigned int multiply(unsigned int x, unsigned int y)
{
    if (x == 1) // If x is 1 then the loop will stop.
    {
        /* Terminating case */
        return y;
    }
    else if (x > 1) // If x is greater than 1 then the loop procceds below where 1 is minused from x.
    {
        /* Recursive step */
        return y + multiply(x-1, y); // Y is added to the muliply function's total and x is minused 1.
    }
    /* Catch scenario when x is zero */
    return 0;
}
int main() { // Givesthe values that are being multiplied and prints the result.
    printf("4 times 10 is %d", multiply(4, 10)); 
    return 0;
}


// Computing the factorial by recursive multiplicaion:
#include <stdio.h>
/* function declaration */
int factorial(int number);
int main() {
    printf("0! = %i\n", factorial(0));
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));
}
int factorial(int number) {
        if (number > 1) {
            return number * factorial(number-1);
        }
        else {
	           return 1;
        }
}

// 017 Linked lists. 

/* Simple example of a dynamic data structure that uses pointers for its implementation.
Pointers are essesntil to understanding how linked lists work. 
Essentially, linked lists function as an array that can grow and shrink as needed, from any point in the array.
Linked lists have a few advantages over arrays:
    Items can be added or removed from the middle of the list
    There is no need to define an initial size
However, linked lists also have a few disadvantages:
    There is no "random" access - it is impossible to reach the nth item in the array without first iterating over all items up until that item. This means we have to start from the beginning of the list and count how many times we advance in the list until we get to the desired item.
    Dynamic memory allocation and pointers are required, which complicates the code and increases the risk of memory leaks and segment faults.
    Linked lists have a much larger overhead over arrays, since linked list items are dynamically allocated (which is less efficient in memory usage) and each item in the list also must store an additional pointer.
A linked list is a set of dynamically allocated nodes, arranged in such a way that each node contains one value and one pointer. The pointer always points to the next member of the list. If the pointer is NULL, then it is the last node in the list.
A linked list is held using a local pointer variable which points to the first item of the list. If that pointer is also NULL, then the list is considered to be empty. */
// Defining a linked list node:
typedef struct node {
    int val;
    struct node * next;
} node_t;
// Struct is defined in a recursive manner, this node is named node_t.
// The nodes can now be used. Here is a local variable which points to the first item of the list (called head):
node_t * head = NULL;
head = (node_t *) malloc(sizeof(node_t));
if (head == NULL) {
    return 1;
}
head->val = 1;
head->next = NULL;
// The first variable in the list has now been created. The value must now be set to empty in order to finish populating the list. Always check if malloc returned a NULL value or not.
// To add a variable to the end of the list continue advancing to the next pointer:
node_t * head = NULL;
head = (node_t *) malloc(sizeof(node_t));
head->val = 1;
head->next = (node_t *) malloc(sizeof(node_t));
head->next->val = 2;
head->next->next = NULL;
// 'current' pointer is needed to keep track of the node being printed. Once having printed the value of the node the current pointer is set to the next node and then print again, until the end of the list has been reached (the next node is NULL).
void print_list(node_t * head) {
    node_t * current = head;
    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}
// The pointer is advanced to the next item in the list until the last item is reached:
void push(node_t * head, int val) {
    node_t * current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    /* now we can add a new variable */
    current->next = (node_t *) malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}
// The best use cases for linked lists are stacks and queues.
/* Adding an item to the beginning of the list (pushing to the list).
To add to the beginning of the list, we will need to do the following:
    1.Create a new item and set its value.
    2. Link the new item to point to the head of the list.
    3. Set the head of the list to be our new item.
This will effectively create a new head to the list with a new value, and keep the rest of the list linked to it. Since we use a function to do this operation, we want to be able to modify the head variable. To do this, we must pass a pointer to the pointer variable (a double pointer) so we will be able to modify the pointer itself */
void push(node_t ** head, int val) {
    node_t * new_node;
    new_node = (node_t *) malloc(sizeof(node_t));

    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}
/* Removing the first item (popping from the list)

To pop a variable, we will need to reverse this action:

    Take the next item that the head points to and save it
    Free the head item
    Set the head to be the next item that we've stored on the side
*/
// Here is the code:
int pop(node_t ** head) {
    int retval = -1;
    node_t * next_node = NULL;
    if (*head == NULL) {
        return -1;
    }
    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;
    return retval;
}
/* Removing the last item of the list
Removing the last item from a list is very similar to adding it to the end of the list, but with one big exception - since we have to change one item before the last item, we actually have to look two items ahead and see if the next item is the last one in the list. */
// Here is the code:
int remove_last(node_t * head) {
    int retval = 0;
    /* if there is only one item in the list, remove it */
    if (head->next == NULL) {
        retval = head->val;
        free(head);
        return retval;
    }
    /* get to the second to last node in the list */
    node_t * current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    /* now current points to the second to last item of the list, so let's remove current->next */
    retval = current->next->val;
    free(current->next);
    current->next = NULL;
    return retval;
}
/* Removing a specific item

To remove a specific item from the list, either by its index from the beginning of the list or by its value, we will need to go over all the items, continuously looking ahead to find out if we've reached the node before the item we wish to remove. This is because we need to change the location to where the previous node points to as well.

Here is the algorithm:

    Iterate to the node before the node we wish to delete
    Save the node we wish to delete in a temporary pointer
    Set the previous node's next pointer to point to the node after the node we wish to delete
    Delete the node using the temporary pointer */
// Here is the code:    
int remove_by_index(node_t ** head, int n) {
    int i = 0;
    int retval = -1;
    node_t * current = *head;
    node_t * temp_node = NULL;
    if (n == 0) {
        return pop(head);
    }
    for (i = 0; i < n-1; i++) {
        if (current->next == NULL) {
            return -1;
        }
        current = current->next;
    }
    if (current->next == NULL) {
        return -1;
    }
    temp_node = current->next;
    retval = temp_node->val;
    current->next = temp_node->next;
    free(temp_node);
    return retval;
}
// The "remove_by_value" function recieves a double pointer to the head and removes the first item in the list which has the value "val":
#include <stdio.h>
#include <stdlib.h>
typedef struct node { // The linked list node is defined.
    int val; // The 'node' has one member, an integer named 'val'.
    struct node * next; // 'next' is a pointer, pointing to the first list entry of test_list.
} node_t; // The node is named node_t.
void print_list(node_t * head) { // Prints contents of linked list starting from given node. 
    node_t * current = head; // Sets the current pointer value to that of the second to last entry in the list.
    while (current != NULL) { // The 'current' pointer is set to move to the next node until NULL is reached.
        printf("%d\n", current->val); // Prints the val, given by current.
        current = current->next; // Moves current onto the next item in the list. 
    }
}
// Removes the first item from a list.
int pop(node_t ** head) {  // Uses pointer to pointer to add the next item pointed to by head to node_t.
    int retval = -1;
    node_t * next_node = NULL; // node_t and next_node now both point to null.
    if (*head == NULL) {
        return -1;
    }
    next_node = (*head)->next; // Sets the next_node value to that of head having taken the value of next.
    retval = (*head)->val;
    free(*head); // Releases the head value from memory.
    *head = next_node;
    return retval;
}
int remove_by_value(node_t ** head, int val) {
    node_t *previous, *current;
    if (*head == NULL) {
        return -1;
    }
    if ((*head)->val == val) {
        return pop(head);
    }
    previous = *head;
    current = (*head)->next;
    while (current) {
        if (current->val == val) {
            previous->next = current->next;
            free(current);
            return val;
        }
        previous = current;
        current  = current->next;
    }
    return -1;
}
void delete_list(node_t *head) {
    node_t  *current = head, 
            *next = head;
    while (current) {
        next = current->next;
        free(current);
        current = next;
    }
}
int main(void) {
    node_t * test_list = (node_t *) malloc(sizeof(node_t));
    test_list->val = 1;
    test_list->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->val = 2;
    test_list->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->val = 3;
    test_list->next->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->next->val = 4;
    test_list->next->next->next->next = NULL;
    remove_by_value(&test_list, 3);
    print_list(test_list);
    delete_list(test_list);
    return EXIT_SUCCESS;
}

// 018 Binary trees.

// A Binary Tree is a type of data structure in which each node has at most two children (left child and right child). 
// Binary trees are used to implement binary search trees and binary heaps, and are used for efficient searching and sorting. 
// A binary tree is a special case of a K-ary tree, where k is 2. 
// Common operations for binary trees include insertion, deletion, and traversal. 
// The difficulty of performing these operations varies if the tree is balanced and also whether the nodes are leaf nodes or branch nodes. 
// For balanced trees the depth of the left and right subtrees of every node differ by 1 or less. This allows for a predictable depth also known as height. This is the measure of a node from root to leaf, where root is 0 and sebsequent nodes are (1,2..n). This can be expressed by the integer part of log2(n) where n is the number of nodes in the tree.
// The operations performed on trees requires searching in one of two main ways: Depth First Search and Breadth-first search.
// Depth-first search (DFS) is an algorithm for traversing or searching tree or graph data structures. 
// One starts at the root and explores as far as possible along each branch before backtracking. 
// There are three types of depth first search traversal: pre-order visit, left, right, in-order left, visit, right, post-order left, right, visit. 
// Breadth-first search (BFS) is an algorithm for traversing or searching tree or graph structures. In level-order, where we visit every node on a level before going to a lower level.
// Below is an implementation of a binary tree that has insertion and printing capabilities. This tree is ordered but not balanced. This example maintains its ordering at insertion time.
Change the print routine to depth-first search pre-order.(root>left>right)
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
  int val;
  struct node * left;
  struct node * right;
} node_t;
void insert(node_t * tree,int val);
void print_tree(node_t * current);
void printDFS(node_t * current);
int main()
{
  node_t * test_list = (node_t *) malloc(sizeof(node_t));
  /* set values explicitly, alternative would be calloc() */
  test_list->val = 0;
  test_list->left = NULL;
  test_list->right = NULL;

  insert(test_list,5);
  insert(test_list,8);
  insert(test_list,4);
  insert(test_list,3);

  printDFS(test_list);
  printf("\n");
}
void insert(node_t * tree, int val)
{
  if (tree->val == 0)
  {
    /* insert on current (empty) position */
    tree->val = val;
  }
  else
  {
    if (val < tree->val)
    {
      /* insert left */
      if (tree->left != NULL)
      {
        insert(tree->left, val);
      }
      else
      {
        tree->left = (node_t *) malloc(sizeof(node_t));
        /* set values explicitly, alternative would be calloc() */
        tree->left->val = val;
        tree->left->left = NULL;
        tree->left->right = NULL;
      }
    }
    else
    {
      if (val >= tree->val)
      {
        /* insert right */
        if (tree->right != NULL)
        {
          insert(tree->right,val);
        }
        else
        {
          tree->right = (node_t *) malloc(sizeof(node_t));
          /* set values explicitly, alternative would be calloc() */
          tree->right->val = val;
          tree->right->left = NULL;
          tree->right->right = NULL;
        }
      }
    }
  }
}
/* depth-first search */
void printDFS(node_t * current)
{
  /* change the code here */
  if (current == NULL)         return;   /* security measure */
  if (current->left != NULL)   printDFS(current->left);
  if (current != NULL)         printf("%d ", current->val);
  if (current->right != NULL)  printDFS(current->right);
}

// 019 Unions. 




























DE 
 M









































































