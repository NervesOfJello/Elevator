#include <stdio.h>

int main()
{
	int bottomFloor = 1;
	int topFloor = 9;
	int currentFloor = 1;
	int targetFloor = 1;
    
    //declare floor boundaries
	printf("This elevator can go from floor %d", bottomFloor);
	printf(" to floor %d\n", topFloor);
	
	//get current floor from user
	printf("What floor are you on? ");
	if (scanf_s("%d", &currentFloor) > 0) //ensure input is valid
	{
		if (currentFloor <= topFloor && currentFloor >= bottomFloor) //check that current floor is within boundaries
		{
			printf("You are on floor %d\n", currentFloor);
		}
		else
		{
			printf("I'm sorry, that floor doesn't exist.");
			return 0;
		}
	}
	else
	{
		printf("ERROR: You did not enter a number.");
		return 0;
	}

    //get target floor from user
	printf("What floor would you like to go to? ");
	if (scanf_s("%d", &targetFloor) > 0)
	{
		if (targetFloor == currentFloor) //make sure it's not just the same floor
		{
			printf("\nYou're already there!");
		}
		else if (targetFloor <= topFloor && targetFloor >= bottomFloor) //check boundaries
		{
			printf("\n");
			if (targetFloor < currentFloor) //going down
			{
				for (currentFloor; currentFloor > targetFloor; currentFloor--)
				{
					printf("%d...\n", currentFloor);
				}
			}
			else //going up
			{
				for (currentFloor; currentFloor < targetFloor; currentFloor++)
				{
					printf("%d...\n", currentFloor);
				}
			}
			printf("You have arrived on floor %d", currentFloor);
			
		}
		else //OOB target floor
		{
			printf("I'm sorry, that floor doesn't exist.");
			return 0;
		}
	}
	else //invalid input
	{
		printf("ERROR: You did not enter a number.");
		return 0;
	}

	return 0;
}
