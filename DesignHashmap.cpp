// quess - https://leetcode.com/problems/design-hashmap/

/*struct node{
    int key;
    int val;
    node *next;

    node(int x){
        key = x;
        val  = 0;
        next = NULL;
    }
    node(int x , int y){
        key = x;
        val = y;
        next = NULL;
    }
};
class MyHashMap {
public:
    node *head;
    MyHashMap() {
        head = new node(-1);
    }
    
    void put(int key, int value) {
      node *temp = new node(key , value);
        node *curr = head;
        
        while(curr->next){
            curr = curr->next;
            if(curr->key == key){
                curr->val = value;
                return;
            }
        }
        curr->next = temp;
    }
    
    int get(int key) {
        node *curr = head;
        while(curr){
            if(curr->key == key){
                return curr->val;
            }
        curr= curr->next;
        }
        return -1;
    }
    
    void remove(int key) {
         node *curr = head;
        while(curr){
            if(curr->next &&curr->next->key == key){
                curr->next = curr->next->next;
            }
            curr = curr->next;
        }
        
    }
};

*/