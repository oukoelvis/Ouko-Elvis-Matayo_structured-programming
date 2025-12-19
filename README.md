# Ouko-Elvis-Matayo_structured-programming
# Pointer Concepts in C Programming

int x = 10;
Memory is allocated to store the value 10

The variable name directly refers to the memory location

The value is accessed and modified directly using the variable name
x = 20;
Normal variables are easy to use and are suitable for simple data storage.

Pointer
A pointer is a variable that stores the memory address of another variable.

int x = 10;
int *p = &x;

p stores the address of x, not its value

The value at that address is accessed using the dereference operator *

Changing *p changes the value of x

*p = 30;

Pointers enable indirect access to memory and allow more flexible and efficient programs.

Key Differences
Feature	        Normal              Variable	Pointer
Stores 	       Actual value         	Memory address
Access	        Direct	            Indirect (dereferencing)
Modification	   Direct             	Indirect
Complexity	    Simple	             More complex

2. Variable Declaration vs Pointer Declaration
Variable Declaration
Declares a variable that holds a value.


int x = 10;
Allocates memory for storing an integer value

The variable directly represents the data

Pointer Declaration
Declares a variable that holds a memory address.

int *p = &x;
Allocates memory to store an address

Must be initialized before use to avoid errors

3. Dereferencing a Pointer
Dereferencing is the process of accessing or modifying the value stored at the memory address held by a pointer.

int x = 10;
int *p = &x;

p contains the address of x

*p accesses the value stored at that address

*p = 25;

After dereferencing, the value of x becomes 25.

Operators Used
& → Address-of operator

* → Dereference operator

4. Scenarios Where Pointers Are Preferred Over Normal Variables
a) Modifying Variables Inside Functions
C uses call by value by default. Pointers allow functions to modify original variables.

void update(int *x) {
    *x = 50;
}
b) Arrays and Strings
Arrays are passed to functions as pointers to avoid copying large amounts of data.

void printArray(int *arr, int size) {
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
This improves memory efficiency and performance.

c) Dynamic Memory Allocation
Pointers are required when memory must be allocated at runtime.

int *p = (int *)malloc(sizeof(int));
*p = 20;
Dynamic allocation allows flexible memory usage.

5. Limitations and Risks of Using Pointers
Dangling Pointers
Occurs when a pointer refers to memory that has already been freed.

free(p);
*p = 10;   // unsafe

Null Pointer Dereferencing

Accessing a pointer that has not been initialized.

int *p = NULL;
*p = 5;   // runtime error
Memory Leaks
Occurs when allocated memory is not released using free().

Debugging Difficulty
Pointer-related errors can cause segmentation faults and unpredictable program behavior.

6. Call by Value vs Call by Reference
Call by Value
A copy of the variable is passed to the function.

void change(int x) {
    x = 20;
}
Original variable is unchanged

Safer but less efficient for large data

Call by Reference
The address of the variable is passed using pointers.


void change(int *x) {
    *x = 20;
}
Original variable is modified

More efficient

Comparison
Feature	Call by Value	Call by Reference
Data Passed	Copy	Address
Modification	No	Yes
Memory Usage	Higher	Lower
Efficiency	Lower	Higher

7. Practical Scenarios
a) When Call by Value Is Preferred
When the original data must not be modified

When working with small variables

When avoiding side effects
int square(int x) {
    return x * x;
}
b) When Call by Reference Is Preferred
When modifying original data

When passing large data structures

When improving performance
