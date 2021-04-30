#include<stdio.h>
#define CASE1
#if defined (CASE1)
	main(){
		printf("Solving Case 1");
	}
#elif defined (CASE2)
	main(){
		printf("Solving Case 2");
	}
#elif defined (CASE3)
	main(){
		printf("Solving Case 3");
	}
#else
	main(){
		printf("No Case Defined");
	}
#endif
