#include <unistd.h>
#include <stdio.h>

int		main(int argc, char *argv[])
{
	int i = 0;

	while (i <= 15)
	{
		if (argv[1][2*i] < '1' || argv[1][2*i] > '4')
		{
			write(1, "error", 5);
			return (0);
		}
		i++;
	}

	

	return (0);
}
