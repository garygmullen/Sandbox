#include <stdio.h>

char returnChar(
	char c
	)
{
	return c;
}

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
	printf ("got %c\n", returnChar( 'C' ) );	
    return ;
}
