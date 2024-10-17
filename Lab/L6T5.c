#include <stdio.h>
int main()
{
	printf("Please input grade and units for each course (6 courses): ");
	char c;
	int d;
	int u;
	int ret;
	double result = 0;
	double ret_add = 0;
	for (int i = 0; i < 6; i++)
	{
		scanf("%c%d%*c", &c, &d);
		if (c != 'A' && c != 'B' && c != 'C' && c != 'D' && c != 'F' && c != 'A')
		{
			printf("Warning! Invalid grade or unit.\n");
			return 0;
		}
		if (d != 3 && d != 1)
		{
			printf("Warning! Invalid grade or unit.\n");
			return 0;
		}
		switch (c)
		{
		case 'A':
			u = 4;
			break;
		case 'B':
			u = 3;
			break;
		case 'C':
			u = 2;
			break;
		case 'D':
			u = 1;
			break;
		case 'F':
			u = 0;
			break;
		default:
			break;
		}
		ret = u * d;
		ret_add = ret_add + d;
		result = result + ret;
	}
	double res = result / ret_add;
	printf("The GPA for this semester is: %.2f\n", res);
	return 0;
}
