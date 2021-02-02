#include<stdio.h>
#include<string.h>
int main(){
    struct meal{
       int meal;
        char name[100];
    };
    meal mess[100];
    FILE *x;
    x=fopen("Meal.txt","a");
    int n;
    int i;
    double taka, allmeal, rate;
    printf("Enter All meal cost: " );
    scanf("%lf", &taka);
    printf("Enter all meal: ");
    scanf("%lf", &allmeal);
    rate= (taka/allmeal);
    printf("Enter the number of member: ");
    scanf("%d", &n);
    getchar();

    for(i=0;i<n;i++){

            printf("\nEnter name of member %d: ", i+1);
        gets(mess[i].name);

             printf("\nEnter total meal of %s: ", mess[i].name);
        scanf("%d", &mess[i].meal);
            getchar();
    }
        printf("\n\nTotal meal rate is: %0.2lf\n\n", rate);
    for(i=0;i<n;i++){
        printf("\n\n%s all meal is %d and total cost is %.2lf\n\n", strupr(mess[i].name),mess[i].meal, (mess[i].meal*rate));
        fprintf(x,"\n%s all meal is %d and total cost is %.2lf\n", strupr(mess[i].name),mess[i].meal, (mess[i].meal*rate));
    }

    return 0;
}
