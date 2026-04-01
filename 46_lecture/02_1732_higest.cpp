class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int c = 0;
        int m = 0;
        int n = gain.size();
        for (int i = 0; i < n; i++)
        {
            c += gain[i];
            m = max(m, c);
        }
        return m;
    }