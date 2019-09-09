#include <iostream>
#include <unordered_map>
#include <string>
#include <map>
#include <algorithm>
#include <set>
using namespace  std;
//struct book
//{
//	int id;
//	string  title;
//	string author;	
//	vector<string> keywords;
//	string  publisher;
//	int year;
//};
//bool cmp(const string &s1,const string &s2)
//{
//	return s1.compare(s2);
//}
//bool cmp2(const char* array1,const char* array2)
//{
//	return true;
//}
//unordered_multimap<string,int> titleQuer;
//unordered_multimap<string,int> authorQuer;
//unordered_multimap<string,int> keywordQuer;
//unordered_multimap<string,int> publisherQuer;
//unordered_multimap<int,int> yearQuer;
////map<string,set<int>> authorl;
//int DigitalLibrary(int argc, char* argv[])
//{
//	int n;cin>>n;
//	book b;	
//	for (int i = 0; i < n; ++i)
//	{
//		book b;
//		scanf("%d",&b.id);
//		getchar();
//		getline(cin,b.title);		
//		getline(cin,b.author);		
//		string temp;
//		getline(cin,temp);
//		int j=0,k=0,cnt=0;
//		string keyword="";
//		for (int i = 0; i<temp.length(); ++i)
//		{
//			if (temp[i] == ' ')
//			{
//				b.keywords.push_back(temp.substr(j,cnt));
//				cnt = 0;
//				j=i+1;
//			}
//			else
//			{
//				cnt +=1;
//			}
//		}
//		b.keywords.push_back(temp.substr(j));
//		getline(cin,b.publisher);		
//		scanf("%d",&b.year);
//		//authorQuer[b.author]=b.id;
//		titleQuer.insert(make_pair(b.title,b.id)) ;
//		authorQuer.insert(make_pair(b.author,b.id));
//		for (int i = 0; i < b.keywords.size(); ++i)
//		{
//			
//			keywordQuer.insert(make_pair(b.keywords[i],b.id));		
//			
//		}
//		publisherQuer.insert(make_pair(b.publisher,b.id));
//		yearQuer.insert(make_pair(b.year,b.id));
//		
//	}
//	int query;cin>>query;getchar();
//	for (int i = 0; i < query; ++i)
//	{
//		string sql;
//		getline(cin,sql);
//		int type=sql[0];
//		string content=sql.substr(3);
//		bool flag=true;
//		vector<int> ans;
//		printf("%s\n",sql.c_str());
//		if (type =='1')
//		{
//			if (titleQuer.find(content)==titleQuer.end())
//			{
//				flag = false;
//				cout<<"Not Found"<<endl;
//			}
//			//  it  =   pair<iterator,iterator>
//			else
//			{
//				auto it = titleQuer.equal_range(content);
//				for (auto it1 = it.first; it1 != it.second; ++it1)
//				{
//					//cout<<it1->second<<endl;
//					ans.push_back(it1->second);
//				}
//				sort(ans.begin(),ans.end());
//				for (int i = 0; i < ans.size(); ++i)
//				{
//					cout<<ans[i]<<endl;
//				}
//			}			
//			
//		}
//		else if (type=='2')
//		{
//			if (authorQuer.find(content)==authorQuer.end())
//			{
//				flag = false;
//				cout<<"Not Found"<<endl;
//			}
//			else
//			{
//				auto it = authorQuer.equal_range(content);
//				for (auto it1 = it.first; it1 != it.second; ++it1)
//				{
//					//cout<<it1->second<<endl;
//					ans.push_back(it1->second);
//				}
//				sort(ans.begin(),ans.end());
//				for (int i = 0; i < ans.size(); ++i)
//				{
//					cout<<ans[i]<<endl;
//				}
//			}
//		}else if (type=='3')
//		{
//			if (keywordQuer.find(content)==keywordQuer.end())
//			{
//				flag = false;
//				cout<<"Not Found"<<endl;
//			}
//			
//			else
//			{
//				auto it = keywordQuer.equal_range(content);
//				for (auto it1 = it.first; it1 != it.second; ++it1)
//				{
//					//cout<<it1->second<<endl;
//					ans.push_back(it1->second);
//				}
//				sort(ans.begin(),ans.end());
//				for (int i = 0; i < ans.size(); ++i)
//				{
//					cout<<ans[i]<<endl;
//				}
//			}
//
//		}else if (type=='4')
//		{
//			if (publisherQuer.find(content)==publisherQuer.end())
//			{
//				flag = false;
//				cout<<"Not Found"<<endl;
//			}
//			
//			else
//			{
//				auto it = publisherQuer.equal_range(content);
//				for (auto it1 = it.first; it1 != it.second; ++it1)
//				{
//					//cout<<it1->second<<endl;
//					ans.push_back(it1->second);
//				}
//				sort(ans.begin(),ans.end());
//				for (int i = 0; i < ans.size(); ++i)
//				{
//					cout<<ans[i]<<endl;
//				}
//			}
//
//		}else if (type=='5')
//		{
//			int year=stoi(content);
//			if (yearQuer.find(year)==yearQuer.end())
//			{
//				flag = false;
//				cout<<"Not Found"<<endl;
//			}
//			
//				else
//			{
//				auto it = yearQuer.equal_range(year);
//				for (auto it1 = it.first; it1 != it.second; ++it1)
//				{
//					
//					ans.push_back(it1->second);
//				}
//				sort(ans.begin(),ans.end());
//				for (int i = 0; i < ans.size(); ++i)
//				{
//					cout<<ans[i]<<endl;
//				}
//			}
//		}
//		
//	}
//
//
//	return 0;
//}
//struct book
//{
//	int id;
//	char  title[80+1];
//	char author[80+1];	
//	char keywords[5][10];
//	char  publisher[80+1];
//	int year;
//};
//for (int i = 0; i<temp.length(); ++i)
//		{
//			if (temp[i] == ' ')
//			{
//				b.keywords[j][k] = '\0';
//				j +=1;
//				k=0;
//			}
//			else
//			{
//				b.keywords[j][k++]  = temp[i];
//			}
//		}
//**************************//
//#include <iostream>
//#include <map>
//#include <set>
//using namespace std;
//map<string, set<int> > title, author, key, pub, year;
//void query(map<string, set<int> > &m, string &str) {
//    if(m.find(str) != m.end()) {
//        for(auto it = m[str].begin(); it != m[str].end(); it++)
//            printf("%07d\n", *it);
//    } else
//        cout << "Not Found\n";
//}
//int main() {
//    int n, m, id, num;
//    scanf("%d", &n);
//    string ttitle, tauthor, tkey, tpub, tyear;
//    for(int i = 0; i < n; i++) {
//        scanf("%d\n", &id);
//        getline(cin, ttitle);
//        title[ttitle].insert(id);
//        getline(cin, tauthor);
//        author[tauthor].insert(id);
//        while(cin >> tkey) {
//            key[tkey].insert(id);
//            char c = getchar();
//            if(c == '\n') break;
//        }
//        getline(cin, tpub);
//        pub[tpub].insert(id);
//        getline(cin, tyear);
//        year[tyear].insert(id);
//    }
//    scanf("%d", &m);
//    for(int i = 0; i < m; i++) {
//        scanf("%d: ", &num);
//        string temp;
//        getline(cin, temp);
//        cout << num << ": " << temp << "\n";
//        if(num == 1) query(title, temp);
//        else if(num == 2) query(author, temp);
//        else if(num == 3) query(key, temp);
//        else if(num == 4) query(pub,temp);
//        else if(num ==5) query(year, temp);
//    }
//    return 0;
//}