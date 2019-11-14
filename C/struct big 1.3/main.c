//update a series of customer accounts (billing system)
//maintain the customer account as an external array of structure

#include <stdio.h>

void readinput(int i);
void writeoutput(int i);

struct date
{
    int month;
    int day;
    int year;
};
struct account
{
    char name[80];
    char street[80];
    char city[80];
    int acct_no;
    char acct_type;              //C-current, O-overdue, D-delinquent
    float oldbalance;
    float newbalance;
    float payment;
    struct date lastpayment;
}customer[100];

main()
{
    int i,n;

    printf("Customer billing system\n\n");
    printf("How many customer are there?");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        readinput(i);
        //determine account status
        if(customer[i].payment>0)
            customer[i].acct_type=(customer[i].payment<0.1*customer[i].oldbalance)?'O':'C';
        else
            customer[i].acct_type=(customer[i].oldbalance>0)?'D':'C';
        //adjust account balance
        customer[i].newbalance=customer[i].oldbalance-customer[i].payment;

    }
    for(i=0;i<n;++i)
        writeoutput(i);
}
void readinput(int i)      //read input data update record for each customer
{
    printf("\nCustomer no. %d",i+1);
    getchar();
    printf("Name: ");
    getchar();
    scanf("%[^\n]",customer[i].name);
    getchar();
    printf("Street: ");
    getchar();
    scanf("%[\n]",customer[i].street);
    getchar();
    printf("City: ");
    getchar();
    scanf("%[^\n]",customer[i].city);
    getchar();
    printf("Account number: ");
    scanf("%d",&customer[i].acct_no);
    printf("Previous balance: ");
    scanf("%f",&customer[i].oldbalance);
    printf("Current payment: ");
    scanf("%f",&customer[i].payment);
    printf("Payment date (mm/dd/yy): ");
    scanf("%d/%d/%d",&customer[i].lastpayment.month,
                     &customer[i].lastpayment.day,
                     &customer[i].lastpayment.year);

    return;

}

void writeoutput(int i) //display information for each customer
{
    printf("\nName: %s\n",customer[i].name);
    printf("Account number: %d\n",customer[i].acct_no);
    printf("Street: %s\n",customer[i].street);
    printf("City: %s\n",customer[i].city);
    printf("Old balance: %7.2f\n",customer[i].oldbalance);
    printf("Current payment: %7.2f\n",customer[i].payment);
    printf("New balance: %7.2f\n",customer[i].newbalance);
    printf("Account status: ");

    switch(customer[i].acct_type)
    {
    case 'C':
        printf("CURRENT\n\n");
        break;
    case 'O':
        printf("OVERDUE\n\n");
        break;
    case 'D':
        printf("DELINQENT\n\n");
        break;
    default:
        printf("ERROR\n\n");
    }
    return;
}
