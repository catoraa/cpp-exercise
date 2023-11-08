#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};//单链表模板

ListNode* reverseList(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;  // 链表为空或只有一个节点时直接返回
    }

    ListNode* newHead = nullptr;  // 新链表的头指针
    ListNode* curr = head;  // 当前处理的节点

    while (curr != nullptr) {
        ListNode* next = curr->next;  // 保存下一个节点的指针
        curr->next = newHead;  // 将当前节点插入到新链表的头部
        newHead = curr;  // 更新新链表的头指针
        curr = next;  // 移动到下一个节点
    }

    return newHead;  // 返回新链表的头指针
}

int main(){

    return 0;
}
