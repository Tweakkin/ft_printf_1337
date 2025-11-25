# 🖨️ ft_printf - Because ft_putstr isn't enough

![Language](https://img.shields.io/badge/Language-C-blue.svg)
![School](https://img.shields.io/badge/School-42-black.svg)
![Makefile](https://img.shields.io/badge/Makefile-Yes-success.svg)
![Score](https://img.shields.io/badge/Score-100%2F100-brightgreen.svg)

<p align="center">
  <img src="https://github.com/ayogun/42-project-badges/raw/main/badges/ft_printfm.png" alt="ft_printf Badge"/>
</p>

## 🗣️ About The Project

**ft_printf** is a project at **42** that requires us to recode the famous C library function `printf`. The primary goal is to learn about **variadic functions** (functions that take a variable number of arguments) and to master the intricacies of data type formatting.

The versatility of the `printf` function in C represents a great exercise in programming. This project is of moderate complexity and serves as an excellent introduction to variable arguments in C (`<stdarg.h>`).

## 📋 Features & Conversions

My implementation replicates the behavior of the original `printf` from the C standard library (`libc`). It handles the following format specifiers:

| Symbol | Description | Argument Type |
| :---: | :--- | :--- |
| **%c** | Prints a single character. | `int` |
| **%s** | Prints a string (as defined by the common C convention). | `char *` |
| **%p** | The `void *` pointer argument has to be printed in hexadecimal format. | `void *` |
| **%d** | Prints a decimal (base 10) number. | `int` |
| **%i** | Prints an integer in base 10. | `int` |
| **%u** | Prints an unsigned decimal (base 10) number. | `unsigned int` |
| **%x** | Prints a number in hexadecimal (base 16) lowercase format. | `unsigned int` |
| **%X** | Prints a number in hexadecimal (base 16) uppercase format. | `unsigned int` |
| **%%** | Prints a percent sign. | `none` |

### 🌟 Bonus Features (Flags)
> *Note: Delete this section if you did not implement bonuses.*

My `ft_printf` also manages the following flags:

* `-` : Left-justify within the given field width; Right justification is the default.
* `0` : Left-pads the number with zeroes (0) instead of spaces when padding is specified.
* `.` : Precision specifier.
* `#` : Used with `x` or `X` specifiers the value is preceeded with `0`, `0x` or `0X` respectively for values different than zero.
* ` ` (space) : If no sign is going to be written, a blank space is inserted before the value.
* `+` : Forces to preceed the result with a plus or minus sign (+ or -) even for positive numbers.

---

## 🛠️ Technical Implementation

### Variadic Functions
The core of `ft_printf` relies on `<stdarg.h>`. Here is a breakdown of the macros used:

1.  **`va_list`**: A type to hold the information needed by the other macros to retrieve the additional arguments.
2.  **`va_start`**: Initializes the `va_list` variable to access the variable arguments.
3.  **`va_arg`**: Retrieves the next argument in the parameter list with the specified type.
4.  **`va_end`**: Cleans up the memory associated with the `va_list`.

### Logic Flow
1.  **Parsing**: The main loop iterates through the format string.
2.  **Detection**: If a `%` is found, the subsequent character is analyzed to determine the type of conversion required.
3.  **Processing**: The appropriate function is called to handle the specific data type (char, string, int, hex, etc.).
4.  **Printing & Counting**: The function writes to the standard output (file descriptor 1) and increments a counter for the total characters printed.
5.  **Return**: Returns the total count of characters printed (or -1 on error).

---

## 🚀 Getting Started

To use this library in your own projects, follow these steps:

### 1. Clone the Repository
```bash
git clone [https://github.com/](https://github.com/)[YOUR_USERNAME]/ft_printf.git
cd ft_printf
