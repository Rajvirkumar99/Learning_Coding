
int main (){
    int n;
    cin>>n;
    int sum=0;
//     int i=1;
    //     while(i<=n){
//         sum+=i;
//         i++;
     for (int i=0; i<=n; i++){
        sum+=i;
         }
    cout<<sum;
}
#print all the value between 1 and 50 except for all the multiples of 3

int main (){
    for (int i=1; i<=50; i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<" "<<endl ;
    }
}   
