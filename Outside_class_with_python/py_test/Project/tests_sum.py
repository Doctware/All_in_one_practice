import unittest

from my_sum import sum

class TestSum(unittest.TestCase):
    def test_list_int(self):
        data = [1, 2, 3]
        res = sum(data)
        self.assertEqual(res, 6)

if __name__ == "__main__":
    unittest.main()
