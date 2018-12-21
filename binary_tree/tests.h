TEST(TREE, MANY_LEAVES){
  Tree tree(1);
  tree.add(2);
  tree.add(-2);
  tree.add(-5);
  tree.add(6);
  tree.add(4);
  tree.add(7);
  tree.add(-1);
  EXPECT_TRUE(tree.has(6));
  EXPECT_TRUE(tree.has(2));
  EXPECT_TRUE(tree.has(-2));
  EXPECT_TRUE(tree.has(-1));
  EXPECT_TRUE(tree.has(7));
}

TEST(TREE, LEAVES){
  Tree tree(1);
  tree.add(2);
  EXPECT_TRUE(tree.has(2));
}

TEST(TREE, ROOT){
  Tree tree(1);
  EXPECT_TRUE(tree.has(1));
}

TEST(NODES, SET){
  Node n1(1),n2(2),n3(3);
  n3.set_left(&n1);
  n3.set_right(&n2);
  EXPECT_TRUE(n3.get_left() == &n1);
  EXPECT_TRUE(n3.get_right() == &n2);
}

TEST(NODES, CONSTRUCTORS){
  Node n1(1),n2(2,&n1),n3(3,&n1,&n2);
  EXPECT_EQ(n1.get_value(),1);
  EXPECT_EQ(n2.get_value(),2);
  EXPECT_EQ(n3.get_value(),3);
  EXPECT_TRUE(n1.get_left() == NULL);
  EXPECT_TRUE(n1.get_right() == NULL);
  EXPECT_TRUE(n2.get_left() == &n1);
  EXPECT_TRUE(n2.get_right() == NULL);
  EXPECT_TRUE(n3.get_left() == &n1);
  EXPECT_TRUE(n3.get_right() == &n2);
}

TEST(NODES, VALUE){
  Node n1(1);
  EXPECT_EQ(n1.get_value(),1);
  EXPECT_TRUE(n1.get_left() == NULL);
  EXPECT_TRUE(n1.get_right() == NULL);
}
