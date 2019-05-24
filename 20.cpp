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
		printf("第%d手機\n",i);
		printf("品牌:");
		scanf("%s",&phone[i].brand);
		printf("型號:");
		scanf("%s",&phone[i].model);
		printf("出廠年份:");
		scanf("%d",&phone[i].yearofmanufacture);
		printf("售價:");
		scanf("%d",&phone[i].price);
		fflush(stdin);
		system("cls");
	}

	for(i=1;i<MAX;i++)
	{
		printf("第%d手機\n",i);
		printf("品牌:%s\n",phone[i].brand);
		printf("型號:%s\n",phone[i].model);
		printf("出廠年份:%d\n",phone[i].yearofmanufacture);
		printf("售價:%d\n",phone[i].price);
		printf("\n");
	}	
	system("pause");
    return 0;
}

