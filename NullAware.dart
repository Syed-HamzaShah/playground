void main() {
  // 1. ?? - Null-coalescing
  String? userName;
  String displayName = userName ?? "Guest";
  print("Display Name: $displayName"); // Output: Guest

  // 2. ??= - Null-coalescing assignment
  int? age;
  age ??= 25;
  print("Age: $age"); // Output: 25

  // 3. ?. - Null-aware access
  List<String>? messages;
  print("Message count: ${messages?.length}"); // Output: Message count: null

  // 4. ! - Null assertion
  String? city = "London";
  print("City name in uppercase: ${city!.toUpperCase()}"); // Output: LONDON

  // 5. ...? - Null-aware spread
  List<int>? extraScores;
  List<int> scores = [10, 20, ...?extraScores];
  print("Scores: $scores"); // Output: Scores: [10, 20]
}


//  What's happening here:
// ?? is used to provide a fallback value if userName is null.

// ??= assigns a default value only if age is null.

// ?. checks if messages is null before trying to access .length.

// ! asserts that city is not null before calling .toUpperCase().

// ...? spreads extraScores into the list only if it's not null.