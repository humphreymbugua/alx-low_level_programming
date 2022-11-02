#include "main.h"

/**
  * set_string - sets the value of a pointer to a char
  *
  * @s: pointer to a char pointer
  * @to:value to set to
  *
  * Return: void
  */
void set_string(char **s, char *to)
{
	*s = to;
}
