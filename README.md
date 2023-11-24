# \_printf - formatted output conversion


## Description


The _printf() function is a function that prints to the standard output according
to a format string which handles conversion specifiers.
The _printf() is meant to be a simplified interpretation of the C printf function.

---
## Compilation command

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

---
## Requirements
 
- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.4 LTS
- All files must end with a new line
- All files should follow the Betty style
- Usage of global files is prohibited
- All files should contain a maximum of 5 functions
- Functions prototypes must be included in a main.h header file
- The header files must be include guarded

---
## Specifiers

- %c prints a character 
- %  prints a percent
- %s prints a string
- %d, %i
  prints an integer

---
## Usage examples

Input:

 
```c

int main(void)
{
int len;
int len2;
unsigned int ui;
void *addr;
char *str = "TOTO";
len = _printf("Let's try to printf a simple sentence %s.\n", str);
len2 = printf("Let's try to printf a simple sentence %s.\n", str);
ui = (unsigned int)INT_MAX + 1024;
addr = (void *)0x7ffe637541f0;
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
len = _printf("Negative:[%d]\n", -7625334344);
len2 = printf("Negative:[%d]\n", -7625334334);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("Unsigned:[%u]\n", ui);
printf("Unsigned:[%u]\n", ui);
_printf("Unsigned octal:[%o]\n", ui);
printf("Unsigned octal:[%o]\n", ui);
_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "What a project !");
printf("String:[%s]\n", "What a project !");
_printf("Address:[%p]\n", addr);
printf("Address:[%p]\n", addr);
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
_printf("Unknown:[%r]\n");
printf("Unknown:[%r]\n");
_printf("Name: %s, Age: %d\n", "John", 25);
_printf("_printf: %s\n", "function that prints to standard output");
_printf("Print a character: %c\n", 'P');
_printf("My bank account: %d\n", -20000);

return (0); 
}
```

---

Output:


```bash
root@50c158e79d1b:~/holbertonschool-printf# ./a.out
Let's try to printf a simple sentence TOTO.
Let's try to printf a simple sentence TOTO.
Length:[44, 44]
Length:[44, 44]
Negative:[964600248]
Negative:[964600258]
Length:[21, 21]
Length:[21, 21]
Unsigned:[%u]
Unsigned:[2147484671]
Unsigned octal:[%o]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[%x, %X]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[What a project !]
String:[What a project !]
Address:[%p]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
Name: John, Age: 25
_printf: function that prints to standard output
Print a character: P
My bank account: -20000
```

--- 
## Testing

We have modified the main.c file to make different tests among which, ones regarding the print_i function as the output didn't render the good number for the Length of the first string. 

Using valgrind for memory leak detection:  

```bash
valgrind --leak-check=full ./a.out
```

---
## Man page
  
Refer to the man page for detailed information on how to use the \_printf function  

```bash
man ./man_3_printf
```

---
## Flowchart
