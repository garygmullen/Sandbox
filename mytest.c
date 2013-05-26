#include <stdio.h>

int returnNumber( 
	int num
	)
{
	return num;
}

int main(
    int argc,
    char **argv
    )
{
	printf ("simple test app\n" );
	printf ("got %d\n", returnNumber( 5 ) );
    return 0;
}
