class Solution {
public:
    string defangIPaddr(string address) {
        int i = 0;

        while (i < address.size()) {
            if (address[i] == '.') {
                address.replace(i, 1, "[.]");
                i += 3;
            }
            else {
                i++;
            }
        }

        return address;
    }
};