#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

int main(){
mt19937 randomGenerator(time(0));
uniform_real_distribution<float> attackRoll(0.0f,1.0f);
cout<<"I am attacking snake  "<<endl;
float attack=attackRoll(randomGenerator);
if(attack<.3f)
cout<<"I hit the snake"<<endl;
else
cout<<"I missed the snake!"<<endl;
system("PAUSE");
    return 0;
}

