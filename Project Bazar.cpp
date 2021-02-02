#include<stdio.h>
int main(){
    struct bazar{
        int id;
        int meal;
        char name[100];
    };
    person persons[100];
    int n;
    int i;
    printf("Enter the number of member: ");
    scanf("%d", &n);
    getchar();

    for(i=0;i<n;i++){

        printf("Enter %d member name: ", i+1);
        gets(persons[i].name);
        getchar();

        printf("Enter %d person's id: ", i+1);
        scanf("%d", &persons[i].id);
        getchar();

        printf("Enter %d member meal number: ", i+1);
        scanf("%d", &persons[i].meal);
            getchar();
    }

    for(i=0;i<n;i++){
        printf("%s is %d and  %d\n", persons[i].id, persons[i].name,persons[i].meal);
    }
    return 0;
}

