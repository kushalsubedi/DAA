def fib(n):
    def fib_memo(n, m):
        """
        Find the n'th fibonacci number. Uses memoization.

        :param n: the n'th fibonacci number to find
        :param m: dictionary used to store previous numbers
        :return: the value of the n'th fibonacci number
        """

        if n in m:
            return m[n]

        answer = fib_memo(n - 1, m) + fib_memo(n - 2, m)
        m[n] = answer
        return answer

    m = {1: 1, 2: 1}
    return fib_memo(n, m)

print(fib(200))