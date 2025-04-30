#include <bits/stdc++.h>

using namespace std;

const double EPS = 0.0000001;
vector<int> tiras;

double calculaArea(double h){
    double areaCortada=0;
    for (auto &t : tiras){
        if (h<t)
            areaCortada += t-h; 
    }
    return areaCortada;
}



int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	double A, compara;
    double maior;
	int temp;
	
	while (cin >> N >> A){
	    if (N == 0  && A == 0) break;
	    
	    for (int i=0; i<N; i++) {
	        cin >> temp;
	        tiras.push_back(temp);
	    }
	    
	    compara = calculaArea(0.0);
	    
	    if ( compara == A ) {
            cout << ":D\n";
	    } else if (compara<A){
	        cout << "-.-\n";
	    } else {
	    
	        double lo = 0.0, hi = 10000.0;
            while (fabs(hi-lo) > EPS) { // answer is not found yet
                double mid = (lo+hi) / 2.0; // try the middle value
                calculaArea(mid)<A ? hi = mid : lo = mid; // then continue
            }
            
            cout << fixed <<setprecision(4) << hi <<"\n";
	    }  
        tiras.clear();
	}
	
	

    return 0;
}
