#include <vector>
#include <iostream>
using namespace std;
class Node{
    public:
        bool used;
        int value;
        vector<Node> ch;
        Node(int val, vector<Node> a){
            value=val;
            used=0;
            for(int i=0;i<a.size();i++){
                ch.push_back(a[i]);
            }
        }
};
void best_wishes(Node root, vector<int> & ara){

    root.used=1;
    for(int i=0;i<root.ch.size();i++){
        if(!root.ch[i].used){
            best_wishes(root.ch[i], ara);
        }
    }
    ara.push_back(root.value);
}