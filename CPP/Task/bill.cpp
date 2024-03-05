#include<iostream>

using namespace std;

class Restorent
{
    public:

    Restorent();

    int dish_no,dish_qty;
    string iteam_name[50];
    int a[50]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    double bill;
    double bill_calculation()
    {
        cout << "Enter the Dish no :-> ";
        cin >> dish_no;
        cout << "Enter the qty :-> ";
        cin >> dish_qty;

        switch (dish_no)
        {
        case 1:
            iteam_name[0] = "Manchow Soup";
            a[0] += dish_qty;
            bill = bill+(dish_qty*100);
            break;
        
        case 2:
            iteam_name[1] = "Broccoli Soup";
            a[1] += dish_qty;
            bill = bill+(dish_qty*250);
            break;

        case 3:
            iteam_name[2] = "Tomato Soup";
            a[2] += dish_qty;
            bill = bill+(dish_qty*100);
            break;

        case 4:
            iteam_name[3] = "Manchurian";
            a[3] += dish_qty;
            bill = bill+(dish_qty*140);
            break;
        
        case 5:
            iteam_name[4] = "Hakka Noodles";
            a[4] += dish_qty;
            bill = bill+(dish_qty*140);
            break;

        case 6:
            iteam_name[5] = "Chili Paneer";
            a[5] += dish_qty;
            bill = bill+(dish_qty*180);
            break; 

        case 7:
            iteam_name[6] = "Jini Roll";
            a[6] += dish_qty;
            bill = bill+(dish_qty*200);
            break; 

        case 8:
            iteam_name[7] = "Palak Panner";
            a[7] += dish_qty;
            bill = bill+(dish_qty*180);
            break;

        case 9:
            iteam_name[8] = "Masala Dosa";
            a[8] += dish_qty;
            bill = bill+(dish_qty*120);
            break;

        case 10:
            iteam_name[9] = "Raja Rani";
            a[9] += dish_qty;
            bill = bill+(dish_qty*220);
            break;

        case 11:
            iteam_name[10] = "Gotalo";
            a[10] += dish_qty;
            bill = bill+(dish_qty*240);
            break;

        case 12:
            iteam_name[11] = "Panneer Tikka";
            a[11] += dish_qty;
            bill = bill+(dish_qty*200);
            break;

        case 13:
            iteam_name[12] = "Paneer Bhurji";
            a[12] += dish_qty;
            bill = bill+(dish_qty*250);
            break;

        case 14:
            iteam_name[13] = "Paneer Masal";
            a[13] += dish_qty;
            bill = bill+(dish_qty*220);
            break;

        case 15:
            iteam_name[14] = "Kaji Kari";
            a[14] += dish_qty;
            bill = bill+(dish_qty*250);
            break;

        default:
            cout << "Invalid Input" << endl;
            break;
        }
        return bill;
    }

    void Get_order()
    {
        cout << "*********************************" << endl;
        cout << "-->|your Orderd Details|<-- "<<endl;
        cout << "*********************************" << endl;
        for ( int i = 0; i <= 14; i++)
        {
            if (!iteam_name[i].empty())
            {
                cout<<iteam_name[i]<<" :-> "<<a[i]<<endl;
            }
        }
    }

    double discount(double disc)
    {
        if(disc>5000)
        {
            disc = disc*0.1;
            return disc;
        }
        else
        {
            disc = 0;
            return disc;
        }
    }

    double gst_calculation(double gst)
    {
        gst = gst*0.18;
        return gst;
    }

    double cancel(){
        for(int i=0;i<14;i++){
            if(a[i]>0)
            {
                a[i]=0;
                iteam_name[i]="";
            }
        }
        return bill = 0;
    }
};

Restorent::Restorent(void)
{
    cout << "Welocome To My Cafe" << endl;
    cout << "               SOUP            " << endl << endl;
    cout << "No     Iteam                   Price" << endl;
    cout << "1.     Manchow Soup            100" << endl;
    cout << "2.     Broccoli Soup           250" << endl;
    cout << "3.     Tomato Soup             100" << endl;
    cout << "-------------------------------------"<< endl;
    cout << "               Chinese          " << endl << endl;
    cout << "No     Iteam                   Price" << endl;
    cout << "4.     Manchurian              140" << endl;
    cout << "5.     Hakka Noodles           140" << endl;
    cout << "6.     Chili Paneer            180" << endl;
    cout << "-------------------------------------"<< endl;
    cout << "               Dosa             " << endl << endl;
    cout << "No     Iteam                   Price" << endl;
    cout << "7.     Jini Roll               200" << endl;
    cout << "8.     Palak Panner            180" << endl;
    cout << "9.     Masala Dosa             120" << endl;
    cout << "10.    Raja Rani               220" << endl;
    cout << "-------------------------------------"<< endl;
    cout << "               Sabji            " << endl << endl;
    cout << "No     Iteam                   Price" << endl;
    cout << "11.    Gotalo                  240" << endl;
    cout << "12.    Paneer Tikka            200" << endl;
    cout << "13.    Paneer Bhurji           250" << endl;
    cout << "14.    Paneer Masal            220" << endl;
    cout << "15.    Kaju Kari               250" << endl;
    // cout << "16.    Kaju Masala             240" << endl;
    // cout << "17.    Kaju Lasan              260" << endl;
    // cout << "18.    Mix Veg                 200" << endl;
    // cout << "-------------------------------------"<< endl;
    // cout << "               Bread            " << endl << endl;
    // cout << "No     Iteam                   Price" << endl;
    // cout << "19.    Naan                    180" << endl;
    // cout << "20.    Gralic Naan             220" << endl;
    // cout << "21.    Tanduri Naan            250" << endl;
    // cout << "22.    Roti                    80" << endl;
    cout << "-------------------------------------"<< endl << endl;
}

int main()
{
    int n;
    double b,gst,total_bill,discount;
    Restorent obj;

    do
    {
        cout << "1. Order dish" << endl;
        cout << "2. Bill" << endl;
        cout << "3. Cancel Order" << endl;
        cout << "Enter your choice :-> ";
        cin >> n;

        switch (n)
        {
        case 1:
            b=obj.bill_calculation();
            break;

        case 3:
            b=obj.cancel();
            break;

        default:
            cout << "Invalid Output" << endl;
            break;
        }

    } while (n!=2);

    obj.Get_order();


    cout << "*********************************" << endl;
    cout << "*********************************" << endl;
    cout << "your bill amount :-> " << b << endl;    
    discount = obj.discount(b);
    b = b-discount;
    cout << "Discount :-> " << discount << endl;
    gst = obj.gst_calculation(b);
    cout << "GST(18%) :-> " << gst << endl;
    total_bill = b+gst;
    cout << "Total Bill :-> " << total_bill << endl;


    return 0;
}