class Solution {
public:
    string fractionAddition(string expression) {
        int numerator = 0, denominator = 1;
        int i = 0, n = expression.size();

        while (i < n) {
            int sign = 1;
            if (expression[i] == '+' || expression[i] == '-') {
                if (expression[i] == '-') sign = -1;
                i++;
            }

            int num = 0;
            while (i < n && isdigit(expression[i])) {
                num = num * 10 + (expression[i] - '0');
                i++;
            }
            num *= sign;

            i++;

            int den = 0;
            while (i < n && isdigit(expression[i])) {
                den = den * 10 + (expression[i] - '0');
                i++;
            }

            numerator = numerator * den + num * denominator;
            denominator *= den;

            int gcdVal = gcd(abs(numerator), denominator);
            numerator /= gcdVal;
            denominator /= gcdVal;
        }

        return to_string(numerator) + "/" + to_string(denominator);
    }
};


// approach 2 (failed for case 3)
class Solution {
public:
    string fractionAddition(string expression) {
        istringstream iss(expression);
        int A = 0, B = 1, a, b;
        char slash, sign;

        while (iss >> sign >> a >> slash >> b) {
            if (sign == '-') a = -a; // Adjust sign of the numerator
            A = A * b + a * B; // Update numerator
            B *= b; // Update denominator
            int gcdVal = gcd(abs(A), B); // Simplify fraction
            A /= gcdVal;
            B /= gcdVal;
        }

        return to_string(A) + "/" + to_string(B);
    }
};