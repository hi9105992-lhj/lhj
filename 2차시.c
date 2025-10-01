//문제1
#include <stdio.h>
int main(void)
{
	printf("연도를 입력하시오.\n");
	int year;
	scanf_s("%d", &year);

	int Year = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
	printf("%d\n", Year);

	return 0;
}




//문제2
#include <stdio.h>
int main(void)
{
	printf("몇단의 구구단을 보고싶나요? 숫자를 입력해주세요.\n");
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", n, i, n * i);
	}


	return 0;
}




//문제3
#include <stdio.h>

int main()
{
    int n;
    printf("구하고 싶은 피보나치 수의 n번째 항을 입력하시오.");
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

    printf("%d번째 피보나치 수는 %d 입니다.\n", n, fib);

    return 0;
}