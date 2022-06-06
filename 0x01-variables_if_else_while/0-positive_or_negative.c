#include <stdlib.h>

#include <time.h>

/* more headers goes there */

#include <stdio.h>

/**
 *
 *  * main - Entry point
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)

{

		int n, lastDigit;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */

					lastDigit = n % 10;

						if (lastDigit > 5)

								{

											printf("%d is positive\n", n);

												}

							else if (lastDigit == 0)

									{

												printf("%d is zero\n", n);

													}

								else

<<<<<<< HEAD
									{
												printf("%d is negative\n", n);
				}
=======
										{

													printf("%d is negative\n", n);
														}
>>>>>>> f6b45b17e0903de1c7b26c8d460f4c5cfd60a56c
									return (0);
}
