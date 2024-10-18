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
		if (c != 'A' && c != 'B' && c != 'C' && c != 'D' && c != 'F')
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
/*
我们观察可以得知
题中的公式，是 grade 代表的数
A: 4 B: 3 C: 2 D: 1 F: 0
乘以后面跟着的数，然后除以这些数字的和
然而，本题不允许使用数组，所以我们只得依次获取输入并计算
这里的算式结构也允许我们这样做
所以我们声明两个变量，一个是字符变量用以存储输入的字母，另一个是存储输入的数字
然而我们注意到，如果使用形如
scanf("%c %d", &c, &d);
的形式，空格是会把所有空格吞掉，这时候后面的匹配会出现异常
所以我们使用
scanf("%c%d%*c", &c, &d);
此处%*c会匹配一个字符，然而不会存入变量

然后我们注意到，对于 grade 以外的字母和1 & 3以外的数字，要进行警告
所以我们使用‘与’运算符进行判断，如果任何此处的字母都不是输入的，输出警告并终止程序，下面同理

我们将 grade 转为数字，使用switch对grade的不同情况进行数字设定，存入一个新的变量'u'
我们注意到，主体算式上面部分是这种两两乘积的和，于是ret用以存储一个乘积
然后把它循环加到一个初始为0的变量上，实现乘积的累加
下面部分是数字的和，于是我们也这样做

现在我们准备好了算式的上半部分与下半部分，只需要上除以下即可
注意这时，I/O Sample提到输出是两位小数，所以我们需要将上下任意一部分声明为浮点数以使得运算结果为浮点数
并把运算结果赋值到结果变量上
注意，结果变量也必须是浮点类型

最后使用%.2f输出，即可AC
*/