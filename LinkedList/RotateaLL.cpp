ListNode* rotateRight(ListNode* head, int k){
	if(!head || !head->next || k==0){
		return head;
	}

	ListNode *cur = head;
	int len=1;
	while(cur->next && ++len){
		cur=cur->next;
	}

	cur->next=head;
	k=k % len;
	k=len - k;
	while(k--){
		cur=cur->next;
	}

	head=cur->next;
	cur->next=NULL;

	return head;   
}













#include<bits/stdc++.h>
using namespace std;

string generateKey(string str, string key)
{
	int x = str.size();

	for (int i = 0; ; i++)
	{
		if (x == i)
			i = 0;
		if (key.size() == str.size())
			break;
		key.push_back(key[i]);
	}
	return key;
}

string cipherText(string str, string key)
{
	string cipher_text;

	for (int i = 0; i < str.size(); i++)
	{
		char x = (str[i] + key[i]) %26;
		x += 'A';

		cipher_text.push_back(x);
	}
	return cipher_text;
}

string originalText(string cipher_text, string key)
{
	string orig_text;

	for (int i = 0 ; i < cipher_text.size(); i++)
	{
		char x = (cipher_text[i] - key[i] + 26) %26;

		x += 'A';
		orig_text.push_back(x);
	}
	return orig_text;
}


int main(){


	string str; cin>>str;
	string key; cin>>key;

	string key = generateKey(str, keyword);
	string cipher_text = cipherText(str, key);

	cout << "Ciphertext : "<< cipher_text <<endl;

	cout << "Original/Decrypted Text : "<< originalText(cipher_text, key)<<endl;
	return 0;
}
