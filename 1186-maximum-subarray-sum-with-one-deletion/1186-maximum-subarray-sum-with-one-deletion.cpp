class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        int nodelete = arr[0];
        int onedelete = 0;
        int res = arr[0];

        for(int i = 1; i < n; i++){
            int v1 = arr[i];
            int v2 = nodelete + arr[i];
            int v3 = onedelete + arr[i];
            int v4 = nodelete;

            nodelete = max(v1, v2);
            onedelete = max(v3, v4);

            res = max(res, max(nodelete, onedelete));
        }
        return res;
    }
};