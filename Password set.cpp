#include<stdio.h>
#include<windows.h>
#include<conio.h>
int main();
void wash()
{
    FILE *f;
    f=fopen("Washroom.txt","a");
    printf("Welcome to check your washroom clean routine: \n\n\n");

    printf("Every mess we see that one week later they clean washroom. So we don't take more then 4 people in a month And they clean it some specifce date, so please:\n Enter the name for less then 4 or equal 4: \n");

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

    printf("%s clean washroom at %d %s 2020.\n", bx1, ax1,month);
    printf("%s clean washroom at %d %s 2020.\n", bx2, ax2,month);
    printf("%s clean washroom at %d %s 2020.\n", bx3, ax3,month);
    printf("%s clean washroom at %d %s 2020.\n", bx4, ax4,month);


    fprintf(f,"%s clean washroom at %d %s 2020.\n", bx1, ax1,month);
    fprintf(f,"%s clean washroom at %d %s 2020.\n", bx2, ax2,month);
    fprintf(f,"%s clean washroom at %d %s 2020.\n", bx3, ax3,month);
    fprintf(f,"%s clean washroom at %d %s 2020.\n", bx4, ax4,month);

        getch();
        main();
}
void bazar()
{
    printf("Welcome to Bazar routine: \n\n\n");

	printf("Start routine management for Bazar :--> \n");

    int n, i, j;
    char name[100], day[100];

    printf("Enter the number of member: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter the name of member %d: ",i+1);

        scanf("%s", &name);
        printf("Enter the days name %d: ",i+1);

        scanf("%s", &day);

        printf(" For --> %s = Bazar Day is -->%s\n", name,day);
    getch();
    main();
}
}

int main()
{
    system("cls");
    system("color E0");
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        wash();
    }
    else if(n==2){
        bazar();
    }
    return 0;
}
