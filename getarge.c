/*
 *     This code is for finding the address of an envvar in arge of a binary
 *         
 *             "Usage: %s <env> <prog>\n", argv[0]
 *
 *                 it return the address of the envvar in the binary
 *                 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	    char* ptr;

	        if(argc < 3)
			    {
				            printf("Usage: %s <env> <prog>\n", argv[0]);
					            exit(0);
						        }

		    ptr = getenv(argv[1]);
		        ptr += (strlen(argv[0]) - strlen(argv[2])) * 2;

			    printf("%s at %p\n", argv[1], ptr);

			        return 0;
}
