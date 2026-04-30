# 🗑️ Smart Waste Management System

[![Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Platform](https://img.shields.io/badge/Platform-Linux%20%7C%20Windows-lightgrey.svg)]()
[![License](https://img.shields.io/badge/License-MIT-green.svg)]()
[![Status](https://img.shields.io/badge/Status-Active-brightgreen.svg)]()

> A **role-based Smart Waste Management System** built in C that enables efficient monitoring, management, and analysis of waste bins across different zones — with secure login and access control.

---

## 📌 Table of Contents

- [About the Project](#about-the-project)
- [Features](#features)
- [Role-Based Access](#role-based-access)
- [Project Structure](#project-structure)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Credentials File Format](#credentials-file-format)
- [Tech Stack](#tech-stack)
- [Future Improvements](#future-improvements)
- [Contributing](#contributing)

---

## 📖 About the Project

The **Smart Waste Management System** is a C-based console application designed to help municipalities and organizations manage waste bins efficiently. It supports **multi-role authentication** (Admin, Head, User) and provides features like bin tracking, zone management, waste analysis, and smart collection routing.

---

## ✨ Features

- 🔐 **Secure Login System** — Credential-based authentication with role detection
- 👥 **Role-Based Menus** — Different access levels for Admin, Head, and User
- 🗺️ **Zone Management** — View and manage bins by geographic zones
- ➕ **Add / Remove Bins** — Dynamic bin management (Admin only)
- 🔍 **Search Functionality** — Quickly find specific bins by ID or location
- 📊 **Waste Analysis** — Insights and statistics on waste data
- 🚛 **Smart Collection Routing** — Optimized waste collection scheduling
- 📋 **Data Display** — View all registered bins and their status

---

## 👤 Role-Based Access

| Feature              | Admin ✅ | Head ✅ | User ✅ |
|----------------------|----------|---------|---------|
| Show All Data        | ✅       | ✅      | ✅      |
| Zone Overview        | ✅       | ✅      | ❌      |
| Add Bin              | ✅       | ❌      | ❌      |
| Remove Bin           | ✅       | ❌      | ❌      |
| Search Bin           | ✅       | ✅      | ✅      |
| Waste Analysis       | ✅       | ✅      | ❌      |
| Smart Collection     | ✅       | ✅      | ❌      |

---

## 📁 Project Structure

```
smart-waste-management/
│
├── main.c               # Entry point — login, role routing, menus
├── waste_system.h       # Header file — function declarations
├── waste_system.c       # Core logic — bin operations, analysis, collection
├── credentials.txt      # User credentials (username password role)
└── README.md            # Project documentation
```

---

## 🚀 Getting Started

### Prerequisites

- GCC Compiler
- Linux / Windows (with MinGW or WSL)

### Installation & Compilation

```bash
# Clone the repository
git clone https://github.com/your-username/smart-waste-management.git
cd smart-waste-management

# Compile the project
gcc main.c waste_system.c -o waste_system

# Run the executable
./waste_system
```

---

## 🖥️ Usage

On launch, the system prompts for a **username** and **password**. Based on the credentials, the appropriate menu is shown.

```
USERNAME: admin1
PASSWORD: pass123

Logged in as admin

ADMIN MENU
1. Show
2. Zone
3. Add
4. Remove
5. Search
6. Analysis
7. Collection
8. Exit
```

---

## 🔑 Credentials File Format

The `credentials.txt` file stores user login details in the following format:

```
username password role
```

**Example:**
```
admin1   pass123   admin
head1    head456   head
user1    user789   user
```

> ⚠️ **Note:** Keep `credentials.txt` secure and never commit it to a public repository. Add it to `.gitignore`.

```bash
# .gitignore
credentials.txt
```

---

## 🛠️ Tech Stack

- **Language:** C (C99 standard)
- **File I/O:** `stdio.h` for credential reading and data storage
- **String Operations:** `string.h` for role comparison and input handling
- **Compiler:** GCC

---

## 🔮 Future Improvements

- [ ] 🔒 Replace plaintext passwords with hashed authentication (e.g., SHA-256)
- [ ] 🗄️ Integrate a proper database (SQLite) instead of flat files
- [ ] 📡 Add IoT sensor simulation for real-time bin fill levels
- [ ] 🌐 Build a web/GUI front-end interface
- [ ] 📈 Generate exportable waste reports (CSV/PDF)
- [ ] 🗑️ Remove debug `printf` statements before production deployment

---

## 🤝 Contributing

Contributions are welcome! Please follow these steps:

1. Fork the repository
2. Create a new branch (`git checkout -b feature/your-feature`)
3. Commit your changes (`git commit -m 'Add your feature'`)
4. Push to the branch (`git push origin feature/your-feature`)
5. Open a Pull Request

---

## 📄 License

This project is licensed under the **MIT License** — see the [LICENSE](LICENSE) file for details.

---

## 👨‍💻 Team Members

G.Charan Harsha AP24110011094
D.Rithvik Dhanesh AP24110011110
S.Tanav Reddy AP24110011068

> ⭐ If you found this project helpful, please consider giving it a star!
