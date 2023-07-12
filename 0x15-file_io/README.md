![eeeeee](https://github.com/El-gibbor/alx-low_level_programming/assets/107848793/71a1a67e-bb2a-4fad-bc78-1dce31867b26)
# 0x15. C - File I/O  
This project provides task exercises on file input and output operations in C programming and file handling. It covers important concepts such as creating, opening, closing, reading, and writing files, file descriptors, standard file descriptors, POSIX names, I/O system calls, file flags, file permissions, system calls, and the difference between functions and system calls.  
## Learning Objectives  
Gained proficiency in the below concepts upon completing these task exercises:
* __Creating and Opening Files__: learned how to generate new files with specific names in the file system and establish connections between the files and my C program. This involves understanding the appropriate I/O system calls (open) and how to set file flags to control the file's behaviour.  
* __Closing Files__: Understood how to properly terminate connections between files and my C program. This ensures that any pending writes are completed and releases system resources associated with the files.  
* __Reading from Files__: Acquire the skills to retrieve data stored in files and transfer it into my program's memory for further processing. This includes utilizing the read system call to efficiently read data from files.  
* __Writing to Files__: Learned how to send data from your program's memory and store it in files for future retrieval. This involves using the write system call to efficiently write data to files.

* __File Descriptors__: Understood the concept of file descriptors, which are unique identifiers assigned to open files within a process. learned how to work with file descriptors and utilize them in conjunction with I/O system calls.  
* __I/O System Calls__: Utilized various I/O system calls provided by C for file input and output operations. This includes functions like `open`, `close`, `read`, and `write`, which allow one to interact with files at a low level.  
*__File Flags__: Learned about file flags, such as `O_RDONLY`, `O_WRONLY`, and `O_RDWR`, which are used when opening files. Understanding file flags enables one to control the file's access mode (read-only, write-only, or read-write) when using the open system call.  
*__File Permissions__: More on file permissions and how to set them when creating files using the open system call. This allows one to specify who can read, write, or execute the file.
## Resources
File handling in c - [Code (quoi)](https://www.codequoi.com/en/handling-a-file-by-its-descriptor-in-c/)
