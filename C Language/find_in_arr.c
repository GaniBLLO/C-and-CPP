#include<stdio.h>
#include<stdlib.h>

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


void generate_random_array(int A[], int N, int M){
    for(int i = 0; i < N; i++)
        A[i] = rand() %N;
}



void radix_sort(int A[], int N){

	int *a0 = (int*)malloc(sizeof(int)*N);
    int *a1 = (int*)malloc(sizeof(int)*N);

    for(int radix = 0x0; radix < 32; radix++){
        int a0_size = 0;
        int a1_size = 0;

        for(int i = 0; i < N; i++){
            if((A[i] & (1 << radix)) == 0)
                a0[a0_size++] = A[i];
            else
                a1[a1_size++] = A[i];
        }

        for(int i =0; i < a0_size; i++)
            A[i] = a0[i];
        for(int i =0; i < a1_size; i++)
            A[a0_size +i] = a1[i];
    }
    free(a0);
    free(a1);
}

int main(){
	int N = 10;
	int A[] = {1, 3, 3, 7, 7, 7, 7, 9, 10, 10};
	int x;

	scanf("%d", &x);
	x = find_smt_symb(A, N, x);
	printf("index of x is: %d \n", x);
	
	x = left_bound(A, N, x);
	printf("Left boundary of x is: %d \n", x);	

    generate_random_array(A, N, 10);
    print_arr(A,N);
    radix_sort(A, N);
    print_arr(A,N);
	return 0;
}

