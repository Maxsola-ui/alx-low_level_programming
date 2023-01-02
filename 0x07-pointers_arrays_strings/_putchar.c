#include <unistd.h>

int _puthar(char c)
{
	return (write(1, &c, 1));
}
