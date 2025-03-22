import streamlit as st
from flightdet import fm, to, pho, kg  # Import variables from flightdet module

# Create a dictionary to store the flight details
flightdet = {
    "fm": fm,
    "to": to,
    "pho": pho,
    "kg": kg,
}

st.write("Your departure airport is:", flightdet["fm"])
st.write("your destination airport is", to)
st.write("your phone number is", pho)
st.write("your luggage weight is", kg)