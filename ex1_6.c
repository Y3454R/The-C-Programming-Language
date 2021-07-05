#include <stdio.h>

int main()
{
	int c;
	while (1) {
		int x = ( (c = getchar()) != EOF );
		if (x == 1) {
			printf("one\n");
		}
		else if (x == 0) {
			// press ctrl + d for "EOF" (in linux)
			printf("zero\n");
			break;
		}
		else {
			printf("others\n");
			break;
		}
	}
	
}
