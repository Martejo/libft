### 📖 LIBFT

My libft contains the basic functions requested by the subject as well as a personal addition of various memory and pointer management functions.

## Using libft.a

To use the `libft.a` library in your project, follow the steps below:

### Step 1: Compiling your code with libft.a

1. Make sure to include the header file `libft.h` in your source files where you use the functions from libft.

    ```c
    #include "libft.h"
    ```

2. When compiling your project, add the `-L` option to specify the directory containing `libft.a`, and the `-lft` option to link your project with `libft.a`.

    ```bash
    gcc -o my_program my_program.c -L/path/to/libft -lft
    ```

    Replace `/path/to/libft` with the absolute or relative path to the directory containing `libft.a`.

### Step 2: Running your program

Once your program is compiled with `libft.a`, you can run it as usual.

Make sure to adjust the paths and filenames according to your project structure.
