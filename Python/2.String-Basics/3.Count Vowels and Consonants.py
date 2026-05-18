# Count Vowels and Consonants
# Example str="hello i am hridoy" ;
# output = vowels = ; consonants= ;

# Count Vowels and Consonants

def Count(text):

    if not text:
        return

    vowel = 0
    consonant = 0

    for c in text:

        if c.isalpha():

            if c == "a" or c == "e" or c == "i" or c == "o" or c == "u":
                vowel += 1
            else:
                consonant += 1

    return "vowels are : " + str(vowel), "consonants are : " + str(consonant)


text = "hello i am hridoy"

print(Count(text))