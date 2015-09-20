#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

struct tshirt{
    string size_s;
    string seller;
    string buyer;
};
//sort size
bool sort_by_size(const tshirt & lhs, const tshirt & rhs)
{
    return lhs.size_s < rhs.size_s;
}
//sort seller
bool sort_by_seller(const tshirt & lhs, const tshirt & rhs)
{
    return lhs.seller < rhs.seller;
}
bool sort_by_buyer(const tshirt & lhs, const tshirt & rhs)
{
    return lhs.buyer < rhs.buyer;
}

int main()
{
    while (1){
        int N;
        cin >> N;
        tshirt tshirt[100];
        //getchar();
        for(int a=0;a<N;a++)
        {
            string dump;
            getline(cin,dump);
            //cout << dump << endl;
            tshirt[a].buyer = dump;
            cin >> tshirt[a].seller;
            cin >> tshirt[a].size_s;
            //cout << tshirt[a].buyer << endl;
        }
        sort(tshirt,tshirt+N,sort_by_buyer);
        cout << tshirt[0].buyer  << endl;
    }
}
