#include <iostream>
using namespace std;

int fib(int num)
{
	if (num==0){
		return 0;
	}
	if (num==1){
		return 1;
	}
    return fib(num-1) + fib(num-2);
}

int main(){
	int n;
	cin>>n;
	int sum=0;
	for (int i=0;i<n;i++){
//		cout<<fib(i)<<" ";
		sum+=fib(i);
	}
	cout<<"\n"<<"Sum = "<<sum;
}
