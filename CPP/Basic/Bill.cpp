#include <iostream>

using namespace std;

int main()
{
    float rate,qty,amt,dis,billamt,gst,netbill;

    cout << "Enter the rate of the item :-> ";
    cin >> rate;
    cout << "Enter the quantity of the item :-> ";
    cin >> qty;
    amt = qty * rate;
    dis = amt * 0.05;
    billamt = amt - dis;
    gst = billamt * 0.18;
    netbill = billamt + gst;

    cout << "Rate    |Qty    |Amt    |Dis(5%)|Billamt |Gst(18%)  |Netbill" << endl;
    cout << rate << "\t|" << qty << "\t|" << amt << "\t|" << dis << "\t|" << billamt << "\t |" << gst << "    |" << netbill << endl;

    return 0;
}