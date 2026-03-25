<h1 align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" width="100" />
  <br>
  C++ Module 03
</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B98-blue?style=for-the-badge&logo=c%2B%2B" />
  <img src="https://img.shields.io/badge/Concept-Inheritance-yellow?style=for-the-badge" />
  <img src="https://img.shields.io/badge/School-42-black?style=for-the-badge" />
</p>

---

## 📖 Introduction

This module is dedicated to the study of **Inheritance**, one of the core pillars of Object-Oriented Programming. The goal is to learn how to create a hierarchy of classes, reuse code effectively, and understand the flow of constructors and destructors within inherited structures.

## 🛠️ Exercises

### [ex00: Aaaaand... OPEN!](ex00/)
The foundation class: `ClapTrap`.
- **Goal**: Implement a basic robot class with health, energy, and attack points.
- **Concepts**: Attributes, basic member functions (`attack`, `takeDamage`, `beRepaired`), and internal state management.

### [ex01: Serena, my love!](ex01/)
Introduction to derived classes: `ScavTrap`.
- **Inheritance**: `ScavTrap` inherits from `ClapTrap` but with different default values and a unique ability.
- **Concepts**: The `protected` access specifier, constructor/destructor chaining (parent first, child last), and overriding methods.

### [ex02: Repetitive work](ex02/)
Furthering the hierarchy: `FragTrap`.
- **Goal**: Create another derived class to reinforce the pattern of inheritance.
- **Features**: Distinctive stats and a new `highFivesGuys` method, emphasizing how different subclasses can specialize behaviors.

## 📝 Learning Objectives

- Implementing **Public Inheritance**.
- Understanding **Constructor and Destructor execution order** in hierarchies.
- Using the **`protected`** keyword to allow child access to parent attributes.
- Designing modular and reusable class architectures.

## 🚀 Usage

1. Navigate to an exercise folder:
   ```bash
   cd ex02
   ```
2. Build the project:
   ```bash
   make
   ```
3. Run the executable:
   ```bash
   ./FragTrap
   ```

---

<p align="center">
  <i>Part of the 42 C++ Pool. Developed by shkaruna.</i>
</p>
