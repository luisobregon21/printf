# **_printf**

 ** version 1.0.0 **

## Function prototype: int **_printf**(const char *format, ...);


### Purpose of the project:


The purpose of this project is to challenge the capacity and problem solving skills that a Holberton School student should have at this stage, and to show them how to work in a work setting environment with a partner to not just get used to working alone.

### Description:
The **_printf** function is a small recreation of the printf function provided by the standard input/output library (<stdiio.h>).

**_printf** writes the output under a format string that is specified later on in the function. **_printf** is composed of 6 files in total, including the main.

---
note: The following are small descriptions of how our printf function works.
---

**holberton.h** - holds all the prototypes to the functions being called. Every file has a #include "holberton.h" inside of the.

**main.c** - calls printf.


**_printf.c** - checks when the letter being passed is a modifier and the char after it is not (null) to call the function converter.


**converter.c** - converts the specifier to the respective function being called.


**printing.c** - holds the functions that are going to be called in the converter.


Printing.c - will give the right function to use in the converter.


Converter then passes the conversion to **_printf**.


Then **_printf** will pass what it received to main.c.


The execution of all compiled files should at least print out a string, character and integer.


### other files
To make life easier, this project contains 2 command files when you want to compile and run the code.

**betty check** - holds the commands to do a **betty check**, compile with all the **flags** provided by holbertonschool and executes the compiled file.

**compile_check** - holds the commands that compiles with one fliag, that doesn't complain about the format, and runs the compiled file.

**_putchar** - prints a character and returns number of characters printed.

**man_3_printf** - the man page of _printf. It has all the information about the function of _printf.

### Return value:
If **_printf** succeeds, it will return the number of characters that were printed, this does not include the ‘\0’ (null byte). If the function fails, it will return -1.

### String Format passed as a parameter:
**_printf** accepts a constant character string, which is format. The string is based on regular characters, which can’t be changed. But it also has conversion specifiers, like ‘s’ and ‘c’, which are introduced by a modifier : ‘%’. The conversion ends with a conversion specifier.

### Conversion specifiers:
The specifier, introduced by the character %, is the character that follows the modifier. Down below you will see the conversion specifiers that our **_printf** function accepts and their description.

* **s**

	The const char * is a string. Each index of the string will be printed out starting from the first character to the last element. *note: this will not include the terminating (\0).

* **c**

	The int argument is converted to a char.

* **i, d**

	The int arguments are printed.

* **%**

	If there is a % after the modifier, nothing is going to be converted but instead, only one of the % will be printed.
---
### Example
Test out to print the age, name and Initial of the name in the format. What is passed “My name is Rafael, I am 26 years old, my name starts with the letter R”. Name is the string, age is the integer and H is the character we are going to print down below:

	_printf(“My name is %s, I am %d years old, my name starts with the letter %c.”, "Rafael", 26, 'R');

### Output in terminal:
~$ `My name is Rafael, I am 26 years old, my name starts with the letter R`

---

## contributors

##### Luis Obregon and Rafael Narvaez.
##### @cohort 15, Holberton School Puerto Rico.

---

## License & copyright
**_printf** function was a 5 day project delegated to Holberton Students around the world.
This **_printf** being read was created by cohort 15 students.

**© [2021] [Luis Obregon Mogollon & Rafael E. Narvaez Cabeza, Holberton School Puerto Rico]**
