#include <stdio.h>
#include <time.h>

const char months[] = {'J','F','M','A','Y','U','L','G','S','O','N','D'};

int main(int argc, char *argv[])
{
	time_t t = time(NULL);
	struct tm *lt;

	if((lt = localtime(&t)) == NULL)
	{
		perror("localtime");
		return 1;
	}

	printf("%d%c%d\n", 1900+lt->tm_year, months[lt->tm_mon], lt->tm_mday);

	return 0;
}
