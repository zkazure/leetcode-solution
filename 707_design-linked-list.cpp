

// code_start

class MyLinkedList {
private:
    int val;
    MyLinkedList* next;
public:
        
    MyLinkedList() {
        this->val = 0;
        this->next = nullptr;
    }
    MyLinkedList(int val) {
        this->val = val;
        this->next = nullptr;
    }    

    
    int get(int index) {
        if (index<=0)
            return -1;
        
        int idx = 1;
        MyLinkedList* tmp = this;
        while (idx<index) {
            if (tmp==nullptr)
                break;
            idx ++; 
        }
        
        if (tmp==nullptr)
            return -1;
        return tmp->val;
    }
    
    void addAtHead(int val) {
        MyLinkedList* tmp = new MyLinkedList(val);
        tmp->next = this;

        MyLinkedList* tmp2 = this;
        this = tmp;
        tmp = this;
    }
    
    void addAtTail(int val) {
        MyLinkedList* tmp = this;
        while (tmp->next!=nullptr)
            tmp = tmp->next;
        MyLinkedList* tmp2 = new MyLinkedList(val);
        tmp->next = tmp2;
    }
    
    void addAtIndex(int index, int val) {
        MyLinkedList* tmp = this;
        while (index>1) {
            if (tmp->next==nullptr)
                break;
            tmp = tmp->next;
        }
        if (index<=1) {
            MyLinkedList* tmp2 = new MyLinkedList(val);
            
        }
            
    }
    
    void deleteAtIndex(int index) {
        
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

// code_end

