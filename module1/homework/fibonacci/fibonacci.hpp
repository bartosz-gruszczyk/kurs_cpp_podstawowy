#pragma once

int fibonacci_iterative(int sequence) {

    int nFibValue = 0;

    if (sequence == 0) {
        return 0;
    }
    else if (sequence < 3) {
        return 1;
    }
    else {
        int nMinus1FibValue = 1;
        int nMinus2FibValue = 1;
        for (int i = 3; i <= sequence; i++) {
            nFibValue = nMinus1FibValue + nMinus2FibValue;
            nMinus2FibValue = nMinus1FibValue;
            nMinus1FibValue = nFibValue;
        }

    }

    return nFibValue;
}

int fibonacci_recursive(int sequence) {
    
    if (sequence == 0) {
        return 0;
    }
    else if (sequence < 3) {
        return 1;
    }
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
