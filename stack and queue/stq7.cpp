class ArrayQueue {
public:
    int arr[10000];
    int frontindex;
    int rearindex;
    ArrayQueue() {
        frontindex=0;
        rearindex=-1;
    }
    
    void push(int x) {
        rearindex++;
        arr[rearindex]=x;
   
    }
    
    int pop() {
        if(isEmpty()){
            return -1;
        }
        return arr[frontindex++];
  
    }
    
    int peek() {
        if(isEmpty()){
            return -1;
        }
        return arr[frontindex];
    
    }
    
    bool isEmpty() {
        return frontindex >rearindex;
  
    }
};
