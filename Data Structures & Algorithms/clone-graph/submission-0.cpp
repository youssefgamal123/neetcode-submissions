class Solution {
public:

    unordered_map<Node*, Node*> mp;

    Node* dfs(Node* node) {

        if (mp.count(node)) {
            return mp[node];
        }

        Node* copy = new Node(node->val);

        mp[node] = copy;

        for (Node* nbr : node->neighbors) {

            copy->neighbors.push_back(
                dfs(nbr)
            );
        }

        return copy;
    }

    Node* cloneGraph(Node* node) {

        if (node == nullptr) {
            return nullptr;
        }

        return dfs(node);
    }
};