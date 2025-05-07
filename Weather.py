import requests
import tkinter as tk
from tkinter import messagebox

# ------------------------------
API_KEY = 'eb85a1e02fc415e8615ff8d2ccda8720'
# ------------------------------

# Function to get weather data from OpenWeatherMap
def get_weather(city):
    base_url = f"http://api.openweathermap.org/data/2.5/weather?q={city}&appid={API_KEY}&units=metric"
    try:
        response = requests.get(base_url)
        data = response.json()
        if response.status_code == 200:
            weather = data['weather'][0]['main']
            return weather
        else:
            messagebox.showerror("Error", f"City not found or API error: {data['message']}")
            return None
    except Exception as e:
        messagebox.showerror("Error", f"Could not fetch weather: {e}")
        return None

# Reflex Agent Logic
def rain_detector_agent(weather_condition):
    if weather_condition in ["Rain", "Drizzle", "Thunderstorm", "Light Run", "Heavy Rain", "Snow" , "Very Light Rain"]:
        return "Close Window"
    else:
        return "Open Window"

# Function to update GUI based on current weather
def update_status():
    city = city_entry.get()
    if city:
        weather = get_weather(city)
        if weather:
            decision = rain_detector_agent(weather)
            weather_label.config(text=f"Weather in {city}: {weather}")
            if decision == "Close Window":
                window_status_label.config(text=f"Action: {decision}", fg="red")
            else:
                window_status_label.config(text=f"Action: {decision}", fg="green")
    else:
        messagebox.showwarning("Input Needed", "Please enter a city name.")

    root.after(60000, update_status)

# ------------------------------
# GUI Setup
# ------------------------------
root = tk.Tk()
root.title("Rain Detector Agent")
root.geometry("450x350")
root.configure(bg="#E8F0F2")  # Light blue background
root.resizable(True, True)

# Title Label
title_label = tk.Label(root, text="Rain Detector Agent", font=("Helvetica", 20, "bold"), bg="#E8F0F2")
title_label.pack(pady=10)

# Entry field for city name
city_entry = tk.Entry(root, font=("Arial", 14), justify='center')
city_entry.pack(pady=10)
city_entry.insert(0, "Enter city name")

# Label to show current weather
weather_label = tk.Label(root, text="Weather: Waiting...", font=("Arial", 14), bg="#E8F0F2")
weather_label.pack(pady=10)

# Label to show action (Open/Close window)
window_status_label = tk.Label(root, text="Action: Waiting...", font=("Arial", 16, "bold"), bg="#E8F0F2")
window_status_label.pack(pady=10)

# Button to check weather
refresh_button = tk.Button(root, text="Check Weather", command=update_status, font=("Arial", 12, "bold"), bg="#4CAF50", fg="white", padx=10, pady=5)
refresh_button.pack(pady=20)

# Start the application
root.mainloop()
