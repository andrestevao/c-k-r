#include <stdio.h>
/* took me a while to figure out but you have to pipe a 
file/string into this program to use it properly, otherwise there
is no EOF (since there is no file) 
*/
main()  
{  
	int c = getchar();
	while (c != EOF){
		printf("%i\n", c != EOF);
		c = getchar();
	}
	printf("%i\n", c != EOF);
	
}
