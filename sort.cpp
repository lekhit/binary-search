#include <iostream>
using namespace std;

//creating list class
  struct node{
int data;
node *link;
}
//used two nodes to keep track of start and end point of list.
//end node is very useful because it facilitates O(1) runtime for appending compared to O(n) runtime required in case if only start node is used. 
;

class list{
   public:
  // node for storing data and next link
struct node *start,*end;

 //constructor used to set start to null
  list(){
    start=NULL;
  }
  // destructor used to free memory space
 ~list(){
   while (start!=NULL){
     //temp is used to store the start node because we need to move start to next node otherwise we would have simply used delete start
     node *temp=start;
     start=start->link; //start is moved to next node;
     delete temp;
   }
 }
  void append(int num);
  void display();
  void sort();
  void position(node**,node**);
};
void list::position(node **j1,node **i){
  
  if (start==NULL)
  return ;
  for (node *j=start;j!=*i;j=j->link)
  {if (j->data > (*i)->data)
  return ;
  *j1=j;}
}
void list::sort(){
  //if list is empty return
  if (start==NULL)
  return;
  node *i=start->link,*q=start;
while(i!=NULL){
  if (q->data>i->data){

  }
  else{
    q=i;
    i=i->link;
  }
}

  
  
}
void list::append(int num){
  //create new node
  node *item=new node;
  //fill in data
  item->data=num;
  //check if list is empty 
  if (start == NULL){
    //since we know that list is empty set start and end to new node
start=item;
end=item;
  }
  else {
    //here we now that list has atleast one element so we just need to extend that element with new node
    end->link=item;
    end=item;
  }
}
void list::display(){
  //looping through entire list to 
  for (node *i=start;i!=NULL;i=i->link){
    cout<<i->data<<endl;
  }
}
int main(){
  list lt;
  for (int i=0;i<10;i++)
  lt.append(i);
  lt.append(2);
  lt.append(3);
  lt.display();
  node *k=new node;
  node* j1=new node;
  k->data=2;
  lt.position(&j1,&k);
  cout<<j1->link->data<<endl;
}