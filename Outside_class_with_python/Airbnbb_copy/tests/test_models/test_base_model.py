#!/usr/bin/python3
""" this module contains tests port for the base_model """
from models.base_model import BaseModel
import unittest
from datetime import datetime
import uuid


class TestBaseModel(unittest.TestCase):
    """ the testbasemodel class """
    def setUp(self):
        """ Set up instance for base model """
        self.baseM = BaseModel()
        self.baseM.name = "My_First_Model"
        self.baseM.my_number = 89

    def test_init(self):
        """
        testing insialization of BaseModel
        """
        self.assertIsInstance(self.baseM.id, str)
        self.assertIsInstance(self.baseM.created_at, datetime)
        self.assertIsInstance(self.baseM.updated_at, datetime)

    def test_save(self):
        """ testing save method """
        oldUpdate = self.baseM.updated_at
        self.baseM.save()
        self.assertNotEqual(self.baseM.updated_at, oldUpdate)

    def test_to_dict(self):
        """ testing tO_dict method """
        O_dict = self.baseM.to_dict()
        self.assertIsInstance(O_dict, dict)
        self.assertIn('__class__', O_dict)
        self.assertEqual(O_dict['__class__'], 'BaseModel')
        self.assertIn('created_at', O_dict)
        self.assertEqual(O_dict['created_at'], self.baseM.created_at.isoformat())
        self.assertIn('updated_at', O_dict)
        self.assertEqual(O_dict['updated_at'], self.baseM.updated_at.isoformat())
        self.assertEqual(O_dict['name'], 'My_First_Model')
        self.assertEqual(O_dict['my_number'], 89)

    def test_str(self):
        """ Testing __str__ method """
        output = "[BaseModel] ({}) {}".\
            format(self.baseM.id, self.baseM.__dict__)
        self.assertEqual(str(self.baseM), output)

    def test_init_with_dict(self):
        """ testing init method along with dict """
        O_dict = self.baseM.to_dict()
        new_model = BaseModel(**O_dict)
        self.assertEqual(new_model.id, self.baseM.id)
        self.assertEqual(new_model.name, self.baseM.name)
        self.assertEqual(new_model.my_number, self.baseM.my_number)
        self.assertEqual(new_model.created_at, self.baseM.created_at)
        self.assertEqual(new_model.updated_at, self.baseM.updated_at)

if __name__ == "__main__":
    unittest.main()
