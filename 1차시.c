//���� 1
#include <stdio.h>

int main()
{
	int A, B;
	scanf_s("%d %d", &A, &B);


	printf("A+B=%d \n", A + B);
	printf("A-B=%d \n", A - B);
	printf("A*B=%d \n", A * B);
	printf("A/B=%d \n", A / B);
	printf("A������ B�� ������=%d \n", A % B);


	return 0;
}



//���� 2
#include <stdio.h>

int main()
{
	char ch;
	scanf_s("%c", &ch);
	printf("%c�� ASCII �ڵ� ��: %d\n", ch, (int)ch);


	return 0;
}




//���� 3
#include <stdio.h>

int main()
{
	int A, B, C;
	scanf_s("%d %d %d", &A, &B, &C);

	int L1 = (A + B) % C;
	int R1 = ((A % C) + (B % C)) % C;
	int L2 = (A * B) % C;
	int R2 = ((A % C) * (B % C)) % C;

	printf("%d\n", L1);
	printf("%d\n", R1);
	printf("%d\n", L2);
	printf("%d\n", R2);


	if (L1 == R1)
		printf("(A + B) % C�� ((A % C) + (B % C)) % C�� ����.\n");
	else
		printf("(A + B) % C�� ((A % C) + (B % C)) % C�� �ٸ���.\n");
	if (L2 == R2)
		printf("(A * B) % C�� ((A % C) * (B % C)) % C�� ����.\n");
	else
		printf("(A * B) % C�� ((A % C) * (B % C)) % C�� �ٸ���.\n");



	return 0;
}
