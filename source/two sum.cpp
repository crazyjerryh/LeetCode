class Solution {
public:
	vector<int> twoSum(vector<int> &numbers, int target) {
		vector<int> res;

		map<int,int> _map;
		int n=numbers.size();
		for(int i=0;i<n;i++){
			if(0==_map.count(numbers[i]))
				_map[numbers[i]]=i+1;   //set index
		}
		if(target%2==0){
			int count=0;
			for(int i=0;i<n;i++){
				if(numbers[i]==target/2)
					count++,res.push_back(i+1);
			}
                   if(count==2)
			  return res;
		   else
			   res.clear();
		}

		for(int i=0;i<n;i++){
			int b=target-numbers[i];
			if(0!=_map.count(b)){
				int r=_map[b];
				if(i+1<r){
					res.push_back(i+1),res.push_back(r);
					break;
				}
				
			}
		}

		return res;
	}
};