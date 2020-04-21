#include <stdio.h>

// daily wallet!
/*
데일리 지갑

남은 금액(상시 출력) 하루에 정한 금액(상시 출력) 초과한 금액(상시 출력)



입력 변수 : 하루 목표 금액, 지출

출력 변수 : 하루 목표 금액 - 지출 출력( ~를 쓸 수 있습니다.)

(금액 초과시 ~를 초과 했습니다.)


하루 정산 메뉴

초과시 - 고생했습니다. 다음엔 분발 하세요.

딱 맞췄을 시 - 대단합니다. 정한 금액만큼 잘 관리했네요.

미만시 - 정말 대단합니다. 관리를 잘하시네요!

*/


void main() {

	int daily_goal_price = 0;
	int expenditure = 0;
	int expenditure_sum = 0;

	printf("하루 목표 금액을 입력하세요: \n");
	scanf("%d", &daily_goal_price);
	
	printf("목표 금액 : %d\n", daily_goal_price);
	
	while (1) {

		printf("지출: ");
		scanf("%d", &expenditure);

		if (expenditure == 'q')	break;
		

		expenditure_sum += expenditure;

		if (daily_goal_price - expenditure_sum >= 0)
		{
			printf("%d원을 쓸 수 있습니다.\n", daily_goal_price - expenditure_sum);
		}
		else if (daily_goal_price - expenditure_sum < 0)
		{
			printf("%d원을 초과했습니다.\n", expenditure_sum - daily_goal_price);
		}

		
	}

	
	
	


}