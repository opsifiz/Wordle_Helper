#include<bits/stdc++.h>
using namespace std;

int check[256], t = 0;
long long cnt = 0;
vector<string> vec = {"anule","cnsue","engue","skiny","sliny","brige","necky","neggy","otfer","scune","snnue","snuue","tofer","unsue","yuoth"};
unordered_set<string> s(vec.begin(),vec.end());

main(){
	unordered_set<char> no;
	/*Grey*/
//	no.insert('a');
//	no.insert('b');
//	no.insert('c');
//	no.insert('d');
//	no.insert('e');
//	no.insert('f');
//	no.insert('g');
//	no.insert('h');
//	no.insert('i');
//	no.insert('j');
//	no.insert('k');
//	no.insert('l');
//	no.insert('m');
//	no.insert('n');
//	no.insert('o');
//	no.insert('p');
//	no.insert('q');
//	no.insert('r');
//	no.insert('s');
//	no.insert('t');
//	no.insert('u');
//	no.insert('v');
//	no.insert('w');
//	no.insert('x');
//	no.insert('y');
//	no.insert('z');
	string ans = "*****", str = "*****";	//Green
	for(char a='a';a<='z';a++){
		
		if(ans[0] != '*'){
			if(a != ans[0]) continue;
		}else{
			/*Yellow*/
//			if(a=='') continue;
//			if(a=='') continue;
//			if(a=='') continue;
//			if(a=='') continue;
		}
		
		for(char b='a';b<='z';b++){
			
			if(a == 'a' && b == 'a') continue;
			if(a == 'k' && b == 'z') continue;
			if(a == 's' && b == 's') continue;
			if(a == 'x' && b == 'f') continue;
			if(a == 'x' && b == 's') continue;
			if(a == 'z' && b == 'w') continue;
			if(a == 'z' && b == 'x') continue;
			if(a == 'z' && b == 'z') continue;
			
			if(ans[1] != '*'){
				if(ans[1] != b) continue;
			}else{
//				if(b=='') continue;
//				if(b=='') continue;
//				if(b=='') continue;
//				if(b=='') continue;
			}
			
			for(char c='a';c<='z';c++){
				
				if(ans[2] != '*'){
					if(ans[2] != c) continue;
				}
//				if(c=='') continue;
//				if(c=='') continue;
//				if(c=='') continue;
//				if(c=='') continue;
				
				for(char d='a';d<='z';d++){
					
					if(ans[3] != '*'){
						if(d != ans[3]) continue;
					}else{
						/*Yellow*/
//						if(d=='') continue;
//						if(d=='') continue;
//						if(d=='') continue;
//						if(d=='') continue;
					}
					
					for(char e='a';e<='z';e++){
						
						if(ans[4] != '*'){
							if(ans[4] != e) continue;
						}else{
//							if(e=='') continue;
//							if(e=='') continue;
//							if(e=='') continue;
//							if(e=='') continue;
//							if(e=='') continue;
						}

						if(no.find(a)!=no.end()||no.find(b)!=no.end()||no.find(c)!=no.end()||no.find(d)!=no.end()||no.find(e)!=no.end()) continue;

						map<char,int> mp;
						mp[a]++; if(mp[a] > 2) continue;
						mp[b]++; if(mp[b] > 2) continue;
						mp[c]++; if(mp[c] > 2) continue;
						mp[d]++; if(mp[d] > 2) continue;
						mp[e]++; if(mp[e] > 2) continue;
						str[0] = a;
						str[1] = b;
						str[2] = c;
						str[3] = d;
						str[4] = e;
						if(s.find(str) != s.end()) continue;
						/*Is In*/
//						char i='';if(i!=a&&i!=b&&i!=c&&i!=d&&i!=e) continue;
//						char j='';if(j!=a&&j!=b&&j!=c&&j!=d&&j!=e) continue;
//						char k='';if(k!=a&&k!=b&&k!=c&&k!=d&&k!=e) continue;
//						char l='';if(l!=a&&l!=b&&l!=c&&l!=d&&l!=e) continue;
//						char m='';if(m!=a&&m!=b&&m!=c&&m!=d&&m!=e) continue;

						cout<<str<<"\t";
						t++;
						if(t == 6){
							cout<<"\n";
							t = 0;
						}
						cnt++;
					}
				}
			}
		}
	}
	cout<<"\nAll Total Possible Case : "<<cnt<<"\n";
}
