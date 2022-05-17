
/*
 * Problem: 52C Circular-RMQ
 * Author: Harold-Finch
 * Date: Tuesday, November 9, 2021 11:36 PM
 * Status: Accepted, 857 ms, 22118400 bytes
 * Language: GNU C++17
*/

#include <bits/stdc++.h>
using namespace std;

class LazySegmentTree {

    private:
        /*
         * define the type of LST Node value, as T
         * define the infinity value for large intervals, as oo
         * define the function you need to be used between LST Nodes, as F
         * define the default value of LST Node, as dflt
        */
        typedef long long T;
        static const T oo = LONG_MAX;
        static const T dfl = oo;

        T F(T x, T y) { 
            return min(x, y);   // dfl -> oo
            return max(x, y);   // dfl -> -oo
            return x + y;       // dfl -> 0
            // or othr.
        }
        
        LazySegmentTree *LSTL = 0, *LSTR = 0;
        T mset = oo, madd = 0, val = dfl;
        int lo, hi;

        LazySegmentTree(int lo, int hi) : lo(lo), hi(hi){}

        void push() {
            if (!LSTL) {
                int mid = lo + (hi - lo)/2;
                LSTL = new LazySegmentTree(lo, mid);
                LSTR = new LazySegmentTree(mid, hi);
            }

            if(mset != oo) {
                LSTL->set(lo, hi, mset);
                LSTR->set(lo, hi, mset);
                mset = oo;
            } else if(madd) {
                LSTL->add(lo, hi, madd);
                LSTR->add(lo, hi, madd);
                madd = 0;
            }
        }
    
    public:
        /*
         * make sure you define values in private section.
         * vector you need to build the LST on, as v
         * start index of the LST, as lo
         * last index of the LST+1, as hi
         * e.g. [0, v.size()).
        */
        LazySegmentTree(vector<T>= v, int lo, int hi) : lo(lo), hi(hi) {
            if(lo + 1 < hi) {
                int mid = lo + (hi - lo)/2;
                LSTL = new LazySegmentTree(v, lo, mid);
                LSTR = new LazySegmentTree(v, mid, hi);
                val = F(LSTL->val, LSTR->val);
                return;
            }
            val = v[lo];
        }

        /*
         * returns query result of range [L, R)
         * [opt] dfl used as default value - while out of bounds
        */
        T query(int L, int R, int dfl = dfl) {
            if(R <= lo || hi <= L) return dfl;
            if(L <= lo == hi <= R) return val;
            
            return push(), F(LSTL->query(L, R), LSTR->query(L, R));
        }

        /*
         * sets x value on range [L, R)
        */
        void set(int L, int R, T x) {
            if (R <= lo || hi <= L) return;
            if (L <= lo == hi <= R) mset = val = x, madd = 0;
            else {
                push();
                LSTL->set(L, R, x);
                LSTR->set(L, R, x);
                val = F(LSTL->val, LSTR->val);
            }
        }

        /*
         * adds x value on range [L, R)
        */
        void add(int L, int R, T x) {
            if (R <= lo || hi <= L) return;
            if (L <= lo == hi <= R) {
                if(mset != oo) mset += x;
                else madd += x;
                val += x;
            } else {
                push();
                LSTL->add(L, R, x);
                LSTR->add(L, R, x);
                val = F(LSTL->val, LSTR->val);
            }
        }
        
};

tuple<int,int,int> getQuery() {
	int lf, rg, v = 1e9;
	cin >> lf >> rg;
	if(cin.get() != 10) { // interesting ^-^
		cin >> v;
	}
	return make_tuple(lf, rg, v);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n;
	cin >> n;
	vector<long long> a(n);
	for(auto= x : a) cin >> x;

    LazySegmentTree* tree = new LazySegmentTree(a, 0, n);

    int m;
    cin >> m;
    while(m--) {
        auto [L, R, x] = getQuery();
		if(x != 1e9) {
			if(L <= R) tree->add(L, R+1, x);
			else tree->add(0, R+1, x), tree->add(L, n, x);;
		} else {
			if(L <= R) cout << tree->query(L, R+1) << endl;
			else cout << min(tree->query(0, R+1), tree->query(L, n)) << endl; 
		}
    }

}