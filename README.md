# OpenMPAWSLambda
OpenMP in AWS Lambda

### The code in test.c is an example C program that uses OpenMP. I compiled it into the test binary file using the command below.

```
gcc test.c -o test -fopenmp
```

Using the instructions I put [https://github.com/Craigspaz/HowToGetAWSLambdaToRunBinaryFiles](https://github.com/Craigspaz/HowToGetAWSLambdaToRunBinaryFiles) I gathered the dependencies of the binary I generated. Those are the \*.so files located in the repository.

To have an entry point into the lambda function I used python since it is simple to write. Using the subprocess module you can write three lines of python to launch your binary file.
