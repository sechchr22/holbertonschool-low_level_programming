
/**
*swap_int - swap the values of two integers using pointers
*@a: pointer 1
*@b: pointer 2
*Return: always 0
*/
void swap_int(int *a, int *b)
{
	a = &b;
        b = &a;
 	
}
