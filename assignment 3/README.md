# Pointer Concepts in C Programming

This README provides short, clear notes explaining fundamental
pointer-related concepts in C programming. The aim is to help students
understand how pointers work, how they differ from normal variables,
where they are used, and the risks involved. Practical examples are
included throughout.

------------------------------------------------------------------------

## 1. Difference Between a Normal Variable and a Pointer

### Normal Variable

A normal variable stores an actual value directly in memory.

``` c
int x = 10;
```

-   Stores the value `10`
-   Accessed directly using the variable name
-   Modified by assigning a new value

``` c
x = 20;
```

------------------------------------------------------------------------

### Pointer

A pointer stores the memory address of another variable.

``` c
int x = 10;
int *p = &x;
```

-   Stores the address of `x`
-   Accesses the value using dereferencing (`*`)
-   Can modify the original variable indirectly

``` c
*p = 30;
```

------------------------------------------------------------------------

## 2. Variable Declaration vs Pointer Declaration

``` c
int x = 10;
int *p = &x;
```

Variables store values while pointers store addresses.

------------------------------------------------------------------------

## 3. Dereferencing a Pointer

``` c
int x = 10;
int *p = &x;
*p = 25;
```

Dereferencing allows access and modification of the value at a memory
address.

------------------------------------------------------------------------

## 4. Scenarios Where Pointers Are Preferred

-   Modifying variables inside functions
-   Working with arrays and strings
-   Dynamic memory allocation

------------------------------------------------------------------------

## 5. Limitations and Risks of Pointers

-   Dangling pointers
-   Null pointer dereferencing
-   Memory leaks
-   Debugging difficulty

------------------------------------------------------------------------

## 6. Call by Value vs Call by Reference

Call by value passes copies of data.\
Call by reference passes addresses using pointers.

------------------------------------------------------------------------

## 7. Practical Scenarios

-   Call by value for safety and small data
-   Call by reference for efficiency and data modification

------------------------------------------------------------------------

## Conclusion

Pointers are powerful but must be used carefully to avoid serious
memory-related errors.
