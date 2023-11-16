




/**
 * is_space - check for space, tab, or next line
 * @: character to be check
 * Return: 1 else, 0
 */

char is_space(char c)
{
	return c == ' ' || c == '\n' || c == '\t';
}

/**
 * word_cunter - Count the word 1 by 1
 * @s: word to be count
 * Return: Total count
 */

int word_count(char *s)
{
	int count = 0;
	int in_words = 0;

	while (*s)
	{
		if (is_space(*s))
			in_words = 0;
		else if (!is_space(s))
			in_word = 1;
		count++;
	}
	s++;

	return count;
}
