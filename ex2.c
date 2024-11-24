/******************
Name: shaked iudcowski
ID: 212488548
Assignment: ex2
*******************/

#include <stdio.h>

int main()
{

	int choice = 0, e, n, m, fc, x, y, cnt, sum1, sum2, num, sum, t1 = 1, t2 = 1, t = 0, x1, x2, numsFound, smile, cheer, numOfAssaignments, runningNum;;
	
	// if the user put a number that not between 1 to 7
	while (choice != 7)
	{
		printf("Choose an option:\n");
		printf("1. Happy Face\n");
		printf("2. Balanced Number\n");
		printf("3. Generous Number\n");
		printf("4. Circle Of Joy\n");
		printf("5. Happy Numbers\n");
		printf("6. Festival Of Laughter\n");
		printf("7. Exit\n");
		scanf("%d", &choice);

		switch (choice)
	{
	case 1:
		e = 0;
		n = 0;
		m = 0;
		fc = 0;
		printf("Enter symbols for the eyes, nose, and mouse:\n");
		scanf("%c%c%c", &e, &n, &m);
		printf("Enter face size:\n");
		scanf("%d", &fc);

		// you can go on only when you put an odd number
		while (fc % 2 == 0)
		{
			printf("The face's size must be an odd and positive number, please try again:\n");
			scanf("%d", &fc);
		}
		// printing the first eye
		printf("%c", e);
		// printing the spaces between the eyes
		for (int i = 0; i < fc / 2 + 1; i++)
		{
			printf(" ");
		}
		// printing the second eye
		printf("%c\n", e);

		// creating the spaces for the nose
		for (int i = 0; i < fc; i++)
		{
			printf(" ");
		}

		// printing the nose
		printf("%c\n", n);

		// now printing the mouth
		printf("\\");

		// printing the number of m's the user wanted
		for (int i = 0; i < fc; i++)
		{
			printf("%c", m);
		}
		printf("/");
		printf("\n");

		break;

	case 2:

		x = 0;
		y = 0;
		cnt = 0;
		sum1 = 0;
		sum2 = 0;
		printf("Enter a number:\n");
		scanf("%d", &x);

		// trying to make the user to put a positive number
		while (x < 1)
		{
			printf("Only positive number is allowed, please try again:");
			scanf("%d", &x);
		}
		// creating newx(nx) that has the same value as x
		int nx = x;

		// single digit number is h harmony number so we check if this number is single digit
		if (x < 10)
		{
			printf("This number is balanced and brings harmony!");
			break;
		}

		// here wer'e counting how many digits the number has
		while (x != 0)
		{
			x = x / 10;
			cnt++;
		}

		for (int i = 0; i < cnt / 2; i++)
		{
			sum1 = sum1 + nx % 10;
			nx = nx / 10;
		}
		// if cnt has odd number of digits
		if (cnt % 2 == 1)
		{
			nx = nx / 10;
		}

		// the sum of the second half of digits
		for (int k = 0; k < cnt / 2; k++)
		{
			sum2 = sum2 + nx % 10;
			nx = nx / 10;
		}

		// then checking if the first half is equal to the second
		if (sum1 == sum2)
		{
			printf("This number is balanced and brings harmony!");
		}
		else
		{
			printf("This number isn't balanced and destroys harmony.");
		}
		printf("\n");

		break;

	case 3:

		num = 0;
		sum = 0;
		printf("Enter a number:");
		scanf("%d", &num);

		// checking if the user put a positive number
		while (num < 1)
		{
			printf("Only positive number is allowed, please try again:\n");
			scanf("%d", &num);
		}

		// checking the whole numbers between 2 and half of the number the user put
		for (int i = 2; i <= num / 2; i++)
		{
			// checking if the number devides by i
			if (num % i == 0)
			{
				sum += i;
			}
		}
		if (sum > num)
		{
			printf("This number is generous!");
		}
		else
		{
			printf("This number does not share.");
		}
		printf("\n");
		break;

	case 4:

		num = 0;
		t1 = 1;
		t2 = 1;
		cnt = 0;
		t = 0;
		sum = 0;

		printf("Enter a number:");
		scanf("%d", &num);

		// checking if the user put a positive number
		while (num < 1)
		{
			printf("Only positive number is allowed, please try again:");
			scanf("%d", &num);
		}
		x = num;
		y = num;

		// now checking if the number is prime
		for (int i = 2; i <= num / 2; i++)
		{
			// checking if the number devides by i
			if (num % i == 0)
			{
				printf("The circle remains incomplete.");
				break;
			}
		}

		if (num < 10)
		{
			printf("This number completes the circle of joy!");
			break;
		}

		// here we create the reversed num
		while (y > 0)
		{
			t = y % 10;
			sum = sum * 10 + t;
		}

		// running on numbers between 2 and sum/2 to see if it devides by one of them
		for (int k = 2; k <= num / 2; k++)
		{
			// checking if the sum devides by i( if it is that's not a prime number)
			if (sum % k == 0)
			{
				printf("The circle remains incomplete.");
				break;
			}
		}

		// if we got here it means that both num and its reverse are prime
		printf("This number completes the circle of joy!");
		printf("\n");
		break;

	

		case 5:
		
		num = 0;
		x1 = 0;
		cnt = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking if the user entered a positive number
    while (num < 1) 
	{
        printf("Only positive number is allowed, please try again: ");
        scanf("%d", &num);
    }

    	for (int i = 1; i <= num; i++) 
		{
        int sum = 0;
        int n = i;

        // Loop until the sum becomes 1,2,4 or 7 (happy number logic)
        while (sum != 1 && sum != 4  && sum!=2 && sum!=7) 
		 {
            sum = 0; // Reset sum for the next iteration
               // Reset n to i for the next calculation of sum of squares

            while (n > 0) 
			{
                x1 = n % 10;    // Extract the last digit
                sum += x1 * x1; // Add the square of the digit to sum
                n = n / 10;      // Remove the last digit
            }
            n = sum;
         }

        // Check if the sum reached 1 or 7 (indicating happiness)
        if (sum == 1 || sum == 7) 
		  {
            cnt++; // Increment count of happy numbers

            // Print the happy number list
            if (cnt == 1) 
			{
                printf("Between 1 and %d, the following numbers bring happiness: %d ", num, i);
            } else 
			{
                printf("%d ", i);
            }
          } 
    	}
		printf("\n");
		break;

		
		
			  
			


	case 6:

		smile = 0;
		cheer = 0;
		n = 0;
		numOfAssaignments = 0;

		printf("Enter a smile and cheer number:");
		while (getchar() != '\n');
		numOfAssaignments = scanf("smile:%d, cheer:%d", &smile, &cheer);
		while (numOfAssaignments != 2 || (smile <= 0 && cheer <= 0) || smile == cheer)
		{
			printf("Only 2 different positive numbers in the given format are allowed for the festival, please try again:");
			while (getchar() != '\n');
			numOfAssaignments = scanf("smile: %d, cheer: %d", &smile, &cheer);
		}

		printf("Enter maximum number for the festival:");
		scanf("%d", &n);

		while (n < 0)
		{
			printf("Only positive maximum number is allowed, please try again:");
			scanf("%d", &n);
			scanf("%d", &n);
		}

		for (int i = 1; i <= n; i++)
		{
			if (i % smile == 0 && i % cheer == 0)
			{
				printf("Festival!\n");
			}

			else if (i % smile == 0)
			{
				printf("Smile!\n");
			}
			else if (i % cheer == 0)
			{
				printf("Cheer!\n");
			}
			else
			{
				printf("%d\n", i);
			}
		}
		printf("\n");
		break;

	case 7:

		printf("Thank you for your journey through Numeria!");

		break;

	default:
	printf("This option is not available, please try again.\n");

		break;
	}

	// Case 1: Draw Happy Face with given symbols for eyes, nose and mouse
	/* Example:
	 * n = 3:
	 * 0   0
	 *   o
	 * \___/
	 */

	// Case 2: determine whether the sum of all digits to the left of the middle digit(s)
	// and the sum of all digits to the right of the middle digit(s) are equal
	/* Examples:
	Balanced: 1533, 450810, 99
	Not blanced: 1552, 34
	Please notice: the number has to be bigger than 0.
	*/

	// Case 3: determine whether the sum of the proper divisors (od an integer) is greater than the number itself
	/* Examples:
	Abudant: 12, 20, 24
	Not Abudant: 3, 7, 10
	Please notice: the number has to be bigger than 0.
	*/

	// Case 4: determine wether a number is a prime.
	/* Examples:
	This one brings joy: 3, 5, 11
	This one does not bring joy: 15, 8, 99
	Please notice: the number has to be bigger than 0.
	*/

	// Happy numbers: Print all the happy numbers between 1 to the given number.
	// Happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit
	/* Examples:
	Happy :) : 7, 10
	Not Happy :( : 5, 9
	Please notice: the number has to be bigger than 0.
	*/

	// Festival of Laughter: Prints all the numbers between 1 the given number:
	// and replace with "Smile!" every number that divided by the given smile number
	// and replace with "Cheer!" every number that divided by the given cheer number
	// and replace with "Festival!" every number that divided by both of them
	/* Example:
	6, smile: 2, cheer: 3 : 1, Smile!, Cheer!, Smile!, 5, Festival!
	*/
	}

	return 0;
}
