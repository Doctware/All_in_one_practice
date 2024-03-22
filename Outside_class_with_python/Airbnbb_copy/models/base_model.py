#!/usr/bin/python3
""" This module contains the class BaseModel """
from datetime import datetime
import uuid
from models import storage 


class BaseModel:
    """ the class BaseModel """

    def __init__(self, *args, **kwargs):
        """ inisilize the public instances """
        if kwargs:
            for key, value in kwargs.items():
                if key != '__class__':
                    if key in ['created_at', 'updated_at']:
                        setattr(self, key, datetime.strptime(value, '%Y-%m-%dT%H:%M:%S.%f'))
                    else:
                        setattr(self, key, value)
        else:
            self.id = str(uuid.uuid4())
            self.created_at = datetime.now()
            self.updated_at = self.created_at
            storage.new(self)

    def save(self):
        """ update the public insatnce attribute to the
            current date time"""
        self.updated_at = datetime.now()
        storage.save()

    def to_dict(self):
        """ returns a dictionary containing all keys/values of
            __dict__ of the instance"""
        dict_obj = self.__dict__.copy()
        dict_obj['__class__'] = self.__class__.__name__
        dict_obj['created_at'] = self.created_at.isoformat()
        dict_obj['updated_at'] = self.updated_at.isoformat()

        return dict_obj

    def __str__(self):
        """ print INFO about basemodel"""
        return "[{}] ({}) {}"\
            .format(self.__class__.__name__, self.id, self.__dict__)
