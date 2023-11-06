#include<bits/stdc++.h>
using namespace std;

int x, y, m, n;
int root;
int insta, cpc;

const int nax = 1e5 + 5;
const int inf = 1e9 + 5;

vector<int> perr ( nax ), dis (nax ), g [ nax ], pp;
vector<bool> vertex ( nax ), in ( nax );

void re_set ()
{
	for ( int i = 0 ; i < nax; ++i )
		perr [i] = -inf;
	for ( int i = 0 ; i < nax ; ++i )
		dis [i] = inf;
	for ( int i = 0 ; i < nax; ++i )
		vertex [i] = in [i] = false;
	for ( int i = 0 ; i < nax ; ++i )
		g [i].clear ();
}

void bfs ()
{
	insta = 0;
	vertex[root] = true; ++insta;
	perr[root] = root; ++insta;
	dis[root] = 0; ++insta;
	queue<int> q; ++insta;
	q.push ( root ); ++insta;
	while ( !q.empty() && ++insta ) {
		cpc = q.front(); ++insta;
		q.pop(); ++insta;
		for ( int x : g[cpc] ) {
			++insta;
			if ( !vertex[x] && ++insta ) {
				vertex[x] = true; ++insta;
				q.push ( x ); ++insta;
				perr[x] = cpc; ++insta;
				dis[x] = dis[cpc] + 1; ++insta;
			}
		}
	}
	cout << "Output your BFS." << endl;
	cout << "Reachable nodes are : ";
	for ( int i = 0 ; i < nax ; ++i ) {
		if ( in[i] && (dis[i] != inf ) ) {
			cout << i << " ";
		}
	}
	cout << endl;
	cout << "Instructions : " << insta << endl;
	cout << "Paths are:" << endl;
	for ( int i = 0 ; i < nax ; ++i ) {
		if ( in[i] && (dis[i] != inf ) ) {
			cout << "Path from "<<root<<" to " <<i<< " is : ";
			int bas = i;
			pp.clear();
			while ( perr[bas] != bas ) {
				pp.push_back(bas);
				bas = perr[bas];
			}
			pp.push_back(root);
			reverse ( pp.begin(), pp.end() );
			for ( int xx : pp ) cout << xx << " ";
			cout << endl;
		}
	}
	cout << endl;
}

void dfs ()
{
	for ( int i = 0 ; i < nax ; ++i )
		perr [i] = -inf;
	for ( int i = 0 ; i < nax ; ++i )
		dis [i] = inf;
	for ( int i = 0 ; i < nax ; ++i )
		vertex [i] = false;
	insta = 0; ++insta;
	vertex[root] = true; ++insta;
	perr[root] = root; ++insta;
	dis[root] = 0; ++insta;
	stack<int> s; ++insta;
	s.push ( root ); ++insta;
	while ( !s.empty() && ++insta) {
		cpc = s.top(); ++insta;
		s.pop(); ++insta;
		for ( int x : g[cpc] ) {
			++insta;
			if ( !vertex[x] && ++insta ) {
				vertex[x] = true; ++insta;
				s.push ( x ); ++insta;
				perr[x] = cpc; ++insta;
				dis[x] = dis[cpc] + 1; ++insta;
			}
		}
	}
	cout << "Output for DFS." << endl;
	cout << "Reachable nodes are : ";
	for ( int i = 0 ; i < nax ; ++i ) {
		if ( in[i] && (dis[i] != inf ) ) {
			cout << i << " ";
		}
	}
	cout << endl;
	cout << "Instructions : " << insta << endl;
	cout << "Paths are:" << endl;
	for ( int i = 0 ; i < nax ; ++i ) {
		if ( in[i] && (dis[i] != inf ) ) {
			cout << "Path from "<<root<<" to " <<i<< " is : ";
			int bas = i;
			pp.clear();
			while ( perr[bas] != bas ) {
				pp.push_back(bas);
				bas = perr[bas];
			}
			pp.push_back(root);
			reverse ( pp.begin(), pp.end() );
			for ( int xx : pp ) cout << xx << " ";
			cout << endl;
		}
	}
	cout << endl;
}

int main ()
{
	re_set ();
	cout << "Enter your nodes : ";
	cin >> x;
	cout << "Enter your edges : ";
	cin >> y;
	cout << "Enter " << y << " edges : " << endl;
	for ( int i = 0 ; i < y ; ++i ) {
		cin >> m >> n;
		in [m] = in [n] = true;
		g[m].push_back(n);
	}
	cout << "Enter the Starting Node : ";
	cin >> root;

	bfs ();
	dfs ();


	return 0;
}