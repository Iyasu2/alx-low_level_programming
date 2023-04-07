/**
 * _strlen - Entry point
 * Description: 'returning the length of string'
 * Parameters: char input and int return
 * @s: character input
 * Return: int return
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}

	return (i);
}
