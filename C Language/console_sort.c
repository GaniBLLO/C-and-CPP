#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define MAX 1000
char* lineptr[MAX];
/* In console put next: If name programm -> "abc", you should put into console abc "smt"*/
int readlines(int numb[], int max_lenght);

void generate_random_array(int A[], int N);
void count_sort(int A[], int N);
void print_arr(int A[], int N);
int numcmp(char*, char*);
void writelines(char* lineptr[], int nlines);
int strcomp(char* s, char* t);
void qsort(void* v[], int left, int right, int (*compare)(void*, void*));


int main(int argc, char* argv[])
{
	int ARR[MAX];
	int command, reverse = 0, number = 0, found = 0, sort = 0, print = 0,\
		nlines = 0, help = 0;
	while (--argc > 0 && (*++argv)[0] == '-') {
		while (command = *++argv[0]) {
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
	//if (argc != 1)
	//	printf("Usage: find -x -n pattern\n");
	
		//generate_random_array(ARR, 10);
		if ((nlines = readlines(ARR, MAX)) >= 0) {
			qsort((void**) lineptr, 0, nlines - 1, (int (*)(void*, void*))(number ? numcmp : strcomp));
			writelines(lineptr, nlines);
			return 0;
		}
		else
		{
			printf("¬ведено слишком много строк\n");
			return 1;
		}

}


void qsort(void* v[], int left, int right, int (*compare)(void*, void*))
{
	int i, last;
	void swap(void* v[], int, int);
	if (left >= right) /* ничего не делаетс€, если */
		return; /* в массиве менее двух элементов */
	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if ((*compare)(v[i], v[left]) < 0)
			swap(v, ++last, i);
	swap(v, left, last);
	qsort(v, left, last - 1, compare);
	qsort(v, last + 1, right, compare);
}

/* numcmp: сравнивает s1 и s2 как числа */
int numcmp(char* s1, char* s2)
{
	double v1, v2;
	v1 = atof(s1);
	v2 = atof(s2);
	if (v1 < v2)
		return -1;
	else if (v1 > v2)
		return 1;
	else
		return 0;
}

/* strcmp: выдает < 0 при s < t, 0 при s == t, > 0 при s > t */
int strcomp(char* s, char* t)
{
	for (; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
	return *s - *t;
}

void writelines(char* lineptr[], int nlines)
{
	int i;
	for (i = 0; i < nlines; i++)
		printf("%s\n", lineptr[i]);
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

void swap(void* v[], int i, int j)
{
	void* temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}