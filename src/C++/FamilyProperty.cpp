// #include <iostream>
// #include <set>
// #include <vector>
// #include <algorithm>
// using namespace  std;
// int pid[10001];
// bool isExist[10001]={false};
//
// struct Property
// {
// 	int pnum;
// 	int people;
// 	int estate;
// 	int area;
// 	double aveEstate;
// 	double aveArea;
// 	Property()
// 	{
// 		people=1;
// 		estate=0;
// 		area =0;
// 		aveArea = 0.0;
// 		aveEstate =0.0;
// 	}
// };
// Property propertys[10001];
// int find(int p)
// {
// 	while (p !=pid[p])
// 	{
// 		p= pid[p];
// 	}
// 	return p;
// }
// void _Union(int i,int j,set<int> &parents)
// {
// 	int p=find(i);
// 	int q=find(j);
// 	if ( p == q ) return;
// 	if (p<q)
// 	{
// 		pid[q] = p;
// 		propertys[p].pnum = p;
// 		propertys[p].people += propertys[q].people;
// 		propertys[p].area += propertys[q].area;
// 		propertys[p].estate += propertys[q].estate;
// 		/*auto it=parents.find(q);
// 		if (it != parents.end())
// 		{
// 			parents.erase(it);
// 		}
// 		parents.insert(p);*/
// 	}
// 	else
// 	{
// 		pid[p] = q;
// 		propertys[q].pnum = q;
// 		propertys[q].people += propertys[p].people;
// 		propertys[q].area += propertys[p].area;
// 		propertys[q].estate += propertys[p].estate;
// 		/*auto it=parents.find(p);
// 		if (it != parents.end())
// 		{
// 			parents.erase(it);
// 		}
// 		parents.insert(q);*/
// 	}
// }
// bool mycomp111111(const Property &p1,const Property &p2)
// {
// 	if (p1.aveArea == p2.aveArea)
// 	{
// 		return p1.pnum<p2.pnum;
// 	}
// 	else
// 	{
// 		return p1.aveArea > p2.aveArea;
// 	}
// }
// int FamilyProperty(int argc, char* argv[])
// {
// 	for (int i = 0; i < 10001; ++i)
// 	{
// 		pid[i] = i;
// 		propertys[i].pnum=i;
// 	}
// 	int N;cin>>N;
// 	int id,fa,ma,k,child,estate,area;
// 	set<int> fathers;
// 	for (int i = 0; i < N; ++i)
// 	{
// 		 scanf("%d %d %d %d",&id,&fa,&ma,&k);
// 		 isExist[id] = true;
// 		if (fa != -1)
// 		 {
// 			_Union(id,fa,fathers);
// 			isExist[fa] = true;
// 		 }
// 			if (ma != -1)
// 		 {
// 			_Union(id,ma,fathers);
// 			isExist[ma] = true;
// 		 }	
// 		 for (int i_k = 0; i_k < k; ++i_k)
// 		 {
// 			 scanf("%d",&child);
// 			 _Union(id,child,fathers);
// 			 isExist[child] = true;
// 		 }
// 		
// 		scanf("%d %d",&estate,&area);
// 		int parent = find(id);
// 		
// 		propertys[parent].area += area;
// 		propertys[parent].estate += estate;
// 	}
// 	vector<Property> ans;
// 	for (int i = 0; i < 10001; ++i)
// 	{
// 		if (isExist[i]  && pid[i] == i)
// 		{
// 			fathers.insert(i);
// 			ans.push_back(propertys[i]);
// 		}
// 	}
// 	for (int i = 0; i < ans.size(); ++i)
// 	{
// 		ans[i].aveArea = ans[i].area*1.0/ans[i].people;
// 		ans[i].aveEstate = ans[i].estate*1.0/ans[i].people;
// 	}
// 	sort(ans.begin(),ans.end(),mycomp111111);
// 	cout<<ans.size()<<endl;
// 	for (int i = 0; i < ans.size(); ++i)
// 	{
// 		printf("%04d %d %.3f %.3f\n", ans[i].pnum, ans[i].people, ans[i].aveEstate, ans[i].aveArea);
// 	}
// 	return 0;
// }
