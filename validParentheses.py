def isValid(s: str) -> bool:
    pairs = {
        ")": "(",
        "}": "{",
        "]": "[",
    }
    filo = []
    for c in s:
        if c in pairs:
            if len(filo) == 0 or filo[0] != pairs[c]:
                return False
            filo.pop(0)
        else:
            filo.insert(0, c)
    return len(filo) == 0
