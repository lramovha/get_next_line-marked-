# get_next_line-marked-
WETHINKCODE get_next_line project created using some of the LibFt library. The aim of this project is to code a function that returns a line ending with a newline, read from a file descriptor. The project was done using C programming language

# Detailed Breakdown
1.Reading from the file descriptor: The read system call is used to read from the file descriptor fd in chunks defined by BUFF_SIZE (in this case, 1 byte). Each chunk is appended to the str[fd], which holds the accumulated data for the file.

2.Handling multiple lines: The program uses str[fd] to store all the data read from the file so far. Each time the function is called, it checks if there's a newline (\n) in str[fd]. If there is, the function extracts a line and updates str[fd] to hold the rest of the data after the newline.

3.Handling multiple files: The function can handle up to 255 different file descriptors simultaneously (because of str[255]). Each file descriptor (fd) has its own entry in the str[] array, allowing get_next_line to keep track of different files independently.

4.Recursive calls: If the buffer has more data to read but no newline is found (ret == BUFF_SIZE), the function calls itself recursively to continue reading more data until it finds a newline.
