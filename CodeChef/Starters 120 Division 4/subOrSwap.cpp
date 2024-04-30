#include <bits/stdc++.h>
using namespace std;

void call(int &X, int &Y){
    while (X != 0) {
        if (X > Y) {
            swap(X, Y);
        }
        Y = Y - X;
    }
    cout<<Y<<endl;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int x,y;
	    cin>>x>>y;
	    cout<<__gcd(x,y)<<endl;
	    //cout<<y<<endl;
	}

}