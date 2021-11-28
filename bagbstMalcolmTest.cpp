#include<iostream>

#include"bag_bst.h"

using namespace coen79_lab9;
using namespace std;

int main(){
    binary_tree_node<int> * n2 = new binary_tree_node<int>(2), *n6=new binary_tree_node<int>(6), *n4=new binary_tree_node<int>(4, n2, n6), *head = new binary_tree_node<int>(2, n4, NULL); 
    print(head, 0);
    bst_remove_all(head, 2);   
    print(n4, 0);
    tree_clear(head);
    
}
