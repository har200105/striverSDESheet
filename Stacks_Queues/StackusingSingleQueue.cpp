class MyStack {
public:
    
    queue<int> que;

    MyStack() {
        
    }
    

    void push(int x) {
        que.push(x);
		for(int i=0;i<que.size()-1;++i){
			que.push(que.front());
			que.pop();
		}
    }

    int pop() {
        int x = que.front(); 
        que.pop(); 
        return x; 
    }
    

    int top() {
        return que.front();
    }

    bool empty() {
        return que.size() == 0; 
    }
};