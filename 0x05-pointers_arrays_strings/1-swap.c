/**
 * swap_int - Entry point
 * Description: 'swapping integers'
 * Parameters: two int inputs no return
 * @a: integer1
 * @b: integer2
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
