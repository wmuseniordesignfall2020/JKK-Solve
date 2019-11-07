# Instructions for Installation / Build

The quad solver will be put into a .tar.gz file on Github for which will be downloaded by the client. This file will then be 
extracted using an extract function when right clicking on the file. 
On unix the command is:

```BASH
tar -zxvf JKK-Solve.tar.gz -C /outputDirectory
```

Once this is done, this can be opened by 
any IDE or interface with the capabilities of running C code. It could also be opened in the terminal where the 
program will run natively. 


The program can be compiled using various make functions 
(“make help” - for the entire list of make functions) or simply just “make”. 
The user can then run the program as many times as needed. 

STEP BY STEP:

1. Download the .tar.gz file containing the quad solver.
2. Extract the file into your directory.
3. In the Linix Terminal (Ubuntu respectively), navigate to the folder, JKK-Solve.
4. You may run the 'make' function to compile the code. For more make options type 'make help'.
5. To simply run the code, type: 'make run' and the program will execute.
