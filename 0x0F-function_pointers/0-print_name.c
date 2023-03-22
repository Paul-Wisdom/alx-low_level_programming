/**
 * print_name - a functio that prints a name
 * @name: the name to be printed
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
