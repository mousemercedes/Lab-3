//
//
//
//
//
//
#include <stdio.h>
#include <stdbool.h>

int total_taken(size_t length, bool arr[]);

int main()
{
	printf("The theater has 100 seats numbered from 1 to 100");
	bool isTaken[100];
	int i = 0;
	while (i < 100)
	{
		isTaken[i] = 0;
		i+=1;
	}
	printf("\nEnter a seat number ([Ctrl]+[D] to quit): ");
	int seat = 0;
	while (scanf("%d", &seat) != EOF)
	 {
		if (isTaken[seat] != 0)
		{
			printf("\nSeat %d is taken.", seat);
		}
		else
		{
			printf("\nSeat %d is available", seat);
			printf("\nWould you like to book it? (Y/N) ");

			char yn = 0; // Its reading the enter that we used beforeeeee oops
			scanf(" %c", &yn);
			printf("%c", yn);

			if (yn != EOF)
			{

				if (yn == 'Y')
				{
					isTaken[seat] = 1;
					printf("\nBooking successful.");
				}
			}
		}
		printf("\nEnter a seat number ([Ctrl]+[D] to quit): ");
	}
	int total = total_taken(100, isTaken);
	printf("\n%d seats are booked.", total);
	int front = total_taken(50, isTaken);

	bool isTaken_back[50];
	int j = 0;
	while (j < 50)
	{
		isTaken_back[j] = isTaken[j+50];
		j+=1;
	}
	int back = total_taken(50, isTaken_back);
	printf("There are %d front seats and %d back seats taken", front, back);
	printf("\nThank you for using seat booker.");
return 0;
}

int total_taken(size_t length, bool arr[])
{
	int i = 0;
	int count = 0;
	while (i < length)
	{
		if (arr[i] != 0)
		{
			count +=1;
		}
		i +=1;
	}
	return count;
}
