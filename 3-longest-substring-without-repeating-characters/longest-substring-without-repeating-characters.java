class Solution {
    public int lengthOfLongestSubstring(String s) {
         int l = 0, result = 0;
    HashMap<Character, Integer> freq = new HashMap<>();

    for (int r = 0; r < s.length(); r++) {
        if (freq.containsKey(s.charAt(r)) && freq.get(s.charAt(r)) >= l) {
            l = freq.get(s.charAt(r)) + 1;
        }

        freq.put(s.charAt(r), r);
        result = Math.max(result, r - l + 1);
    }

    return result;
    }
}