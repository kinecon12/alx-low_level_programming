/**
 * _memset - fill memory with a constant byte
 * Author: kingsley
 * @s: Buffer string
 * @b: Constant byte
 * @n: First n bytes
 * Return: Pointer to a memory area of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		s[m] = b;
	return (s);
}
