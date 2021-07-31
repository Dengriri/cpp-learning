#include<iostream>
using namespace std;
int   main(){
    // 统计输入中每个值连续出现了多少次,以ctrl+z结束
    int currVal = 0, val = 0;
    if (cin >> currVal){
        int cnt = 1;
        while (cin >> val){
            if (val == currVal)
                ++cnt;
            else {
               cout << currVal << " occurs "
                          << cnt << " times " << endl;
                currVal = val;
                cnt = 1;
            }
        }
        cout << currVal << " occurs "
                  << cnt << " times " << endl;
    }
    system("pause");
    return 0;
}
