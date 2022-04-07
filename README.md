# :shell:  HOLBERTON PROJECT - SIMPLE SHELL  :shell:

Code a simple shell for [Holberton School](https://www.holbertonschool.com/).

### PREREQUISITES
Only use the following functions and system calls :
```
access (man 2 access)
chdir (man 2 chdir)
close (man 2 close)
closedir (man 3 closedir)
execve (man 2 execve)
exit (man 3 exit)
fork (man 2 fork)
free (man 3 free)
fstat (man 2 fstat)
getcwd (man 3 getcwd)
getline (man 3 getline)
kill (man 2 kill)
lstat (man 2 lstat)
malloc (man 3 malloc)
open (man 2 open)
opendir (man 3 opendir)
perror (man 3 perror)
read (man 2 read)
readdir (man 3 readdir)
signal (man 2 signal)
stat (man 2 stat)
strtok (man 3 strtok)
wait (man 2 wait)
waitpid (man 2 waitpid)
wait3 (man 2 wait3)
wait4 (man 2 wait4)
write (man 2 write)
_exit (man 2 _exit)
```

### INSTALLING
Compile like this :
```
gcc -Wall -Wextra -Werror -pedantic *.c -o hsh
```

## USAGE
Currently, when run, it looks like this :
```
simple_shell git:(main) ./hsh
#cisfun$ pwd
/home/vagrant/simple_shell
#cisfun$ cat _strlen.c
#include "simpleshell.h"

/**
 * _strlen - size of string
 * @s: string to find size
 * Return: string size
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                ++i;
        }
        return (i);
}
#cisfun$ exit
simple_shell git:(main)
```
                                                                                
* This shell is a command-line interpreter that provides a command line user interface for Unix-like operating systems.
                                                                                
* It is both an **interactive command language** and a **scripting language**, and is used by the operating system to control the execution of the system using shell scripts.
                                                                                
Users type commands which get executed within the session.                      
                                                                                
###### EXAMPLE :                                                                 
~~~~                                                                            
$pwd - to print working directory                              
$echo - to print to standard output                                             
$cat - to read a file's content                                                                                
~~~~  

### CONTENTS
Below are the files in this repository and a description of the code they contain

#### `main.c`
> Contains the main code of the shell where all the rest of the other functions are used to make the shell run.
>
> Makes the Shell run continously and also listens for signals when a user presses `ctrl + c` 
>
> Returns `0` on success and `1` when something goes wrong as the shell runs

#### `signal.c`
> Contains a function that listens for when a user presses `ctrl + c` and prevents the shell session from closing.  
> 
> It prints a new line and clears the standard output instead of interrupting the running shell  
> 
> Prototype : `void ctrl_c(int signal);`

#### `func_read.c`
> Contains the function that gets the user input from standard input  
> 
> Prototype : `char *func_read(void);`  
> 
> Returns :
> * The pointer to the string of input the user gave if successfull  
> * NULL if it fails        

#### `func_split.c`
> Contains the function that tokenises the user input and stores the resulting tokens in an array  
> 
> Prototype : `char **func_split(char *line);`  
> 
> Returns :
> * The array of tokens if succesful
> * NULL on failure

#### `func_exec.c`
> Contains the function and it's where the actual linux commands are executed.
> 
> Prototype : `int func_exec(char **args);`
> 
> It also uses a few other functions.
> 
> Return :
> * `1` on success
> * `0` on failure

#### `get_path.c`
> Contains the function that gets the full path of given command from the `PATH` variable
> 
> Prototype: `char *get_path(char *getcmd);`
> 
> Returns :
> * A pointer to the full path of the command on success
> * `NULL` on failure

#### `get_env.c`
> Contains the function that finds the environment variable requested by user
> 
> Prototype : `char *get_env(char *getcmd);`
> 
> Returns : 
> * The value of the environment variable on success
> * `NULL` on failure

#### `split_env.c`
> Contains the function that tokenizes the `PATH` to return a list of folders  
> 
> Prototype : `char **split_env(char *path);`
> 
> Returns :
> * An array of directories on success
> * `NULL` on failure

### CUSTOM COMMANDS
Some custom commands for the shell

##### `_printenv.c`
> Contains the function that pints all the environment variables  
> 
> Prototype : `void _printenv(void);`
> 
> It is called by typing the command `env` in the shell  

### HELPER FUNCTIONS
> These are some of the helper functions used across most of the core functions.  
> 
> Most of these are also availabe in the standard library but we were supposed to write the functions ourselves

#### `_strcat.c`
> Contains the function that concatonates two strings passed to it  
> 
> Prototype : `char *_strcat(char *dest, char *src);`  
> 
> Returns :
> * A pointer to the new string

#### `_strcmp.c`
> Contains the function that compares two strings  
> 
> Prototype : `int _strcmp(char *s1, char *s2);`  
> 
> Returns : 
> * 0 if equal
> * negative value if less than
> * positive if greater than

#### `_strlen.c`
> Contains the function that finds the length of string  
> 
> Prototype : `int _strlen(char *s);`
> 
> Returns :
> * Length of the string passed on success

#### `_strncmp.c`
> Contains the function that compares n bytes in str1 and str2
> 
> Prototype : `int _strncmp(char *str1, char *str2, int n);`  
> 
> Returns :
> * positif if str2 is less than str1
> * negatif if str1 < str2,
> * 0 is str1 is equal to str2
 
### MAN FILE
#### man_1_simple_shell
This is the man file for the shell
> Usage : man ./man_1_simple_shell

### HEADER FILE
#### simpleshell.h
Contains all the function prototypes and header files used in this project.

## Authors
**Hiromi Varnier**<br>
**Côme Le Sauter**
