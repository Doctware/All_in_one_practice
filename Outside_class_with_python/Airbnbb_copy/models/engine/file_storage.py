#!/usr/bin/python3
""" This module contains the class FileStorage"""
import json
from models.base_model import BaseModel


class FileStorage:
    """ The class file storage """
    __file_path = "file.json"
    __objects = {}

    def all(self):
        """ returns the dictionary __object"""
        return self.__objects

    def new(self, obj):
        """ sets in __object the obj with key """
        key = "{}.{}".format(obj.__class__.__name__, obj.id)
        self.__objects[key] = obj

    def save(self):
        """ Serialized __objects to a JSON file  """
        serialized_object = {}
        for key, value in self.__objects.items():
            serialized_object[key] = value.to_dict()
        with open(self.__file_path, 'w') as file:
            json.dump(serialized_object, file)

    def reload(self):
        """Deserialized the JSON file to __object """
        try:
            with open(self.__file_path, 'r') as file:
                data = json.load(file)
                for key, value in data.items():
                    class_name, obj_id = key.split('.')
                    class_obj = globals()[class_name]
                    self.__objects[key] = class_obj(**value)
        except FileNotFoundError:
            pass
