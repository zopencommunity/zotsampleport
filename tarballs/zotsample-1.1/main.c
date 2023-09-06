#include <stdio.h>
#include "fn.h"

int main(int argc, char** argv) {
	int result;
        printf("main: argc: %d\n", argc);
	result = fn(argc, argv);
        printf("fn() incr of argc result: %d\n", result);
	if (result != argc+1) {
		fprintf(stderr, "Error. function did not increment argc by 1\n");
	}
	return result-argc-1;
}
