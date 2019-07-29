#include<iostream>
using namespace std;
void ap(int a,int b,int n){
    int d=b-a;
    cout<<"nth number of your AP is : "<<a+(n-1)*d<<endl;
}
int main() {
	//code
	int t,a,b,n;
	cout<<"Enter Total Number of test cases: ";
	cin>>t;
	while(t>0){
            cout<<"Enter first ,second and nth number to find: ";
	    cin>>a>>b>>n;
	    ap(a,b,n);
	    t--;
	}
	return 0;
}
