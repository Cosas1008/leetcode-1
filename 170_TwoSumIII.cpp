class TwoSum {
public:
    unordered_map<int,int> mp;
    vector<int> v;
    int size=0;
    int max1 = 0;
    int max2 = 0;
    int small1 = 0;
    int small2 = 0;
    // Add the number to an internal data structure.
	void add(int number) {
            // Add the number to the vector
	    v.push_back(number);
	    size++;
            // Increase the count of the number in the map.
	    mp[number]++;

            // See if the number is greater than any of the two maximum values. If it is, change them accordingly.
	    if(number > max1)
	    {
	        max2 = max1;
	        max1 = number;
	    }
	    else if(number > max2)
	    {
	        max2 = number;
	    }

            // See if the number is smaller than any of the two smallest values. If it is, change the small1 and small2 variables accordingly.
	    if(number < small1)
	    {
	        small2 = small1;
	        small1 = number;
	    }
	    else if(number < small2)
	    {
	        small2 = number;
	    }
	}

    // Find if there exists any pair of numbers which sum is equal to the value.
	bool find(int value) {
            // If the value is greater than the maximum value achievable, return false
	    if(value > (max1+max2))
	    {
	        return false;
	    }
            // If the value is smaller than the minimum value achievable, return false
	    if(value < (small1+small2))
	    {
	        return false;
	    }
	    for(int i =0;i<size;i++)
	    {
	        if(value - v[i] == v[i])
	        {
	            if(mp[v[i]] >= 2)
	            {
	                return true;
	            }
	        }
	        else
	        {
	            if(mp.find(value-v[i]) != mp.end() && mp[value-v[i]] >= 1)
	            {
	                return true;
	            }
	        }
	    }
	    return false;
	}
};
