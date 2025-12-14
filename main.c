#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*str;

	if (argc < 2 )
		return (1);
	if (argv[1][0] == '0')
		fd = 0;
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (1);
	}
	while (1)
	{
		str = get_next_line(fd);
		if (!str)
			break;
		printf("%s", str);
		free (str);
		str = NULL;
	}
	close (fd);
	return (0);
}
