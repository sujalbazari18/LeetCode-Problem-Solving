class MyLinkedList {
public:
    vector<int> list;
    MyLinkedList() {
    }
    
    int get(int index) {
        // for(auto& i:list)cout<<i<<" ";
        if(index>=0 && index<list.size())
        return list[index];
        return -1;
    }
    
    void addAtHead(int val) {
        list.insert(list.begin(),val);
    }
    
    void addAtTail(int val) {
        list.push_back(val);
    }
    
    void addAtIndex(int index, int val) {
        if(index>=0 && index<=list.size()){
        // cout<<val<<index;
        list.insert(list.begin()+index,val);
        }
        // cout<<index<<endl;
    }
    
    void deleteAtIndex(int index) {
        if(index>=0 && index<list.size())
        list.erase(list.begin()+index);
        return ;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */