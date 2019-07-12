#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

int TwoSum(){
    vector<int> intgers;
    int N,M;
    cin>>N>>M;
    for (size_t i = 0; i < N; i++)
    {
        /* code */
        int temp;
        scanf("%d",&temp);
        intgers.push_back(temp);
    }
    sort(intgers.begin(),intgers.end());
    for (int i = 0; i < intgers.size()-1; i++) {
            if (i>=1){
                int previus = intgers[i-1];
                if (previus == intgers[i]) continue;
            }
            int obj = M-intgers[i];
            
            std::vector<int>::iterator it;
			
            if (binary_search(intgers.begin()+i+1,intgers.end(),obj) == false) {
                continue;
            }
            else{
				printf("%d %d",intgers[i],(M-intgers[i]) );
				//system("pause");
            	return 0;
            }
        }
		printf("No Solution\n");
	//system("pause");
    return 0;
}