// ques - https://leetcode.com/problems/design-browser-history/  
/*
struct node{
  string data;
    node* next;
    node*  prev;
    node(string s){
        data = s;
        next = NULL;
        prev = NULL;
    }
};
class BrowserHistory {
    
public:
    
    node * temp ;
    BrowserHistory(string homepage) {
        temp = new node(homepage);
    }
    
    void visit(string url) {
        node *curr = new node(url);
        temp->next = curr;
        curr->prev = temp;
        temp = temp->next;
    }
    
    string back(int steps) {
        while(temp->prev!=NULL && steps>0){
            temp = temp->prev;
            steps--;
        }
        return temp->data;
    }
    
    string forward(int steps) {
        while(temp->next!=NULL && steps>0){
            temp = temp->next;
            steps--;
        }
        return temp->data;
    }
};

*/
