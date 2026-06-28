class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);
        for(int i = 0;i < tasks.size();i++){
            freq[tasks[i] - 'A']++;
        }
        priority_queue<pair<int,int>> pq;
        for(int i = 0;i < 26;i++){
            if(freq[i] > 0){
                pq.push({freq[i],i});
            }
        }
        int time = 0;
        int cycle = n + 1;
        while(!pq.empty()){
            vector<pair<int,int>> temp;
            for(int i = 0;i < cycle;i++){
                if(!pq.empty()){
                    int freq = pq.top().first;
                    int ele = pq.top().second;
                    pq.pop();
                    temp.push_back({freq,ele});
                }
            }
            for(auto it : temp){
                int freq = it.first;
                int ele = it.second;

                freq--;
                if(freq > 0){
                    pq.push({freq,ele});
                }
            }
            if(!pq.empty()){
                time = time +  cycle;
            }
            else{
                time = time + temp.size();
            }
        }
        return time;
    }
};
