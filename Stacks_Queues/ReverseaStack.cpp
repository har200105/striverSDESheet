
void insertAtBottom(stack<int> &st,int ele){

	if(st.empty()){
		st.push(ele);
		return;
	}

	int topele=st.top();
	st.pop();
	insertAtBottom(st,ele);

	st.push(topele);
}


void reverse(stack<int> &st){

	if(st.empty()){
		return;
	}

	int ele = st.top();
	st.pop();
	reverse(st);

	insertAtBottom(st,ele);
}