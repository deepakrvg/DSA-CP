class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        Node* d = NULL;
        while (head != NULL) {
            Node* next = head->next;
            head->next = d;
            d = head;
            head = next;
        }
        return d;
    }
    
};
