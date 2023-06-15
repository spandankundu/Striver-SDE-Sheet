/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/



Node *findMiddle(Node *head) 
{
  Node *ans=NULL;
  int N=1;
  auto qtr=head;
  while (qtr->next != NULL) 
  {
    qtr = qtr->next;
    N++;
  }
  if(N%2)
  {
      int q=N/2;
      auto ptr=head;
      while(q--)
      {
          ptr=ptr->next;
      }
      ans=ptr;   
  }  
  else
  {
      int q=N/2;
      auto ptr=head;
      while(q--)
      {
          ptr=ptr->next;
      }
      ans=ptr;
  }
return ans;
}

