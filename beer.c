#include <stdio.h>
#include <stdlib.h>

int calc_beer(int bottles, int caps)
{
	int beer;
	int remained_bottles;
	int remained_caps;
		
	if ((bottles < 2) && (caps < 4)) {
		return 0;
	}
	else {
		beer = (bottles / 2) + (caps / 4);


		remained_bottles = bottles % 2 + beer;
		remained_caps = caps % 4 + beer;

		beer += calc_beer(remained_bottles, remained_caps);

		return beer;
	}
}

int main(int argc, void *argv[])
{
	int money;
	int beer;
	int remained_bottles;
	int remained_caps;

	if (argc != 2) {
		printf("wrong paras!");
	}
	else {
		money = atoi((char *)argv[1]);
	}

	beer = money / 2;

	remained_bottles = beer;
	remained_caps = beer;

	beer += calc_beer(remained_bottles, remained_caps);

	printf("you have %d yuan to buy %d bottles of beer\n", money, beer);
	

    return 0;
}
