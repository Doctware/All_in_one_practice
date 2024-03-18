#!/usr/bin/python3
"""
This module contains the Baseclass
"""
import datetime
import uuid


class BaseModel:
    """ the BaseClass Module """

    def __init__(self, *args, **kwargs):
        """ inisializing public instance attribute """
        self.id = str(uuid.uuid4())
        self.created_at = datetime.datetime.now()
        self.updated_at = datetime.datetime.now()

    def __str__(self):
        """ Print some information about BaseModes """
        return "[{}] ({}) {}"\
            .format(self.__class__.__name__, self.id, self.__dict__)

    def save(self):
        """ Updates the public instance attribute updated_at
            with the current date time
        """
        self.updated_at = datetime.datetime.now()

    def to_dict(self):
        """
        returns a dictionary containing all keys/value of __dict__
        of instances
        """
        obj_dict = self.__dict__.copy()
        obj_dict['__class__'] = self.__class__.__name__
        obj_dict['created_at'] = self.created_at.isoformat()
        obj_dict['updated_at'] = self.updated_at.isoformat()
        return obj_dict

    def __repr__(self):
        return self.created_at
