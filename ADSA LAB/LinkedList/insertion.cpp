#include <iostream>
#include <unordered_set>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    
    void append(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void print() const {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }


    Node* getHead() const {
        return head;
    }

private:
    Node* head;
};


LinkedList intersect(const LinkedList& list1, const LinkedList& list2) {
    unordered_set<int> set;
    LinkedList result;

    
    Node* temp = list1.getHead();
    while (temp != nullptr) {
        set.insert(temp->data);
        temp = temp->next;
    }

    
    temp = list2.getHead();
    while (temp != nullptr) {
        if (set.find(temp->data) != set.end()) {
            result.append(temp->data);
        }
        temp = temp->next;
    }

    return result;
}


LinkedList unite(const LinkedList& list1, const LinkedList& list2) {
    unordered_set<int> set;
    LinkedList result;

    
    Node* temp = list1.getHead();
    while (temp != nullptr) {
        set.insert(temp->data);
        temp = temp->next;
    }

    
    temp = list2.getHead();
    while (temp != nullptr) {
        set.insert(temp->data);
        temp = temp->next;
    }

    
    for (const int& value : set) {
        result.append(value);
    }

    return result;
}


int main() {
    LinkedList list1;
    list1.append(1);
    list1.append(2);
    list1.append(3);
    list1.append(4);

    LinkedList list2;
    list2.append(3);
    list2.append(4);
    list2.append(5);
    list2.append(6);

    cout << "List 1: ";
    list1.print();

    cout << "List 2: ";
    list2.print();

    LinkedList intersectionList = intersect(list1, list2);
    cout << "Intersection: ";
    intersectionList.print();

    LinkedList unionList = unite(list1, list2);
    cout << "Union: ";
    unionList.print();

    return 0;
}
