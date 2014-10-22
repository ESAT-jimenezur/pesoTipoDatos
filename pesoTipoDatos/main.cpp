/** Small program that shows the size in memory of each variable type
 *	@author Jose Luis Jimenez Urbano | < iJos >
 *	@date 22/10/2014
 */

#include <stdio.h>
#include <conio.h>

int main(){
	
	printf("Short int: %d \n", sizeof(short int));
	printf("Unsigned short int: %d \n", sizeof(unsigned short int));
	printf("Unsigned int: %d \n", sizeof(unsigned int));
	printf("Int: %d \n", sizeof(int));
	printf("Long int: %d \n", sizeof(long int));
	printf("Signed char: %d \n", sizeof(signed char));
	printf("Unsigned char: %d \n", sizeof(unsigned char));
	printf("Float: %d \n", sizeof(float));
	printf("Double: %d \n", sizeof(double));
	printf("Long double: %d \n", sizeof(long double));

	getch();
	return 0;
}