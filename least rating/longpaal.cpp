class Solution {
  public:
    string longestPalin (string S) {
          int n = S.length();
    if (n <= 1) {
        return S;
    }

    int maxLength = 1;
    int start = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (j - i + 1 > maxLength && ispal(S, i, j)) {
                maxLength = j - i + 1;
                start = i;
            }
        }
    }

    return S.substr(start, maxLength);
}

bool ispal(const string& s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}


    };