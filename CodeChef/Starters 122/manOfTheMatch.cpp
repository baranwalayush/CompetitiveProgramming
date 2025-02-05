#include <bits/stdc++.h>
using namespace std;

void check(vector<int> &team_score){
    int score=0;
    int player=0;
    for(int i=0;i<22;i++){
        if(team_score[i]>score){
            player=i;
            score=team_score[i];
        }
    }
    cout<<player+1<<endl;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        vector<int> team_score;
        for(int i=0;i<22;i++){
            int run, wicket;
            cin>>run>>wicket;
            int totalScore=run + 20*wicket;
            team_score.push_back(totalScore);
        }
        check(team_score);
        
    }
}
