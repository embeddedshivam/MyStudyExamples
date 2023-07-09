#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <time.h>
typedef float (*op_t)(int);

float cb_square(int num){
	return num*num;
}

float cb_cube(int num){
	return num*num*num;
}

float cb_square_root(int num){
	return sqrt(num);
}


float calc(int num, op_t op){
	return op(num);
}








int compar (const void* p1, const void* p2){
	int i1 = *(int*)p1;
	int i2 = *(int*)p2;
	if (i1 < i2){
		return -1;
	}
	else if (i1 == i2){
		return 0;
	}
	else if (i1 > i2){
		return 1;
	}
}













int main(){
//	printf("square:\t%.2f\n", calc(5, cb_square));
//	printf("cube:\t%.2f\n", calc(5, cb_cube));
//	printf("sqrt:\t%.2f\n", calc(5, cb_square_root));
//	int vals[5] = {3,5,1,4,2};
//
//	for (int i=0;i <5;i++){
//		 printf("%d ", vals[i]);
//	}
//	printf("\n");
//	for (int i=0;i <5;i++){
//	qsort(vals, sizeof(vals)/sizeof(int), sizeof(int), compar);
//		 printf("%d ", vals[i]);
//	}

	int msec = 0, trigger = 1000; /* 10ms */
	clock_t before = clock();
	int iterations = 0;
	do {
	  /*
	   * Do something to busy the CPU just here while you drink a coffee
	   * Be sure this code will not take more than `trigger` ms
	   */
			printf("square:\t%.2f\n", calc(5, cb_square));
			printf("cube:\t%.2f\n", calc(5, cb_cube));
			printf("sqrt:\t%.2f\n\n", calc(5, cb_square_root));

	  clock_t difference = clock() - before;
	  msec = difference * 1000 / CLOCKS_PER_SEC;
	  iterations++;
	} while ( msec < trigger );

	printf("Time taken %d seconds %d milliseconds (%d iterations)\n",
	  msec/1000, msec%1000, iterations);
	return 0;
}
