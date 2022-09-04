#include<iostream>
using namespace std;
int main(){
//s=1+1/2+1/3+1/4+....
float n;
float s = 1.0;
for (n = 1.0; n < 100.0; n++)

{
    s = s+(1/n);
    
} 
cout << s << endl;
return 0;
}
