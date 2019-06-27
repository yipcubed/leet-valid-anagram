#include <cstring>
#include <climits>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <algorithm>


using namespace std;

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto x = [](){ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL;}();

class Solution {
public:
    bool isAnagram(string s, string t) {
      if (s.length() != t.length()) return false;
      int sv[128];
      int tv[128];
      memset(sv, 0, sizeof(sv));
      memset(tv, 0, sizeof(tv));
      // countup
      for (char c: s)
        ++sv[c];
      for (char c: t)
        ++tv[c];
      for (int i = 'a'; i <= 'z'; ++i)
        if (sv[i] != tv[i])
          return false;
      return true;
    }
};

void test1() {
  Solution S;
  cout << boolalpha;
  cout << "t? " << S.isAnagram("anagram", "nagaram") << endl;
  cout << "f? " << S.isAnagram("rat", "car") << endl;
}

void test2() {
  Solution S;
}

void test3() {
  Solution S;
}

int main() {
  test1();
  test2();
  test3();
  cout << "Done!" << endl;
  
  return 0;
}

