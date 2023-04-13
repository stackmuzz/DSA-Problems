#include <iostream>
#include <string>
#include <random>
#include <ctime>
using namespace std;

int main(){
cout<<"****    Skeletons v/s Humans      ****"<<endl;
int skeletons,humans;
cout<<"Enter the no. of skeletons and humans resp. :"<<endl;
cin>>skeletons>>humans;
int hs=100;
int hh=150;

int cs=skeletons;
int ch=humans;
default_random_engine rg(time(0));
uniform_real_distribution<float> attackRoll(0.0f,1.0f);
cout<<"Battle Starts!!!"<<endl;
cout<<"Skeletons are winning!!!"<<endl;
cout<<"humans are winning !!!"<<endl;
cout<<"Loud noises !!!"<<endl;

while(cs>0 && ch>0){
float res=attackRoll(rg);
if(res<0.5f){
    if(hs>0){
hs-=60; // human damage
continue;
    }
else{
    cs--;
    hs=100;
    continue;
}


}
else{
    if(hh>0){
hh-=80; // skeleton damage
continue;
    }
else{
    ch--;
    hh=150;
    continue;
}
}

}
if(cs==0 && ch!=0){
    cout<<"Humans won the battle"<<endl;
}
else if(ch==0 && cs!=0){
    cout<<"Skeletons won the battle"<<endl;
}
    else{
        cout<<"All Died .No one won the battle"<<endl;
    }
    cout<< cs<<" Skeletons are alive"<<endl;
cout<<ch<<" Humans are alive"<<endl;
cout<< skeletons-cs<<" Skeletons lost their lives"<<endl;
cout<<humans-ch<<" Humans lost their lives"<<endl;


    return 0;
}