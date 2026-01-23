class Solution {
public:
    int maxi(vector<int>& piles) {
        int a = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            a = max(a, piles[i]);
        }
        return a;
    }

    long long tota(vector<int>& piles, int mid) {
        long long sum = 0;
        for (int i = 0; i < piles.size(); i++) {
            sum += (piles[i] + mid - 1) / mid; // integer ceil
        }
        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxi(piles);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long t = tota(piles, mid);

            if (t <= (long long)h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
