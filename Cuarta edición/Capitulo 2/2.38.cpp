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
//Este programa calcula la formaula e=1+(1/1!)+(1/2!)+(1/3!)+...+(1/n!)
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    int n,m;
    double sum;
    long long res;
    cout<<"escriba un numero mayor a 0 que limite la formula: ";
    cin>>n;
    res=1;
    sum=1;
    m = 1;
    while(m<=n){
        res *= m;
        sum += (double)1/res;
        m++;
    }
    cout<<sum;
}

