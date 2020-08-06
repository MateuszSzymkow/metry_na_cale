#include <iostream>

using namespace std;
float metry;

ile_cali(float m)
{
    float cale;
    cale=m*39.37;
    return cale;
}

int main()
{
    cout << "Podaj ilosc metrow: " << endl;
    cin>>metry;
    ile_cali(metry);
    cout<<"Po przeliczeniu to: "<<ile_cali(metry)<<" cali";

    return 0;
}
