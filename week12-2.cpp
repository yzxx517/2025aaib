///week12-2.cpp
///SOIT107_ADVANCE_008_C_C++
#include <iostream>
using namespace std;

int prime(int n)
{
	for(int i=2; i<n; i++){
		if(n%i==0)return 0;
	}
	return 1;
}
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* �W�� C++ �� main ��� ������ �U�� C �� main ���
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*
