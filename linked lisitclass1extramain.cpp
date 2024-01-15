#include <iostream>
using namespace std;
class Node {
        public:
        int data;
        Node* next;

        Node() {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
        }


};
void printLL(Node* head){
  Node* temp=head;
  while(temp!=NULL){
  cout<<temp->data<<" ";
  temp=temp->next;
}
cout<<endl;
}
int getlength(Node* head){
  Node* temp=head;
  int count = 0;
  while(temp!=NULL){
    count++;
    temp = temp->next;
  }
  return count;
}
void insertathead(Node* &head, Node* &tail, int data) {
        //check for Empty LL
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
        }
        else {
                //step1:
                Node* newNode = new Node(data);
                //step2:
                newNode -> next = head;
                //step3:
                head = newNode;
        }


}
void insertattail(Node* &head,Node* &tail, int data) {
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
                
        }
        else {
            //step1: creatae a node
            Node* newNode = new Node(data);
            //step2: connect woth tail ndoe
            tail->next = newNode;
            //step3: update tail;
            tail = newNode;
        }

}
void print(Node* head) {

        Node* temp = head;
        while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
        }
}
void insertatposition(int data, int position, Node* &head, Node* &tail) {
        int len = getlength(head);
        
        if(position == 1) {
                insertathead(head, tail , data);
                return;
        }
        else if(position > len) {
                insertattail(head, tail, data);
                return;
        }
        else {
            Node* newNode = new Node(data);
            
            Node* prev = NULL;
            Node* curr = head;
            while(position != 1) {
                position--;
                prev = curr;
                curr = curr->next;
            }
            
            //step3:
            newNode -> next = curr;

            //step4:
            prev -> next = newNode;
            
        }
        
}


int main() 
 {
  cout << "Hello world!" << endl;
  cout << "Hello world!" << endl;
  //Node a;
  Node* first=new Node(10);
  Node* second=new Node(20);
  Node* third=new Node(30);
  Node* forth=new Node(40);
  Node* five=new Node(50);
 first ->next=second;
  second->next=third;
  third->next=forth;
 forth->next=five;
 //for this insertat tail cover
 Node* tail=five;
//for this insert at head

  Node* head = first;
  cout<<"first is the first";
  printLL(head);
  insertathead(head,tail,500);
  printLL(head);
  cout<<endl;
  //for length find
  cout<<"length of linked list"<<getlength(head);
  cout<<endl;
  insertattail(head,tail,600);
  printLL(head);
  insertatposition(2,2,head,tail);
  //insertatposition(head,tail,5,2);
  print(head);
  return 0;
}
  
