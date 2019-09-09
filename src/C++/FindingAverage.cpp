#include <iostream>
#include <string>
#include <random>
#include <string.h>
using namespace std;
bool isAnumber(char c)
{
	return c>='0'  && c<='9';
}
bool checkLegal(string &s,int &cntP)
{
	bool ans = false;
	bool flag= true;
	
	for (int i=0;i<s.length();i++)
	{
		if (i==0)
		{
			if (s[0]=='-' || isAnumber(s[0]))
			{
				continue;
			}
			else
			{
				flag =false;
				break;
			}
		}
		if (i==s.length()-1)
		{
			if (isAnumber(s[i] == false))
			{
				flag = false;
			}
			continue;
		}
		if (s[i] == '.')
		{
			cntP +=1;
			continue;
		}
		else if (isAnumber(s[i]) == false)
		{
			flag=false;
			break;
		}
		
	}
	if (cntP <=1 && flag)
	{		
		ans =true;		
	}
	return  ans;
}

int FindAverage(int argc, char* argv[])
{
	int n, cnt = 0;
    char a[50], b[50];
    double temp, sum = 0.0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        scanf("%s", a);
        sscanf(a, "%lf", &temp);
        sprintf(b, "%.2f",temp);		
        int flag = 0;
        for(int j = 0; j < strlen(a); j++)
            if(a[j] != b[j]) flag = 1;
        if(flag || temp < -1000 || temp > 1000) {
            printf("ERROR: %s is not a legal number\n", a);
            continue;
        } else {
            sum += temp;
            cnt++;
        }
    }
    if(cnt == 1)
        printf("The average of 1 number is %.2f", sum);
    else if(cnt > 1)
        printf("The average of %d numbers is %.2f", cnt, sum / cnt);
    else
        printf("The average of 0 numbers is Undefined");
    return 0;

}
//int N;cin>>N;
//	string temp;
//	int cnt=0;
//	float sum=0.0;
//	for (int i = 0; i < N; ++i)
//	{
//		cin>>temp;
//		int cntp=0;
//		bool flag=checkLegal(temp,cntp);
//		if (flag)
//		{
//			if (cntp ==0)
//			{
//				int num= stoi(temp);
//				if (num>=-1000 && num<=1000)
//				{
//					cnt +=1;
//					sum += stof(temp);
//				}
//				else
//				{
//					flag=false;
//				}
//			}
//			else if (cntp ==1)
//			{
//				if (temp.length()-1-temp.find('.') >2)
//				{
//					flag = false;
//				}
//				else
//				{
//					cnt +=1;
//					sum += stof(temp);
//				}
//
//			}			
//		}
//		if (flag == false)		
//		{
//			printf("ERROR: %s is not a legal number\n",temp.c_str());
//		}
//	}
//	if (cnt == 0)
//	{
//		printf("The average of 0 numbers is Undefined");
//	}
//	else if (cnt==1)
//	{
//		printf("The average of 1 number is %.2lf",sum);
//	}
//	else
//	{
//		printf("The average of %d numbers is %.2lf",cnt,sum/cnt);
//	}
//	return 0;