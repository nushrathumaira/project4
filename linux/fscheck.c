#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main()
{
	struct stat fileStruct;
	int fdesc = open("/home/nushrat/xV6/xv6-public/fs.img",O_RDONLY);
	if(fdesc < 0)
        {
          fprintf(stderr,"Filesystem image not found.\n");
	  return 1;
        }
        
	if(fstat(fdesc,&fileStruct) < 0)
	  return 1;
        
        
        
        return 0;

}
