import secrets

# secure byte token
print(secrets.token_bytes(16))

# secure hexadecimal token
print(secrets.token_hex(32))

# generate secure URLs
AccountEmail = "youremail@gmail.com"
AccountEmailToken += secrets.token_urlsafe(32)
print(passwordResetLink)
