# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    # def linklist_list(lt):
    #     a = []
    #     while(lt.next != None):
    #         a.append("lt.val")
    #     return a

        
    def mergeTwoLists(self, list1, list2):
        a = []
        b = []
        while(list1 != None):
            a.append(list1.val)
            list1 = list1.next
        while(list2 != None):
            b.append(list2.val) 
            list2 = list2.next   
        # print(a)
        # print(b)
        c = a + b
        c.sort()
        list3 = ListNode(c[0])
        p = list3
        for i in range(1,len(c)):
            p.next = ListNode(c[i])
            p = p.next
        return list3


    # list1 = list(input())
    # list2 = list(input())
    # print(mergeTwoLists(0,list1,list2))

