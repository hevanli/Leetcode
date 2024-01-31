def longestCommonPrefix(self, strs: list[str]) -> str:
        min_length = min(len(word) for word in strs)
        prefix = ""
        for i in range(min_length):
            prefix += strs[0][i]
            for word in strs:
                if not word.startswith(prefix): return prefix[:-1]
        return prefix
