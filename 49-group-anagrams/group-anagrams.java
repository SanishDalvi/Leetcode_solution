class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, List<String>> m = new HashMap<>();
        List<List<String>> result = new ArrayList<>();

        for (String s : strs) {
            char[] chars = s.toCharArray();
            Arrays.sort(chars);

            String key = new String(chars);

            m.putIfAbsent(key, new ArrayList<>());
            m.get(key).add(s);
        }

        for (List<String> value : m.values()) {
            result.add(value);
        }

        return result;
    }
}