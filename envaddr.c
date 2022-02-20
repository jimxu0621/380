#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *sheell = (char*)getenv("MYSHELL");
	if(shell)
	{
		printf("  Value:  %s\n", shell);
		printf("  Address:  %x\n", (unsigned int)shell);
	}
	return 1;
}