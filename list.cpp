#include <iostream>


class Node{
    public:
        int data;
        Node* next;
        Node();
        Node(int data) : next(nullptr), data(data){}
}; 
class List{
    Node* current;
    Node* head;
    int size;
    public:
        int operator[](int index) {
            
        }
        void push(int num){
            if(size == 0){
                Node* tmp = new Node(num);
                head = tmp;
                current = head;
                size++;
            }
            else{
                Node* tmp = new Node(num);
                current->next = tmp;
                current = tmp;
                size++;
            }
        }
};

int main(){
    List albert;
    albert.push(20);
    albert.push(100);
    albert.push(500);
    std::cout << albert[2] << std::endl;
}