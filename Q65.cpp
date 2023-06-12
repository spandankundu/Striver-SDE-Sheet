double median(vector<int>& a, vector<int>& b) {
	vector<int>c;
	for(int i=0;i<a.size();i++)
	c.push_back(a[i]);
	for(int j=0;j<b.size();j++)
	c.push_back(b[j]);
	sort(c.begin(),c.end());
	if(c.size()%2)
	return c[c.size()/2];
	else
	return double((double(c[(c.size()/2)-1])+double(c[c.size()/2]))/2);

}
