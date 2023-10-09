typedef long long int ll;
class Solution {
public:
    string predictPartyVictory(string senate) {
        ll n = senate.length();
        if(senate=="R") {
            return "Radiant";
        } else if(senate == "D") {
            return "Dire";
        }
        queue<char> q;
        ll i=0, radiant=0, dire=0, rb = 0, db = 0;
        bool push;
        while(i<n) {
            char c = senate[i];
            q.push(c);
            if(c=='R') {
                radiant++;
            } else {
                dire++;
            }
            i++;
        }
        if(dire==0) {
            return "Radiant";
        } else if(radiant == 0) {
            return "Dire";
        }
        while(radiant>0 and dire>0) {
            char c = q.front();
            // cout<<"char is "<<c<<" "<<radiant<<" "<<dire<<endl;
            q.pop();
            if(c=='R') {
                if(rb > 0) {
                    rb--;
                    continue;
                }
                dire--;
                db++;
                q.push(c);
                // radiant++;
            } else {
                if(db > 0) {
                    db--;
                    continue;
                }
                rb++;
                radiant--;
                q.push(c);
                // dire++;
            }
           
        }
        // cout<<radiant<<" "<<dire<<" "<<rb<<" "<<db<<endl;
        return db > rb and radiant > dire ? "Radiant" : "Dire";
        
    }
};