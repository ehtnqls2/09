#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i;
	int grade[SIZE];
	printf("5명의 점수를 입력하세요.\n");
	
	for(i=0;i<SIZE;i++)
		scanf("%d",&grade[i]);
		
	for(i=0;i<SIZE;i++)
		printf("grade[%d]=%d\n",i,grade[i]);
		
	return 0;
}

int main(void)
{
	int i,average;
	int sum;
	int grade[SIZE];
	sum=0;
	for(i=0;i<SIZE;i++)
	{
		printf("학생 성적을 입력하세요:");
		scnaf("%d",&grade[i]);
		sum+=grade[i];	
	}
	average=sum/SIZE;
	printf("성적평균:%d\n",average);
	return 0;
}
