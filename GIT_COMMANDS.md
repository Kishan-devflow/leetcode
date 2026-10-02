# Git Commands

Run these commands from the project folder. Replace the remote URL with the URL of the GitHub repository you create.

## 1. Initialize Git

```sh
git init
```

## 2. Add Files

```sh
git add .
```

## 3. Commit Files

```sh
git commit -m "Initial project structure"
```

For later changes, use a meaningful message that describes the work, for example:

```sh
git add .
git commit -m "Add stack problem solutions"
```

## 4. Connect the GitHub Repository

```sh
git remote add origin <YOUR_GITHUB_REPOSITORY_URL>
```

## 5. Push to `main`

```sh
git branch -M main
git push -u origin main
```
