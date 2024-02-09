#include <stdio.h>

int main()
{
    float rate,qty,amt,dis,billamt,gst,netbill;

    printf("Enter the rate of the item :-> ");
    scanf("%f",&rate);
    printf("Enter the quantity of the item :-> ");
    scanf("%f",&qty);
    
    amt=rate*qty;
    dis=amt*0.05;
    billamt=amt-dis;
    gst=billamt*0.18;
    netbill=billamt+gst;

    printf("Rate      |Qty      |Amt      |Dis(5%)      |Billamt      |Gst(18%)      |Netbill\n");
    printf("%.2f     |%.2f    |%.2f   |%.2f       |%.2f       |%.2f       |%.2f",rate,qty,amt,dis,billamt,gst,netbill);

    return 0;
}