
template <typename T>
class TreeNode{
public:
  TreeNode();
  TreeNode(T k);
  //TreeNode(int k, <type> value)
  ~TreeNode();
  //when working with template classes

  T key;
  TreeNode *left;
  TreeNode *right;
};

template <typename T>

//tree implementation
TreeNode<T>::TreeNode(){
  key = 0;
  left = NULL;
  right = NULL;
}

template <typename T>

TreeNode<T>::TreeNode(T k){
  key = k;
  left = NULL;
  right = NULL;
}


template <typename T>
//leave destructor to us
TreeNode<T>::~TreeNode(){
}
