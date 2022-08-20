#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vectooor{1000, 2423 ,4543};
    cout<<vectooor.back();
    vectooor.push_back(7);
    // vectooor.push_front(9);
    cout<<" "<<vectooor.front()<<" "<<vectooor.back() << " size :: " ;

}