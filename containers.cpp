// CONTAINERS

// 1. VECTORS

// A. begin()  &  end()
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int>marks(5,-1);
//     cout<<*(marks.begin())<<endl;

//     return 0;
// }

// B. push_back()  &  pop_back()
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>marks;

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    cout<<"Size:"<<marks.size()<<endl;
    //40 will be removed
    marks.pop_back();
    cout<<"Size:"<<marks.size()<<endl;
    return 0;
}