#include <stdio.h>
#include <stdlib.h>
 main()
{
	int* ptr;
	int n, i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Entered number of elements: %d\n", n);
	ptr = (int*)malloc(n * sizeof(int));
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {
		printf("Memory successfully allocated using malloc function.\n");
		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}
		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}
	}

	return 0;
}
