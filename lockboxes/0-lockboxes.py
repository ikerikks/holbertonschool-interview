#!/usr/bin/python3

'''  function that return a boolean to indicate
    if all boxes can be unlocked.
'''


def loopBox(box, tab, boxes):
    if len(box) != 0:
        for key in box:
            if not tab[key]:
                tab[key] = True
                loopBox(boxes[key], tab, boxes)

    return all(tab)


def canUnlockAll(boxes):
    tab = [False] * len(boxes)
    tab[0] = True

    return loopBox(boxes[0], tab, boxes)
