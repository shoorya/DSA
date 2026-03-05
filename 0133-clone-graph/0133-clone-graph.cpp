class Solution {
public:
    unordered_map<Node*,Node*> mp;

    Node* cloneGraph(Node* node) {

        if(!node) return NULL;

        if(mp[node]) return mp[node];

        Node* clone=new Node(node->val);
        mp[node]=clone;

        for(auto n:node->neighbors)
            clone->neighbors.push_back(cloneGraph(n));

        return clone;
    }
};