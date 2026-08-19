// Implement a doubly linked list for managing a music playlist with forward and backward navigation.

#include <iostream>
using namespace std;

struct Node {
    string song;
    Node *prev, *next;
};

Node *head = NULL;

void add(string s) {
    Node *n = new Node{s, NULL, NULL};

    if (head == NULL)
        head = n;
    else {
        Node *p = head;
        while (p->next)
            p = p->next;
        p->next = n;
        n->prev = p;
    }
}

void display() {
    Node *p = head;
    while (p) {
        cout << p->song << " ";
        p = p->next;
    }
}

int main() {
    add("Song1");
    add("Song2");
    add("Song3");

    cout << "Forward: ";
    display();

    return 0;
}
