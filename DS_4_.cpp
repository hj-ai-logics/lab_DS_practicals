// Implement a circular linked list to simulate round robin scheduling for tournament

#include <iostream>
using namespace std;

struct Node {
    int player;
    Node *next;
};

int main() {
    Node *a = new Node{1, NULL};
    Node *b = new Node{2, NULL};
    Node *c = new Node{3, NULL};

    a->next = b;
    b->next = c;
    c->next = a;

    Node *p = a;

    for (int i = 0; i < 6; i++) {
        cout << "Player " << p->player << endl;
        p = p->next;
    }

    return 0;
}
