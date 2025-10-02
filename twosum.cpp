#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void fillMatrix(vector<int>& nums) {
        int n, value;
        cout << "Ingrese el tamaño del arreglo: ";
        cin >> n;
        nums.resize(n); 
        for (int i = 0; i < n; i++) {
            cout << "Ingrese el valor para nums[" << i << "]: ";
            cin >> value;
            nums[i] = value;
        }
        cout<<"El arreglo es: [";
        for (int i =0; i<n; i++){
            cout<<nums[i]<<", ";
        }
        cout<<"]"<<endl;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j}; 
                }
            }
        }
        return {}; 
    }
    
    void printResult(const vector<int>& result) {
        if (result.empty()) {
            cout << "No se encontraron dos números que sumen el target." << endl;
        } else {
            cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums;
    int target;

    
    sol.fillMatrix(nums);

    
    cout << "Ingrese el valor del target: ";
    cin >> target;

    vector<int> result = sol.twoSum(nums, target);

    sol.printResult(result);

    return 0;
}