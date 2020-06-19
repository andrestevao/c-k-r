#include <stdio.h>

main()
{
	int c;
	double count;

	c = getchar();
	count = 0;
	while(c != EOF){
		if(c == '\t'){
			count++;
		}	
		
		if(c == '\n'){
			count++;
		}
		
		if(c == ' '){
			count++;
		}
		
		c = getchar();
	}
	
	printf("%.0f\n", count);
}
