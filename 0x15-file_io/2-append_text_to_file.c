#include "main.h"
/**
 * append_text_to_file - literally
 * @filename: the file name
 * @text_content: text content
 * Return: 1 for success or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, o, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; )
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	if (w == -1 || 0 == -1)
		return (-1);
	close(o);
	return (1);
}
