priority_queue<int, vector<int>, greater<int>> pq;
ListNode *ansHead = new ListNode(-1);
ListNode *ansTail = ansHead;

for (int i = 0; i < lists.size(); i++)
{
    ListNode *temp = lists[i];
    while (temp != NULL)
    {
        pq.push(temp->val);
        temp = temp->next;
    }
}
while (!pq.empty())
{
    ListNode *n = new ListNode(pq.top());
    ansTail->next = n;
    ansTail = n;
    pq.pop();
}
return ansHead->next;