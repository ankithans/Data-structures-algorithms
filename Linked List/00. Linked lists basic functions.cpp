#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *next;
    Node(int x) {
        val = x;
        next = NULL;
    }
};

Node *insertEnd(Node *head, int val) {
    if (head == NULL)
        return new Node(val);
    Node *curr = head;
    while (curr -> next != NULL)
        curr = curr -> next;
    curr -> next = new Node(val);
    return head;
}

void display(Node *head) {
    while (head != NULL) {
        cout << head -> val << " ";
        head = head -> next;
    }
}

Node *removeFirst(Node *head) {
    if (head == NULL)
        return NULL;
    Node *temp = head;
    head = head -> next;
    delete temp;
    return head;
}

int getAt(Node *head, int index) {
    if (head == NULL)
        return NULL;
    Node *curr = head;
    int count = 0;
    while (curr != NULL) {
        if (count == index)
            return curr -> val;
        else {
            count++;
            curr = curr -> next;
        }
    }
    return NULL;
}

Node *addFirst(Node *head, int val) {
    Node *temp = new Node(val);
    temp -> next = head;
    return temp;
}

Node *insertPos(Node *head, int index, int val) {
    if (index < 0) {
        cout << "Invalid Position" << endl;
        return NULL;
    } else if (index == 0) {
        Node *temp = new Node(val);
        temp -> next = head;
        return temp;
    } else {
        Node *curr = head;
        for (int i = 0; i < index - 1; i++)
            curr = curr -> next;
        Node *temp = new Node(val);
        temp -> next = curr -> next;
        curr -> next = temp;
        return head;
    }
}

Node *removeLast(Node *head) {
    if (head == NULL)
        cout << "List is empty";
    else if (head -> next == NULL) {
        delete head;
        return NULL;
    } else {
        Node *temp = head;
        while (temp -> next -> next != NULL) {
            temp = temp -> next;
        }
        temp -> next = NULL;
        return head;
    }
}

Node *removeAtIndex(Node *head, int index) {
    if (index < 0) {
        return NULL;
    } else if (index == 0) {
        Node *temp = head;
        head = head -> next;
        delete temp;
        return head;
    } else {
        Node *temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp -> next;
        }
        // if index is more than size of ll
        if (temp == NULL || temp -> next == NULL) {
            cout << "index out of bound";
            return head;
        }

        Node *nextPtr = temp -> next -> next;
        delete temp -> next;
        temp -> next = nextPtr;
        return head;
    }
}

Node *getNodeAt(Node *head, int index) {
    Node *temp = head;
    for (int i = 0; i < index; i++) {
        temp = temp -> next;
    }
    return temp;
}


Node *reverseDataIterative(Node *head) {
    Node *curr = head;
    int count = 0;
    while (curr -> next != NULL)
        count++;
    int li = 0;
    int ri = count - 1;
    while (li < ri) {
        Node *left = getNodeAt(head, li);
        Node *right = getNodeAt(head, ri);

        int temp = left -> val;
        left -> val = right -> val;
        right -> val = temp;

        li++; ri--;
    }
    return head;
}

Node *reverse(Node *head) {
    Node *curr = head;
    Node *prev = nullptr, *next = nullptr;

    while (curr != nullptr) {
        next = curr -> next;
        curr -> next = prev;

        prev = curr;
        curr = next;
    }
    return prev;
}



int main() {
    Node *head = NULL;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int v; cin >> v;
        head = insertEnd(head, v);
    }
    display(head); cout << endl;
//    head = removeFirst(head);
//    display(head); cout << endl;

//    cout << getAt(head, 3);

    head = reverseDataIterative(head);
    display(head);


    return 0;
}
