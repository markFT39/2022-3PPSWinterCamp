class Solution {
public:
  bool isDiv(int i) {
    int num = i;

    while (i > 0) {
      int rem = i % 10;

      if (rem != 0) {
        if (num % rem != 0) {
          return false;
        }
      } else
        return false;

      i = i / 10;
    }

    return true;
  }
  vector<int> selfDividingNumbers(int left, int right) {

    vector<int> ans;
    for (int i = left; i <= right; i++) {
      if (i % 10 != 0) {
        if (isDiv(i)) {
          ans.push_back(i);
        }
      } else
        continue;
    }
    return ans;
  }
};