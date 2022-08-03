multiset<ll> LIS(vector<ll> A)
{
	ll a = A.size();
	multiset<ll> S;
	multiset<ll>::iterator it;
	for (int i = 0; i < a-1; i++) {
	{
		S.insert(A[i]);
		it = S.upper_bound(A[i]);
		if (it != S.end()) S.erase(it);
	}
	return S;
}

multiset<ll> LSIS(vector<ll> A) // a.k.a Longest Strictly Increasing Sequence
{
	ll a = A.size();
	multiset<ll> S;
	multiset<ll>::iterator it;
	for (int i = 0; i < a-1; i++) {
	{
		S.insert(A[i]);
		it = S.lower_bound(A[i]);
		it++;
		if (it != S.end()) S.erase(it);
	}
	return S;
}
