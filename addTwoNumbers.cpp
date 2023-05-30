#include <cstddef>
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* head = new ListNode();
    bool carry = false;
    while(l1 || l2) {
        cout << l1 -> val << endl;
        l1 = l1->next;
    }
}

int main() {
    ListNode* l3 = new ListNode(6);
    ListNode* l2 = new ListNode(4, l3);
    ListNode* l1 = new ListNode(5, l2);

    addTwoNumbers(l1, l2);
}
