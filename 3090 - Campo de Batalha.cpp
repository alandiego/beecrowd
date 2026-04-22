#include <bits/stdc++.h>
using namespace std;

using ii = pair<double,double>;

double cross(ii a, ii b, ii c) {
	return (b.first - a.first)*(c.second - a.second) -
	       (b.second - a.second)*(c.first - a.first);
}

bool onSegment(ii a, ii b, ii p) {
	return fabs(cross(a,b,p)) < 1e-9 &&
	       min(a.first,b.first) <= p.first && p.first <= max(a.first,b.first) &&
	       min(a.second,b.second) <= p.second && p.second <= max(a.second,b.second);
}

bool insidePolygon(vector<ii> &poly, ii p) {
	int n = poly.size();
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		ii a = poly[i];
		ii b = poly[(i+1)%n];

		// ponto na borda
		if (onSegment(a,b,p)) return true;

		// garante a <= b em y
		if (a.second > b.second) swap(a,b);

		// verifica cruzamento do raio
		if (p.second > a.second && p.second <= b.second) {
			double x = a.first + (b.first - a.first) *
			           (p.second - a.second) / (b.second - a.second);
			if (x > p.first) cnt++;
		}
	}

	return cnt % 2 == 1;
}

int main() {

	int n, m, s;

	cin >> n >> m >> s;

	vector<ii> triangulo = {{0,0}, {n,0}, {n,m}};
	ii p;

	int xi, yi, hi;
	int exercito1=0, exercito2=0;

	while (s--) {
		cin >> xi >> yi >> hi;
		p = {xi, yi};
		if (insidePolygon(triangulo, p))
			exercito2+=hi;
		else
		    exercito1+=hi;
	}

    cout << exercito1 << ' '<< exercito2 << "\n";

    return 0;
}
