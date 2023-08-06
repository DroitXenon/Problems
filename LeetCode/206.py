class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def reverseList(self, head):
        b = []
        while(head != None):
            b.append(head.val)
            head = head.next
        # print(a)
        # print(b)
        if b == []:
            return head
        a = []
        for i in range(len(b)):
            a.append(b[len(b)-i-1])
        
        list1 = ListNode(a[0])
        p = list1
        for i in range(1,len(a)):
            p.next = ListNode(a[i])
            p = p.next
        return list1