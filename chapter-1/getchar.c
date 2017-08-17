#include <stdio.h>

main()
{
    int c;
    
    while (c != EOF) {
    	printf("Press a key\n");
        c = getchar();
        
    	printf("You typed: %d\n", c);
    }
 
   /* see if getchar() != EOF is 0 or 1 (false or true)
    printf("%d", getchar() != EOF);
   */
   
   /* EOF => ctrl+D (also it's -1) */
}
