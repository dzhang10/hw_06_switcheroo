#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int array1[10];
	int array2[10];

	int *a1p = array1+9;
	int *a2p = array2;

	int i;
	srand(time(NULL));

	for(i=0;i<9;i++){
		array1[i]=rand();
	}

	array1[9]=0;

	for(i=0;i<10;i++){
		printf("array1[%d] = %d\n",i,array1[i]);
	}

	for(i=0;i<10;i++){
		*(a2p+i)=*(a1p-i);
	}

	for(i=0;i<10;i++){
		printf("array2[%d] = %d\n",i,array2[i]);
	}


	return 0;
}
