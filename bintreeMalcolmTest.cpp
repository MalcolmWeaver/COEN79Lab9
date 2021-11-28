#include<iostream>

#include"bintree.h"

using namespace coen79_lab9;
using namespace std;

int main(){
    binary_tree_node<int> n2(2), n6(6), n4(4, &n2, &n6); 
    print(&n4, 0);
}
