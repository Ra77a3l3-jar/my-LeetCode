class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        
        kelvin: float = 0
        fahrenheit: float = 0

        kelvin = celsius + 273.15
        fahrenheit = celsius * 1.80 + 32.00

        return [kelvin, fahrenheit]
