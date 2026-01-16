# get next line

### Description:
Program a function that returns a line read from a file descriptor.

### Requirements:
- Repeated calls (e.g., using a loop) to your get_next_line() function should let
you read the text file pointed to by the file descriptor, one line at a time.
- Your function should return the line that was read.
If there is nothing left to read or if an error occurs, it should return NULL.
- Make sure that your function works as expected both when reading a file and when
reading from the standard input.
- Please note that the returned line should include the terminating \n character,
except when the end of the file is reached and the file does not end with a \n
character.
- Your header file get_next_line.h must at least contain the prototype of the
get_next_line() function.
- Add all the helper functions you need in the get_next_line_utils.c file.
- Because you will have to read files in get_next_line(), add this option to your
compiler call: -D BUFFER_SIZE=n
It will define the buffer size for read().

### Bonus:
- Develop get_next_line() using only one static variable.
- Your get_next_line() can manage multiple file descriptors at the same time.
For example, if you are reading from file descriptors 3, 4, and 5, you should be able
to read from a different file descriptor with each call, without losing track of the
reading state of each file descriptor or returning a line from a different one.
This means you should be able to call get_next_line() to read from fd 3, then fd
4, then fd 5, then again from fd 3, then fd 4, and so forth, without losing track of
the reading state for each file descriptor.

### Learning process:
Key things learned from this project:
- The concept of memory ownership.
- Static variables.
- newline and EOF.
- Coding a somewhat complex project.

### Useful sources:
- This blog series: https://medium.com/@lannur-s/gnl-c3cff1ee552b

### Testing:
See [Francinette](https://github.com/WaRtr0/francinette-image).*Passed all tests but not the strict version.
