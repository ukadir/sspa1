#include "Queue.h"

/**
 * Implement Queue constructor
 */
Queue::Queue() {
    head = NULL;
    tail = NULL;
    numElements = 0;
}

/**
 * Implement the Queue destructor
 */
Queue::~Queue() {
    /* YOUR CODE HERE */
    clear();
}

/**
 * Implement size() correctly
 */
unsigned int Queue::size() {
    /* YOUR CODE HERE */
    return numElements;
}

/**
 * Implement clear() correctly without memory leaks
 */
void Queue::clear() {
    /* YOUR CODE HERE */
    if (head == NULL)
        return;

    Node* curr = head;
    while(curr) {
        Node* temp = curr;
        curr = curr->next;
        delete temp;
    }
    numElements=0;
}

/**
 * Implement push() correctly
 */
void Queue::push(string s) {
    /* YOUR CODE HERE */
    Node* newNode = new Node(s);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        numElements++;
        return;
    }
    
    tail->next = newNode;
    tail = newNode;
    numElements++;
}

/**
 * Implement pop() correctly without memory leaks
 */
string Queue::pop() {
    /* YOUR CODE HERE */
    if(head == NULL) {
        return "";
    }
    Node* front = head;
    head = head->next;
    numElements--;
    return front->data;
}
