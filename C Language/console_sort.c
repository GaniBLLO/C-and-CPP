#include <stdio.h>
#include<stdlib.h>

#define MAX 1000

/* In console put next: If name programm -> "abc", you should put into console abc "smt"*/
int readlines(int numb[], int max_lenght);

void generate_random_array(int A[], int N);
void count_sort(int A[], int N);
void print_arr(int A[], int N);
int main(int argc, char* argv[])
{
	int ARR[MAX];
	int command, reverse = 0, number = 0, found = 0, sort = 0, print = 0,\
		nlines = 0, help = 0;
	while (--argc > 0 && (*++argv)[0] == '-') {
OBOBOB		while (command = *++argv[0]) {
			switch (command) {
			case 'h':
				help = 1;
				break;
			case 'r':
				reverse = 1;
				break;
			case 'p':
				print = 1;
				break;
			case 'n':
				number = 1;
				break;
			case 's':
				sort = 1;
				break;
			default :
				printf("find: illigal option %c\n", command);
				argc = 0;
				found = -1;
				break;
			}
		}
	}
	if (help) {
		printf("This programm generate and output on console numers. You can choose setting if you write -h\n");
		printf("-h: help\n");
		printf("-r: reverse\n");
		printf("-p: print\n");
		printf("-s: sort\n");
		printf("-n: number\n");
	}
	generate_random_array(ARR, 10);
	if (argc != 1)
		printf("Usage: find -x -n pattern\n");
	else {
		if ((nlines = readlines(ARR, MAX)) >= 0) {
			;
		}
		
	}

}


void generate_random_array(int A[], int N){
	for (int i = 0; i < N; i++)
		A[i] = rand() % N;
}

int readlines(int numb[], int max_lenght) {
	int lenght, symb, index = 0;
	while (--max_lenght > 0 && (symb = getchar()) != EOF && symb != '\n') {
		numb[index++] = symb;
	}
	if (symb == '\n') {
		numb[index++] = symb;
	}
	numb[index] = '\0';
	return index;
}

void print_arr(int A[], int N){
	for (int i = 0; i < N; i++)
		printf("%d \t", A[i]);
	printf("\n");
}


void count_sort(int A[], int N) {
	int F[10] = { 0 };
	for (int i = 0; i < N; i++)
		F[A[i]]++;
	int i = 0;
	for (int x = 0; x < 10; x++)
		for (int k = 0; k < F[x]; k++)
			A[i++] = x;
}
