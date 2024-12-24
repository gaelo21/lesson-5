int solution(int A, int B, int K) {
    // Implement your solution here
    if(K == 0)
        return 0;
    
    else if(A == B){
        return (A % K == 0 ? 1 : 0);
    }

    int b = B / K, a = 0;
    if(A > 0){
        a = (A - 1) / K;
    }
    else {
        b++;
    }

    return b - a;
}
