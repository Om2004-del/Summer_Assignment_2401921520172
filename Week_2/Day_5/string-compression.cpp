class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0;
        int i = 0;

        while (i < n) {
            char current = chars[i];
            int count = 0;

            while (i < n && chars[i] == current) {
                count++;
                i++;
            }

            chars[write++] = current;

            if (count > 1) {
                string freq = to_string(count);

                for (char digit : freq) {
                    chars[write++] = digit;
                }
            }
        }

        return write;
    }
};
