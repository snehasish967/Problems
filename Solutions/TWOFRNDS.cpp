#include<bits/stdc++.h>

#define getcx getchar_unlocked
#define putcx putchar_unlocked
#define ll unsigned long long int
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


int main(){
	ll t,f,m;
	inp(&t);
	while(t--){
		inp(&f);
		inp(&m);
		if(m%f){
			printf("WRONG\n");
		}
		else {
			printf("CORRECT\n");
		}
	}
	return 0;	
}
