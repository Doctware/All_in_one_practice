#!/usr/bin/python3
if __name__ == "__main__":
    import random
    import math

    num_lst = []
    for i in range(5):
        num_lst.append(random.randrange(1, 10))

    i = len(num_lst) - 1
    print(i)

    while i > 1:

        j = 0
        while j < i:

            print("\n Is {} > {}".format(num_lst[j], num_lst[j + 1]))
            if num_lst[j] > num_lst[j + 1]:
                print("switch")

                temp = num_lst[j]
                num_lst[j] = num_lst[j + 1]
                num_lst[j + 1] = temp
            else:
                print("Dont switch")

            j += 1
            for k in num_lst:
                print(k, end=", ")
            print()

            print("End of round")

        i -= 1

    for k in num_lst:
        print(k, end=", ")
    print()
