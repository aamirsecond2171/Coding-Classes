#include <iostream>
using namespace std;

// Tree is a finite set of nodes such that :-
// 1. There is a distinguised node called root.
// 2. the remaing node partition into n>= 0, 
//    disjoint set T1,T2,T3...Tn     where each of these sets is a tree, the sets T1, T2, T3...Tn are subsets of the root.

// Types of Tree:-
//  1. Binary Tree: In a binary tree no node can have more than two children. 
//                  A node can have 0,1 or 2 children.
//                  Each child is designated as left-child or right-child.
//      Properties: 1. The maximum no of nodes of any level 'i' is 2^i where i>=0.
//                  2. The max no of nodes possible in a binary tree of height 'h' is 2^h -1.
//                  3. The min no of nodes possible in a binary tree of height 'h' is h only.
//  2. 