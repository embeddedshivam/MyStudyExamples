/*
 * SortingAlgorithms.c
 *
 *  Created on: Jun 27, 2023
 *      Author: shivam
 */
enum{
	BUBBLE_SORT,
	SELECTION_SORT,
	INSERTION_SORT,
	QUICK_SORT,
	HEAP_SORT,
	MERGE_SORT
};



/*
 * Time complexity in Best Case - O(N), hence it is better than selection and bubble sort
 */
void InsertionSort(int *A){
	int N = sizeof(A);
	int i,j, temp;
	for (int i=1;i<N;i++){		// Starting from a[1]=15
		temp = *(A+i);			// temp=15
		for (j=i-1;j>=0&&temp<A[j];j--){	// If 15<34 then this loop will run
			*(A+j+1)=*(A+j);		// j=0, j+1=1 ; 15 will be kept in j=0
			//15	34
		}
		// j=-1
		*(A+j+1)=temp;
		// A[0] = 15
	}
}


/*
 * Time complexity - O(N^2)
 *
 */
void SelectionSort(int *a){
	for (int k=0;k<sizeof(a);k++){
		int MIN=*(a+k), idx=k;
		for (int i=k+1;i<sizeof(a);i++){
			if (MIN> *(a+i)){
				MIN = *(a+i);
				idx = i;
			}
		}
		int temp = *(a+k);
		*(a+k) = *(a+idx);
		*(a+idx) = temp;
	}
}


/*
 * Time complexity - O(N^2)
 *
 */
void bubble_sort(int *A){
	int round, i, temp, flag=0; //flag is used to avoid some cases of for loop
	for (round=1;round<=sizeof(A)-1;round++){
		flag = 0;
		for (i=0;i<=sizeof(A)-1-round;i++){
			if (*(A+i)>*(A+i+1)){
				flag = 1;
				temp = *(A+i);
				*(A+i) = *(A+i+1);
				*(A+i+1) = temp;
			}
		}
		if (flag == 0){
			return;
		}
	}
}

void quick(int *A, int N, int BEG, int END, int *LOCPTR){
	int LEFT, RIGHT, temp;
	LEFT=BEG; RIGHT=END;
	*LOCPTR=BEG;
step2:
	while(*(A+*LOCPTR)<=*(A+RIGHT) && *LOCPTR!=RIGHT)
		RIGHT--;
	printf("RIGHT %d ", RIGHT);
		if (*LOCPTR==RIGHT){
			return;
		}
		if (*(A+*LOCPTR)>*(A+RIGHT)){
			temp=*(A+*LOCPTR);
			*(A+*LOCPTR) = *(A+RIGHT);
			*(A+RIGHT) = temp;
			*LOCPTR=RIGHT;
		}
	goto step3;
step3:
	while(*(A+*LOCPTR)>=*(A+LEFT) && *LOCPTR!=LEFT)
		LEFT++;
	printf("LEFT %d ", LEFT);
	if (*LOCPTR==LEFT){
				return;
		}
		if (*(A+*LOCPTR)>*(A+LEFT)){
			temp=*(A+*LOCPTR);
			*(A+*LOCPTR) = *(A+LEFT);
			*(A+LEFT) = temp;
			*LOCPTR=LEFT;
		}
	goto step2;

}
/*
 * O(NlogN)
 * Divide and Conquer
 * A[0] is greater then some other elements of list.
 * which will be kept left of that
 * Then there will be two sub arrays, left and right
 */
void Quick_sort(int *A){
	int LOC, LEFT, RIGHT, N=sizeof(A);

	int BEG, END, TOP=-1;
	int LOWER[10], UPPER[10];
	if (N>1){
		TOP++;
		LOWER[TOP] = 0;
		UPPER[TOP] = N-1;
	}
	while(TOP!=-1){
		BEG = LOWER[TOP];
		END = UPPER[TOP];
		TOP--;
		quick(A, N, BEG, END, &LOC);
		if (BEG<LOC-1){
			TOP++;
			LOWER[TOP]=BEG;
			UPPER[TOP]=LOC-1;
		}
		if (LOC+1<END){
			TOP++;
			LOWER[TOP]=LOC+1;
			UPPER[TOP]=END;
		}
	}
}

struct Heap{
	int *array;
	int count;
	int capacity;
};

void CreateHeap(){
}
void BuildHeap(){
}

void heap_sort(int *A){
	struct HEAP *h;


}

void mergepass(int *A,int N, int L, int *B){

}

/*
 * MERGE SORT is example for divide and conquer
 */
void MergeSort(int *A){
	// A = {1, 3, 8, 2, 6, 4}
	//
	int N=sizeof(A);
	int L=1, B[N];
	while(L<N){

	}

}




void RunSorting(int *Array, int Algorithm){

	switch(Algorithm){
		case BUBBLE_SORT:
			printf("BUBBLE_SORT\t");
			bubble_sort(Array);
			return;
		case SELECTION_SORT:
			printf("SELECTION_SORT\t");
			SelectionSort(Array);
			return;
		case INSERTION_SORT:
			printf("INSERTION_SORT\t");
			bubble_sort(Array);
			return;
		case QUICK_SORT:
			printf("QUICK_SORT\t");
			Quick_sort(Array);
			return;
		case HEAP_SORT:
			printf("HEAP_SORT\t");
			heap_sort(Array);
			return;
		case MERGE_SORT:
			printf("MERGE_SORT\t");
			bubble_sort(Array);
			return;
		default:
			printf("DEFAULT\t");
			return;
	}
}
