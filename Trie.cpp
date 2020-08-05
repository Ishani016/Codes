struct TrieNode {
    char ch;
    unordered_map<char, TrieNode*> unmap;
    bool endOfWord = false;
    TrieNode() {}
    TrieNode(char c) {ch = c;}
};

typedef long long int ll;
class Trie {
public:
    /** Initialize your data structure here. */    
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string w) {
        TrieNode* curr = root;
        ll n = w.length();
        for(ll i=0;i<n;i++) {
            if(curr->unmap.find(w[i])==curr->unmap.end()) {
                curr->unmap[w[i]] = new TrieNode(w[i]);
            }
            curr = curr->unmap[w[i]];
        }
        curr->endOfWord = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string w) {
        TrieNode* curr = root;
        ll n = w.length();
        for(ll i=0;i<n;i++) {
            if(curr->unmap.find(w[i])==curr->unmap.end()) {
                // cout<<"Search for w failed! "<<w<<endl;
                return false;
            }
            curr = curr->unmap[w[i]];
        }
        if(curr->endOfWord)
            return true;
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string pre) {
        TrieNode* curr = root;
        ll n = pre.length();
        for(ll i=0;i<n;i++) {
            if(curr->unmap.find(pre[i])==curr->unmap.end()) 
                return false;
            curr = curr->unmap[pre[i]];
        }
        return true;
    }
};

/**
 * Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
