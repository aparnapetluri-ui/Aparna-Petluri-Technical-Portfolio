import Footer from "../components/home/Footer";
import Header from "../components/home/header";
import MovieGenre from "../components/home/MovieGenre";
import Subheader from "../components/home/Subheader";

const Home = () => {
  return (
    <div className="flex flex-col items-center justify-center">
      <div className="flex pt-3 pb-4 bg-green-900">
        <Header />
      </div>
      <div className="flex flex-col bg-gradient-to-b from-green-900 to-blue-300">
        <Subheader />
        <MovieGenre />
      </div>
      <div>
        <Footer />
      </div>
    </div>
  );
};

export default Home;
