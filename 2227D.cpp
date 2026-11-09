#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;

    // প্রতিটি সংখ্যা (0 থেকে n-1) এর দুটি পজিশন সেভ করার জন্য
    vector<int> pos1(n, -1), pos2(n, -1);
    for (int i = 0; i < 2 * n; i++) {
        int val;
        cin >> val;
        if (pos1[val] == -1) pos1[val] = i;
        else pos2[val] = i;
    }

    int ans = 0;

    // কেস ১: সংখ্যা ০ এর দুটি অবস্থানই প্যালিনড্রোমে জোড়া হিসেবে আছে
    // তাহলে প্যালিনড্রোমের কেন্দ্র হবে (pos1[0] + pos2[0]) / 2
    int S = pos1[0] + pos2[0];
    int k = 0;
    while (k < n && (pos1[k] + pos2[k] == S)) {
        k++;
    }
    // k পর্যন্ত সবাই জোড়ায় আছে, তাই MEX আপাতত k
    int current_mex = k;
    
    // এখন দেখা যাক k+1 তম সংখ্যাটি (অর্থাৎ মান k) প্যালিনড্রোমের মাঝখানে বসানো যায় কি না
    // যদি S জোড় সংখ্যা হয় এবং k এর যেকোনো একটি অবস্থান ঠিক মাঝখানে (S/2) হয়
    if (k < n && S % 2 == 0 && (pos1[k] * 2 == S || pos2[k] * 2 == S)) {
        current_mex = k + 1;
    }
    ans = max(ans, current_mex);

    // কেস ২: সংখ্যা ০ নিজেই প্যালিনড্রোমের মাঝখানে (Center) আছে
    // ০ এর দুটি পজিশন আছে, আমরা দুইটাই আলাদাভাবে চেক করবো
    for (int center_pos : {pos1[0], pos2[0]}) {
        int S2 = center_pos * 2;
        int k2 = 1; // ০ অলরেডি মাঝখানে আছে, তাই MEX শুরু ১ থেকে
        while (k2 < n && (pos1[k2] + pos2[k2] == S2)) {
            k2++;
        }
        ans = max(ans, k2);
    }

    cout << ans << endl;
}

int main() {
    // দ্রুত ইনপুট আউটপুটের জন্য
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}