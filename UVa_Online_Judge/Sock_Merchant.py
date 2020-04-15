# https://www.hackerrank.com/challenges/sock-merchant/problem?h_l=interview&playlist_slugs[0]=interview-preparation-kit&playlist_slugs[1]=warmup

def sockMerchant(n, ar):
    myset = list(set(ar))
    sl_app = []
    for i1 in range(len(myset)):
        sl_app.append(ar.count(myset[i1]))
    pair_count = 0
    for con in sl_app:
        con_1 = con//2
        if con_1 >= 1:
            pair_count = pair_count + con_1
    return pair_count


ar = [10, 20, 20, 10, 10, 30, 50, 10, 20]
n = len(ar)
result_pair = sockMerchant(n, ar)
print("total pair: ", result_pair)
