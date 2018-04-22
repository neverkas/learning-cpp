# About me

I'm a software developer who always tries to improve himself, so I decided to change what I usually use to make my applications. I'll tell you all about what I learn. 
I'll share you some scripts that I must do for my University.

## Themes
- Solarized-dark

## Packages
- Auto complete
- yasnippet
- auto-complete-c-headers

## Configuration

1) As first step you must create your init file. I did on my home directory '~' as .emacs.
So try to write on your terminal this command
>vim ~/.emacs

You can read more about it [here](https://www.emacswiki.org/emacs/InitFile)

2) As a second step you must write on your .emacs file this:
```
(package-initialize)

(require 'package)
(add-to-list 'package-archives
             '("melpa" . "http://melpa.milkbox.net/packages/"))

(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(custom-enabled-themes (quote (solarized-dark)))
 '(custom-safe-themes
   (quote
    ("8aebf25556399b58091e533e455dd50a6a9cba958cc4ebb0aab175863c25b9a4" default)))
 '(package-selected-packages
   (quote
    (ac-c-headers auto-yasnippet yasnippet auto-complete zenburn-theme solarized-theme))))
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 )

;; start auto-complete with emacs
(require 'auto-complete)
; do default config for auto-complete
(require 'auto-complete-config)
(ac-config-default)

(require 'yasnippet)
(yas-global-mode 1)

(require 'auto-complete-c-headers)
  (add-hook 'c-mode-hook
            (lambda ()
              (add-to-list 'ac-sources 'ac-source-c-headers)
              (add-to-list 'ac-sources 'ac-source-c-header-symbols t)))

```
