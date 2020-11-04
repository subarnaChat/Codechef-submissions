#include<boost/multiprecision/cpp_int.hpp>
#include <iostream>
namespace mp=boost::multiprecision;
using namespace std;

int main() {
    mp::cpp_int a,b;
    cin>>a;
    cin>>b;
    mp::cpp_int c=a*b;
    cout<<c<<endl;
	// your code goes here
	return 0;
}
