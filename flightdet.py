import streamlit as st
airports = ["JFK - John F. Kennedy International Airport", 
            "LAX - Los Angeles International Airport", 
            "ORD - O'Hare International Airport", 
            "ATL - Hartsfield-Jackson Atlanta International Airport", 
            "DFW - Dallas/Fort Worth International Airport"]

st.write("Hello Passenger")
# List of available airports (example list, you can expand it)
fm = st.selectbox("Enter Departure airport:", airports, key = "1")
to = st.selectbox("Enter Destination airport:", airports, key = "2")
pho = st.text_input("Enter Phone number:", key = "3")
kg = st.text_input("Enter Weight of luggage left (kg):", key = "4")
if st.button("Submit"):
    if fm == to:
        st.error("Departure and Destination airports cannot be the same")
    elif not pho:
        st.error("Please enter a valid phone number")
    elif not kg:
        st.error("Please enter the weight of your luggage")
    elif len(pho) != 10:
        st.error("Enter a valid mobile number (10 digits)")  
    else:
        st.success("Form Submitted Successfully")

