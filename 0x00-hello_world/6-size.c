/**
 * main - Entry point of the program
 *
 * This function is the entry point for the program execution.
 * It returns an integer value indicating the exit status.
 *
 * Return: 0 on success, non-zero on failure
 */
int main(void)
{
/* Your code here */
printf("Size of a char:%zu byte(s)\n", (sizeof(char)));
printf("Size of an int:%d byte(s)\n", (sizeof(int)));
printf("Size of a long int:%li byte(s)\n", (sizeof(signed long int)));
printf("Size of a long long int:%i byte(s)\n", (sizeof(long long int)));
printf("Size of a float:%lu byte(s)\n", (sizeof(float)));
printf("\n")
return (0);
}

