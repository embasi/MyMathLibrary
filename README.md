# MyMathLibrary
Welcome to MyMathLibrary.

With using it some fuctions will be able for you...

Let's go!

# --- Class Matrix ---

The main class of working this program is Matrix class.
Firstly, you should create objects of Matrix class and then you will be able to work with them.
Ex.:
Matrix a() - default.
Matrix a(2, 3, {5,2,6,1,8,3}); - matrix with dimension 2x3 filled by elements of the vector.

Important: vectors are matrices with 1xN of Nx1 dimensions.
Also, there some subclasses...
Identity, Symmetric, Triangular (Upper and Lower), Diagonal. You can create it.

Operations allowed to work with matrices:
1) addition: operator "+";
2) subtraction: operator "-";
3) multiplication: operator "*". At this case you should create third Matrix object to put result there.
Ex.: Matrix c = a * b; - at another way you'll get Error!

Besides pulling matrices from keyboard you also can get it from "txt"-file. For this you should write Matrix A; A << filename;
Also, you can write you matrix to text file using >>

In some situations you will need in binary files. And you can do it! There are methods for saving and loading matrices in binary mode.
To do it, please, use methods: A.save_file("filename"); and A.load_file("filename") respectively.

Other methods:
Hadamard() - make a Hadamard product and put the result to left object.
Transpose() - make transposing of your matrix. To save the result you should create a new Matrix object. Ex.: Matrix a = b.Transpose();

Functions to work with matrices:
RowReduce - find linearly independent vectors (columns) of your matrix.
scalar_product - works only with vectors (not necessary 1xN or Nx1 you entered).
trace - find the trace of your matrix.
vector_module - find the norm of vector (use only with vectors).
vector_norm_max - find the max norm of your entered vector.
matrix_module - find the module of your matrix.
Det - important function to find the Matrix Determinant.
Rank - find the rank of your matrix.
inverse_matrix - function to fine the Inverse matrix for entered matrix. To write the result, please, create new Matrix object. Ex.: Matrix a = inverse_matrix(b);

# --- Class PCA ---
There is an interesing functional in this program. You can provide PCA (Principal Component Analysis).
Before using it you should create PCA object.
And then some methods will be allowed for you:
NIPALS (Nonlinear Iterative vartial Least Squares) - wellknown algorithm with parameter A = [1; 12], there the figure is the number of main components.
After that you can apply methods: get_E(), get_T() and get_P() to get corresponding matrices.
You can also find Leverage and Deviation.
At last, use TRV and ERV methods with PCA object to get corresponding results.

Have a nice day and get more enjoyment applying this program!

For questions and suggestions you can write to my e-mail:
arty0299study@gmail.com

Yours,
Artyom
