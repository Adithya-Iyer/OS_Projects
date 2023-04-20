# Parallel Processing with Fork in C

This C code demonstrates how to fork multiple child processes using a loop. The program creates 8 child processes and prints out a message indicating their respective child number. The parent process waits for all child processes to finish before terminating.

### Requirements fulfilled
1. Each child should output what its position in the list of children and print its number.
2. No child should fork a process; only the main program or the original program should fork.
