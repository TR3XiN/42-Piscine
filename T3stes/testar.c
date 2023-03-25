#include <unistd.h>

int	fn(int i)
{
	if (i < 15)
	{
		i++;
		write(1, "A", 1);
		fn(i);
		return(0);
	}
	else
	{
		write(1, "\n", 1);
		return(0);
	}
}

int	main()
{
	fn(10);
	return(0);
}
