/**
*reverse_array - to reverse an array
*@a: name of the pointer
*@n: number of elements of the string
*Return: always 0
*/
void reverse_array(int *a, int n)
{
	int x;
	int buf;

	for (x = 0; x < n; x++)
	{
		if (n % 2 != 0)
		{
			if (x > (n - 1))
			{
				break;
			}

			buf = a[x];
			a[x] = a[n - 1];
			a[n - 1] = buf;
			n--;
		}

		else
		{
			if (x == n)
			{
				break;
			}

			buf = a[x];
			a[x] = a[n - 1];
			a[n - 1] = buf;
			n--;
		}

	}
}
