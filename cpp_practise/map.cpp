/*
It is a combination of two array
https://www.youtube.com/watch?v=1_DbGQyxMzM&list=PLrKBFf87Cy9Ck9H7dHpsu8456B4rWQzfT&index=6
*/

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){

    // checking Enter Key ASCII value
    // char val;
    //     cin.get(val);
    //     if (val==10)
    //         cout<<"man: "<<val<<endl;
    //     else
    //         cout<<"tui ke re\n";

    map <string,int> coffee{
        {"Espresso",50}, {"Milk", 30}, {"Tea",12}
        };

        // Also possible to entry data as like as follows
        coffee["cold_drinks"] = 43;
        char c;
        string name; int price;
        do{  
                cout<<"Product name is: ";
                cin >>name;
                cout<<"Price is: ";
                cin>>price;
                coffee.insert(make_pair(name,price));
                cin>>c;
        }while(c!='y');

        cout<<"\n\n----------------------- Adding is finished -----------------------\n\n";

        // printing map

        map <string, int> :: iterator it = coffee.begin();
        for(it; it != coffee.end(); ++it){
            cout<<it->first<<" : "<<it->second<<endl;
        }

        return 0;
}