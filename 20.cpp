#include <stdio.h> 
#include <stdlib.h> 
#define MAX 6
int main()
{
	struct data
	{
		char brand[10];
		char model[10];
		int yearofmanufacture;
		int price;
	}phone[MAX];
	
	int i=1;
	
	for(i=1;i<MAX;i++)
	{
		printf("��%d���\n",i);
		printf("�~�P:");
		scanf("%s",&phone[i].brand);
		printf("����:");
		scanf("%s",&phone[i].model);
		printf("�X�t�~��:");
		scanf("%d",&phone[i].yearofmanufacture);
		printf("���:");
		scanf("%d",&phone[i].price);
		fflush(stdin);
		system("cls");
	}

	for(i=1;i<MAX;i++)
	{
		printf("��%d���\n",i);
		printf("�~�P:%s\n",phone[i].brand);
		printf("����:%s\n",phone[i].model);
		printf("�X�t�~��:%d\n",phone[i].yearofmanufacture);
		printf("���:%d\n",phone[i].price);
		printf("\n");
	}	
	system("pause");
    return 0;
}

