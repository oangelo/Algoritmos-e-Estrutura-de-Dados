TEST(LIST, empty) {
  List list;
  ASSERT_TRUE(list.first == NULL);
  ASSERT_TRUE(list.last == NULL);
}

TEST(LIST, get_node_empty_list) {
  List list;
  ASSERT_THROW(list.GetFirst(), std::invalid_argument);
}

TEST(LIST, add_node_to_head) {
  List list;
  list.AddNodeInit(2);
  ASSERT_EQ(list.GetFirst(), 2);
}

TEST(LIST, is_empty) {
  List list;
  ASSERT_TRUE(list.IsEmpty());
}

TEST(LIST, pop) {
  List list;
  ASSERT_THROW(list.PopFirst(),std::invalid_argument);
}

TEST(LIST, pop_one_from_one) {
  List list;
  list.AddNodeInit(2);
  list.PopFirst();
  ASSERT_TRUE(list.IsEmpty());
}

TEST(LIST, pop_one_from_two) {
  List list;
  list.AddNodeInit(1);
  list.AddNodeInit(2);
  list.PopFirst();
  list.PopFirst();
  ASSERT_TRUE(list.IsEmpty());
}

TEST(LIST, not_is_empty) {
  List list;
  list.AddNodeInit(2);
  ASSERT_FALSE(list.IsEmpty());
}

TEST(NODES, inf_only) {
  Node node(2);
  ASSERT_TRUE(node.info == 2);
  ASSERT_TRUE(node.next == NULL);
}

TEST(NODES, inf_and_node) {
  Node node1(1);
  Node node2(2, &node1);
  ASSERT_TRUE(node2.info == 2);
  ASSERT_TRUE(node2.next == &node1);
}

TEST(NODES, many_nodes) {
  Node node1(1);
  Node node2(2, &node1);
  Node node3(3, &node2);
  ASSERT_TRUE(node3.info == 3);
  ASSERT_TRUE(node3.next == &node2);
}
