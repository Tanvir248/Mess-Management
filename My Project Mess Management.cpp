#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include <stdlib.h>
int main();
void fordelay(int k)
{
    int h;
    for(int i=0;i<=k;i++)
        h=k;
}
void rent_manage()
    {
    printf("Welcome to our mess rent system: \n\n\n");
        float a, b, c, d, e, f, g, h, Avg_rent;
        printf("Enter Mess Member: \n");
        scanf("%f", &a);

        printf("Enter Mess Rent: \n");
        scanf("%f", &b);

        printf("Electricity Bill: \n");
        scanf("%f", &c);

        printf("Water Bill: \n");
        scanf("%f", &d);

        printf("Internet Bill: \n");
        scanf("%f", &e);

        printf("Gas Bill: \n");
        scanf("%f", &f);

        printf("Security Bill: \n");
        scanf("%f", &g);

        printf("Aunty Bill: \n");
        scanf("%f", &h);

        Avg_rent = (b + c + d + e + f + g + h) / a;

        printf("Per person rent is %0.2f.", Avg_rent);
        fordelay(900000000);
        getch();
        main();
}
void food()
{
    printf("\n\t\t\t\t\t...Welcome to check your food menu: \n\n\n");
    fordelay(900000000);
    printf("Enter day in number: \nFriday = Click 1.\nSaturday = Click 2.\nSunday = Type 3.\nMonday = Click 4.\nTuesday = Click 5.\nWednesday = Click 6.\nThursday = Click 7.\n");

    int a48;

    printf("Enter the day number for check your menu: ");
    scanf("%d", &a48);
    if(a48 =='Friday' || a48 == 'friday'|| a48== 'FRIDAY'|| a48== 1)
	{
        printf("Your Friday Food menu is:\n Meat. \n Cucumber.\n Meat flavoring. \n Rice.\n Potato. \n Dal. \n Pepper. \n Onion. \n Oil. \n ");
    }

    else if(a48=='saturday'||a48=='Saturday'||a48=='SATURDAY'||a48==2)
	{
        printf("Your Saturday Food menu is:\n Fish. \n Vegetable.\n Fish flavoring. \n Others\n");
    }
    else if(a48=='sunday' || a48== 'Sunday'|| a48== 'SUNDAY'|| a48==3)
	{
        printf("Your Sunday Food menu is:\n Egg. \n Vegetable. \n Pepper & others");
    }
    else if(a48=='monday' || a48== 'Monday'|| a48== 'MONDAY'|| a48==4)
	{
        printf("Your Monday Food menu is:\n Meat. \n Cucumber.\n Meat flavoring. \n Rice.\n Potato. \n Dal. \n Pepper. \n Onion. \n Oil. \n ");
    }
   else if(a48=='Tuesday' || a48== 'tuesday'|| a48== 'TUESDAY'|| a48==5)
   {
    printf("Your Tuesday Food menu is:\n Egg. \n Vegetable & others");
   }
   else if(a48=='Wednesday' || a48== 'wednesday'|| a48== 'WEDNESDAY'|| a48==6)
   {
    printf("Your Wednesday Food menu is:\n Fish. \n Vegetable.\n Fish flavoring. \n Others\n\n --> If you want to save money you eat: \n Egg. \n Vegetable. \n Pepper & others ");
   }
   else if(a48=='Thursday' || a48== 'thursday'|| a48== 'THURSDAY'|| a48==7)
   {
        printf("Your Thursday Food menu is:\n Meat. \n Cucumber.\n Meat flavoring.\n Potato.\n\n --> If you want to save meal money and for good health you eat: \n Egg. \n Vegetable & others\n ");

   }
   else
   {
    system("color F4");
    printf("\n\n\t\t\t\t\t...Number Of Day is error...\n");
 fordelay(900000000);
   }
   getch();
   main();
}
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
    printf("\n\n\n");

    printf("%s clean washroom at %d %s 2020.\n", strupr(bx1), ax1,month);
    fordelay(900000000);
    printf("%s clean washroom at %d %s 2020.\n",strupr(bx2), ax2,month);
    fordelay(900000000);
    printf("%s clean washroom at %d %s 2020.\n", strupr(bx3), ax3,month);
    fordelay(900000000);
    printf("%s clean washroom at %d %s 2020.\n", strupr(bx4), ax4,month);
    fordelay(900000000);

    fprintf(f,"%s clean washroom at %d %s 2020.\n", strupr(bx1), ax1,month);
    fprintf(f,"%s clean washroom at %d %s 2020.\n", strupr(bx2), ax2,month);
    fprintf(f,"%s clean washroom at %d %s 2020.\n", strupr(bx3), ax3,month);
    fprintf(f,"%s clean washroom at %d %s 2020.\n", strupr(bx4), ax4,month);

    printf("\n\n\t\t\t\Click any key to continue...");
        getch();
        main();
}
void bazar()
{
    printf("Welcome to Bazar routine: \n\n\n");
    FILE *s;
	s=fopen("Bazar.txt", "a");
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

        printf(" For --> %s = Bazar Day is -->%s\n", strupr(name),strupr(day));

         fprintf(s," For --> %s = Bazar Day is -->%s\n", strupr(name),strupr(day));

         printf("\n\n\t\t\t\Click any key to continue...");

}

        getch();
        main();
}
void meal()
{
printf("\n\n\t\t\t\tWelcome to Bazar routine: \n\n\n");
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

    fordelay(500000000);
    printf("Enter the number of member: ");
    scanf("%d", &n);
    getchar();

    for(i=0;i<n;i++){
            fordelay(500000000);
            printf("\nEnter name of member %d: ", i+1);
        gets(mess[i].name);

        fordelay(500000000);
             printf("\nEnter total meal of %s: ", mess[i].name);
        scanf("%d", &mess[i].meal);
            getchar();
    }
    fordelay(500000000);
        printf("\n\nTotal meal rate is: %0.2lf\n\n", rate);

    for(i=0;i<n;i++){
            fordelay(500000000);

        printf("\n\n%s all meal is %d and total cost is %.2lf\n\n", strupr(mess[i].name),mess[i].meal, (mess[i].meal*rate));
        fprintf(x,"\n%s all meal is %d and total cost is %.2lf\n", strupr(mess[i].name),mess[i].meal, (mess[i].meal*rate));

    printf("\n\n\t\t\t\Click any key to continue...");
    }

        getch();
        main();
    }
    void seat()
{
    	printf("Welcome to manage rent: \n\n\n");

        float x, total_rent, perperson_rent;

        printf("Enter total rent: ");
        scanf("%f", &total_rent);

        printf("Enter number of member: ");
        scanf("%f", &x);

        perperson_rent= total_rent/x;
        printf("Everyone rent is: %.2f", perperson_rent);

        printf("\n\n\t\t\t\Click any key to continue...");


        getch();
        main();
    }
    attandence()
    {
         printf("We update it next time\n");
         printf("\n\n\n\n");

        getch();
        main();
    }
    details()
    {
    int h;
    int k;
    for(int i=0;i<=k;i++)
        h=k;
			printf("\n\n\t\t\t\t\t\t\t Sparta_v.\n\n\n");
        printf("\t\t\tGroup leader : Tanvir Rahman. \t ID: 18192103248\n");
        fordelay(900000000);

        printf("\t\t\tMember 1: Zannatun Nayem Smriti. \t ID: 18192103120\n");
        fordelay(900000000);

        printf("\t\t\ttMember 2: Sakib Bin Habib. \t ID: 18192103246\n");
        fordelay(900000000);

        printf("\t\t\tMember 3: Mustafizur Rahman. \t ID: 18192103253\n");
        fordelay(900000000);

        printf("\t\t\tMember 4: Sanjidur Rahman Fahim. \t ID: 18192103254");

        printf("\n\n\t\t\tClick any key to continue...");

        getch();
        main();
}
int main()
{
    system("cls");
    system("title Sparta_v");
    system("color 1F");
    int n;
    char username[15];
    char password[12];
    printf("\t\t\t\t\t\tEnter your username:\n");
    scanf("%s",&username);

    printf("\t\t\t\t\t\tEnter your password:\n");
    scanf("%s",&password);

    if(strcmp(username,"sparta")==0){
        if(strcmp(password,"sparta")==0){

        printf("\n\t\t\t\t\t\t........Welcome........\n\n \n");
    fordelay(500000000);

    printf("\t\t\t\t\tEnter Number For Your System: ");
    fordelay(500000000);
    printf("\n\nClick 1 for Rent management: ");
    fordelay(500000000);
    printf("\nClick 2 for Bazar routine:  ");
    fordelay(500000000);
    printf("\n Click 3 for washroom clean routine: ");
    fordelay(500000000);
    printf("\n Click 4 for Food menu: ");
    fordelay(500000000);
    printf("\n Click 5 for meal management: ");
    fordelay(500000000);
    printf("\n Click 6 for solve your seat rent if you have all sum of rent: ");
     fordelay(700000000);
    printf("\n Click 7 for Attendance and Manage meal: ");
    fordelay(500000000);
    printf("\n Click 8 for details of this project. ");
    fordelay(500000000);
    printf("\nClick 0 for Exit\n\n");
    fordelay(500000000);
    printf("\t\tClick Now: ");

        }
    else
        {
        	system("color 4");
    printf("\n\n\n\t\t\t\t.....Password Error........");
    system("exit");
    printf("\n\n\n\ Write anything for Exit...");
}
    }
    else
    {
    	system("color F4");
    printf("\n\n\n\t\t\t\t......User Error......");
    system("exit");
    printf("\n\n\n\ Write anything for Exit...");

}

    scanf("%d",&n);

     if(n==1)
        {
            system("title Rent Management");
        	system("color F1");
        rent_manage();
    }

    else if(n==2)
        {
            system("title Bazar Routine");
            system("color FA");
        bazar();
    }
   else if(n==3)
    {
        system("title Washroom Clean");

    	system("color 0E");
        wash();
    }

    else if(n==4)
        {
            system("title Food Menu");

        	system("color 0A");
        food();
    }
    else if(n==5)
        {
            system("title Meal Manage");
        	system("color 74");
        meal();
    }
   else if(n==6)
        {
            system("title Seat Rent");
        	system("color 6D");
        seat();
    }
   else if(n==7)
        {
            system("title Attendance");
        	system("color 0C");
        attandence();
    }
    else if(n==8)
    {
        system("title Details About Sparta_v.");
    	system("color 1F");
        details();
    }
	else if(n==0)
    {
        system("title Exit");
    	system("color 40");
        system("exit");
        printf("Press any key for exit");
    }
    else{ system("title Error");
        if(n>8)
        {
                system("color 40");
            printf("\n\n\t\t\t...Number Error...\n\n\n");
        }
        else{
                system("color 40");
            printf("\n\n\t\t\t...This number has No value...\n\n\n");
            }
    }

    printf("\n\n\n\n\t\t\t\t\t\t....Thanks For Todays Update....");
    return 0;
}
