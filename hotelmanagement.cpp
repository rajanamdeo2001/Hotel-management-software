#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;

    // Quantity
    int Qrooms=0 , Qpasta=0 , Qburger=0 , Qnoodles=0 , Qshake=0 , Qchicken=0;
    // Total items sold
    int Srooms=0 , Spasta=0  , Sburger=0 , Snoodles=0 , Sshake=0 , Schicken=0;
    // Total price of items
    int Total_rooms=0 , Total_pasta=0  , Total_burger=0 , Total_noodles=0 , Total_shake=0 , Total_chicken=0;
    
    cout<<"\n\t\t\t Quantity of items we have";
    cout<<"\n\n\n Rooms available : ";
    cin>>Qrooms;
    cout<<"\n Quantity of Pasta : ";
    cin>>Qpasta;
    cout<<"\n Quantity of Burger : ";
    cin>>Qburger;
    cout<<"\n Quantity of Noodles : ";
    cin>>Qnoodles;
    cout<<"\n Quantity of Shake : ";
    cin>>Qshake;
    cout<<"\n Quantity of Chicken-roll : ";
    cin>>Qchicken;

    m:
    cout<<"\n\n\n\t\t Please select from the given menu options ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chichen-roll";
    cout<<"\n7) Information regarding sales and collection ";
    cout<<"\n8) Exit";

    cout<<"\n\n Please enter your choice : ";
    cin>>choice;
    
    switch (choice)
    {
    case 1:
        cout<<"\n\n Enter the number of rooms you want : ";
        cin>>quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms+quant;
            Total_rooms = Total_rooms + (quant*1200);
            cout<<"\n\n\t\t\t"<<quant<<" Room/rooms have been alloted to you";            
        }
        else
            cout<<"\n\tOnly "<<Qrooms-Srooms<<" Rooms remaining in hotel";
            break;

    case 2:
        cout<<"\n\n Enter Pasta quantity : ";
        cin>>quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta+quant;
            Total_pasta = Total_pasta + (quant*250);
            cout<<"\n\n\t\t\t"<<quant<<" Pasta is ordered !";            
        }
        else
            cout<<"\n\tOnly "<<Qpasta-Spasta<<" Pasta remaining in hotel";
            break;

    case 3:
        cout<<"\n\n Enter Burger quantity : ";
        cin>>quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger+quant;
            Total_burger = Total_burger + (quant*120);
            cout<<"\n\n\t\t\t"<<quant<<" Burger is ordered !";            
        }
        else
            cout<<"\n\tOnly "<<Qburger-Sburger<<" Burger remaining in hotel";
            break;

    case 4:
        cout<<"\n\n Enter Noodles quantity : ";
        cin>>quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles = Snoodles+quant;
            Total_noodles = Total_noodles + (quant*140);
            cout<<"\n\n\t\t\t"<<quant<<" Noodles is ordered !";            
        }
        else
            cout<<"\n\tOnly "<<Qnoodles-Snoodles<<" Pasta remaining in hotel";
            break;

    case 5:
        cout<<"\n\n Enter Shake quantity : ";
        cin>>quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake+quant;
            Total_shake = Total_shake + (quant*120);
            cout<<"\n\n\t\t\t"<<quant<<" Shake is ordered !";            
        }
        else
            cout<<"\n\tOnly "<<Qshake-Sshake<<" Shake remaining in hotel";
            break;
    
    case 6:
        cout<<"\n\n Enter Chicken-roll quantity : ";
        cin>>quant;
        if (Qchicken - Schicken >= quant)
        {
            Schicken = Schicken+quant;
            Total_chicken = Total_chicken + (quant*150);
            cout<<"\n\n\t\t\t"<<quant<<" Chicken-roll is ordered !";            
        }
        else
            cout<<"\n\tOnly "<<Qchicken-Schicken<<" Chicken-roll remaining in hotel";
            break;

    case 7:
        cout<<"\n\n\t\tDeatails of sales and collection : ";

        cout<<"\n\n Number of rooms we had : "<<Qrooms;
        cout<<"\n\n Number of rooms we gave for rent : "<<Srooms;
        cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
        cout<<"\n\n Total room's collection for the day : "<<Total_rooms;

        cout<<"\n\n\n Number of pasta we had : "<<Qpasta;
        cout<<"\n\n Number of pasta we sold : "<<Spasta;
        cout<<"\n\n Remaining pasta : "<<Qpasta-Spasta;
        cout<<"\n\n Total pasta's collection for the day : "<<Total_pasta;

        cout<<"\n\n\n Number of burger we had : "<<Qburger;
        cout<<"\n\n Number of burger we sold : "<<Sburger;
        cout<<"\n\n Remaining burger : "<<Qburger-Sburger;
        cout<<"\n\n Total burger's collection for the day : "<<Total_burger;

        cout<<"\n\n\n Number of noodles we had : "<<Qnoodles;
        cout<<"\n\n Number of noodles we sold : "<<Snoodles;
        cout<<"\n\n Remaining noodles : "<<Qnoodles-Snoodles;
        cout<<"\n\n Total noodle's collection for the day : "<<Total_noodles;

        cout<<"\n\n\n Number of shake we had : "<<Qshake;
        cout<<"\n\n Number of shake we sold : "<<Sshake;
        cout<<"\n\n Remaining shake : "<<Qshake-Sshake;
        cout<<"\n\n Total shake's collection for the day : "<<Total_shake;

        cout<<"\n\n\n Number of Chichen-roll we had : "<<Qchicken;
        cout<<"\n\n Number of chicken-roll we sold : "<<Schicken;
        cout<<"\n\n Remaining chicken-roll : "<<Qchicken-Schicken;
        cout<<"\n\n Total chicken-roll's collection for the day : "<<Total_chicken;
        break;

    case 8:
        exit(0);
         
    default:
        cout<<"\nWarning : Please select the numbers mentioned above!";
    }
    goto m;

}
