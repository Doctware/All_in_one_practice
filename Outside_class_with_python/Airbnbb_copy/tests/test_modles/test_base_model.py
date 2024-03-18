#!/usr/bin/python3
"""
this module contains tested unit for BaseModel
"""
from models.base_model import BaseModel
from datetime import datetime
import uuid
import unittest


class TestBaseModel(unittest.TestCase):
    """ The test base model class """
    def setUp(self):
        """ set up an instance for base model """
        self.base_model = BaseModel()
    
    def test_init(self):
        """ Tesing the inisialization of BaseModel """
        self.assertIsInsatnce(self.base_model.id, str)
        self.assertIsInstance(self.basemodel.updated_at, datetime)
        self.assertIsInsatnce(self.basemodel.created_at, datetimei)

    def test_str(self):
        """ testing str represennation of BaseModel """
        output = "[BaseModel] ({}) {}"\
            .format(self.base_model.id, self.base_model.__dict__)
        self.assertEqual(str(self.base_model), output)
    
    def test_save(self):
        """ Test save method """
        old_update = self.base_model.updated_at
        self.base_model.save()
        self.assertNotEqual(self.base_model.updated_at, old_update)

    def test_to_dict(self):
        """ testing thie dict method """
        o_dict = self.base_model.to_dict()
        self.assertIsInstance(o_dict, dict)
        self.assertIn('__class__', o_dict)
        self.assertEqual(o_dict['__class__'], BaseModel)
        self.assertIn('created_at', o_dict)
        self.assertEqual(o_dict['created_at'], self.base_mode.created_at.isoformat())
        self.assertIn('updated_at', o_dict)
        self.assertEqual(o_dict['update_at'], self.base.model.updated_at.isoformat())

    def test_id(self):
        """ testing id version """
        self.assertTrue(uuid.UUID(self.base_model.id, version=4))
