#include "main.h"
/**
* print_triangle - prints a triangle
* @size: takes in a integer for size of triangle
*/
void print_triangle(int size)
{
	int row, column, x;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			_putchar(' ');
		for (x = row + column; x >= 1; x--)
			_putchar('#');
		_putchar('\n');
	}
}

// void print_triangle(int size)
// {
//     int i, j;

//     if (size <= 0)
//         putchar('\n');
//         return;
        
//     for (i = 1; i <= size; i++)
//     {
//         for (j = 1; j <= size; j++)
//         {
//             if (j <= size - i)
//                 putchar(' ');
//             else
//                 putchar('#');
//         }
//         putchar('\n');
//     }
// }
