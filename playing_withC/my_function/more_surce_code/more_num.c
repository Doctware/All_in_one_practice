#include "main.h"

/**
 * more_num - print 0 to 14 10 times
 *
 * Rerturn: success
 */

void more_num(void)
{
	int row_num, colum_num;

	for  (row_num = 0; row_num <=10; row_num++)
	{
		for (colum_num = 0; colum_num <= 14; colum_num++)
		{
			if (colum_num > 9)
			{
				_putchar('0' + colum_num / 10);
			}
			_putchar('0' + colum_num  % 10);
		}
		_putchar('\n');
	}


}
