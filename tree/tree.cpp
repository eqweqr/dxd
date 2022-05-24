#include <vector>
#include <queue>
#include <iostream>
using namespace std;
class Node{
    public:
        int value;
        vector<Node> ch;
        Node(int val, vector<Node> a){
            value=val;
            for(int i=0;i<a.size();i++){
                ch.push_back(a[i]);
            }
        }
};
void best_wishes(Node root, vector<int> & ara){
    queue<Node> q;
    q.push(root);
    while(!q.empty()){
        ara.push_back(q.front().value);
        for(int i=0;i<q.front().ch.size();i++){
            q.push(q.front().ch[i]);
        }
        q.pop();
    }
}