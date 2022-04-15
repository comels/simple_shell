#include "simpleshell.h"

/**
  * ctrl_c -  Handles ctrl + c
  * @signal: signal
  */

void ctrl_c(int signal)
{
	(void)signal;
	write(1, "\n#cisfun$ ", 10);
}
