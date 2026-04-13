# Introduction

In this homework assignment, you will practice working with class templates and functors (also known as function objects) in C++. 

# Tasks
The file `myMath.h` contains the definitions of three C++ class templates that you need to complete. 
The member functions are relatively straightforward, so you will implement them directly within the class definitions. 
Below is a description of each class and its required functionality:

1. class template `Absolute`: A functor class that computes the absolute value of an input.
* `public` member function:
  * `operator()`: 
    * Has a T-typed parameter `a`.
    * Returns the absolute value of `a`.

2. class template `Power`: A functor class that computes the powers of an input.
* `public` member function:
  * `operator()`: 
    * Has a T-typed parameter `a` and an int-typed parameter `b`.
    * Returns the result of raising `a` to the power of `b`.

3. class template `MathUtility`: A class that uses an array of elements of type T and provides operations using the `Absolute` and `Power` functors.
* `private` member variables:
  * T-typed pointer `data`: Points to an array of elements of type T.
  * int-typed `size`: The number of elements in the array pointed to by the pointer.
* `public` member functions:
  * Constructor with parameters `array` and `sz`: Initializes the member variables `data` and `size` using the parameters.
  * Member function `absoluteAll`:
    * No parameters.
    * void return data type.
    * Applies the `Absolute<T>` functor to each element in the array and updates the values with their absolute values.
  * member function `powerAll`:
    * Has an int-typed parameter `exp`.
    * void return data type.
    * Applies the `Power<T>` functor to each element, raising it to the power of `exp`.
  * member function `display`:
    * Already implemented.
    * Loops through the array and prints each element.
   
Hint: In `absoluteAll` and `powerAll`, you may need to create objects from `Absolute<T>` and `Power<T>`, respectively, and call them as regular functions.

A specific data type is passed from `main` (int or double) to `MathUtility`, and then further to the `Absolute` and `Power` functors.


# Compile and Test

1. Type the following commands on Terminal.

```
g++ -o main *.cpp
```
```
./main
```

2. This homework assignment does not require any input. Here are the expected outputs:

```
== Integer object == 
Original: 1 -2 3 4 -5 
After absolute: 1 2 3 4 5 
After power: 1 8 27 64 125 

== Double object == 
Original: 1.414 -1.732 2.236 
After absolute: 1.414 1.732 2.236 
After power: 1.9994 2.99982 4.9997 
```


# Submit

Please upload your `myMath.h` file to `myCourses > Assignments > HW10`. Do not submit *.docx, *.pdf, *.txt, or *.zip file.
