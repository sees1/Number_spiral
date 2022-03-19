#include <iostream>
#include <vector>


int main(){
long long test;
long long x,y;
std::vector <long long> buff;
std::cin>>test;
for(long long i = 0;i < test;i++){
	std::cin>>x>>y;
	if(x >= y){
		if(x%2 == 0){
			long long r = x * x;
			buff.push_back(r - y + 1);
		}else{
			long long r = (x - 1) * (x - 1) + 1;
			buff.push_back(r + y - 1);
		}
	}else if (x < y){
		if (y%2 == 1){
			long long r = y * y;
			buff.push_back(r - x + 1);
		}else{
			long long r = (y - 1) * (y - 1) + 1;
			buff.push_back(r + x - 1);
		}
	}
}

for(long long i = 0;i < test;i++){
	std::cout<< buff[i]<<std::endl;
}
}
					

//704012672 608536365
//941416062 502819867
