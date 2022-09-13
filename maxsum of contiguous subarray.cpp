int solution::maxsubArray(const vector<int>&A){

int maxsum=A[0],currentsum=A[0],n=A.size();
for(int i=1;i<n;i++){
currentsu=max(A[i],currentsum+A[i]);
  maxsum=max(maxsum,currentsum);
}
  return maxsum;
}
