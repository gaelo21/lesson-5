int solution(vector<int> &A) {
    // Implement your solution here
    size_t v_size = A.size();
    size_t couple = 0;
    size_t zeroes = 0;
    for(size_t i = 0; i < v_size; ++i) {
        if(0 == A[i]) {
            ++zeroes;
        }
        else if(1 == A[i]) {
            couple += zeroes;
            if(couple > 1'000'000'000) {
                return -1;
            }
        }
    }
    return couple;
}
