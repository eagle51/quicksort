#include<stdio.h>
#include<stdlib.h>

void quick_sort(int arr[], int low, int high)
{
	int i, j, key;
	if (low < high)
	{
		i = low;
		j = high;
		key = arr[i];
		while (i < j)
		{
			while (i < j && arr[j] >= key)
				j--; /* ���������ҵ�һ��С��x���� */
			if (i < j)
				arr[i++] = arr[j];

			while (i < j && arr[i] <= key)
				i++; /* ���������ҵ�һ������x���� */
			if (i < j)
				arr[j--] = arr[i];
		}
		arr[i] = key;
		quick_sort(arr, low, i - 1); /* �ݹ���� */
		quick_sort(arr, i + 1, high);
	}
}

int main(void)
{
	int arr[] = { 9,5,1,2,6,3,3,4,9 };
	for (int i = 0;i<9;++i)
		printf("%d ",arr[i]);
	printf("\n");

	quick_sort(arr, 0, 8);
	for (int i = 0;i<9;++i)
		printf("%d ",arr[i]);
	printf("\n");
	system("pause");
	return 0;
}