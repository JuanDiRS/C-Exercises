//Este programa encuentra el factorial de un numero positivo;
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    int n,m;
    long long res;
    cout<<"Ingrese un numero mayor a 0: ";
    res=1;
    m = 1;
    cin>>n;
    while(m<=n){
        res *= m;
        m++;
    }
    cout<<res;
}
