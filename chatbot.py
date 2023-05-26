def chatbot():
    print("Hello! I'm a chatbot. How can I assist you today?")
    
    while True:
        user_input = input("> ")  # Prompt user for input
        
        if user_input.lower() == "hello" or user_input.lower() == "hi":
            print("Hi there!")
        elif user_input.lower() == "how are you":
            print("I'm doing well, thank you!")
        elif user_input.lower() == "what's your name":
            print("I'm a chatbot. You can call me Chatpy!")
        elif user_input.lower() == "bye":
            print("Goodbye! Have a great day!")
            break
        else:
            print("I'm sorry, I didn't understand that. Can you please rephrase?")
        
chatbot()