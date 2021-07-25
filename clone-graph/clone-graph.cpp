/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node == NULL) return nullptr;
        
        unordered_map<int, Node *> umap;
        
        return(helper(node, umap));
        
    }
    
    Node *helper(Node *node, unordered_map<int, Node *> &umap){
        
        Node *p1 = new Node(node->val);
        umap.insert({node->val, p1});
        
        for(Node *n : node->neighbors){
            
            auto it = umap.find(n->val);
            if(it == umap.end()){
                Node *p2 = helper(n, umap);
                p1->neighbors.push_back(p2);
            }
            else{
                p1->neighbors.push_back(it->second);
            }    
            }
        return p1;
        }
    
    
};