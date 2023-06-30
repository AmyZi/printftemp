#include "main.h"
/**
*func_pick - pointer to func
*@s: string
*Return: function pointer
*/

func_p func_pick(char *s)
{
int i;
func_struct control[] = {
{"s", print_str},
{"c", print_char},
{"%", print_per},
{"i", print_int},
{"d", print_int},
/*{"u", print_unsigned},
 {'x', print_hex},
{'X', print_hex_big},
{'b', print_binary},
{'o', print_octal},
{'R', print_rot13},
{'r', print_rev},
{'S', print_bigS},
{'p', print_address}
*/
{NULL, NULL}
};
for (i = 0; control[i].s != NULL; i++)
{
if (s[0] == control[i].s[0])
return (control[i].func);
}
return (NULL);
}
