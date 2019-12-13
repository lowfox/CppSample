#include<iostream>

using namespace std;

template<typename T,typename U>
U sum(T a,U b){ 
    return a + b;
}


int main(void){
    int a=4,b=5;
    float c=2.8,d=3.3;
    char e=10,f=20;
    int g=255;
    float h=4.332223;

    
    cout<<"int+int "<< sum(a,b)<<endl;
    cout<<"float+float "<<sum(c,d)<<endl;
    cout<<"char+char "<<sum(e,f)<<endl;
    cout<<"int+float "<<sum(g,h)<<endl;
    cout<<"int(255)+char "<<sum(e,g)<<endl;
    cout<<"cahr+float "<<sum(e,h)<<endl;
    cout<<"hello"<<endl;
    cout<<"hi!"<<endl;
    return 0;
}

