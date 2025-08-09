# Pointers-in-Cpp
**Aim:** To study and implement pointer concepts in C++.                  
**Tools:** GNU g++ compiler (for local execution) or  Any code editor or an Online C++ Compiler.              

## Theory

A **pointer** in C++ is a variable that stores the memory address of another variable. Pointers allow direct memory access and manipulation, making them powerful for efficient data handling. They are declared using the `*` operator and accessed with dereferencing.  
Pointer arithmetic enables moving between memory locations, while pointer arrays and string manipulation allow flexible handling of data structures.

### Key Features:
- Can store addresses of variables.
- Dereferencing allows accessing/modifying values at a memory location.
- Supports arithmetic like increment/decrement, affecting the pointed address based on data type size.
- Useful for arrays, strings, dynamic memory, and function arguments.



## 1. Pointer Increment Demonstration
**Logic:**  
This program demonstrates pointer arithmetic in C++. When a pointer is incremented, it moves forward by the size of the data type it points to rather than just one byte. For example, an int pointer typically advances by 4 bytes, a double pointer by 8 bytes, and so on. This behavior allows pointers to navigate through arrays or memory blocks of their specific type efficiently.

**Algorithm:**
1. Start.  
2. Declare variables of it`, float, double, and bool.  
3. Create pointers pointing to each variable.  
4. Display addresses before increment.  
5. Increment each pointer.  
6. Display addresses after increment.  
7. Stop.  



## 2. Sum and Difference Using Pointers
**Logic:**  
The program stores addresses of array elements in a pointer array. It calculates the sum of all elements by dereferencing the pointers and finds the difference between two elements using their values via pointers. This demonstrates how pointers can be used to process array data efficiently without directly accessing the array elements.

**Algorithm:**
1. Start.  
2. Declare an integer array of size 5.  
3. Create an array of integer pointers.  
4. Assign addresses of array elements to pointer array.  
5. Initialize sum = 0.  
6. Loop to add dereferenced values to sum.  
7. Calculate difference between element 4 and element 2 using pointers.  
8. Print results.  
9. Stop.  


## 3. Array Traversal and Reverse Using Pointers
**Logic:**  
This program accesses array elements through a pointer array to print elements in normal and reverse order. Pointer dereferencing is used for both traversals. It highlights how pointers can simplify accessing elements in different orders without altering the original array.

**Algorithm:**
1. Start.  
2. Declare an integer array of 5 elements.  
3. Create an array of integer pointers and assign each element’s address.  
4. Loop forward to print elements.  
5. Loop backward to print elements in reverse.  
6. Stop.  

## 4. String Operations Using Pointers
**Logic:**  
The program reads a string, copies it using pointers, reverses it, and checks if it is a palindrome. Pointer arithmetic is used to traverse and manipulate characters. It also demonstrates how pointers can handle string operations without relying solely on built-in string functions.
**Algorithm:**
1. Start.  
2. Take string input from user.  
3. Create a char array str2 and a pointer to first character of str1.  
4. Copy characters from str1 to str2 using pointer arithmetic.  
5. Reverse string into str2 using pointer traversal.  
6. Compare original and reversed strings.  
7. Print whether palindrome or not.  
8. Stop.  


## Conclusion
We learned how pointers can be used to reference data addresses, allow arithmetic calculations on addresses, provide access to arrays and strings, allow operations like sum, difference, traverse, reverse, and check for palindrome. Knowing how to use pointers assumes a large part of how memory is handled and how therefore a C++ program will run and perform.
