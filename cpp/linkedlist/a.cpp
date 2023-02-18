#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * nxt;
};

class Linkedlist{
    Node * head;
    public:
    Linkedlist(){
        head=NULL;
    }


    void insertAtHead(int val){
        if(head==NULL){
            Node * newNode = new Node;
            newNode->data = val;
            newNode->nxt = NULL;
            head = newNode;
        }else{
            Node * myNode = new Node;
            myNode->data = val;
            myNode->nxt = head;
            head = myNode;
        }
    };
    void traverse(){
        Node * current = head;
        while(current != NULL){
            cout << current->data << " ";
            current = current->nxt;
        }
        cout << endl;
    };
    void searchDistictValue(int val){
        Node * current = head;
        int index = 0;
        while(current != NULL){
            if(current->data==val){
                cout << "Position: " << index<< endl;
                break;
            }
            index++;
            current = current->nxt;
        }
    };
    void searchAllValue(int val){
        Node * current = head;
        int index = 0;
        while(current != NULL){
            if(current->data==val){
                cout << "Position: " << index<< endl;
            }
            index++;
            current = current->nxt;
        }
    };

};
int main(){
   Linkedlist l;
   l.insertAtHead(10);
   l.insertAtHead(30);
   l.insertAtHead(30);
   l.insertAtHead(100);
   l.traverse();
//    l.searchDistictValue(30);
   l.searchAllValue(30);
   return 0; 
}