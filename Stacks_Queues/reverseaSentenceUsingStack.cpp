void reverseSentence(string s){
	stack<string>s;
	for(int i=0;i<s.length();i++){
		string word="";

		while(s[i]!=" " && i<s.length()){
			word+=s[i];
			i++;
		}

		st.push(word);
	}

	
}