include "main.h"
include <stdio.h>

int main()

{

	    int reti;

	        char c;

		    c = 'A';

		        int N=(int)(c);

			    reti = _isupper(N);

			        return 0;

}

int _isupper(int c)

{

	    if(c >=65 && c <= 90)

		            printf("1");

	        else

			        printf("0");

		    return 0;

}
