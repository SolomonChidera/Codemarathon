#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("Argv [%d]: %s\n", i, argv[i]);
	}
	return(0);
}
