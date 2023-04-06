#!/usr/bin/python3

def canUnlockAll(boxes):
    # Create a set to keep track of the indices of the boxes that can be unlocked
    unlocked_boxes = set([0])
    
    # Create a set to keep track of the indices of the boxes that we haven't checked yet
    unchecked_boxes = set(range(1, len(boxes)))
    
    # Iterate over the unlocked boxes and try to unlock more boxes
    while len(unchecked_boxes) > 0:
        found_new_key = False
        
        # Iterate over the unlocked boxes and try to unlock more boxes
        for box_index in unlocked_boxes.copy():
            keys = boxes[box_index]
            
            # Check each key in the box and try to unlock a new box
            for key in keys:
                if key in unchecked_boxes:
                    unlocked_boxes.add(key)
                    unchecked_boxes.remove(key)
                    found_new_key = True
        
        # If we didn't find any new keys, it means we cannot unlock any more boxes
        if not found_new_key:
            break
    
    # Check if we have unlocked all the boxes
    return len(unlocked_boxes) == len(boxes)

if __name__ == "__main__":
  canUnlockAll()