#include "lists.h"

/**
 * pre_main - executes/prints its content before main() func
*/
void __attribute__ ((constructor)) pre_main()
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
