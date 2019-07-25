#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    return ((a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d));
}

int main() {
    int a, b, c, d;
    cout<<"Enter four numbers: ";
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<"\nLargest Number is : "<<ans;

    return 0;
}
