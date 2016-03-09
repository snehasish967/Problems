#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
ll gp[25];
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> gp[i];
		}
		int g;
		ll r;
		cin >> g;
		ll rn_1=gp[n-1]/gp[0];
		ll R=(ll)(powl(rn_1,1.0/(n+g-1))+1e-9);
		//double R1=R;

		//ll r=(ll)((long double)R);
		//printf("R=%lf,R1=%lf,R1-r=%lf\n",R,R1,R1-r);
		//printf("r=%lld\n",r);
		bool correct=false;
		if(pow(R,n+g-1)==rn_1){
			correct=true;
			r=R;
		}
		/*if(fmodl(R-r,1.0)==0.0){

			correct=true;
			r=(unsigned long long)(R);
			if((R-r)!=0.0){ r++;};
		}*/
		if(correct){
			cout << "Correct\n";
			ll nxt;
			int i=0;
			nxt=gp[0]*r;
			while(g){
				if(nxt!=gp[i+1]){
					cout << nxt;
					if(g){
						cout << " ";
					}
					else {
						cout << "\n";
					}
					g--;
					i--;
				}
				i++;
				nxt*=r;
			}
			cout << endl;
		}
		else {
			cout << "Incorrect\n";
		}
	}
	return 0;
}
				
