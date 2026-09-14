# Simple Table-Like Temperature Converter

simple C++ temperature converter that displays a **table of converted temperatures**.

---

## 📖 About

This program works like a table for temperature conversion.

You can enter a **starting value** and an **ending value**, and the program will convert every temperature between them.

For example:

```text
Start: 1
End:   10
```

The program will generate conversions from **1 to 10**.

You can choose between:

* **C** — Celsius
* **F** — Fahrenheit
* **K** — Kelvin

This gives you **6 possible conversion combinations**:

```text
C → F
C → K
F → C
F → K
K → C
K → F
```

---

## 📸 Screenshots

<img width="554" height="336" alt="Screenshot from 2026-09-14 06-36-49" src="https://github.com/user-attachments/assets/04fd86c1-d5f7-4625-b83c-db419cd88776" />

---

## 💻 Requirements

* A C++ compiler
* GNU Make

---

## 📦 Installation

### Linux

pre-compiled Linux binary is available in the **Releases** section.

Download it, give it permission to execute.

```bash
chmod +x main.out
```

Then run it:

```bash
./main.out
```

### Windows / macOS

You can build the program from source by following the instructions below.

---

## 🛠️ Building From Source

Clone the repository:

```bash
git clone https://github.com/storm-o-war/simple-table-like-temperature-converter-in-cpp.git
cd simple-table-like-temperature-converter-in-cpp
```

Build using Make:

```bash
make
```

Then run:

```bash
./main.out
```

You can also compile the source directly with a C++ compiler:

```bash
g++ main.cpp -o main.out
```

---

## 🖥️ Usage

Run the program:

```bash
./main.out
```

You will be asked to select a conversion type and enter the starting and ending temperatures.

Example:

```text
Start: 1
End: 10

1 C → F
2 C → K
3 F → C
4 F → K
5 K → C
6 K → F

Select: 1
```

The program then generates a table containing the converted values.

---

## 📂 Project Structure

```text
simple-table-like-temperature-converter-in-cpp/
├── main.cpp
├── Makefile
├── README.md
├── LICENSE
└── main.out
```

---

## 📦 Releases

Check the **[Releases](https://github.com/storm-o-war/simple-table-like-temperature-converter-in-cpp/releases)** section for pre-compiled versions.

### v0.1.0

Initial release.

---

## 📝 Changelog

### v0.1.0

* Initial release
* Added Celsius, Fahrenheit, and Kelvin conversions
* Added range-based temperature tables
* Added input handling

---

## 🗺️ Roadmap

* [x] Basic temperature conversion
* [x] Input handling
* [x] Celsius / Fahrenheit / Kelvin
* [x] Temperature ranges
* [ ] Improved UI

---

## Contributing / Building From Source

Contributions are welcome

Clone the repository:

```bash
git clone https://github.com/storm-o-war/simple-table-like-temperature-converter-in-cpp.git
cd simple-table-like-temperature-converter-in-cpp
```

Build it:

```bash
make
```

Make your changes, test them, and submit a pull request.

---

## 📄 License

This project is licensed under the **MIT License**.

See [`LICENSE`](LICENSE) for more information.

---

## 👤 Author

**storm-o-war**

---

> Made with C++
