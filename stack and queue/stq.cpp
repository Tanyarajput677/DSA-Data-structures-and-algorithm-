class ArrayStack {
public:
    int arr[10000];
    int topindex;
    ArrayStack() {
        topindex=-1;
    }
    
    void push(int x) {
        topindex++;
        arr[topindex]=x;
   
    }
    
    int pop() {
        if(topindex==-1){
            return -1;
        }
        return arr[topindex--];
  
    }
    
    int top() {
        if(topindex==-1){
            return -1;
        }
        return arr[topindex];
    
    }
    
    bool isEmpty() {
        return topindex==-1;
  
    }
};
