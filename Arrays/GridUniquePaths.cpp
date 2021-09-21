// Lovebabbar , interview bit , leetcode , gfg , Code Library , CSES , Lead Coding , Kartik Arora
 // Fraz sheet , interview questions(sources,codeverse etc) , code n code , code with sunny , Riddhi Dutta DP & Trees Sheet


int uniquePaths(int m , int n){
	int N = n+m-2;
	int r = m-1;
	double res=1;

	for(int i=1;i<=r;i++){
		res=res*(N-r+i)/i;
	}

	return int(res);
}


