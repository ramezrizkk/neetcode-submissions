class Solution:
    def isPalindrome(self, s: str) -> bool:
        res = "".join(char for char in s if char.isalnum())
        res = res.lower()
        if res == res[::-1]:
            return True
        return False