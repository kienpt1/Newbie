#include<iostream>
using namespace std; 
char tree[10];
char root(char key){
    if(key=='/0'){
        cout<<"c'est nothing in your eyes";
    }{
        tree[0]=key;
    }
}
int set_left(char key,char parent){
    tree[2*parent+1]=key;
}
int set_right(char key,char parent){
    tree[2*parent+2]=key;
}
int print_tree() {
  cout << "\n";
  for (int i = 0; i < 10; i++) {
    if (tree[i] != '\0')
      cout << tree[i];
    else
      cout << "-";
  }
  return 0;
}
int main(){
    
    root('A');
    set_left('B',0);
    set_right('C', 0);
    set_left('D', 1);
    set_right('E', 1);
    set_right('F', 2);
    print_tree();
}