def isAnagram(self, s: str, t: str) -> bool:
    if len(s) != len(t): return False

    s_letters = {}
    t_letters = {}
    for c in s:
        if c in s_letters: s_letters[c] += 1
        else: s_letters[c] = 1
    for c in t:
        if c in t_letters: t_letters[c] += 1
        else: t_letters[c] = 1
    
    return s_letters == t_letters
