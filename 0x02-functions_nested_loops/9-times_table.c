umn = 0; column <= 9; column++)
                {
                        product = row * column;
                        tens = product / 10;
                        ones = product % 10;

                        if (column == 0)
                        {
                                _putchar('0');
                        }
                        else if (product < 10)
                        {
                                _putchar(',');
                                _putchar(' ');
                                _putchar(' ');
                                _putchar(ones + '0');
                        }
		}
		_putchar('\n');
	}
