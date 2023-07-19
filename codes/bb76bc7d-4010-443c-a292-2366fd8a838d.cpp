#include <iostream>
#include <vector>
using namespace std;
 
bool point_in_rect(vector<pair<int, int> >& rect,
                   pair<int, int>& p)
{
    int n = rect.size();
    bool inside = false;
    int j = n - 1;
    for (int i = 0; i < n; i++) {
        if ((rect[i].second > p.second)
            != (rect[j].second > p.second)) {
            if (p.first
                < (rect[j].first - rect[i].first)
                          * (p.second - rect[i].second)
                          / (rect[j].second
                             - rect[i].second)
                      + rect[i].first) {
                inside = !inside;
            }
        }
        j = i;
    }
    return inside;
}
 
int main()
{
    vector<pair<int, int> > R = {
        { 10, 10 }, { 10, -10 }, { -10, -10 }, { -10, 10 }
    };
    pair<int, int> P = { 0, 0 };
    cout << point_in_rect(R, P) << endl;
 
    R = {
        { 10, 10 }, { 10, -10 }, { -10, -10 }, { -10, 10 }
    };
    P = { 20, 20 };
    cout << point_in_rect(R, P) << endl;
 
    return 0;
}