#include<bits/stdc++.h>
using namespace std;

void eeriePlanet(multimap<pair<long long int,long long int>,long long int> mp, long long int height_person, long long int time) {
	multimap<pair<long long int,long long int>, long long int>::iterator itlow,it;
	
	priority_queue< pair<long long int,long long int>, vector<pair<long long int,long long int>>, greater<pair<long long int,long long int>> > pq;
	
	it = mp.begin();
	while(it!=mp.end()) {
		// cout<<"entering while loop \n";
		// if((it->first).first > time || (it->first).second < time) {
		// 	cout<<"YES1"<<"\n";
		// 	break;
		// }
		if((it->first).first <= time && (it->first).second >= time) {
			if(it->second < height_person) {
				cout<<"YES2"<<"\n";
			}
			else{
				cout<<"NO1"<<"\n";
			}
		}

		it++;
	}
	// it = mp.begin();
	// string st;
	// while(it!=mp.end()) {
	// 	if(((it->second).first > time) && ((it->first) > height_person)) {
	// 		st = "YES";
	// 	}

	// 	if(((it->second).second < time) && ((it->first) < height_person)) {
	// 		st = "YES";
	// 	}
	// 	it++;
	// }
	// while((it->first) < height_person) {
	// 	pq.emplace((it->second).first, (it->second).second);
	// 	it++;
	// }

	// string st;
	// pair<long long int,long long int> p;
	// while(!pq.empty()) {
 //        p = pq.top();
 //        long long int x = p.first;
 //        long long int y = p.second;
 //        cout<<x<<" "<<y;
 //        if(time>=x && time<=y) {
 //        	st = "YES";
 //        }
 //        if(time>=x && time>=y) {
 //        	st = "YES";
 //        }
 //        if(time<=x && time<=y) {
 //        	st = "YES";
 //        }
 //        else{
 //        	st ="NO";
 //        }
 //        pq.pop();
 //    }

 //    cout<<"ans = "<<st<<"\n";
	

}



int main() {
	long long int total_hours,total_crew,q;
	cin>>total_hours>>total_crew>>q;
	long long int crew_height, start_time, end_time;
	multimap<pair<long long int,long long int>, long long int> mp;

	//storing crew data long long into map;
	while(total_crew>0) {
		cin>>crew_height>>start_time>>end_time;
		mp.emplace(make_pair(start_time,end_time),crew_height);
		total_crew--;
	}
	//displaying map
	auto i = mp.begin();
	while(i!=mp.end()) {
		cout<<(i->first).first<<","<<(i->first).second<<"->"<<(i->second);
		cout<<"\n";
		i++;
	}

	// itlow = mp.lower_bound(40);
	// cout<<(itlow->first);

	// taking input for people.
	long long int height_person, time;
	while(q>0) {
		cin>>height_person>>time;
		eeriePlanet(mp,height_person,time);

		q--;
	}


}