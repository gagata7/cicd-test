#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct Point {
    T x, y;
};

template <typename T>
Point<T> operator+(Point<T>& a, Point<T>& b){
    return {a.x + b.x, a.y + b.y};
}

template <typename T>
T add(T a, T b){
    return a + b;
}
