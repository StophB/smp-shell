#include "main.h"

/**
 *signal_handler- continue to maintain the track is interactive mode
 *all rights reserved or owned by StophB
 *@m: the signal number
 *Return: nothing
 */

void signalhandler(int m)
{
	(void)m;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
