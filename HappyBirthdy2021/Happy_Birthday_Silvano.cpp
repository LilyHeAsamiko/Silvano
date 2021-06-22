/******************************************************************************

Happy birthday to my little guy Silvano Yang Sinuo

Hope all the best for you and can see you soon.


Lumina mox in die festo 
Offensichtlich bin ich immer noch von dir getrennt
в зависимости от отложенной встречи
E zhi bu zhu de shi yi ding yao he ni shi pin de jue xin yi ji hui lai kan ni de dong li 
U are always my love forever.

Qin He(Mom)_LilyHeAsamiko

*********************************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    std::vector<string> msg {"Hello", "Silvano!", "Happy birthday!"};
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    double InValue ;
    cout << "Type the currency amount(single country first): ";
    cout << endl;
    cin >> InValue;

    std::string InCurrency;
    cout << "Type the currency of note: \n (RSD: 1, DEM: 2, BYR: 3, EUR: 4, RUB: 5, GBP:6): \n";
    cin >> InCurrency; // get the currency for change
    std::stringstream  data(InCurrency);
    int InCurrency1;
    data >> InCurrency1;
        
    try {
        if (InCurrency1 <=6 && InCurrency1 >=1) {
            double OutCurrency = 0.0;
//            switch(InCurrency){
//              case '1':
            switch(InCurrency1){
                case 1:
//                    OutCurrency = double(InValue)*0.065;
                    OutCurrency = OutCurrency + InValue*0.065;
//                    cout <<OutCurrency;
                    break;
                case 2:
                    OutCurrency = OutCurrency + InValue*3.934;
//                    cout <<OutCurrency;
                    break;
                case 3:
                    OutCurrency = OutCurrency + InValue*0.0006;
//                    cout <<OutCurrency;
                    break;
                case 4:
                    OutCurrency = OutCurrency + InValue*7.695;
//                    cout <<OutCurrency;
                    break;
                case 5:
                    OutCurrency = OutCurrency + InValue*0.08835;
//                    cout <<OutCurrency;
                    break;
                case 6:
                    OutCurrency = OutCurrency + InValue*8.992;
//                    cout <<OutCurrency;
                    break;
            }
            cout << "You got Chinese Yuan: " << OutCurrency << '\n';
        }else {
        throw (InCurrency1);
        }
    }
    catch (...) {
    cout << "Access denied - Currency Region Number must be from 1 to 6.\n";
    }
    cout << endl;

    std::string InCurrency2;
//    std::stringstream  data(InCurrency2);
    int N;
    cout << "Type currency of note from multi regions ascendingly: \n ";
    cout << endl;
    cin >> InCurrency2;
    N = InCurrency2.length();
    try{
        if(N <= 6 && N>= 2){
            double OutCurrency2 = 0.0;
            int a;
            for (a = N-1;a >= 0;a--) {
                double InValue2temp;
                cout << "Type the amount of currency of " << a << ':';
                cin >> InValue2temp;
                switch (InCurrency2[a]){
                        case '1':
                            OutCurrency2 = OutCurrency2 + InValue2temp*0.065;
                            break;
                        case '2':
                            OutCurrency2 = OutCurrency2 + InValue2temp*3.934;
                            break;
                        case '3':
                            OutCurrency2 = OutCurrency2 + InValue2temp*0.0006;
                            break;
                        case '4':
                            OutCurrency2 = OutCurrency2 + InValue2temp*7.695;
                            break;
                        case '5':
                            OutCurrency2 = OutCurrency2 + InValue2temp*0.08835;
                            break;
                        case '6':
                            OutCurrency2 = OutCurrency2 + InValue2temp*8.992;
                            break;
                }
            }
            cout << "You got Chinese Yuan: " << OutCurrency2;
        }else{
        throw (InCurrency2);
        }
    }
    catch (...) {
    cout << "Access denied - Total number of currencies from multi regions must be from 2 to 6.\n";
    }
           
    cout << endl;
    
    return 0;
}