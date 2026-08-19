//Implement a singly linked list to manage employee record with operating such as insertion deletion and searching

#include <iostream>
using namespace std;

struct Node {
    int id;
    string name;
    Node *next;
};

Node *head = NULL;

void insert(int id, string name) {
    Node *n = new Node{id, name, head};
    head = n;
}

void display() {
    Node *p = head;
    while (p) {
        cout << p->id << " " << p->name << endl;
        p = p->next;
    }
}

void search(int id) {
    Node *p = head;
    while (p) {
        if (p->id == id) {
            cout << "Found: " << p->name;
            return;
        }
        p = p->next;
    }
    cout << "Not Found";
}

int main() {
    insert(101, "Amit");
    insert(102, "Rahul");

    display();
    search(101);

    return 0;
}
