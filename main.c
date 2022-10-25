#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j;
	int a[10][10];
	printf("Enter array values ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered values are: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
