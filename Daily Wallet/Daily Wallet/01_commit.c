#include <stdio.h>

// daily wallet!
/*
���ϸ� ����

���� �ݾ�(��� ���) �Ϸ翡 ���� �ݾ�(��� ���) �ʰ��� �ݾ�(��� ���)



�Է� ���� : �Ϸ� ��ǥ �ݾ�, ����

��� ���� : �Ϸ� ��ǥ �ݾ� - ���� ���( ~�� �� �� �ֽ��ϴ�.)

(�ݾ� �ʰ��� ~�� �ʰ� �߽��ϴ�.)


�Ϸ� ���� �޴�

�ʰ��� - ����߽��ϴ�. ������ �й� �ϼ���.

�� ������ �� - ����մϴ�. ���� �ݾ׸�ŭ �� �����߳׿�.

�̸��� - ���� ����մϴ�. ������ ���Ͻó׿�!

*/


void main() {

	int daily_goal_price = 0;
	int expenditure = 0;
	int expenditure_sum = 0;

	printf("�Ϸ� ��ǥ �ݾ��� �Է��ϼ���: \n");
	scanf("%d", &daily_goal_price);
	
	printf("��ǥ �ݾ� : %d\n", daily_goal_price);
	
	while (1) {

		printf("����: ");
		scanf("%d", &expenditure);

		if (expenditure == 'q')	break;
		

		expenditure_sum += expenditure;

		if (daily_goal_price - expenditure_sum >= 0)
		{
			printf("%d���� �� �� �ֽ��ϴ�.\n", daily_goal_price - expenditure_sum);
		}
		else if (daily_goal_price - expenditure_sum < 0)
		{
			printf("%d���� �ʰ��߽��ϴ�.\n", expenditure_sum - daily_goal_price);
		}

		
	}

	
	
	


}