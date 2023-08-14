#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

int main(void)
{
   (void)mkdir("home/albert/Documentos/ex", S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH);

   return EXIT_SUCCESS;
}
