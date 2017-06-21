#include<stdlib.h>
#include <unistd.h>

main()
{
    system("./audio.sh");
    
    while(1)
    {
	sleep(1);
    }
}
