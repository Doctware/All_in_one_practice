#/usr/bin/python3
import unittest
MyCalculator = __import__('add').MyCalculator

class My_test(unittest.TestCase):

    def test_add(self):
        calculator = MyCalculator(20, 20)
        total = calculator.add()
        self.assertEqual(total, 40)

if __name__ == "__main__":
    unittest.main()
