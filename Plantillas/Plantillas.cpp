template <typename T>
class Vector3 {
public:
    T x, y, z;
    Vector3(T x_ = 0, T y_ = 0, T z_ = 0) : x(x_), y(y_), z(z_) {}

    Vector3 operator+(const Vector3& other) const {
        return Vector3(x + other.x, y + other.y, z + other.z);
    }

    T operator*(const Vector3& other) const {
        return x * other.x + y * other.y + z * other.z;
    }

    Vector3 operator^(const Vector3& other) const {
        return Vector3(y * other.z - z * other.y,
            z * other.x - x * other.z,
            x * other.y - y * other.x);
    }

    T SqrMagnitude() const { return x * x + y * y + z * z; }

    std::string toString() const {
        std::stringstream ss;
        ss << "(" << x << ", " << y << ", " << z << ")";
        return ss.str();
    }
};

