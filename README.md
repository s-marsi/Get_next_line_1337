# get_next_line
The get_next_line() function reads one line at a time from a given file descriptor, allowing repeated calls to read a text file or standard input sequentially.

## Subject :

- <a href="https://cdn.intra.42.fr/pdf/pdf/115778/en.subject.pdf" target="_blank" style="color: red; font-size: 15.5px; font-weight: 300; margin-left: 10px;"> subject.pdf </a>


## Getting Started
### Prerequisites
- To use this library, you need a C compiler (e.g., GCC) and the make utility installed on your system.

### Installation
1. Clone the repository:
    ```bash
    https://github.com/s-marsi/Get_next_line_1337.git get_next_line
    cd get_next_line
    ```
2. Compile the library:
    ```bash
    make all        # This will generate the getnext.a library file (MONDATORY PART AND BONUS PART).
    # OR
    make        # This will generate the getnext.a library file (ONLY MONDATORY PART).
    make clean      # This will remove object files.
    ```
## Usage :
- To use the get_next_line library in your C project, include the header file in your source code and link against the compiled library.</li>
  ```bash
  #include "get_next_line.h" OR #include "get_next_line_bonus.h" (for bonus part)
   ```
- To Compile your program add the getnext.a and the required flag :
  ```bash
  cc main.c getnext.a
   ```
## Testing

  ```bash
   cc -Wall -Werror -Wextra -D BUFFER_SIZE=1337 main.c getnext.a && ./a.out
  ```
