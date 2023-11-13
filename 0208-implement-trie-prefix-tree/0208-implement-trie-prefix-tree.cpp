typedef long long int ll;

struct Node {
    Node* links[26];
    bool flag = false;
};

class Trie {
public:
    Node* root;
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* node = root;
        ll n = word.size();
        for(ll i=0;i<n;i++) {
            ll in = word[i]-'a';
            if(node->links[in] == NULL) {
                node->links[in] = new Node();
            }
            node = node->links[in];
        }
        node->flag = true;
    }
    
    bool search(string word) {
        Node* node = root;
        ll n = word.size();
        for(ll i=0;i<n;i++) {
            ll in = word[i]-'a';
            if(node->links[in] == NULL) {
                return false;
            }
            node = node->links[in];
        }
        return node->flag;
    }
    
    bool startsWith(string prefix) {
        Node* node = root;
        ll n = prefix.size();
        for(ll i=0;i<n;i++) {
            ll in = prefix[i]-'a';
            if(node->links[in] == NULL) {
                return false;
            }
            node = node->links[in];
        }
        return true;
    }

};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */