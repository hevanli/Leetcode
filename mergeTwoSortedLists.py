class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def print_ll(head):
    cur = head
    while cur:
        print(cur.val)
        cur = cur.next

def mergeTwoLists(list1, list2):
    result = ListNode()
    if list1.val < list2.val:
        result.val = list1.val



a = ListNode(1)
a.next = ListNode(2)
a.next.next = ListNode(4)

b = ListNode(1)
b.next = ListNode(3)
b.next.next = ListNode(4)

print_ll(a)
print_ll(b)
        
        
