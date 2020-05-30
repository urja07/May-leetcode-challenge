class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
     vector<int> v( numCourses, 0 );
	 unordered_map<int, set<int>> list;
	for( auto pre : prerequisites ) 
    {
		list[ pre[1] ].insert( pre[0] );
		v[ pre[0]]++;
	}
	queue<int> q;
	for( int i=0; i < v.size(); i++ )
		if( v[i] == 0 )
			q.push( i );
        
	int coursesdone = 0;
	while( !q.empty() ) 
    {
		++coursesdone;
		int curr = q.front(); q.pop();
		for( auto i : list[curr] ) 
        {
			--v[i];
			if( v[i] == 0 )
				q.push(i);
		}    
	}
	if(coursesdone == numCourses)
        return true;
    else 
        return false;
    }
};
