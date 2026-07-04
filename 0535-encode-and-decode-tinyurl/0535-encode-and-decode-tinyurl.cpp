class Solution {
public:
    
    unordered_map<int,string> mp;
    int cnt=0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string baseUrl="http://tinyurl.com/";
        mp[cnt]=longUrl;
        return "http://tinyurl.com/"+to_string(cnt);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int posi= shortUrl.find_last_of('/');
        return mp[stoi(shortUrl.substr(posi+1))];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));