#include "../src/task.cpp"
#include <bits/stdc++.h>
using namespace std;

int main(){
    assert(add(2,3) == 5);
    assert(add(1,-1) == 0);
    assert(add(0.5,0.2) == 0.7);
    assert(add(string("gaga"), string("kopo")) == string("gagakopo"));
    Point<int> p1 = {1,2}, p2 = {3,4}, p3;
    p3 = p1+p2;
    assert(p3.x == 4 && p3.y == 6);
    return 0;
}