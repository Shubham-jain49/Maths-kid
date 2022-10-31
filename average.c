#include <stdio.h>

float getAvg(int x)
{
	static int sum, n;

	sum += x;
	return (((float)sum) / ++n);
}


void streamAvg(float arr[], int n)
{
	float avg = 0;
	for (int i = 0; i < n; i++) {
		avg = getAvg(arr[i]);
		printf("Average of %d numbers is %f \n", i + 1, avg);
	}
	return;
}


int main()
{
	float arr[] = { 10, 20, 30, 40, 50, 60 };
	int n = sizeof(arr) / sizeof(arr[0]);
	streamAvg(arr, n);

	return 0;
}
