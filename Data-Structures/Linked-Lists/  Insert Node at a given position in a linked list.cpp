/*
  recursive
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node* head, int data, int position) {
    if (position == 0) {
        Node* new_node = new Node();
        new_node->data = data;
        new_node->next = head;
        return new_node;
    }
    head->next = InsertNth(head->next, data, position - 1);
    return head;
}
