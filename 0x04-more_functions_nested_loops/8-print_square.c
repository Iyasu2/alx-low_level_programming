/**
 * print_square - Entry point
 * Description: 'printing a square using puts'
 * Parameters: int size input no return
 * @size : size of square
 * Return: none
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
