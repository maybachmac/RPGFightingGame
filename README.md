# 🧠 RPGFightingGame

A C++ console-based object-oriented fighting game where animals from various habitats interact, make sounds, and battle using polymorphic behavior. Designed with proper inheritance, interfaces, dynamic memory, and file-based loading of combat data.

---

## 🐾 Features

- 🧬 **Polymorphic Behavior**: Uses a pure virtual `Fighter` interface with consistent combat functions like `getHealth()`, `getAttackPower()`, and `defend()`.
- 🗂️ **Structured Inheritance**: Animal types (e.g., Lion, Wyrm, Cheetah, Penguin) inherit from a shared base and override methods like `makeSound()` and `eats()`.
- 🧠 **Dynamic Combat Arena**: Two fighters engage in a round-by-round battle until one is defeated, handled by the `Arena` class.
- 🧭 **Habitat & Zoo Management**: Animals are grouped by habitat, then stored in a larger `Zoo` container with functionality like `raiseRacket()` and `loadFromFile()`.
- 📂 **File Loading**: Animal data including name, type, habitat, attack power, and health is read from a `.txt` file.
- INTERFACE USAGE

---

## 🧱 Project Structure

```
/Headers
  ├── Fighter.h
  ├── Animal.h
  ├── [Lion|Wyrm|Penguin|Cheetah|Elephant].h
  ├── Habitat.h
  └── Arena.h
  └── Zoo.h

/Sources
  ├── Animal.cpp
  ├── [Lion|Wyrm|Penguin|Cheetah|Elephant].cpp
  ├── Habitat.cpp
  ├── Arena.cpp
  ├── Zoo.cpp
  └── main0.cpp

README.md
.gitignore
animals.txt
```

---

## 🧪 Example Output

```
The Wyrm breathes fire into the sky!
The Elephant stomps with dominance!
The Penguin slides around the tundra!
---
Lion vs. Wyrm
Battle begins!
--- Round 1 ---
Fighter 1 attacks!
Fighter 2 HP: 140
Fighter 2 attacks Fighter 1
Fighter 1 HP: 32
...
Fighter 2 wins!
```

---

## 🛠 Build Instructions

1. Clone or download the repo
2. Open the `.sln` or `.vcxproj` in Visual Studio
3. Build and run `main0.cpp`
4. Make sure `animals.txt` is in the correct working directory if using file-based loading

---

## 📌 Notes

- Memory is manually managed for all heap allocations (deleted at end of `main`)
- Code is fully separated into headers and source files for scalability
- Works with any number of animals or habitats loaded via the file


loom video
https://www.loom.com/share/364f91dfae2249a1865be560cab7daa8?sid=de685411-457d-4552-8880-0ff72393e829

---

## 📄 License

This project is for educational and learning purposes only.
