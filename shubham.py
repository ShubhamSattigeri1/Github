import streamlit as st

# Set the title and description
st.title("Python Syntax Tester")
st.subheader("Explore different types of loops in Python")
st.write("This webpage allows you to test different types of syntax in Python.")
st.write("Loops...")

# Add an image
st.image("https://www.python.org/static/community_logos/python-logo.png", width=300)

# Create columns for the loops
col1, col2 = st.columns(2)

with col1:
    st.subheader("1. For Loop")
    n = st.number_input("Enter a valid positive number for the for loop: ", min_value=0, step=1, value=0, key="for_loop")
    if n > 0:
        for i in range(int(n)):
            st.write(f"You have printed this statement {i + 1} times")

with col2:
    st.subheader("2. While Loop")
    p = st.number_input("Enter a valid positive number for the while loop: ", min_value=0, step=1, value=0, key="while_loop")
    while_loop_counter = p
    while while_loop_counter > 0:
        st.write(f"You have printed this {int(while_loop_counter)} times.")
        while_loop_counter -= 1

# Add a footer
st.markdown("---")
st.write("Created by [Shubham Sattigeri]")