#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;


//calculates 15% tip and returns it to main
float calculate_15(float st)
{
    return st*0.15;
}

//calculates 18% tip and returns it to main
float calculate_18(float st)
{
    return st*0.18;
}

//calculates 20% tip and returns it to main
float calculate_20(float st)
{
    return st*0.20;
}

int main()
{

    float subtotal = 0;
    cout << "Please enter the Subtotal: ";
    cin >> subtotal;        //take in subtotal value

    float fifteen = calculate_15(subtotal); //calculate 15%
    float eighteen = calculate_18(subtotal); //calculate 18%
    float twenty = calculate_20(subtotal); //calculate 20%

    std::cout << std::setprecision(2) << std::fixed;    //needed to print only 2 decimal values

    //total with 15%
    float total_15 = subtotal + fifteen;
    //rounded up
    float up_15 = ceilf(total_15);
    //rounded down
    float down_15 = floorf(total_15);
    //total with 18%
    float total_18 = subtotal + eighteen;
    //rounded up
    float up_18 = ceilf(total_18);
    //rounded down
    float down_18 = floorf(total_18);
    //total with 20%
    float total_20 = subtotal + twenty;
    //rounded up
    float up_20 = ceilf(total_20);
    //rounded down
    float down_20 = floorf(total_20);

    //Tip calculation pt. 2, with rounded total values
    float up_15_tip = up_15 - subtotal;
    float down_15_tip = down_15 - subtotal;
    float up_18_tip = up_18 - subtotal;
    float down_18_tip = down_18 - subtotal;
    float up_20_tip = up_20 - subtotal;
    float down_20_tip = down_20 - subtotal;

    //print tip, total amounts, and rounded values
    cout << "Fifteen = " << fifteen << endl;
    cout << "Total_Fifteen = " << total_15 << endl;
    cout << "Rounded Up = " << up_15 <<  "--> Actual Tip = " << up_15_tip << endl;
    cout << "Rounded down = " << down_15 << "--> Actual Tip = " << down_15_tip << endl; 
    cout << "Eighteen =  " << eighteen << endl;
    cout << "Total_Eighteen =  " << total_18 << endl;
    cout << "Rounded Up = " << up_18 <<  "--> Actual Tip = " << up_18_tip << endl;
    cout << "Rounded down = " << down_18 << "--> Actual Tip = " << down_18_tip << endl; 
    cout << "Twenty =  " << twenty << endl;
    cout << "Total_Twenty =  " << total_20 << endl;
    cout << "Rounded Up = " << up_20 <<  "--> Actual Tip = " << up_20_tip << endl;
    cout << "Rounded down = " << down_20 << "--> Actual Tip = " << down_20_tip << endl; 

    return 0;
}