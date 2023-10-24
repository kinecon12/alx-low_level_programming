/**
 * _strspn - search a string for a set of bytes
 * Author: kingsley
 * @s: String to check
 * @accept: String that checks
 * Return: The number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int tmp;
	unsigned int n;
	unsigned int count;

	count = 0;
	for (n = 0; accept[n] != '\0'; n++)
	{
		for (tmp = 0; s[tmp] != '\0'; tmp++)
		{
			if (accept[n] == s[tmp])
				count++;
			/*Stopped counting when its not a character*/
			if (s[tmp + 1] < 'A' || s[tmp + 1] > 'Z')
			{
				if (s[tmp + 1] < 'a' || s[tmp + 1] > 'z')
					break;
			}

		}
	}
	return (count);
}
