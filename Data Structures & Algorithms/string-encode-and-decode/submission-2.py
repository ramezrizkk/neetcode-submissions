class Solution:

    def encode(self, strs: List[str]) -> str:

        if not strs:
            return "EMPTY___STRING"

        encoded_string = "-_-_-".join(strs)

        return encoded_string

    def decode(self, s: str) -> List[str]:
        
        if s == "EMPTY___STRING":
            return []

        decoded_string = s.split('-_-_-')
        
        return decoded_string


