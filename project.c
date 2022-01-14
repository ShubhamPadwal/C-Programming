#include <stdio.h>
int main()
{
    int ch,qty;
    int bill, bch;


    
    printf("\n\t\t\t Venky's Express");
    printf("\n1. Tea Rs.12");
    printf("\n2. Coffee Rs.50");
    printf("\n3. Cold coffee Rs.70");
    printf("\n4. Burger ");
    printf("\nbc1.veg burger Rs.100");
    printf("\nbc2.chicken burger Rs.200");
    printf("\n5. Pizza");
    printf("\npc1.small pizza Rs.200");
    printf("\npc2.regular pizza Rs.300");
    printf("\npc3.large pizza Rs.500");
    printf("\n6. Naggets Rs.200");
    printf("\n7. French fries Rs.100");
    printf("\n8. Sandwich Rs.100");
    printf("\n9. Coke Rs.50");
    printf("\n10. Softy Rs.30");


    printf("\nPlease select your choice ");
    scanf("%d",&ch);

    if(ch==1)
    {
        printf("You have selected Tea");
        printf("\nPlease enter the quantity for tea ");
        scanf("%d",&qty);
        bill=qty*12;
        printf("\n The tea bill amount is %d",bill);
    }//end of tea

    else if(ch==2)
    {
        printf("You have selected Coffee");
        printf("\nPlease enter the quantity for coffee");
        scanf("%d",&qty);
        bill=qty*50;
        printf("\n The coffee bill amount is %d",bill);
    }// End of coffee

    else if(ch==3)
    {
        printf("You have selected Cold coffee");
        printf("\nPlease enter the quantity for coffee");
        scanf("%d",&qty);
        bill=qty*70;
        printf("\n The cold coffee bill amount is %d", bill);
    }// End of Cold coffee

    else if(ch==4)
    {
        printf("\n You have order for burger");
        printf("\n Press 1 for veg burger "  );
        printf("\n Press 2 for chicken burger ");
        scanf("%d",&bch);

        if(bch==1)
        {
            printf("Please enter quantity for veg burger ");
            scanf("%d",&qty);

            bill=qty*100;
            printf("\n The burger bill amount is %d",bill);
        }

        else if(bch==2)
        {
            printf("Please enter quantity for chicken burger ");
            scanf("%d",&bch);

            bill=qty*200;
            printf("\n The burger bill amount is %d ", bill);
        }

        else
        {
            printf("You have entered invalid choice");
        }

    }// End of Burger

    else if(ch==5)
    {
         printf("\n You have order for pizza");
        printf("\n Press 1 for small size ");
        printf("\n Press 2 for regular size ");
        printf("\n Press 3 for Large size ");
        scanf("%d",&bch);

        if(bch==1)
        {
            printf("\nPlease enter quantity for small size ");
            scanf("%d",&qty);

            bill=qty*200;
            printf("\n The pizza bill amount is %d", bill);

        }


        else if(bch==2)
        {
            printf("Please enter quantity for Regular size ");
            scanf("%d",&qty);

            bill=qty*300;
            printf("\n The pizza bill amount is %d",bill);
        }

        else if(bch==3)
        {
            printf("Please enter quantity for Large size ");
            scanf("%d",&qty);

            bill=qty*500;
            printf("\n The pizza bill amount is %d",bill);
        }

        else
        {
            printf("You have entered invalid choice");
        }

    }// End of pizza

    else if(ch==6)
    {
        printf("You have selected Nugget");
        printf("\nPlease enter the quantity for Nugget");
        scanf("%d",&qty);
        bill=qty*200;
        printf("\n The nugget bill amount is %d", bill);
    }// End of Nugget

    else if(ch==7)
    {
        printf("You have selected French fries");
        printf("\nPlease enter the quantity for French fries");
        scanf("%d",&qty);
        bill=qty*100;
        printf("\n The french fries bill amount is %d", bill);
    }// End of French fries

    else if(ch==8)
    {
        printf("You have selected Sandwich");
        printf("\nPlease enter the quantity for Sandwich");
        scanf("%d",&qty);
        bill=qty*100;
        printf("\n The Sandwich bill amount is %d", bill);
    }// End of Sandwich

    else if(ch==9)
    {
        printf("You have selected coke");
        printf("\nPlease enter the quantity for coke");
        scanf("%d",&qty);
        bill=qty*50;
        printf("\n The coke bill amount is %d", bill);
    }// End of Coke

    else if(ch==10)
    {
         printf("You have selected Softy");
        printf("\nPlease enter the quantity for softy ");
        scanf("%d",&qty);
        bill=qty*30;
        printf("\n The coke bill amount is %d", bill );
    
    }// End of Softy

    else
    {
        printf("You have entered invalid choice");
    }

 return 0;
    
}