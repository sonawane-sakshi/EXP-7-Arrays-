# Arrays and Strings
Experiment 7


## AIM OF THE EXPERIMENT
To study use of and to implement arrays and strings in C++.

## Software required
VS code

## Theory

### Arrays in C++
An array is a data structure of elements with same data type stored at contiguous memory locations.Arrays are used to store multiple values in a single variable, making it easier to manage large sets of data.

**Example:**
An array of 4 integers
```cpp
int x[10]; 
```
<br>

### Strings in C++
Strings are sequences of characters used to store text. In C++, the `string` class is defined in the ```<string>``` header file. There are two types of strings in C++ : <br>
1. C style Strings
2. std : : string


**Example:**
An array of strings
```cpp
string str1 = "Hello"; 
```
## Algorithms
### Checking Palindrome


1. **Input the String:**
   - Ask the user to enter a string.

2. **Initialize Variables:**
   - Store the input string in a variable, `a`.
   - Initialize an empty string, `revstr`.

3. **Determine the Length:**
   - Calculate the length of `a` and store it in `length`.

4. **Reverse the String:**
   - Loop from the end of the string to the beginning:
   - Append each character to `revstr`.

5. **Compare the Strings:**
   - Compare the original string `a` with the reversed `revstr`.
   - If `a` == `revstr`, the string is a palindrome.
   - Else not a palindrome.

6. **Output the Result:**
   - Print whether the string is a palindrome or not based on the comparison.

