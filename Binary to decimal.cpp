#include<iostream>
#include<cmath>
using namespace std;

int main() {
	//code
		long long int t,n,dec,k;
		cout<<"Enter total cases: ";
		cin>>t;
		while(t>0){
            cout<<"Enter Binary number: ";
            cin>>n;
            k=0;
            dec=0;
            while(n>0){
                dec+=n%10*pow(2,k);
                k++;
                n=n/10;
            }
            cout<<"Decimal conversion is :" <<dec<<endl;
            --t;
		}
	return 0;
}

