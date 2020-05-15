class TrieNode {
public:
    TrieNode* child[26] = { NULL };
    bool isend;
    
    TrieNode()
    {
        isend = false;
    }
};
class Trie {
    TrieNode* root;
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode *cur= root;
        for(char ch : word)
        {
            int id=ch-'a';
            if(cur->child[id]==NULL)
                cur->child[id]=new TrieNode();
            cur=cur->child[id];
        }
        cur->isend=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode *cur=root;
        for(char ch: word)
        {
            int id=ch-'a';
            if(cur->child[id]==NULL)
                return false;
            cur=cur->child[id];
        }
        return cur->isend;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode*cur=root;
        for(char ch: prefix)
        {
            int id=ch-'a';
            if(cur->child[id]==NULL)
                return false;
            cur=cur->child[id];
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
