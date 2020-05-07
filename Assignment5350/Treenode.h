
template <typename T>
class TreeNode{
public:
  TreeNode();
  TreeNode(T k);
  //TreeNode(int k, <type> value)
  ~TreeNode();
  //when working with template classes
  virtual ~TreeNode(); // research what "virtual" key word means

  T key;
  TreeNode *left;
  TreeNode *right;
};

template <typename T>

//tree implementation
TreeNode::TreeNode(){
  key = 0;
  left = NULL;
  right = NULL;
}

template <typename T>

TreeNode::TreeNode(T k){
  key = k;
  left = NULL;
  right = NULL;
}


template <typename T>
//leave destructor to us
TreeNode::~TreeNode(){
}
