# C - File I/O
In this project, I learned about the three standard file descriptors
and their `POSIX` names as well as the difference between function and system calls.
I practiced using the I/O system calls `open`, `close`, `read`, and `write`
and the flags `O_CREAT`, `O_EXCL`, `O_RDONLY`, `O_WRONLY`, and `O_RDWR`
to create, open, close, read, write, set permissions of files in C.

## Test :white_check_mark:
* [Test](https://github.com/Mdigo12/alx-low_level_programming/tree/main/0x15-file_io/test_f): A folder with test files provided in the Alx Platform.

## Header File :scroll:
* [main.h](./main.h): Contains all the prototype functions used.

|FILE|PROTOTYPE|Purpose|
|------------------------|----------------------------------------------------------|--------------------------------------------------------------------------------------------------------------|
|0-read_textfile.c|ssize_t read_textfile(const char *filename, size_t letters)|a function that reads a text file and prints it to the POSIX standard output|
|1-create_file.c|int create_file(const char *filename, char *text_content)|a function that creates a file|
|2-append_text_to_file.c|int append_text_to_file(const char *filename, char *text_content)|a function that appends text at the end of a file|
|3-cp.c||a program that copies the content of a file to another file|
|100-elf_header.c||a program that displays the information contained in the ELF header at the start of an ELF file|
