#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include "virtine.h"


#pragma GCC push_options
#pragma GCC optimize ("O0")

virtine int func1(int a, int b){
return a*b;
}

#pragma GCC pop_options


int main(int argc, char **argv) {
	int arg1 = atoi(argv[1]);
	int arg2 = atoi(argv[2]);
	int res = func1(arg1, arg2);
	printf("%d", res);
}
