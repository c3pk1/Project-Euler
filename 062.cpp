#include <iostream>
#include <vector>
#include <string>
#include <map>

std::map<std::vector<int>, std::vector<long long>> mp;
int main(){
    for(long long i=1; i<=10000; i++){
      long long t = i*i*i;
      std::string s = std::to_string(t);
      std::vector<int> cnt(10);
      for(int j=0; j<s.size(); j++){
        cnt[s[j]-'0']++;
      }
      mp[cnt].push_back(t);
      if(mp[cnt].size() >= 5){
        std::cout << mp[cnt][0] << std::endl;
        return 0;
      }
    }
}