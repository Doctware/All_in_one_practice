#!/usr/bin/python3
import json
def save_to_json_file(my_obj, filename):
    with open(filename, 'w') as f:
        json.dump(my_obj, f)

#!/usr/bin/python3
import json
def load_from_json_file(filename):
    with open(filename, 'r') as f:
       return json.load(f)
