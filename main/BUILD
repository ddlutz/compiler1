load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "main",
    deps = ["@com_google_absl//absl/strings", "parser"],
    srcs = ["main.cc"],
)

cc_library(
    name = "parser",
    deps = [
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/container:inlined_vector",
    ],
    hdrs = 
    [
        "assignment_node.h",
        "ast_node.h",
        "binary_op.h",
        "block_node.h",
        "call_node.h",
        "function_node.h",
        "id_node.h",
        "if_node.h",
        "not_node.h",
        "number_node.h",
        "return_node.h",
        "variable_declaration_node.h",
        "while_node.h",
    ],
    srcs = [
        "assignment_node.cc",
        "binary_op.cc",
        "block_node.cc",
        "call_node.cc",
        "function_node.cc",
        "id_node.cc",
        "if_node.cc",
        "not_node.cc",
        "number_node.cc",
        "return_node.cc",
        "variable_declaration_node.cc",
        "while_node.cc",
    ],
)
