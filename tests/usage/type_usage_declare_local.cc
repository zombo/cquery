struct ForwardType;
struct ImplementedType {};

void Foo() {
  ForwardType* a;
  ImplementedType b;
}

/*
OUTPUT:
{
  "types": [{
      "id": 0,
      "usr": "c:@S@ForwardType",
      "instantiations": [0],
      "uses": ["1:8", "*5:3"]
    }, {
      "id": 1,
      "usr": "c:@S@ImplementedType",
      "short_name": "ImplementedType",
      "qualified_name": "ImplementedType",
      "definition": "2:8",
      "instantiations": [1],
      "uses": ["*2:8", "*6:3"]
    }],
  "funcs": [{
      "id": 0,
      "usr": "c:@F@Foo#",
      "short_name": "Foo",
      "qualified_name": "Foo",
      "definition": "4:6",
      "uses": ["4:6"]
    }],
  "vars": [{
      "id": 0,
      "usr": "c:type_usage_declare_local.cc@67@F@Foo#@a",
      "short_name": "a",
      "qualified_name": "a",
      "definition": "5:16",
      "variable_type": 0,
      "uses": ["5:16"]
    }, {
      "id": 1,
      "usr": "c:type_usage_declare_local.cc@86@F@Foo#@b",
      "short_name": "b",
      "qualified_name": "b",
      "definition": "6:19",
      "variable_type": 1,
      "uses": ["6:19"]
    }]
}
*/
