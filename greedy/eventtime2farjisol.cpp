int maxEvents(vector<vector<int>>& events) {
	priority_queue<int, vector<int>, greater<int>> pq;
	sort(events.begin(), events.end());
	int i = 0, n = events.size(), ans = 0;
	for(int d = 1; d <= 100000; d++) {
		//remove the events that are already over
		while(!pq.empty() && pq.top() < d)
			pq.pop();
		//insert events (their deadlines) that start at day d
		while(i < n && events[i][0] == d) {
			pq.push(events[i][1]);
			i++;
		}
		//schedule the event with least deadline on that day
		if(!pq.empty()) {
			pq.pop();
			ans++;
		}
		//when all events processed, then break
		if(pq.empty() && i == n) break;
	}
	return ans;
}