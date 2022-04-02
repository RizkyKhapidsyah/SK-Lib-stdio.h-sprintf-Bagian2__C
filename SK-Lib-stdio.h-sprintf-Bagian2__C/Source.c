#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by Microsoft
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main(void) {
	char  buffer[200], s[] = "computer", c = 'l';
	int   i = 35, j;
	float fp = 1.7320534f;

	// Format and print various data:
	j = sprintf(buffer, "   String:    %s\n", s); // C4996
	j += sprintf(buffer + j, "   Character: %c\n", c); // C4996
	j += sprintf(buffer + j, "   Integer:   %d\n", i); // C4996
	j += sprintf(buffer + j, "   Real:      %f\n", fp);// C4996
	// Note: sprintf is deprecated; consider using sprintf_s instead

	printf("Output:\n%s\ncharacter count = %d\n", buffer, j);

	_getch();
	return 0;
}