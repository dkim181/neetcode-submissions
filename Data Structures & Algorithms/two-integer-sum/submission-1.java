class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> answerMap = new HashMap<>();

        for(int i = 0; i < nums.length; i++){
            int num = nums[i];
            int diff = target - num;

            if (answerMap.containsKey(diff)){
                return new int[] {answerMap.get(diff), i};
            }
            answerMap.put(num, i);
        }
        return new int[]{};
    }
}
