int mySqrt(int x) {
    int left = 0, right = x, mid, result = 0;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if ((long long)mid * mid <= x) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}
