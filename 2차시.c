//����1
#include <stdio.h>
int main(void)
{
	printf("������ �Է��Ͻÿ�.\n");
	int year;
	scanf_s("%d", &year);

	int Year = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
	printf("%d\n", Year);

	return 0;
}




//����2
#include <stdio.h>
int main(void)
{
	printf("����� �������� ����ͳ���? ���ڸ� �Է����ּ���.\n");
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", n, i, n * i);
	}


	return 0;
}




//����3
#include <stdio.h>

int main()
{
    int n;
    printf("���ϰ� ���� �Ǻ���ġ ���� n��° ���� �Է��Ͻÿ�.");
    scanf("%d", &n);

    int a = 0, b = 1, fib;

    if (n == 0
    {
        fib = 0;
    }
    else if (n == 1)
    {
        fib = 1;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            fib = a + b;
            a = b;
            b = fib;
        }
    }

    printf("%d��° �Ǻ���ġ ���� %d �Դϴ�.\n", n, fib);

    return 0;
}