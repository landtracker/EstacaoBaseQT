#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

main()
{
    system("./video.sh");
    
    while(1)
    {
	sleep(1);
	printf("video\n");
    }
} 
