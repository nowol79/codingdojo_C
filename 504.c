/*
 * 1~1000에서 각 숫자의 개수를 구하기
 * 
 */
#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int arr[10] = {0,};

	int i, j;
	for (i=1; i <= 1000; i++)
	{
		j = i;
		while(j != 0) {
			arr[j%10]++;
			j /= 10;
		}
	}

	for (i=0; i < 10; i++) 
		printf("%d 수의 총합은 : %d\n", i, arr[i]);
}


