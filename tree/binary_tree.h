/*************************************************************************
	> File Name: binary_tree.h
	> Author: laoding
	> Mail: dyg1993@foxmail.com 
	> Created Time: Sun 12 Jun 2016 11:12:54 AM CST
 ************************************************************************/
#ifndef __BINARY_TREE_HEADER
#define __BINARY_TREE_HEADER
#include<stdio.h>
#include"tree.h"

typedef struct binary_tree_ops_s{
	tree_common_ops_t base_ops;

	void (*pre_order_traverse)(void **tree,void (*visit)(void *, ...));
	void (*in_order_traverse)(void **tree,void(*visit)(void *,...));
	void (*post_order_traverse)(void **tree,void(*visit)(void *,...));
	void (*level_order_traverse)(void **tree,void(*visit)(void *,...));
}bt_ops_t;
/*binary tree data type declation*/
typedef struct binary_tree_s{
	int data;
	struct binary_tree_s *parent;
	struct binary_tree_s *left_child;
	struct binary_tree_s *right_child;
}bt_node;

typedef bt_node * bt_tree;








#endif

