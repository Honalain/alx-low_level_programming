/**
 * _strpbrk - function to searches a string for any set of bytes
 * @s: occurrence in  the string
 * @accept: number of bytes
 * Return: pointer to
 */

char *_strpbrk(char *s, char *accept)
{

int k;

while (*s)
{
	for (k = 0; accept[k]; k++)
	{
	if (*s == accept[k])
		return (s);
	}
	s++;

}
return ('\0');
}

