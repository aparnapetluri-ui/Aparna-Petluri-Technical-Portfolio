import Image from "next/image";
import Header from "../../components/home/header";

const Adventure = () => {
  return (
    <div className="flex flex-col items-center justify-center text-center bg-gradient-to-b from-green-400 to-green-200">
      <Header />
      <div className="w-screen text-8xl text-black font-caveat">Adventure</div>
      <div className="w-screen text-5xl text-gray-700 font-caveat pb-7">
        Coloring Pages
      </div>
      <div className="grid grid-cols-2 gap-15 pb-10">
        <a href="/adventure/alvin-and-the-chipmunks.webp" target="_blank">
          <Image
            width={400}
            height={600}
            alt="Alvin And The Chipmunks"
            className="object-none"
            src="/adventure/alvin-and-the-chipmunks.webp"
          />
          <button className="bg-green-900 hover:bg-green-700 text-4xl text-white font-caveat py-2 px-4 rounded">
            Alvin And The Chipmunks
          </button>
        </a>
        <a href="/adventure/cars.webp" target="_blank">
          <Image
            width={400}
            height={600}
            alt="Cars"
            className="object-none"
            src="/adventure/cars.webp"
          />
          <button className="bg-green-900 hover:bg-green-700 text-4xl text-white font-caveat py-2 px-4 rounded">
            Cars
          </button>
        </a>
        <a href="/adventure/finding-nemo.webp" target="_blank">
          <Image
            width={400}
            height={600}
            alt="Finding Nemo"
            className="object-none"
            src="/adventure/finding-nemo.webp"
          />
          <button className="bg-green-900 hover:bg-green-700 text-4xl text-white font-caveat py-2 px-4 rounded">
            Finding Nemo
          </button>
        </a>
        <a href="/adventure/how-to-train-your-dragon.webp" target="_blank">
          <Image
            width={400}
            height={600}
            alt="How To Train Your Dragon"
            className="object-none"
            src="/adventure/how-to-train-your-dragon.webp"
          />
          <button className="bg-green-900 hover:bg-green-700 text-4xl text-white font-caveat py-2 px-4 rounded">
            How To Train Your Dragon
          </button>
        </a>
        <a href="/adventure/kung-fu-pands.webp" target="_blank">
          <Image
            width={400}
            height={600}
            alt="Kung Fu Panda"
            className="object-none"
            src="/adventure/kung-fu-panda.webp"
          />
          <button className="bg-green-900 hover:bg-green-700 text-4xl text-white font-caveat py-2 px-4 rounded">
            Kung Fu Panda
          </button>
        </a>
        <a href="/adventure/madagascar.webp" target="_blank">
          <Image
            width={400}
            height={600}
            alt="Madagascar"
            className="object-none"
            src="/adventure/madagascar.webp"
          />
          <button className="bg-green-900 hover:bg-green-700 text-4xl text-white font-caveat py-2 px-4 rounded">
            Madagascar
          </button>
        </a>
        <a href="/adventure/teenage-mutant-ninja-turtles.webp" target="_blank">
          <Image
            width={400}
            height={600}
            alt="Teenage Mutant Ninja Turtles"
            className="object-none"
            src="/adventure/teenage-mutant-ninja-turtles.webp"
          />
          <button className="bg-green-900 hover:bg-green-700 text-4xl text-white font-caveat py-2 px-4 rounded">
            Teenage Mutant Ninja Turtles
          </button>
        </a>
        <a href="/adventure/the-lego-batman.webp" target="_blank">
          <Image
            width={400}
            height={600}
            alt="The Lego Batman"
            className="object-none"
            src="/adventure/the-lego-batman.webp"
          />
          <button className="bg-green-900 hover:bg-green-700 text-4xl text-white font-caveat py-2 px-4 rounded">
            The Lego Batman
          </button>
        </a>
        <a href="/adventure/the-lego-ninjago.webp" target="_blank">
          <Image
            width={400}
            height={600}
            alt="The Lego Ninjago"
            className="object-none"
            src="/adventure/the-lego-ninjago.webp"
          />
          <button className="bg-green-900 hover:bg-green-700 text-4xl text-white font-caveat py-2 px-4 rounded">
            The Lego Ninjago
          </button>
        </a>
        <a href="/adventure/the-lion-king.webp" target="_blank">
          <Image
            width={400}
            height={600}
            alt="The Lion King"
            className="object-none"
            src="/adventure/the-lion-king.webp"
          />
          <button className="bg-green-900 hover:bg-green-700 text-4xl text-white font-caveat py-2 px-4 rounded">
            The Lion King
          </button>
        </a>
        <a href="/adventure/toy-story.webp" target="_blank">
          <Image
            width={400}
            height={600}
            alt="Toy Story"
            className="object-none"
            src="/adventure/toy-story.webp"
          />
          <button className="bg-green-900 hover:bg-green-700 text-4xl text-white font-caveat py-2 px-4 rounded">
            Toy Story
          </button>
        </a>
        <a href="/adventure/up.webp" target="_blank">
          <Image
            width={400}
            height={600}
            alt="Up"
            className="object-none"
            src="/adventure/up.webp"
          />
          <button className="bg-green-900 hover:bg-green-700 text-4xl text-white font-caveat py-2 px-4 rounded">
            Up
          </button>
        </a>
      </div>
    </div>
  );
};

export default Adventure;
