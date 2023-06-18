/*Author : R.Magarajeswari*/
/*Date :17-06-2023*/
/*Problem : When a customer orders a product from a vendor , he has to check the customers's credit terms , payment history and inventory before he proceeds
with the fulfillment of the order*/
#include<stdio.h>
int main()
{
    int order_quantity;
    int credit_days;
    int inventory=1000;        /*current stock availability of the item*/
    int credit_days_nom=60;    /*Nominal credit days allowed for this particular product*/
    int pending_quantity=0;
    printf("Enter the quantity ordered by the customer:");
    scanf("%d",&order_quantity);
    printf("Enter the number of credit days requested by the customer:");
    scanf("%d",&credit_days);
    if(order_quantity<=inventory && credit_days<=credit_days_nom)
    {
        printf("Proceed with the order");
    }else if(order_quantity>inventory && credit_days<=credit_days_nom)
    {
        pending_quantity=order_quantity-inventory;
        printf("Supply %d out of %d immediately and inform the customer regarding the lead time for %d numbers", inventory,order_quantity,pending_quantity);
    }else if((order_quantity<=inventory && credit_days>credit_days_nom)||(order_quantity>inventory && credit_days>credit_days_nom))
    {
        printf("Inform the customer regarding the maximum credit terms. Check with the possibilities of increasing the credit terms with the management.");
    }
  return 0;
}
