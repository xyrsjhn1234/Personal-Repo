# Define the Book class
class Book:
    # Constructor to initialize the book attributes
    def __init__(self, title, author, pages, current_page=1):
        self.title = title
        self.author = author
        self.pages = pages
        self.current_page = current_page

    # Method to display book information
    def display_info(self):
        info = "Book Info:\n"
        info += f"Title: {self.title}\n"
        info += f"Author: {self.author}\n"
        info += f"Pages: {self.pages}\n"
        info += f"Current Page: {self.current_page}\n"
        return info

    # Method to turn pages
    def turn_page(self, page):
        if 1 <= page <= self.pages:
            self.current_page = page
            print(f"You turned the page to {self.current_page}.")
        else:
            print("Invalid page number.")

# Create instances of the Book class
book1 = Book("The Great Gatsby", "F. Scott Fitzgerald", 180)
book2 = Book("To Kill a Mockingbird", "Harper Lee", 281)

# Display book information
print("Book 1:")
print(book1.display_info())

print("\nBook 2:")
print(book2.display_info())

# Turn pages of the books
book1.turn_page(50)
book2.turn_page(300)
