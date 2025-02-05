class ThroneInheritance {
public:
        class Node{
            public:
            string name;
            vector<Node*> family;
            Node(string s){
                this->name=s;
            }
        };
        Node* root=NULL;
        map<string,Node*> mp;
        void get(vector<string>& ans,Node* curr){
            if(curr->name!=""){
                ans.push_back(curr->name);
            }
            for(int i=0;i<(curr->family).size();i++){
                get(ans,curr->family[i]);
            }
        }
    ThroneInheritance(string kingName) {
        root=new Node(kingName);
        mp[kingName]=root;
    }
    
    void birth(string parentName, string childName) {
        Node* curr=root;
        Node* ptr=mp[parentName];
        Node* node=new Node(childName);
        (ptr->family).push_back(node);
        mp[childName]=node;
    }
    
    void death(string name) {
        Node* ptr=mp[name];
        ptr->name="";
        mp.erase(name);
    }
    
    vector<string> getInheritanceOrder() {
        vector<string> ppls;
        Node* curr=root;
        get(ppls,curr);
        return ppls;
    }
};

/**
 * Your ThroneInheritance object will be instantiated and called as such:
 * ThroneInheritance* obj = new ThroneInheritance(kingName);
 * obj->birth(parentName,childName);
 * obj->death(name);
 * vector<string> param_3 = obj->getInheritanceOrder();
 */