# Analysis of Algorithm
__Problem__: Given a number n, write a function to find sum of first n natural numbers.
```C++
// Solution 1
int sum(int n){
	return n*(n+1)/2;
}
// big O(1)
```
```C++
// Solution 2
int sum(int n){
	int sum = 0;
	for(int i=1; i<=n; i++){
		sum += i;
	}
	return sum;
}
// big O(n)
```
```C++
// Solution 3
int sum(int n){
	int sum = 0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
		sum++;
		}
	}
	return sum;
}
// big O(n^2)
```

### Q: How do you know which solution is the best?

- By knowing the __Order of Growth__.
	A function f(n) is said to be growing faster than g(n) if,

$$
\begin{align}
\lim_{n\to\infty}\frac{f(n)}{g(n)} = \infty \\
OR \\
\lim_{n\to\infty}\frac{g(n)}{f(n)} = 0
\end{align}
$$
- To find order of growth, we should:
  - Ignore lower order terms
  - Ignore leading constant
#### There is 3 cases for every Algorithm:
- Best Case
- Average Case
- Worst Case

# Asymptotic Notations

Asymptotic notations are mathematical tools to represent the time complexity of algorithms for asymptotic analysis. The following 3 asymptotic notations are mostly used to represent the time complexity of algorithms.
   __1. $\theta$ Notation__
   __2. Big O Notation__
   __3. $\Omega$ Notation__

### 1. $\theta$ Notation: 
The theta notation bounds a functions from above and below, so it defines exact asymptotic behaviour.
We say f(n) = $\theta$(g(n)) if there exist positive constants c1, c2 and n<sub>o</sub> such that O <= c1g(n) <= f(n) <= c2g(n) for all n >= n<sub>o</sub> .
Example:
__f(n) = 2n + 3__ can be written as __$\theta$(n)__

### 2. Big O Notation:
The Big O notation defines an __upper bound__ of an algorithm, it bounds a function only from above.
We say f(n) = O(g(n)) if there exist constants c and n<sub>o</sub> such that f(n) <= cg(n) for all n >= n<sub>o</sub> .
Example:
__f(n) = 2n + 3__ can be written as __O(n)__

### 3. $\Omega$ Notation:
The Ω notation provides an asymptotic __lower bound__ of an algorithm.
We say f(n) = $\Omega$(g(n)) if there exist positive constants c and n<sub>o</sub> such that O <= cg(n) <= f(n) for all n >= n<sub>o</sub> .
Example:
__f(n) = 2n + 3__ can be written as __$\Omega$(n)__











[big O graph](https://he-s3.s3.amazonaws.com/media/uploads/ece920b.png)