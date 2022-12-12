#include<stdio.h>

int find_smt_symb(int A[], int N, int x){
	for(int i = 0; i < N; i++)
		if(A[i] == x)
			return i;
	return -1;
}

int left_bound(int A[], int N, int x){
	int left = -1;
	int right = N;
	while(right - left > 1){
		int middle = (left + right)/2;
		if(A[middle] < x)
			left = middle;
		else
			right = middle;
	}
	return left;
}

void print_arr(int A[], int N){
	for(int i = 0; i < N; i++)
		printf("%d \t", A[i]);
	printf("\n");
}


void count_sort(int A[], int N){
	int F[10] = {0};
	for (int i = 0; i < N; i++)
		F[A[i]]++;
	int i = 0;
	for (int x = 0; x < 10; x++)
		for(int k = 0; k < F[x]; k++)
			A[i++] = x;
}

int main(){
	int N = 10;
	int A[] = {1, 3, 3, 7, 7, 7, 7, 9, 10, 10};
	int x;

	scanf("%d", x);
	x = find_smt_symb(A, N, x);
	printf("index of x is: %d \n", x);
	
	x = left_bound(A, N, x);
	printf("Left boundary of x is: %d \n", x);	

	return 0;
}

