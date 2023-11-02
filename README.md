0x1D. C - Binary trees</h1>


  <ul class="list-group metadata" id="project-metadata">
  <li class="list-group-item">
    <i class="fa fa-folder-open fa-fw"></i>
    <em>Foundations &gt; Low-level programming &amp; Algorithm &gt; Data structures and Algorithms</em>
  </li>


<li class="list-group-item">
      <i class="fa fa-user fa-fw"></i> By Alexandre Gautier, Software Engineer at Holberton School
    </li>

<li class="list-group-item">
      <i class="fa fa-cogs fa-fw"></i> Weight: 5
    </li>


<li class="list-group-item">
      <i class="fa fa-users fa-fw"></i> Project to be done in teams of 2 people
        (your team: Juan Duque, Natalia Arteaga Corrales, Brian Zapata
    </li>

<li class="list-group-item">
        <i class="fa fa-calendar fa-fw"></i

</ul>



<div id="project_id" style="display: none" data-project-id="270"></div>


<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/vhnhjnI1aebhcSeLOjfrww" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a binary tree</li>
<li>What is the difference between a binary tree and a Binary Search Tree</li>
<li>What is the possible gain in terms of time complexity compared to linked lists</li>
<li>What are the depth, the height, the size of a binary tree</li>
<li>What are the different traversal methods to go through a binary tree</li>
<li>What is a complete, a full, a perfect, a balanced binary tree</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 14.04 LTS</li>
<li>Your programs and functions will be compiled with <code>gcc 4.8.4</code> using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> and <code>-pedantic</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are allowed to use the standard library</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>binary_trees.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

## Tasks
<h3 class="panel-title">
      0. New node
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that creates a binary tree node</p>
<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the parent node of the node to create</li>
<li>And <code>value</code> is the value to put in the new node</li>
<li>When created, a node does not have any child</li>
<li>Your function must return a pointer to the new node, or <code>NULL</code> on failure</li>
</ul>
   <h3 class="panel-title">
      1. Insert left
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that inserts a node as the left-child of another node</p>

<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the node to insert the left-child in</li>
<li>And <code>value</code> is the value to store in the new node</li>
<li>Your function must return a pointer to the created node, or <code>NULL</code> on failure or if <code>parent</code> is <code>NULL</code></li>
<li>If <code>parent</code> already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.</li>
</ul>
    <h3 class="panel-title">
      2. Insert right
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that inserts a node as the right-child of another node</p>

<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the node to insert the right-child in</li>
<li>And <code>value</code> is the value to store in the new node</li>
<li>Your function must return a pointer to the created node, or <code>NULL</code> on failure or if <code>parent</code> is <code>NULL</code></li>
<li>If <code>parent</code> already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.</li>
</ul>
<h3 class="panel-title">
      3. Delete
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that deletes an entire binary tree</p>

<ul>
<li>Prototype: <code>void binary_tree_delete(binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to delete</li>
<li>If <code>tree</code> is <code>NULL</code>, do nothing</li>
</ul>
    <h3 class="panel-title">
      4. Is leaf
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that checks if a node is a leaf</p>

<ul>
<li>Prototype: <code>int binary_tree_is_leaf(const binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to check</li>
<li>Your function must return <code>1</code> if <code>node</code> is a leaf, otherwise <code>0</code></li>
<li>If <code>node</code> is <code>NULL</code>, return <code>0</code></li>
</ul>
    <h3 class="panel-title">
      5. Is root
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that checks if a given node is a root</p>

<ul>
<li>Prototype: <code>int binary_tree_is_root(const binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to check</li>
<li>Your function must return <code>1</code> if <code>node</code> is a root, otherwise <code>0</code></li>
<li>If <code>node</code> is <code>NULL</code>, return <code>0</code></li>
</ul>
    <h3 class="panel-title">
      6. Pre-order traversal
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that goes through a binary tree using pre-order traversal</p>

<ul>
<li>Prototype: <code>void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
<li>If <code>tree</code> or <code>func</code> is <code>NULL</code>, do nothing</li>
</ul>
    <h3 class="panel-title">
      7. In-order traversal
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that goes through a binary tree using in-order traversal</p>

<ul>
<li>Prototype: <code>void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
<li>If <code>tree</code> or <code>func</code> is <code>NULL</code>, do nothing</li>
</ul>
    <h3 class="panel-title">
      8. Post-order traversal
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>


<p>Write a function that goes through a binary tree using post-order traversal</p>

<ul>
<li>Prototype: <code>void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
<li>If <code>tree</code> or <code>func</code> is <code>NULL</code>, do nothing</li>
</ul>
    <h3 class="panel-title">
      9. Height
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that measures the height of a binary tree</p>

<ul>
<li>Prototype: <code>size_t binary_tree_height(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to measure the height.</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>
    <h3 class="panel-title">
      10. Depth
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that measures the depth of a node in a binary tree</p>

<ul>
<li>Prototype: <code>size_t binary_tree_depth(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the node to measure the depth</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>
    <h3 class="panel-title">
      11. Size
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that measures the size of a binary tree</p>

<ul>
<li>Prototype: <code>size_t binary_tree_size(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to measure the size</li>
<li>If <code>tree</code> is <code>NULL</code>, the function must return 0</li>
</ul>
    <h3 class="panel-title">
      12. Leaves
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that counts the leaves in a binary tree</p>

<ul>
<li>Prototype: <code>size_t binary_tree_leaves(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to count the number of leaves</li>
<li>If <code>tree</code> is <code>NULL</code>, the function must return 0</li>
<li>A <code>NULL</code> pointer is not a leaf</li>
</ul>
    <h3 class="panel-title">
      13. Nodes
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that counts the nodes with at least 1 child in a binary tree</p>

<ul>
<li>Prototype: <code>size_t binary_tree_nodes(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to count the number of nodes</li>
<li>If <code>tree</code> is <code>NULL</code>, the function must return 0</li>
<li>A <code>NULL</code> pointer is not a node</li>
</ul>
    <h3 class="panel-title">
      14. Balance factor
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>


<p>Write a function that measures the balance factor of a binary tree</p>

<ul>
<li>Prototype: <code>int binary_tree_balance(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to measure the balance factor</li>
<li>If <code>tree</code> is <code>NULL</code>, return <code>0</code></li>
</ul>
    <h3 class="panel-title">
      15. Is full
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that checks if a binary tree is full</p>

<ul>
<li>Prototype: <code>int binary_tree_is_full(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>
    <h3 class="panel-title">
      16. Is perfect
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that checks if a binary tree is perfect</p>

<ul>
<li>Prototype: <code>int binary_tree_is_perfect(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>
    <h3 class="panel-title">
      17. Sibling
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that finds the sibling of a node</p>

<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_sibling(binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to find the sibling</li>
<li>Your function must return a pointer to the sibling node</li>
<li>If <code>node</code> is <code>NULL</code> or the parent is <code>NULL</code>, return <code>NULL</code></li>
<li>If <code>node</code> has no sibling, return <code>NULL</code></li>
</ul>
    <h3 class="panel-title">
      18. Uncle
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<p>Write a function that finds the uncle of a node</p>

<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_uncle(binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to find the uncle</li>
<li>Your function must return a pointer to the uncle node</li>
<li>If <code>node</code> is <code>NULL</code>, return <code>NULL</code></li>
<li>If <code>node</code> has no uncle, return <code>NULL</code></li>
</ul>
