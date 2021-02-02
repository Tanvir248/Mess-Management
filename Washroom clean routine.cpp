#include<stdio.h>
int main()
{
    	//printf("Welcome to check your washroom clean routine: \n\n\n");

        //printf("Every mess we see that one week later they clean washroom. So we don't take more then 4 people in a month And they clean it some specifce date, so please:\n Enter the name for less then 4 or equal 4: \n");

		int ax1=7, ax2= 14, ax3=21, ax4=28;

    char bx1[20], bx2[20], bx3[20], bx4[20], month[20];

    printf("Enter Month name: ");
    scanf("%s", month);

    printf("Enter name who clean washroom first week: ");
    scanf("%s", bx1);

    printf("Enter name who clean washroom Second week: ");
    scanf("%s", bx2);

    printf("Enter name who clean washroom third week: ");
    scanf("%s", bx3);

    printf("Enter name who clean washroom fourth week: ");
    scanf("%s", bx4);

    printf("\n\n\n%s clean washroom at %d %s 2020.\n", bx1, ax1,month);
    printf("%s clean washroom at %d %s 2020.\n", bx2, ax2,month);
    printf("%s clean washroom at %d %s 2020.\n", bx3, ax3,month);
    printf("%s clean washroom at %d %s 2020.\n", bx4, ax4,month);
    return 0;
    }
