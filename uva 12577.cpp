#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    string str;
    int i = 1;
    while(1)
    {
        cin>>str;
        if(str == "*")
            break;
        else if(str == "Hajj")
            cout<<"Case"<<' '<<i<<": "<<"Hajj-e-Akbar"<<endl;
        else if(str == "Umrah")
            cout<<"Case"<<' '<<i<<": "<<"Hajj-e-Asghar"<<endl;
        i++;
    }
    return 0;
}
