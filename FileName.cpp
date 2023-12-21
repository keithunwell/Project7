#include<stdio.h>
int main(void)
{
	int money;
	int price;
	money = 1000, price = 300;
	
	printf("now you have %d money", money);
	printf("\nand the price is:%d", price);
	printf("\nyou can only buy%d", money / price);
	printf("\nyou gonna left%d", money % price);

	return 0;
	
}