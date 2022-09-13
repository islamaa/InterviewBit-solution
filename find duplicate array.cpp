int solution::repeateNumber(const vector<int>&A){
vector<int> v(A.size+1,0);
for(int i=0;i<A.size();i++){
  v[A[i]]+=1;
  if (v[A[i]]==2)return A[i];
  


}

return -1;
}
