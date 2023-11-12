float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    j=(k>j)? k:j;
    result=(i>j)? i:j;

    return result;
}