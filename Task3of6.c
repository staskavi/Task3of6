#include<stdio.h>
int main()
{
	int num;
	int counter = 0;
	int positive = 0;
	int sum = 0;
	float avg = 0;

	printf("Enter num (for exit enter negative number) : ");
	scanf_s("%d", &num);
	if (num < 0)
	{
		printf("Exit. You have entered a negative number.");
		return 1;
	}
	//sum = num;
	//counter++;
	while (num >= 0)
	{
		if(num > 0)
		counter++;
		sum += num;
		avg = (float)sum / counter;
		printf("Enter num (for exit enter negative number) : ");
		scanf_s("%d", &num);
		

	}
	printf("The total positive numbers you entered is: %d\n", counter);
	printf("The sum of numbers is: %d\n", sum);
	printf("The average of numbers is: %f", avg);
	

	return 0;

}