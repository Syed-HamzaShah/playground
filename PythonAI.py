from textblob import TextBlob
import random

# A simple "memory" system to remember the user's name
user_info = {
    "name": None
}

# Possible responses based on sentiment
positive_responses = ["That's awesome!", "Glad to hear that!", "Great! Keep it up."]
negative_responses = ["I'm sorry to hear that.", "That doesn't sound fun.", "I hope things get better."]
neutral_responses = ["Okay, tell me more.", "I see. What else?", "Interesting, go on."]

def analyze_sentiment(text):
    """
    Analyze the sentiment of the text.
    Returns a string: "positive", "negative", or "neutral"
    """
    blob = TextBlob(text)
    sentiment = blob.sentiment.polarity  # ranges from -1 to 1
    if sentiment > 0:
        return "positive"
    elif sentiment < 0:
        return "negative"
    else:
        return "neutral"

def get_response(user_input):
    """
    Generate a response based on the user's input.
    If a name is mentioned, remember it. If sentiment is analyzed, respond accordingly.
    """
    # Check if the user is introducing themselves
    if "my name is" in user_input.lower():
        name = user_input.split("my name is")[-1].strip()
        user_info["name"] = name
        return f"Nice to meet you, {name}!"
    
    # Sentiment analysis and response based on emotion
    sentiment = analyze_sentiment(user_input)
    if sentiment == "positive":
        return random.choice(positive_responses)
    elif sentiment == "negative":
        return random.choice(negative_responses)
    else:
        return random.choice(neutral_responses)

def chat():
    print("Hello! I'm a more advanced AI. What's your name?")
    
    while True:
        user_input = input("You: ")
        
        # If user types 'exit', the conversation ends
        if user_input.lower() == "exit":
            print("AI: Goodbye! Take care!")
            break
        
        if user_info["name"] is None:  # If name isn't remembered yet
            if "my name is" in user_input.lower():
                response = get_response(user_input)
                print(f"AI: {response}")
            else:
                print("AI: I didn't catch your name. Could you tell me? (Type 'exit' to leave.)")
        else:
            # If the bot already knows the name, use it in conversation
            response = get_response(user_input)
            print(f"AI: {response}")

if __name__ == "__main__":
    chat()
