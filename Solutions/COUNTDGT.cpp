#include<bits/stdc++.h>

#define getcx getchar_unlocked
#define putcx putchar_unlocked
#define ll int
#define MOD 1000000007

using namespace std;

inline void inp(ll *n){
	*n=0;
	//bool neg=false;
	register char ch=getcx();
	while(ch<33){
		ch=getcx();
	}
	while(ch>32){
		//if(ch!='-'){
			*n=(*n<<3)+(*n<<1)+ch-'0';
		//}
		/*else {
			neg=true;
		}*/
		ch=getcx();
	}
	/*if(neg){
		*n=-(*n);
	}*/
}


inline void op(ll n) {
        /*if(n<0){
                n=-n;
                putcx('-');
        }*/
        int i=21;
        char store[21];
        do{
                store[--i]=(n%10)+'0';
		n/=10;
        }while(n);
        do{
                putcx(store[i++]);
        }while(i<21);
}

int  dgtCnt[100005][10];
char num[100005];
int main(){
	int t,q,x,y,ans,d;
	cin >> t;
	while(t--){
		scanf("%s",num);
		memset(dgtCnt,0,sizeof(dgtCnt));
		dgtCnt[0][num[0]-'0']++;
		for(int i=1;num[i]!='\0';i++){
			for(int j=0;j<10;j++){
				if(num[i]-'0'!=j){
					dgtCnt[i][j]=dgtCnt[i-1][j];
				}
				else {
					dgtCnt[i][j]=dgtCnt[i-1][j]+1;
				}
			}
		}
		cin >> q;
		while(q--){
			inp(&x);
			inp(&y);
			inp(&d);
			ans=dgtCnt[y-1][d]-dgtCnt[x-1][d];
			if(num[x-1]-'0'==d){
				ans++;
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}
