#include<iostream>

#include"bintree.h"

using namespace coen79_lab9;
using namespace std;

int main(){
    binary_tree_node<int> * n2 = new binary_tree_node<int>(2), *n6=new binary_tree_node<int>(6), *n4=new binary_tree_node<int>(4, n2, n6), *cpn4; 
    print(n4, 0);
    cpn4 = tree_copy(n4);
    print(cpn4, 0);
    tree_clear(cpn4);
    tree_clear(n4);
    
}
