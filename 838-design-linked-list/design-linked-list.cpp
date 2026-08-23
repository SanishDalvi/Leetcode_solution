struct node {
    int val;
    node* next;

    node() : val(0), next(nullptr) {}

    node(int num) : val(num), next(nullptr) {}
};

class MyLinkedList {
public:
    node* top;

    MyLinkedList() : top(nullptr) {}

    int get(int index) {
        node* curr = top;

        while (index > 0 && curr != nullptr) {
            curr = curr->next;
            index--;
        }

        if (curr == nullptr)
            return -1;

        return curr->val;
    }

    void addAtHead(int val) {
        node* newNode = new node(val);

        newNode->next = top;
        top = newNode;
    }

    void addAtTail(int val) {

        if (top == nullptr) {
            addAtHead(val);
            return;
        }

        node* curr = top;

        while (curr->next != nullptr) {
            curr = curr->next;
        }

        node* newNode = new node(val);
        curr->next = newNode;
    }

    void addAtIndex(int index, int val) {

        if (index == 0) {
            addAtHead(val);
            return;
        }

        node* curr = top;
        int idx = 0;

        while (curr != nullptr && idx < index - 1) {
            curr = curr->next;
            idx++;
        }

    
        if (curr == nullptr)
            return;

        node* newNode = new node(val);

        newNode->next = curr->next;
        curr->next = newNode;
    }

    void deleteAtIndex(int index) {

        if (top == nullptr)
            return;


        if (index == 0) {
            node* temp = top;
            top = top->next;
            delete temp;
            return;
        }

        node* curr = top;
        int idx = 0;

        while (curr != nullptr && idx < index - 1) {
            curr = curr->next;
            idx++;
        }


        if (curr == nullptr || curr->next == nullptr)
            return;

        node* temp = curr->next;

        curr->next = temp->next;

        delete temp;
    }
};