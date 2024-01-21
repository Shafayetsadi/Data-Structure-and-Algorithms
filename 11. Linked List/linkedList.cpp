#include <iostream>
using namespace std;

/*
 * Problems with arrays:
 * - Fixed size or Pre-allocated (waste memory or not enough memory)
 * - Inserting a new element in the middle is expensive
 * - Deletion in the middle is expensive
 * - Implementation of stacks and queues is not efficient
 *
 * Linked List:
 * The idea is to drop the contiguous memory requirements so that insertion,
 * deletion and moving elements around is easy. And no need to pre-allocate memory.
 * - Dynamic size
 * - Insertion and deletion in the middle is easy
 * - No waste of memory
 * - Linear data structure
 * */

class Node {
public:
    int data;
    Node* next;
    explicit Node(int data) : data(data), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() { head = nullptr; }

    void addNode(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newNode;
    }

    void printList() const {
        Node* curr = head;
        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main() {
    cout << "Hello, World!" << endl;
    LinkedList list;
    list.addNode(10);
    list.addNode(20);
    list.addNode(30);
    list.printList();
    cout << "Done" << endl;
    return 0;
}