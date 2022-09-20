void HMass_VbbHcc_17()
{
//=========Macro generated from canvas: HMass_VbbHcc_17/HMass_VbbHcc_17
//=========  (Tue Sep 20 10:39:22 2022) by ROOT version 6.14/09
   TCanvas *HMass_VbbHcc_17 = new TCanvas("HMass_VbbHcc_17", "HMass_VbbHcc_17",0,0,600,600);
   HMass_VbbHcc_17->SetHighLightColor(2);
   HMass_VbbHcc_17->Range(0,0,1,1);
   HMass_VbbHcc_17->SetFillColor(0);
   HMass_VbbHcc_17->SetFillStyle(4000);
   HMass_VbbHcc_17->SetBorderMode(0);
   HMass_VbbHcc_17->SetBorderSize(2);
   HMass_VbbHcc_17->SetFrameFillStyle(1000);
   HMass_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-175.7326,315.7258,175566.9);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(150469.2);
   
   TH1F *st_stack_6 = new TH1F("st_stack_6","",30,0,300);
   st_stack_6->SetMinimum(0.01);
   st_stack_6->SetMaximum(157992.6);
   st_stack_6->SetDirectory(0);
   st_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_6->SetLineColor(ci);
   st_stack_6->GetXaxis()->SetRange(1,30);
   st_stack_6->GetXaxis()->SetLabelFont(42);
   st_stack_6->GetXaxis()->SetLabelSize(0.035);
   st_stack_6->GetXaxis()->SetTitleSize(0.035);
   st_stack_6->GetXaxis()->SetTitleFont(42);
   st_stack_6->GetYaxis()->SetTitle("Events/10.0");
   st_stack_6->GetYaxis()->SetLabelFont(42);
   st_stack_6->GetYaxis()->SetLabelSize(0.05);
   st_stack_6->GetYaxis()->SetTitleSize(0.057);
   st_stack_6->GetYaxis()->SetTitleOffset(1.2);
   st_stack_6->GetYaxis()->SetTitleFont(42);
   st_stack_6->GetZaxis()->SetLabelFont(42);
   st_stack_6->GetZaxis()->SetLabelSize(0.035);
   st_stack_6->GetZaxis()->SetTitleSize(0.035);
   st_stack_6->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_6);
   
   
   TH1D *VbbHcc_HMass_stack_1 = new TH1D("VbbHcc_HMass_stack_1","",30,0,300);
   VbbHcc_HMass_stack_1->SetBinContent(2,635.8658);
   VbbHcc_HMass_stack_1->SetBinContent(3,13310.16);
   VbbHcc_HMass_stack_1->SetBinContent(4,48447.22);
   VbbHcc_HMass_stack_1->SetBinContent(5,62766.88);
   VbbHcc_HMass_stack_1->SetBinContent(6,54511.66);
   VbbHcc_HMass_stack_1->SetBinContent(7,55351.23);
   VbbHcc_HMass_stack_1->SetBinContent(8,53614.46);
   VbbHcc_HMass_stack_1->SetBinContent(9,47419.27);
   VbbHcc_HMass_stack_1->SetBinContent(10,41941.36);
   VbbHcc_HMass_stack_1->SetBinContent(11,43680.22);
   VbbHcc_HMass_stack_1->SetBinContent(12,42833.44);
   VbbHcc_HMass_stack_1->SetBinContent(13,44650.27);
   VbbHcc_HMass_stack_1->SetBinContent(14,43149.59);
   VbbHcc_HMass_stack_1->SetBinContent(15,37645.58);
   VbbHcc_HMass_stack_1->SetBinContent(16,38655.2);
   VbbHcc_HMass_stack_1->SetBinContent(17,36815.05);
   VbbHcc_HMass_stack_1->SetBinContent(18,40677.63);
   VbbHcc_HMass_stack_1->SetBinContent(19,33009.81);
   VbbHcc_HMass_stack_1->SetBinContent(20,32336.88);
   VbbHcc_HMass_stack_1->SetBinContent(21,24917.73);
   VbbHcc_HMass_stack_1->SetBinContent(22,23369.21);
   VbbHcc_HMass_stack_1->SetBinContent(23,20711);
   VbbHcc_HMass_stack_1->SetBinContent(24,19395.37);
   VbbHcc_HMass_stack_1->SetBinContent(25,17698.5);
   VbbHcc_HMass_stack_1->SetBinContent(26,17182.76);
   VbbHcc_HMass_stack_1->SetBinContent(27,13185.78);
   VbbHcc_HMass_stack_1->SetBinContent(28,12351.87);
   VbbHcc_HMass_stack_1->SetBinContent(29,14123.79);
   VbbHcc_HMass_stack_1->SetBinContent(30,11885.9);
   VbbHcc_HMass_stack_1->SetBinContent(31,144691.3);
   VbbHcc_HMass_stack_1->SetBinError(2,433.5141);
   VbbHcc_HMass_stack_1->SetBinError(3,1851.044);
   VbbHcc_HMass_stack_1->SetBinError(4,3579.809);
   VbbHcc_HMass_stack_1->SetBinError(5,3993.295);
   VbbHcc_HMass_stack_1->SetBinError(6,3596.8);
   VbbHcc_HMass_stack_1->SetBinError(7,3592.816);
   VbbHcc_HMass_stack_1->SetBinError(8,3615.351);
   VbbHcc_HMass_stack_1->SetBinError(9,3323.316);
   VbbHcc_HMass_stack_1->SetBinError(10,3096.976);
   VbbHcc_HMass_stack_1->SetBinError(11,3261.517);
   VbbHcc_HMass_stack_1->SetBinError(12,3184.041);
   VbbHcc_HMass_stack_1->SetBinError(13,3279.012);
   VbbHcc_HMass_stack_1->SetBinError(14,3251.3);
   VbbHcc_HMass_stack_1->SetBinError(15,2943.207);
   VbbHcc_HMass_stack_1->SetBinError(16,3082.414);
   VbbHcc_HMass_stack_1->SetBinError(17,2932.205);
   VbbHcc_HMass_stack_1->SetBinError(18,3178.872);
   VbbHcc_HMass_stack_1->SetBinError(19,2801.683);
   VbbHcc_HMass_stack_1->SetBinError(20,2749.397);
   VbbHcc_HMass_stack_1->SetBinError(21,2360.747);
   VbbHcc_HMass_stack_1->SetBinError(22,2241.111);
   VbbHcc_HMass_stack_1->SetBinError(23,2095.515);
   VbbHcc_HMass_stack_1->SetBinError(24,2009.382);
   VbbHcc_HMass_stack_1->SetBinError(25,1926.75);
   VbbHcc_HMass_stack_1->SetBinError(26,1863.237);
   VbbHcc_HMass_stack_1->SetBinError(27,1612.697);
   VbbHcc_HMass_stack_1->SetBinError(28,1595.703);
   VbbHcc_HMass_stack_1->SetBinError(29,1708.843);
   VbbHcc_HMass_stack_1->SetBinError(30,1504.759);
   VbbHcc_HMass_stack_1->SetBinError(31,4822.671);
   VbbHcc_HMass_stack_1->SetEntries(21518);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_HMass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_1->SetLineColor(ci);
   VbbHcc_HMass_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_1,"");
   
   TH1D *VbbHcc_HMass_stack_2 = new TH1D("VbbHcc_HMass_stack_2","",30,0,300);
   VbbHcc_HMass_stack_2->SetBinContent(2,1.336172);
   VbbHcc_HMass_stack_2->SetBinContent(3,58.73139);
   VbbHcc_HMass_stack_2->SetBinContent(4,144.9065);
   VbbHcc_HMass_stack_2->SetBinContent(5,225.5435);
   VbbHcc_HMass_stack_2->SetBinContent(6,316.6162);
   VbbHcc_HMass_stack_2->SetBinContent(7,456.0125);
   VbbHcc_HMass_stack_2->SetBinContent(8,663.2072);
   VbbHcc_HMass_stack_2->SetBinContent(9,748.8593);
   VbbHcc_HMass_stack_2->SetBinContent(10,607.5583);
   VbbHcc_HMass_stack_2->SetBinContent(11,514.0756);
   VbbHcc_HMass_stack_2->SetBinContent(12,481.3032);
   VbbHcc_HMass_stack_2->SetBinContent(13,482.4804);
   VbbHcc_HMass_stack_2->SetBinContent(14,421.0019);
   VbbHcc_HMass_stack_2->SetBinContent(15,400.0554);
   VbbHcc_HMass_stack_2->SetBinContent(16,359.5995);
   VbbHcc_HMass_stack_2->SetBinContent(17,323.6709);
   VbbHcc_HMass_stack_2->SetBinContent(18,288.5769);
   VbbHcc_HMass_stack_2->SetBinContent(19,274.7134);
   VbbHcc_HMass_stack_2->SetBinContent(20,253.0616);
   VbbHcc_HMass_stack_2->SetBinContent(21,229.1539);
   VbbHcc_HMass_stack_2->SetBinContent(22,223.8985);
   VbbHcc_HMass_stack_2->SetBinContent(23,195.776);
   VbbHcc_HMass_stack_2->SetBinContent(24,192.0799);
   VbbHcc_HMass_stack_2->SetBinContent(25,176.5788);
   VbbHcc_HMass_stack_2->SetBinContent(26,158.1149);
   VbbHcc_HMass_stack_2->SetBinContent(27,147.7081);
   VbbHcc_HMass_stack_2->SetBinContent(28,127.8561);
   VbbHcc_HMass_stack_2->SetBinContent(29,116.736);
   VbbHcc_HMass_stack_2->SetBinContent(30,103.3264);
   VbbHcc_HMass_stack_2->SetBinContent(31,1509.132);
   VbbHcc_HMass_stack_2->SetBinError(2,0.4335778);
   VbbHcc_HMass_stack_2->SetBinError(3,3.297013);
   VbbHcc_HMass_stack_2->SetBinError(4,5.199786);
   VbbHcc_HMass_stack_2->SetBinError(5,6.613088);
   VbbHcc_HMass_stack_2->SetBinError(6,7.851928);
   VbbHcc_HMass_stack_2->SetBinError(7,9.34866);
   VbbHcc_HMass_stack_2->SetBinError(8,11.23191);
   VbbHcc_HMass_stack_2->SetBinError(9,12.12295);
   VbbHcc_HMass_stack_2->SetBinError(10,10.89908);
   VbbHcc_HMass_stack_2->SetBinError(11,10.05685);
   VbbHcc_HMass_stack_2->SetBinError(12,9.733806);
   VbbHcc_HMass_stack_2->SetBinError(13,9.80252);
   VbbHcc_HMass_stack_2->SetBinError(14,8.906663);
   VbbHcc_HMass_stack_2->SetBinError(15,8.843267);
   VbbHcc_HMass_stack_2->SetBinError(16,8.435046);
   VbbHcc_HMass_stack_2->SetBinError(17,7.952946);
   VbbHcc_HMass_stack_2->SetBinError(18,7.395234);
   VbbHcc_HMass_stack_2->SetBinError(19,7.293353);
   VbbHcc_HMass_stack_2->SetBinError(20,6.935609);
   VbbHcc_HMass_stack_2->SetBinError(21,6.479998);
   VbbHcc_HMass_stack_2->SetBinError(22,6.524625);
   VbbHcc_HMass_stack_2->SetBinError(23,6.103443);
   VbbHcc_HMass_stack_2->SetBinError(24,6.146393);
   VbbHcc_HMass_stack_2->SetBinError(25,5.735793);
   VbbHcc_HMass_stack_2->SetBinError(26,5.417164);
   VbbHcc_HMass_stack_2->SetBinError(27,5.233789);
   VbbHcc_HMass_stack_2->SetBinError(28,4.783183);
   VbbHcc_HMass_stack_2->SetBinError(29,4.529307);
   VbbHcc_HMass_stack_2->SetBinError(30,4.199345);
   VbbHcc_HMass_stack_2->SetBinError(31,16.26421);
   VbbHcc_HMass_stack_2->SetEntries(128128);

   ci = TColor::GetColor("#660066");
   VbbHcc_HMass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_2->SetLineColor(ci);
   VbbHcc_HMass_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_2,"");
   
   TH1D *VbbHcc_HMass_stack_3 = new TH1D("VbbHcc_HMass_stack_3","",30,0,300);
   VbbHcc_HMass_stack_3->SetBinContent(2,32.84745);
   VbbHcc_HMass_stack_3->SetBinContent(3,970.8712);
   VbbHcc_HMass_stack_3->SetBinContent(4,2980.638);
   VbbHcc_HMass_stack_3->SetBinContent(5,4482.963);
   VbbHcc_HMass_stack_3->SetBinContent(6,5825.861);
   VbbHcc_HMass_stack_3->SetBinContent(7,7862.665);
   VbbHcc_HMass_stack_3->SetBinContent(8,10781.28);
   VbbHcc_HMass_stack_3->SetBinContent(9,12242.95);
   VbbHcc_HMass_stack_3->SetBinContent(10,11261.28);
   VbbHcc_HMass_stack_3->SetBinContent(11,10615.92);
   VbbHcc_HMass_stack_3->SetBinContent(12,10184.18);
   VbbHcc_HMass_stack_3->SetBinContent(13,9584.01);
   VbbHcc_HMass_stack_3->SetBinContent(14,8534.096);
   VbbHcc_HMass_stack_3->SetBinContent(15,7527.218);
   VbbHcc_HMass_stack_3->SetBinContent(16,6497.523);
   VbbHcc_HMass_stack_3->SetBinContent(17,5662.672);
   VbbHcc_HMass_stack_3->SetBinContent(18,5041.996);
   VbbHcc_HMass_stack_3->SetBinContent(19,4482.64);
   VbbHcc_HMass_stack_3->SetBinContent(20,3928.679);
   VbbHcc_HMass_stack_3->SetBinContent(21,3542.899);
   VbbHcc_HMass_stack_3->SetBinContent(22,3178.372);
   VbbHcc_HMass_stack_3->SetBinContent(23,2844.175);
   VbbHcc_HMass_stack_3->SetBinContent(24,2553.395);
   VbbHcc_HMass_stack_3->SetBinContent(25,2293.062);
   VbbHcc_HMass_stack_3->SetBinContent(26,2042.648);
   VbbHcc_HMass_stack_3->SetBinContent(27,1862.65);
   VbbHcc_HMass_stack_3->SetBinContent(28,1660.677);
   VbbHcc_HMass_stack_3->SetBinContent(29,1487.89);
   VbbHcc_HMass_stack_3->SetBinContent(30,1355.871);
   VbbHcc_HMass_stack_3->SetBinContent(31,15554.45);
   VbbHcc_HMass_stack_3->SetBinError(2,1.528806);
   VbbHcc_HMass_stack_3->SetBinError(3,8.373707);
   VbbHcc_HMass_stack_3->SetBinError(4,14.81378);
   VbbHcc_HMass_stack_3->SetBinError(5,18.20187);
   VbbHcc_HMass_stack_3->SetBinError(6,20.74955);
   VbbHcc_HMass_stack_3->SetBinError(7,24.07988);
   VbbHcc_HMass_stack_3->SetBinError(8,28.20661);
   VbbHcc_HMass_stack_3->SetBinError(9,30.10905);
   VbbHcc_HMass_stack_3->SetBinError(10,28.91368);
   VbbHcc_HMass_stack_3->SetBinError(11,28.14601);
   VbbHcc_HMass_stack_3->SetBinError(12,27.58441);
   VbbHcc_HMass_stack_3->SetBinError(13,26.80243);
   VbbHcc_HMass_stack_3->SetBinError(14,25.29485);
   VbbHcc_HMass_stack_3->SetBinError(15,23.75923);
   VbbHcc_HMass_stack_3->SetBinError(16,22.07102);
   VbbHcc_HMass_stack_3->SetBinError(17,20.59979);
   VbbHcc_HMass_stack_3->SetBinError(18,19.46809);
   VbbHcc_HMass_stack_3->SetBinError(19,18.33226);
   VbbHcc_HMass_stack_3->SetBinError(20,17.14396);
   VbbHcc_HMass_stack_3->SetBinError(21,16.30695);
   VbbHcc_HMass_stack_3->SetBinError(22,15.42608);
   VbbHcc_HMass_stack_3->SetBinError(23,14.58526);
   VbbHcc_HMass_stack_3->SetBinError(24,13.83129);
   VbbHcc_HMass_stack_3->SetBinError(25,13.08324);
   VbbHcc_HMass_stack_3->SetBinError(26,12.33818);
   VbbHcc_HMass_stack_3->SetBinError(27,11.78761);
   VbbHcc_HMass_stack_3->SetBinError(28,11.12857);
   VbbHcc_HMass_stack_3->SetBinError(29,10.53741);
   VbbHcc_HMass_stack_3->SetBinError(30,10.04889);
   VbbHcc_HMass_stack_3->SetBinError(31,33.85138);
   VbbHcc_HMass_stack_3->SetEntries(2474398);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_HMass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_3->SetLineColor(ci);
   VbbHcc_HMass_stack_3->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_3,"");
   
   TH1D *VbbHcc_HMass_stack_4 = new TH1D("VbbHcc_HMass_stack_4","",30,0,300);
   VbbHcc_HMass_stack_4->SetBinContent(2,0.907382);
   VbbHcc_HMass_stack_4->SetBinContent(3,26.57912);
   VbbHcc_HMass_stack_4->SetBinContent(4,88.2957);
   VbbHcc_HMass_stack_4->SetBinContent(5,173.5772);
   VbbHcc_HMass_stack_4->SetBinContent(6,234.064);
   VbbHcc_HMass_stack_4->SetBinContent(7,316.6813);
   VbbHcc_HMass_stack_4->SetBinContent(8,421.8267);
   VbbHcc_HMass_stack_4->SetBinContent(9,567.4934);
   VbbHcc_HMass_stack_4->SetBinContent(10,543.2755);
   VbbHcc_HMass_stack_4->SetBinContent(11,366.4555);
   VbbHcc_HMass_stack_4->SetBinContent(12,269.2165);
   VbbHcc_HMass_stack_4->SetBinContent(13,249.7356);
   VbbHcc_HMass_stack_4->SetBinContent(14,232.5718);
   VbbHcc_HMass_stack_4->SetBinContent(15,240.3611);
   VbbHcc_HMass_stack_4->SetBinContent(16,248.2071);
   VbbHcc_HMass_stack_4->SetBinContent(17,226.7988);
   VbbHcc_HMass_stack_4->SetBinContent(18,233.1989);
   VbbHcc_HMass_stack_4->SetBinContent(19,218.2705);
   VbbHcc_HMass_stack_4->SetBinContent(20,193.5163);
   VbbHcc_HMass_stack_4->SetBinContent(21,173.6057);
   VbbHcc_HMass_stack_4->SetBinContent(22,175.07);
   VbbHcc_HMass_stack_4->SetBinContent(23,165.3351);
   VbbHcc_HMass_stack_4->SetBinContent(24,162.077);
   VbbHcc_HMass_stack_4->SetBinContent(25,150.1123);
   VbbHcc_HMass_stack_4->SetBinContent(26,143.8598);
   VbbHcc_HMass_stack_4->SetBinContent(27,130.9208);
   VbbHcc_HMass_stack_4->SetBinContent(28,124.923);
   VbbHcc_HMass_stack_4->SetBinContent(29,104.8144);
   VbbHcc_HMass_stack_4->SetBinContent(30,113.9511);
   VbbHcc_HMass_stack_4->SetBinContent(31,1609.316);
   VbbHcc_HMass_stack_4->SetBinError(2,0.5269066);
   VbbHcc_HMass_stack_4->SetBinError(3,2.94329);
   VbbHcc_HMass_stack_4->SetBinError(4,5.328784);
   VbbHcc_HMass_stack_4->SetBinError(5,7.617551);
   VbbHcc_HMass_stack_4->SetBinError(6,8.688783);
   VbbHcc_HMass_stack_4->SetBinError(7,10.04483);
   VbbHcc_HMass_stack_4->SetBinError(8,11.21688);
   VbbHcc_HMass_stack_4->SetBinError(9,13.09901);
   VbbHcc_HMass_stack_4->SetBinError(10,12.54841);
   VbbHcc_HMass_stack_4->SetBinError(11,10.42681);
   VbbHcc_HMass_stack_4->SetBinError(12,9.085751);
   VbbHcc_HMass_stack_4->SetBinError(13,8.832951);
   VbbHcc_HMass_stack_4->SetBinError(14,8.489269);
   VbbHcc_HMass_stack_4->SetBinError(15,8.693144);
   VbbHcc_HMass_stack_4->SetBinError(16,8.801926);
   VbbHcc_HMass_stack_4->SetBinError(17,8.390184);
   VbbHcc_HMass_stack_4->SetBinError(18,8.565462);
   VbbHcc_HMass_stack_4->SetBinError(19,8.231715);
   VbbHcc_HMass_stack_4->SetBinError(20,7.496213);
   VbbHcc_HMass_stack_4->SetBinError(21,7.091282);
   VbbHcc_HMass_stack_4->SetBinError(22,7.075339);
   VbbHcc_HMass_stack_4->SetBinError(23,6.929116);
   VbbHcc_HMass_stack_4->SetBinError(24,6.875995);
   VbbHcc_HMass_stack_4->SetBinError(25,6.552227);
   VbbHcc_HMass_stack_4->SetBinError(26,6.352445);
   VbbHcc_HMass_stack_4->SetBinError(27,6.03484);
   VbbHcc_HMass_stack_4->SetBinError(28,5.858602);
   VbbHcc_HMass_stack_4->SetBinError(29,5.26058);
   VbbHcc_HMass_stack_4->SetBinError(30,5.586273);
   VbbHcc_HMass_stack_4->SetBinError(31,18.29171);
   VbbHcc_HMass_stack_4->SetEntries(45331);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_HMass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_4->SetLineColor(ci);
   VbbHcc_HMass_stack_4->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_4,"");
   
   TH1D *VbbHcc_HMass_stack_5 = new TH1D("VbbHcc_HMass_stack_5","",30,0,300);
   VbbHcc_HMass_stack_5->SetBinContent(2,0.2361751);
   VbbHcc_HMass_stack_5->SetBinContent(3,6.850848);
   VbbHcc_HMass_stack_5->SetBinContent(4,24.19014);
   VbbHcc_HMass_stack_5->SetBinContent(5,44.09305);
   VbbHcc_HMass_stack_5->SetBinContent(6,51.64809);
   VbbHcc_HMass_stack_5->SetBinContent(7,68.88419);
   VbbHcc_HMass_stack_5->SetBinContent(8,137.9989);
   VbbHcc_HMass_stack_5->SetBinContent(9,134.2363);
   VbbHcc_HMass_stack_5->SetBinContent(10,96.82734);
   VbbHcc_HMass_stack_5->SetBinContent(11,80.20911);
   VbbHcc_HMass_stack_5->SetBinContent(12,67.19333);
   VbbHcc_HMass_stack_5->SetBinContent(13,71.72491);
   VbbHcc_HMass_stack_5->SetBinContent(14,68.67861);
   VbbHcc_HMass_stack_5->SetBinContent(15,75.17919);
   VbbHcc_HMass_stack_5->SetBinContent(16,69.81006);
   VbbHcc_HMass_stack_5->SetBinContent(17,71.10858);
   VbbHcc_HMass_stack_5->SetBinContent(18,69.09237);
   VbbHcc_HMass_stack_5->SetBinContent(19,67.48692);
   VbbHcc_HMass_stack_5->SetBinContent(20,57.82459);
   VbbHcc_HMass_stack_5->SetBinContent(21,51.42516);
   VbbHcc_HMass_stack_5->SetBinContent(22,52.5267);
   VbbHcc_HMass_stack_5->SetBinContent(23,58.35823);
   VbbHcc_HMass_stack_5->SetBinContent(24,46.13173);
   VbbHcc_HMass_stack_5->SetBinContent(25,38.09001);
   VbbHcc_HMass_stack_5->SetBinContent(26,42.27358);
   VbbHcc_HMass_stack_5->SetBinContent(27,40.02314);
   VbbHcc_HMass_stack_5->SetBinContent(28,34.53553);
   VbbHcc_HMass_stack_5->SetBinContent(29,33.79659);
   VbbHcc_HMass_stack_5->SetBinContent(30,35.10784);
   VbbHcc_HMass_stack_5->SetBinContent(31,553.2855);
   VbbHcc_HMass_stack_5->SetBinError(2,0.1577152);
   VbbHcc_HMass_stack_5->SetBinError(3,2.353947);
   VbbHcc_HMass_stack_5->SetBinError(4,4.731416);
   VbbHcc_HMass_stack_5->SetBinError(5,6.73726);
   VbbHcc_HMass_stack_5->SetBinError(6,6.535735);
   VbbHcc_HMass_stack_5->SetBinError(7,7.608132);
   VbbHcc_HMass_stack_5->SetBinError(8,11.47418);
   VbbHcc_HMass_stack_5->SetBinError(9,10.8464);
   VbbHcc_HMass_stack_5->SetBinError(10,8.754612);
   VbbHcc_HMass_stack_5->SetBinError(11,8.41432);
   VbbHcc_HMass_stack_5->SetBinError(12,7.030861);
   VbbHcc_HMass_stack_5->SetBinError(13,7.597337);
   VbbHcc_HMass_stack_5->SetBinError(14,7.64271);
   VbbHcc_HMass_stack_5->SetBinError(15,8.003719);
   VbbHcc_HMass_stack_5->SetBinError(16,7.795285);
   VbbHcc_HMass_stack_5->SetBinError(17,7.756555);
   VbbHcc_HMass_stack_5->SetBinError(18,7.579547);
   VbbHcc_HMass_stack_5->SetBinError(19,7.393673);
   VbbHcc_HMass_stack_5->SetBinError(20,6.828229);
   VbbHcc_HMass_stack_5->SetBinError(21,5.72107);
   VbbHcc_HMass_stack_5->SetBinError(22,5.814114);
   VbbHcc_HMass_stack_5->SetBinError(23,6.739692);
   VbbHcc_HMass_stack_5->SetBinError(24,5.619786);
   VbbHcc_HMass_stack_5->SetBinError(25,4.747386);
   VbbHcc_HMass_stack_5->SetBinError(26,5.184973);
   VbbHcc_HMass_stack_5->SetBinError(27,5.496302);
   VbbHcc_HMass_stack_5->SetBinError(28,4.487391);
   VbbHcc_HMass_stack_5->SetBinError(29,4.551688);
   VbbHcc_HMass_stack_5->SetBinError(30,5.062092);
   VbbHcc_HMass_stack_5->SetBinError(31,16.13531);
   VbbHcc_HMass_stack_5->SetEntries(11695);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_HMass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_5->SetLineColor(ci);
   VbbHcc_HMass_stack_5->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_5,"");
   
   TH1D *VbbHcc_HMass_stack_6 = new TH1D("VbbHcc_HMass_stack_6","",30,0,300);
   VbbHcc_HMass_stack_6->SetBinContent(3,0.2569566);
   VbbHcc_HMass_stack_6->SetBinContent(4,1.815889);
   VbbHcc_HMass_stack_6->SetBinContent(5,1.203743);
   VbbHcc_HMass_stack_6->SetBinContent(6,0.8760182);
   VbbHcc_HMass_stack_6->SetBinContent(7,1.314946);
   VbbHcc_HMass_stack_6->SetBinContent(8,2.386723);
   VbbHcc_HMass_stack_6->SetBinContent(9,2.935507);
   VbbHcc_HMass_stack_6->SetBinContent(10,2.584095);
   VbbHcc_HMass_stack_6->SetBinContent(11,1.054174);
   VbbHcc_HMass_stack_6->SetBinContent(12,1.523183);
   VbbHcc_HMass_stack_6->SetBinContent(13,1.149905);
   VbbHcc_HMass_stack_6->SetBinContent(14,0.9507614);
   VbbHcc_HMass_stack_6->SetBinContent(15,1.098397);
   VbbHcc_HMass_stack_6->SetBinContent(16,0.2721544);
   VbbHcc_HMass_stack_6->SetBinContent(17,0.7763539);
   VbbHcc_HMass_stack_6->SetBinContent(18,0.9368231);
   VbbHcc_HMass_stack_6->SetBinContent(19,0.671987);
   VbbHcc_HMass_stack_6->SetBinContent(20,0.6573653);
   VbbHcc_HMass_stack_6->SetBinContent(21,0.930467);
   VbbHcc_HMass_stack_6->SetBinContent(23,0.5560469);
   VbbHcc_HMass_stack_6->SetBinContent(24,0.7683826);
   VbbHcc_HMass_stack_6->SetBinContent(25,1.05903);
   VbbHcc_HMass_stack_6->SetBinContent(26,0.2502743);
   VbbHcc_HMass_stack_6->SetBinContent(27,0.546157);
   VbbHcc_HMass_stack_6->SetBinContent(28,0.1513588);
   VbbHcc_HMass_stack_6->SetBinContent(29,0.4658015);
   VbbHcc_HMass_stack_6->SetBinContent(31,5.533075);
   VbbHcc_HMass_stack_6->SetBinError(3,0.2569566);
   VbbHcc_HMass_stack_6->SetBinError(4,0.6512682);
   VbbHcc_HMass_stack_6->SetBinError(5,0.5410861);
   VbbHcc_HMass_stack_6->SetBinError(6,0.4412912);
   VbbHcc_HMass_stack_6->SetBinError(7,0.5510365);
   VbbHcc_HMass_stack_6->SetBinError(8,0.7286483);
   VbbHcc_HMass_stack_6->SetBinError(9,0.8523133);
   VbbHcc_HMass_stack_6->SetBinError(10,0.7885693);
   VbbHcc_HMass_stack_6->SetBinError(11,0.4898463);
   VbbHcc_HMass_stack_6->SetBinError(12,0.6222922);
   VbbHcc_HMass_stack_6->SetBinError(13,0.5169307);
   VbbHcc_HMass_stack_6->SetBinError(14,0.4767742);
   VbbHcc_HMass_stack_6->SetBinError(15,0.4975338);
   VbbHcc_HMass_stack_6->SetBinError(16,0.1951404);
   VbbHcc_HMass_stack_6->SetBinError(17,0.4041989);
   VbbHcc_HMass_stack_6->SetBinError(18,0.4722278);
   VbbHcc_HMass_stack_6->SetBinError(19,0.3898597);
   VbbHcc_HMass_stack_6->SetBinError(20,0.3860919);
   VbbHcc_HMass_stack_6->SetBinError(21,0.4709026);
   VbbHcc_HMass_stack_6->SetBinError(23,0.3246136);
   VbbHcc_HMass_stack_6->SetBinError(24,0.4439543);
   VbbHcc_HMass_stack_6->SetBinError(25,0.4781573);
   VbbHcc_HMass_stack_6->SetBinError(26,0.2502743);
   VbbHcc_HMass_stack_6->SetBinError(27,0.3877541);
   VbbHcc_HMass_stack_6->SetBinError(28,0.1513588);
   VbbHcc_HMass_stack_6->SetBinError(29,0.3310171);
   VbbHcc_HMass_stack_6->SetBinError(31,1.124835);
   VbbHcc_HMass_stack_6->SetEntries(145);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_HMass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_6->SetLineColor(ci);
   VbbHcc_HMass_stack_6->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_6,"");
   
   TH1D *VbbHcc_HMass_stack_7 = new TH1D("VbbHcc_HMass_stack_7","",30,0,300);
   VbbHcc_HMass_stack_7->SetBinContent(3,0.7471093);
   VbbHcc_HMass_stack_7->SetBinContent(4,1.080578);
   VbbHcc_HMass_stack_7->SetBinContent(5,2.027222);
   VbbHcc_HMass_stack_7->SetBinContent(6,2.79435);
   VbbHcc_HMass_stack_7->SetBinContent(7,4.280417);
   VbbHcc_HMass_stack_7->SetBinContent(8,6.908803);
   VbbHcc_HMass_stack_7->SetBinContent(9,9.377467);
   VbbHcc_HMass_stack_7->SetBinContent(10,7.0413);
   VbbHcc_HMass_stack_7->SetBinContent(11,5.209697);
   VbbHcc_HMass_stack_7->SetBinContent(12,2.190861);
   VbbHcc_HMass_stack_7->SetBinContent(13,3.288404);
   VbbHcc_HMass_stack_7->SetBinContent(14,3.179014);
   VbbHcc_HMass_stack_7->SetBinContent(15,1.607298);
   VbbHcc_HMass_stack_7->SetBinContent(16,2.085592);
   VbbHcc_HMass_stack_7->SetBinContent(17,1.890957);
   VbbHcc_HMass_stack_7->SetBinContent(18,1.975613);
   VbbHcc_HMass_stack_7->SetBinContent(19,1.518429);
   VbbHcc_HMass_stack_7->SetBinContent(20,1.366329);
   VbbHcc_HMass_stack_7->SetBinContent(21,1.114615);
   VbbHcc_HMass_stack_7->SetBinContent(22,1.726423);
   VbbHcc_HMass_stack_7->SetBinContent(23,1.548775);
   VbbHcc_HMass_stack_7->SetBinContent(24,0.9659652);
   VbbHcc_HMass_stack_7->SetBinContent(25,1.32104);
   VbbHcc_HMass_stack_7->SetBinContent(26,0.6857956);
   VbbHcc_HMass_stack_7->SetBinContent(27,0.7883033);
   VbbHcc_HMass_stack_7->SetBinContent(28,0.5356393);
   VbbHcc_HMass_stack_7->SetBinContent(29,1.134379);
   VbbHcc_HMass_stack_7->SetBinContent(30,0.944919);
   VbbHcc_HMass_stack_7->SetBinContent(31,9.100882);
   VbbHcc_HMass_stack_7->SetBinError(3,0.3736527);
   VbbHcc_HMass_stack_7->SetBinError(4,0.4177615);
   VbbHcc_HMass_stack_7->SetBinError(5,0.5908105);
   VbbHcc_HMass_stack_7->SetBinError(6,0.7034276);
   VbbHcc_HMass_stack_7->SetBinError(7,0.8551179);
   VbbHcc_HMass_stack_7->SetBinError(8,1.060951);
   VbbHcc_HMass_stack_7->SetBinError(9,1.264771);
   VbbHcc_HMass_stack_7->SetBinError(10,1.100204);
   VbbHcc_HMass_stack_7->SetBinError(11,0.9486846);
   VbbHcc_HMass_stack_7->SetBinError(12,0.5761751);
   VbbHcc_HMass_stack_7->SetBinError(13,0.7634347);
   VbbHcc_HMass_stack_7->SetBinError(14,0.7377689);
   VbbHcc_HMass_stack_7->SetBinError(15,0.5381912);
   VbbHcc_HMass_stack_7->SetBinError(16,0.5993019);
   VbbHcc_HMass_stack_7->SetBinError(17,0.5731233);
   VbbHcc_HMass_stack_7->SetBinError(18,0.5769966);
   VbbHcc_HMass_stack_7->SetBinError(19,0.492327);
   VbbHcc_HMass_stack_7->SetBinError(20,0.4870673);
   VbbHcc_HMass_stack_7->SetBinError(21,0.4164853);
   VbbHcc_HMass_stack_7->SetBinError(22,0.5521511);
   VbbHcc_HMass_stack_7->SetBinError(23,0.5182284);
   VbbHcc_HMass_stack_7->SetBinError(24,0.4051005);
   VbbHcc_HMass_stack_7->SetBinError(25,0.4803909);
   VbbHcc_HMass_stack_7->SetBinError(26,0.3083056);
   VbbHcc_HMass_stack_7->SetBinError(27,0.3557073);
   VbbHcc_HMass_stack_7->SetBinError(28,0.3098537);
   VbbHcc_HMass_stack_7->SetBinError(29,0.4300693);
   VbbHcc_HMass_stack_7->SetBinError(30,0.3932679);
   VbbHcc_HMass_stack_7->SetBinError(31,1.226149);
   VbbHcc_HMass_stack_7->SetEntries(480);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_HMass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_7->SetLineColor(ci);
   VbbHcc_HMass_stack_7->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_7,"");
   
   TH1D *VbbHcc_HMass_stack_8 = new TH1D("VbbHcc_HMass_stack_8","",30,0,300);
   VbbHcc_HMass_stack_8->SetBinContent(3,3.647305);
   VbbHcc_HMass_stack_8->SetBinContent(4,6.562987);
   VbbHcc_HMass_stack_8->SetBinContent(5,8.899526);
   VbbHcc_HMass_stack_8->SetBinContent(6,11.52046);
   VbbHcc_HMass_stack_8->SetBinContent(7,22.24912);
   VbbHcc_HMass_stack_8->SetBinContent(8,32.78379);
   VbbHcc_HMass_stack_8->SetBinContent(9,55.52902);
   VbbHcc_HMass_stack_8->SetBinContent(10,41.86857);
   VbbHcc_HMass_stack_8->SetBinContent(11,25.39812);
   VbbHcc_HMass_stack_8->SetBinContent(12,14.18222);
   VbbHcc_HMass_stack_8->SetBinContent(13,9.825915);
   VbbHcc_HMass_stack_8->SetBinContent(14,8.479393);
   VbbHcc_HMass_stack_8->SetBinContent(15,7.478778);
   VbbHcc_HMass_stack_8->SetBinContent(16,4.555583);
   VbbHcc_HMass_stack_8->SetBinContent(17,5.869031);
   VbbHcc_HMass_stack_8->SetBinContent(18,4.695409);
   VbbHcc_HMass_stack_8->SetBinContent(19,4.950732);
   VbbHcc_HMass_stack_8->SetBinContent(20,4.534699);
   VbbHcc_HMass_stack_8->SetBinContent(21,3.193733);
   VbbHcc_HMass_stack_8->SetBinContent(22,2.95602);
   VbbHcc_HMass_stack_8->SetBinContent(23,1.765514);
   VbbHcc_HMass_stack_8->SetBinContent(24,1.051879);
   VbbHcc_HMass_stack_8->SetBinContent(25,3.184702);
   VbbHcc_HMass_stack_8->SetBinContent(26,1.720389);
   VbbHcc_HMass_stack_8->SetBinContent(27,1.569836);
   VbbHcc_HMass_stack_8->SetBinContent(28,1.73533);
   VbbHcc_HMass_stack_8->SetBinContent(29,1.910789);
   VbbHcc_HMass_stack_8->SetBinContent(30,2.364683);
   VbbHcc_HMass_stack_8->SetBinContent(31,13.02822);
   VbbHcc_HMass_stack_8->SetBinError(3,0.8947567);
   VbbHcc_HMass_stack_8->SetBinError(4,1.200888);
   VbbHcc_HMass_stack_8->SetBinError(5,1.438165);
   VbbHcc_HMass_stack_8->SetBinError(6,1.60422);
   VbbHcc_HMass_stack_8->SetBinError(7,2.279323);
   VbbHcc_HMass_stack_8->SetBinError(8,2.68083);
   VbbHcc_HMass_stack_8->SetBinError(9,3.489895);
   VbbHcc_HMass_stack_8->SetBinError(10,2.991212);
   VbbHcc_HMass_stack_8->SetBinError(11,2.336466);
   VbbHcc_HMass_stack_8->SetBinError(12,1.76174);
   VbbHcc_HMass_stack_8->SetBinError(13,1.457668);
   VbbHcc_HMass_stack_8->SetBinError(14,1.359239);
   VbbHcc_HMass_stack_8->SetBinError(15,1.259715);
   VbbHcc_HMass_stack_8->SetBinError(16,0.9804655);
   VbbHcc_HMass_stack_8->SetBinError(17,1.145638);
   VbbHcc_HMass_stack_8->SetBinError(18,1.03554);
   VbbHcc_HMass_stack_8->SetBinError(19,1.047608);
   VbbHcc_HMass_stack_8->SetBinError(20,0.9567047);
   VbbHcc_HMass_stack_8->SetBinError(21,0.822144);
   VbbHcc_HMass_stack_8->SetBinError(22,0.8015832);
   VbbHcc_HMass_stack_8->SetBinError(23,0.6331081);
   VbbHcc_HMass_stack_8->SetBinError(24,0.463881);
   VbbHcc_HMass_stack_8->SetBinError(25,0.8427942);
   VbbHcc_HMass_stack_8->SetBinError(26,0.6107289);
   VbbHcc_HMass_stack_8->SetBinError(27,0.5949894);
   VbbHcc_HMass_stack_8->SetBinError(28,0.6219616);
   VbbHcc_HMass_stack_8->SetBinError(29,0.6499677);
   VbbHcc_HMass_stack_8->SetBinError(30,0.7330541);
   VbbHcc_HMass_stack_8->SetBinError(31,1.680626);
   VbbHcc_HMass_stack_8->SetEntries(1459);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_HMass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_8->SetLineColor(ci);
   VbbHcc_HMass_stack_8->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_8,"");
   
   TH1D *VbbHcc_HMass_stack_9 = new TH1D("VbbHcc_HMass_stack_9","",30,0,300);
   VbbHcc_HMass_stack_9->SetBinContent(2,0.01961519);
   VbbHcc_HMass_stack_9->SetBinContent(3,1.18091);
   VbbHcc_HMass_stack_9->SetBinContent(4,3.677897);
   VbbHcc_HMass_stack_9->SetBinContent(5,5.291046);
   VbbHcc_HMass_stack_9->SetBinContent(6,7.47522);
   VbbHcc_HMass_stack_9->SetBinContent(7,12.19599);
   VbbHcc_HMass_stack_9->SetBinContent(8,19.75653);
   VbbHcc_HMass_stack_9->SetBinContent(9,26.34451);
   VbbHcc_HMass_stack_9->SetBinContent(10,26.53407);
   VbbHcc_HMass_stack_9->SetBinContent(11,18.70455);
   VbbHcc_HMass_stack_9->SetBinContent(12,14.06787);
   VbbHcc_HMass_stack_9->SetBinContent(13,10.72777);
   VbbHcc_HMass_stack_9->SetBinContent(14,7.335726);
   VbbHcc_HMass_stack_9->SetBinContent(15,5.344545);
   VbbHcc_HMass_stack_9->SetBinContent(16,4.647222);
   VbbHcc_HMass_stack_9->SetBinContent(17,4.063753);
   VbbHcc_HMass_stack_9->SetBinContent(18,3.433513);
   VbbHcc_HMass_stack_9->SetBinContent(19,3.234172);
   VbbHcc_HMass_stack_9->SetBinContent(20,2.73855);
   VbbHcc_HMass_stack_9->SetBinContent(21,2.449825);
   VbbHcc_HMass_stack_9->SetBinContent(22,2.350582);
   VbbHcc_HMass_stack_9->SetBinContent(23,1.946079);
   VbbHcc_HMass_stack_9->SetBinContent(24,1.893759);
   VbbHcc_HMass_stack_9->SetBinContent(25,1.599423);
   VbbHcc_HMass_stack_9->SetBinContent(26,1.332228);
   VbbHcc_HMass_stack_9->SetBinContent(27,1.262152);
   VbbHcc_HMass_stack_9->SetBinContent(28,1.04764);
   VbbHcc_HMass_stack_9->SetBinContent(29,1.031497);
   VbbHcc_HMass_stack_9->SetBinContent(30,0.9754213);
   VbbHcc_HMass_stack_9->SetBinContent(31,9.170262);
   VbbHcc_HMass_stack_9->SetBinError(2,0.006853922);
   VbbHcc_HMass_stack_9->SetBinError(3,0.04865042);
   VbbHcc_HMass_stack_9->SetBinError(4,0.08554158);
   VbbHcc_HMass_stack_9->SetBinError(5,0.1022842);
   VbbHcc_HMass_stack_9->SetBinError(6,0.1212459);
   VbbHcc_HMass_stack_9->SetBinError(7,0.155764);
   VbbHcc_HMass_stack_9->SetBinError(8,0.1976365);
   VbbHcc_HMass_stack_9->SetBinError(9,0.2283816);
   VbbHcc_HMass_stack_9->SetBinError(10,0.2289592);
   VbbHcc_HMass_stack_9->SetBinError(11,0.1917644);
   VbbHcc_HMass_stack_9->SetBinError(12,0.16657);
   VbbHcc_HMass_stack_9->SetBinError(13,0.144787);
   VbbHcc_HMass_stack_9->SetBinError(14,0.1198386);
   VbbHcc_HMass_stack_9->SetBinError(15,0.1023199);
   VbbHcc_HMass_stack_9->SetBinError(16,0.09511712);
   VbbHcc_HMass_stack_9->SetBinError(17,0.08928462);
   VbbHcc_HMass_stack_9->SetBinError(18,0.0816081);
   VbbHcc_HMass_stack_9->SetBinError(19,0.07947817);
   VbbHcc_HMass_stack_9->SetBinError(20,0.07312647);
   VbbHcc_HMass_stack_9->SetBinError(21,0.06913574);
   VbbHcc_HMass_stack_9->SetBinError(22,0.06813024);
   VbbHcc_HMass_stack_9->SetBinError(23,0.06173135);
   VbbHcc_HMass_stack_9->SetBinError(24,0.06124132);
   VbbHcc_HMass_stack_9->SetBinError(25,0.05579175);
   VbbHcc_HMass_stack_9->SetBinError(26,0.05083251);
   VbbHcc_HMass_stack_9->SetBinError(27,0.04983045);
   VbbHcc_HMass_stack_9->SetBinError(28,0.04555015);
   VbbHcc_HMass_stack_9->SetBinError(29,0.04544686);
   VbbHcc_HMass_stack_9->SetBinError(30,0.04345131);
   VbbHcc_HMass_stack_9->SetBinError(31,0.1338619);
   VbbHcc_HMass_stack_9->SetEntries(115171);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_HMass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_9->SetLineColor(ci);
   VbbHcc_HMass_stack_9->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_9,"");
   
   TH1D *VbbHcc_HMass_stack_10 = new TH1D("VbbHcc_HMass_stack_10","",30,0,300);
   VbbHcc_HMass_stack_10->SetBinContent(2,0.001329464);
   VbbHcc_HMass_stack_10->SetBinContent(3,0.0505489);
   VbbHcc_HMass_stack_10->SetBinContent(4,0.1849405);
   VbbHcc_HMass_stack_10->SetBinContent(5,0.4275679);
   VbbHcc_HMass_stack_10->SetBinContent(6,0.7574674);
   VbbHcc_HMass_stack_10->SetBinContent(7,1.577644);
   VbbHcc_HMass_stack_10->SetBinContent(8,2.830729);
   VbbHcc_HMass_stack_10->SetBinContent(9,4.047854);
   VbbHcc_HMass_stack_10->SetBinContent(10,3.956991);
   VbbHcc_HMass_stack_10->SetBinContent(11,2.936332);
   VbbHcc_HMass_stack_10->SetBinContent(12,2.257741);
   VbbHcc_HMass_stack_10->SetBinContent(13,1.806919);
   VbbHcc_HMass_stack_10->SetBinContent(14,1.30705);
   VbbHcc_HMass_stack_10->SetBinContent(15,0.9751246);
   VbbHcc_HMass_stack_10->SetBinContent(16,0.8395988);
   VbbHcc_HMass_stack_10->SetBinContent(17,0.7585367);
   VbbHcc_HMass_stack_10->SetBinContent(18,0.6955768);
   VbbHcc_HMass_stack_10->SetBinContent(19,0.6552821);
   VbbHcc_HMass_stack_10->SetBinContent(20,0.59868);
   VbbHcc_HMass_stack_10->SetBinContent(21,0.5340526);
   VbbHcc_HMass_stack_10->SetBinContent(22,0.477744);
   VbbHcc_HMass_stack_10->SetBinContent(23,0.4247433);
   VbbHcc_HMass_stack_10->SetBinContent(24,0.4152368);
   VbbHcc_HMass_stack_10->SetBinContent(25,0.3352426);
   VbbHcc_HMass_stack_10->SetBinContent(26,0.3109267);
   VbbHcc_HMass_stack_10->SetBinContent(27,0.2704778);
   VbbHcc_HMass_stack_10->SetBinContent(28,0.2488759);
   VbbHcc_HMass_stack_10->SetBinContent(29,0.2205526);
   VbbHcc_HMass_stack_10->SetBinContent(30,0.19551);
   VbbHcc_HMass_stack_10->SetBinContent(31,2.242569);
   VbbHcc_HMass_stack_10->SetBinError(2,0.0007676814);
   VbbHcc_HMass_stack_10->SetBinError(3,0.004779488);
   VbbHcc_HMass_stack_10->SetBinError(4,0.009106382);
   VbbHcc_HMass_stack_10->SetBinError(5,0.01387767);
   VbbHcc_HMass_stack_10->SetBinError(6,0.01843233);
   VbbHcc_HMass_stack_10->SetBinError(7,0.02664646);
   VbbHcc_HMass_stack_10->SetBinError(8,0.03570514);
   VbbHcc_HMass_stack_10->SetBinError(9,0.04267583);
   VbbHcc_HMass_stack_10->SetBinError(10,0.04218479);
   VbbHcc_HMass_stack_10->SetBinError(11,0.03632628);
   VbbHcc_HMass_stack_10->SetBinError(12,0.03186133);
   VbbHcc_HMass_stack_10->SetBinError(13,0.02850523);
   VbbHcc_HMass_stack_10->SetBinError(14,0.0242311);
   VbbHcc_HMass_stack_10->SetBinError(15,0.02094728);
   VbbHcc_HMass_stack_10->SetBinError(16,0.01942008);
   VbbHcc_HMass_stack_10->SetBinError(17,0.01844392);
   VbbHcc_HMass_stack_10->SetBinError(18,0.01768657);
   VbbHcc_HMass_stack_10->SetBinError(19,0.01714172);
   VbbHcc_HMass_stack_10->SetBinError(20,0.01641685);
   VbbHcc_HMass_stack_10->SetBinError(21,0.01549595);
   VbbHcc_HMass_stack_10->SetBinError(22,0.0146627);
   VbbHcc_HMass_stack_10->SetBinError(23,0.01381529);
   VbbHcc_HMass_stack_10->SetBinError(24,0.01363416);
   VbbHcc_HMass_stack_10->SetBinError(25,0.01226692);
   VbbHcc_HMass_stack_10->SetBinError(26,0.01177607);
   VbbHcc_HMass_stack_10->SetBinError(27,0.01101309);
   VbbHcc_HMass_stack_10->SetBinError(28,0.01055674);
   VbbHcc_HMass_stack_10->SetBinError(29,0.009943082);
   VbbHcc_HMass_stack_10->SetBinError(30,0.009363339);
   VbbHcc_HMass_stack_10->SetBinError(31,0.03161676);
   VbbHcc_HMass_stack_10->SetEntries(72910);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_HMass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_10->SetLineColor(ci);
   VbbHcc_HMass_stack_10->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_10,"");
   
   TH1D *VbbHcc_HMass_stack_11 = new TH1D("VbbHcc_HMass_stack_11","",30,0,300);
   VbbHcc_HMass_stack_11->SetBinContent(3,0.032313);
   VbbHcc_HMass_stack_11->SetBinContent(4,0.1053338);
   VbbHcc_HMass_stack_11->SetBinContent(5,0.173777);
   VbbHcc_HMass_stack_11->SetBinContent(6,0.1648581);
   VbbHcc_HMass_stack_11->SetBinContent(7,0.3091475);
   VbbHcc_HMass_stack_11->SetBinContent(8,0.2576888);
   VbbHcc_HMass_stack_11->SetBinContent(9,0.4556295);
   VbbHcc_HMass_stack_11->SetBinContent(10,0.4822505);
   VbbHcc_HMass_stack_11->SetBinContent(11,0.5600507);
   VbbHcc_HMass_stack_11->SetBinContent(12,0.5954612);
   VbbHcc_HMass_stack_11->SetBinContent(13,0.6082575);
   VbbHcc_HMass_stack_11->SetBinContent(14,0.513116);
   VbbHcc_HMass_stack_11->SetBinContent(15,0.2249536);
   VbbHcc_HMass_stack_11->SetBinContent(16,0.2203925);
   VbbHcc_HMass_stack_11->SetBinContent(17,0.1207884);
   VbbHcc_HMass_stack_11->SetBinContent(18,0.1416429);
   VbbHcc_HMass_stack_11->SetBinContent(19,0.1409219);
   VbbHcc_HMass_stack_11->SetBinContent(20,0.1060388);
   VbbHcc_HMass_stack_11->SetBinContent(21,0.08793938);
   VbbHcc_HMass_stack_11->SetBinContent(22,0.1012225);
   VbbHcc_HMass_stack_11->SetBinContent(23,0.1110134);
   VbbHcc_HMass_stack_11->SetBinContent(24,0.0741183);
   VbbHcc_HMass_stack_11->SetBinContent(25,0.09571599);
   VbbHcc_HMass_stack_11->SetBinContent(26,0.07001974);
   VbbHcc_HMass_stack_11->SetBinContent(27,0.04935979);
   VbbHcc_HMass_stack_11->SetBinContent(28,0.07430552);
   VbbHcc_HMass_stack_11->SetBinContent(29,0.07359175);
   VbbHcc_HMass_stack_11->SetBinContent(30,0.05102301);
   VbbHcc_HMass_stack_11->SetBinContent(31,0.4467127);
   VbbHcc_HMass_stack_11->SetBinError(3,0.008860463);
   VbbHcc_HMass_stack_11->SetBinError(4,0.01665638);
   VbbHcc_HMass_stack_11->SetBinError(5,0.02102544);
   VbbHcc_HMass_stack_11->SetBinError(6,0.02092723);
   VbbHcc_HMass_stack_11->SetBinError(7,0.02825207);
   VbbHcc_HMass_stack_11->SetBinError(8,0.02656347);
   VbbHcc_HMass_stack_11->SetBinError(9,0.03482139);
   VbbHcc_HMass_stack_11->SetBinError(10,0.03577398);
   VbbHcc_HMass_stack_11->SetBinError(11,0.03784834);
   VbbHcc_HMass_stack_11->SetBinError(12,0.03954893);
   VbbHcc_HMass_stack_11->SetBinError(13,0.04087417);
   VbbHcc_HMass_stack_11->SetBinError(14,0.03764023);
   VbbHcc_HMass_stack_11->SetBinError(15,0.0234781);
   VbbHcc_HMass_stack_11->SetBinError(16,0.02377342);
   VbbHcc_HMass_stack_11->SetBinError(17,0.01771752);
   VbbHcc_HMass_stack_11->SetBinError(18,0.01911025);
   VbbHcc_HMass_stack_11->SetBinError(19,0.01911408);
   VbbHcc_HMass_stack_11->SetBinError(20,0.01624354);
   VbbHcc_HMass_stack_11->SetBinError(21,0.01536121);
   VbbHcc_HMass_stack_11->SetBinError(22,0.01597234);
   VbbHcc_HMass_stack_11->SetBinError(23,0.01724633);
   VbbHcc_HMass_stack_11->SetBinError(24,0.01337728);
   VbbHcc_HMass_stack_11->SetBinError(25,0.01567645);
   VbbHcc_HMass_stack_11->SetBinError(26,0.01339738);
   VbbHcc_HMass_stack_11->SetBinError(27,0.01121077);
   VbbHcc_HMass_stack_11->SetBinError(28,0.01441209);
   VbbHcc_HMass_stack_11->SetBinError(29,0.01404484);
   VbbHcc_HMass_stack_11->SetBinError(30,0.01152743);
   VbbHcc_HMass_stack_11->SetBinError(31,0.03349484);
   VbbHcc_HMass_stack_11->SetEntries(2979);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_HMass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_11->SetLineColor(ci);
   VbbHcc_HMass_stack_11->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_11,"");
   
   TH1D *VbbHcc_HMass_stack_12 = new TH1D("VbbHcc_HMass_stack_12","",30,0,300);
   VbbHcc_HMass_stack_12->SetBinContent(3,0.002177178);
   VbbHcc_HMass_stack_12->SetBinContent(4,0.02081197);
   VbbHcc_HMass_stack_12->SetBinContent(5,0.03894162);
   VbbHcc_HMass_stack_12->SetBinContent(6,0.04507708);
   VbbHcc_HMass_stack_12->SetBinContent(7,0.06283355);
   VbbHcc_HMass_stack_12->SetBinContent(8,0.07673303);
   VbbHcc_HMass_stack_12->SetBinContent(9,0.1010704);
   VbbHcc_HMass_stack_12->SetBinContent(10,0.1172029);
   VbbHcc_HMass_stack_12->SetBinContent(11,0.143509);
   VbbHcc_HMass_stack_12->SetBinContent(12,0.1623597);
   VbbHcc_HMass_stack_12->SetBinContent(13,0.1760101);
   VbbHcc_HMass_stack_12->SetBinContent(14,0.1283057);
   VbbHcc_HMass_stack_12->SetBinContent(15,0.07695113);
   VbbHcc_HMass_stack_12->SetBinContent(16,0.04823587);
   VbbHcc_HMass_stack_12->SetBinContent(17,0.05748743);
   VbbHcc_HMass_stack_12->SetBinContent(18,0.04277517);
   VbbHcc_HMass_stack_12->SetBinContent(19,0.04765605);
   VbbHcc_HMass_stack_12->SetBinContent(20,0.04564533);
   VbbHcc_HMass_stack_12->SetBinContent(21,0.04944952);
   VbbHcc_HMass_stack_12->SetBinContent(22,0.03583122);
   VbbHcc_HMass_stack_12->SetBinContent(23,0.03050606);
   VbbHcc_HMass_stack_12->SetBinContent(24,0.02942725);
   VbbHcc_HMass_stack_12->SetBinContent(25,0.0339422);
   VbbHcc_HMass_stack_12->SetBinContent(26,0.02759196);
   VbbHcc_HMass_stack_12->SetBinContent(27,0.02750684);
   VbbHcc_HMass_stack_12->SetBinContent(28,0.02162593);
   VbbHcc_HMass_stack_12->SetBinContent(29,0.02116085);
   VbbHcc_HMass_stack_12->SetBinContent(30,0.01740682);
   VbbHcc_HMass_stack_12->SetBinContent(31,0.2670849);
   VbbHcc_HMass_stack_12->SetBinError(3,0.0008441378);
   VbbHcc_HMass_stack_12->SetBinError(4,0.002599251);
   VbbHcc_HMass_stack_12->SetBinError(5,0.003623156);
   VbbHcc_HMass_stack_12->SetBinError(6,0.003913662);
   VbbHcc_HMass_stack_12->SetBinError(7,0.004619839);
   VbbHcc_HMass_stack_12->SetBinError(8,0.005062423);
   VbbHcc_HMass_stack_12->SetBinError(9,0.005885171);
   VbbHcc_HMass_stack_12->SetBinError(10,0.006328167);
   VbbHcc_HMass_stack_12->SetBinError(11,0.006967272);
   VbbHcc_HMass_stack_12->SetBinError(12,0.007364907);
   VbbHcc_HMass_stack_12->SetBinError(13,0.007686154);
   VbbHcc_HMass_stack_12->SetBinError(14,0.006565418);
   VbbHcc_HMass_stack_12->SetBinError(15,0.005078421);
   VbbHcc_HMass_stack_12->SetBinError(16,0.003969889);
   VbbHcc_HMass_stack_12->SetBinError(17,0.004415799);
   VbbHcc_HMass_stack_12->SetBinError(18,0.00376264);
   VbbHcc_HMass_stack_12->SetBinError(19,0.004036908);
   VbbHcc_HMass_stack_12->SetBinError(20,0.003949867);
   VbbHcc_HMass_stack_12->SetBinError(21,0.0041275);
   VbbHcc_HMass_stack_12->SetBinError(22,0.003465216);
   VbbHcc_HMass_stack_12->SetBinError(23,0.003121164);
   VbbHcc_HMass_stack_12->SetBinError(24,0.003122307);
   VbbHcc_HMass_stack_12->SetBinError(25,0.003366505);
   VbbHcc_HMass_stack_12->SetBinError(26,0.003063054);
   VbbHcc_HMass_stack_12->SetBinError(27,0.003043373);
   VbbHcc_HMass_stack_12->SetBinError(28,0.002691113);
   VbbHcc_HMass_stack_12->SetBinError(29,0.002672308);
   VbbHcc_HMass_stack_12->SetBinError(30,0.002422497);
   VbbHcc_HMass_stack_12->SetBinError(31,0.00939226);
   VbbHcc_HMass_stack_12->SetEntries(6613);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_HMass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_12->SetLineColor(ci);
   VbbHcc_HMass_stack_12->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_HMass__11 = new TH1D("VbbHcc_HMass__11","",30,0,300);
   VbbHcc_HMass__11->SetBinContent(2,22);
   VbbHcc_HMass__11->SetBinContent(3,838);
   VbbHcc_HMass__11->SetBinContent(4,2865);
   VbbHcc_HMass__11->SetBinContent(5,4884);
   VbbHcc_HMass__11->SetBinContent(6,5893);
   VbbHcc_HMass__11->SetBinContent(7,6566);
   VbbHcc_HMass__11->SetBinContent(8,7025);
   VbbHcc_HMass__11->SetBinContent(9,7414);
   VbbHcc_HMass__11->SetBinContent(10,7359);
   VbbHcc_HMass__11->SetBinContent(11,7293);
   VbbHcc_HMass__11->SetBinContent(12,6831);
   VbbHcc_HMass__11->SetBinContent(13,6625);
   VbbHcc_HMass__11->SetBinContent(14,6343);
   VbbHcc_HMass__11->SetBinContent(15,5909);
   VbbHcc_HMass__11->SetBinContent(16,5501);
   VbbHcc_HMass__11->SetBinContent(17,5248);
   VbbHcc_HMass__11->SetBinContent(18,5007);
   VbbHcc_HMass__11->SetBinContent(19,4605);
   VbbHcc_HMass__11->SetBinContent(20,4522);
   VbbHcc_HMass__11->SetBinContent(21,4175);
   VbbHcc_HMass__11->SetBinContent(22,3821);
   VbbHcc_HMass__11->SetBinContent(23,3595);
   VbbHcc_HMass__11->SetBinContent(24,3413);
   VbbHcc_HMass__11->SetBinContent(25,3263);
   VbbHcc_HMass__11->SetBinContent(26,3085);
   VbbHcc_HMass__11->SetBinContent(27,2927);
   VbbHcc_HMass__11->SetBinContent(28,2690);
   VbbHcc_HMass__11->SetBinContent(29,2484);
   VbbHcc_HMass__11->SetBinContent(30,2389);
   VbbHcc_HMass__11->SetBinContent(31,40785);
   VbbHcc_HMass__11->SetBinError(2,4.690416);
   VbbHcc_HMass__11->SetBinError(3,28.94823);
   VbbHcc_HMass__11->SetBinError(4,53.52569);
   VbbHcc_HMass__11->SetBinError(5,69.88562);
   VbbHcc_HMass__11->SetBinError(6,76.76588);
   VbbHcc_HMass__11->SetBinError(7,81.03086);
   VbbHcc_HMass__11->SetBinError(8,83.81527);
   VbbHcc_HMass__11->SetBinError(9,86.10459);
   VbbHcc_HMass__11->SetBinError(10,85.78461);
   VbbHcc_HMass__11->SetBinError(11,85.39906);
   VbbHcc_HMass__11->SetBinError(12,82.64986);
   VbbHcc_HMass__11->SetBinError(13,81.3941);
   VbbHcc_HMass__11->SetBinError(14,79.64295);
   VbbHcc_HMass__11->SetBinError(15,76.87002);
   VbbHcc_HMass__11->SetBinError(16,74.16873);
   VbbHcc_HMass__11->SetBinError(17,72.44308);
   VbbHcc_HMass__11->SetBinError(18,70.76016);
   VbbHcc_HMass__11->SetBinError(19,67.86015);
   VbbHcc_HMass__11->SetBinError(20,67.24582);
   VbbHcc_HMass__11->SetBinError(21,64.61424);
   VbbHcc_HMass__11->SetBinError(22,61.81424);
   VbbHcc_HMass__11->SetBinError(23,59.95832);
   VbbHcc_HMass__11->SetBinError(24,58.42089);
   VbbHcc_HMass__11->SetBinError(25,57.12268);
   VbbHcc_HMass__11->SetBinError(26,55.54278);
   VbbHcc_HMass__11->SetBinError(27,54.10176);
   VbbHcc_HMass__11->SetBinError(28,51.86521);
   VbbHcc_HMass__11->SetBinError(29,49.83974);
   VbbHcc_HMass__11->SetBinError(30,48.8774);
   VbbHcc_HMass__11->SetBinError(31,201.953);
   VbbHcc_HMass__11->SetEntries(173377);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass__11->SetLineColor(ci);
   VbbHcc_HMass__11->SetLineWidth(2);
   VbbHcc_HMass__11->SetMarkerStyle(20);
   VbbHcc_HMass__11->SetMarkerSize(1.2);
   VbbHcc_HMass__11->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass__11->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass__11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass__11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass__11->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass__11->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass__11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass__11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass__11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass__11->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass__11->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass__11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass__11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass__11->GetZaxis()->SetTitleFont(42);
   VbbHcc_HMass__11->Draw("same E");
   
   Double_t Graph_from_VbbHcc_HMass_fx1011[30] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295};
   Double_t Graph_from_VbbHcc_HMass_fy1011[30] = {
   0,
   671.2139,
   14379.11,
   51698.7,
   67711.12,
   60963.48,
   64097.46,
   65683.77,
   61211.61,
   54532.88,
   55310.89,
   53870.32,
   55065.8,
   52427.83,
   45905.2,
   45843,
   43112.83,
   46322.42,
   38064.14,
   36780.01,
   28923.17,
   27006.73,
   23981.02,
   22354.26,
   20363.97,
   19574.05,
   15371.6,
   14303.67,
   15871.89,
   13498.71};
   Double_t Graph_from_VbbHcc_HMass_fex1011[30] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_HMass_fey1011[30] = {
   0,
   433.5173,
   1851.07,
   3579.851,
   3993.356,
   3596.886,
   3592.932,
   3615.516,
   3323.52,
   3097.17,
   3261.683,
   3184.197,
   3279.157,
   3251.431,
   2943.34,
   3082.527,
   2932.31,
   3178.961,
   2801.775,
   2749.478,
   2360.83,
   2241.193,
   2095.597,
   2009.459,
   1926.82,
   1863.304,
   1612.77,
   1595.767,
   1708.896,
   1504.817};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_HMass_fx1011,Graph_from_VbbHcc_HMass_fy1011,Graph_from_VbbHcc_HMass_fex1011,Graph_from_VbbHcc_HMass_fey1011);
   gre->SetName("Graph_from_VbbHcc_HMass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_HMass1011 = new TH1F("Graph_Graph_from_VbbHcc_HMass1011","",100,0,330);
   Graph_Graph_from_VbbHcc_HMass1011->SetMinimum(0);
   Graph_Graph_from_VbbHcc_HMass1011->SetMaximum(78874.92);
   Graph_Graph_from_VbbHcc_HMass1011->SetDirectory(0);
   Graph_Graph_from_VbbHcc_HMass1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_HMass1011->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_HMass1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HMass1011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_HMass1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HMass1011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1011->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_HMass1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_HMass1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HMass1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_HMass1011);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_HMass","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HMass_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HMass_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HMass_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HMass_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HMass_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HMass_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HMass_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HMass_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HMass_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HMass_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HMass_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HMass_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_HMass","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   HMass_VbbHcc_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__12 = new TH1D("data_mc_ratio__12","",30,0,300);
   data_mc_ratio__12->SetBinContent(2,0.03277643);
   data_mc_ratio__12->SetBinContent(3,0.058279);
   data_mc_ratio__12->SetBinContent(4,0.05541725);
   data_mc_ratio__12->SetBinContent(5,0.07212996);
   data_mc_ratio__12->SetBinContent(6,0.09666442);
   data_mc_ratio__12->SetBinContent(7,0.1024378);
   data_mc_ratio__12->SetBinContent(8,0.1069518);
   data_mc_ratio__12->SetBinContent(9,0.1211208);
   data_mc_ratio__12->SetBinContent(10,0.1349461);
   data_mc_ratio__12->SetBinContent(11,0.1318547);
   data_mc_ratio__12->SetBinContent(12,0.1268045);
   data_mc_ratio__12->SetBinContent(13,0.1203106);
   data_mc_ratio__12->SetBinContent(14,0.1209854);
   data_mc_ratio__12->SetBinContent(15,0.1287218);
   data_mc_ratio__12->SetBinContent(16,0.1199965);
   data_mc_ratio__12->SetBinContent(17,0.1217271);
   data_mc_ratio__12->SetBinContent(18,0.1080902);
   data_mc_ratio__12->SetBinContent(19,0.12098);
   data_mc_ratio__12->SetBinContent(20,0.1229472);
   data_mc_ratio__12->SetBinContent(21,0.1443479);
   data_mc_ratio__12->SetBinContent(22,0.1414833);
   data_mc_ratio__12->SetBinContent(23,0.1499102);
   data_mc_ratio__12->SetBinContent(24,0.1526779);
   data_mc_ratio__12->SetBinContent(25,0.160234);
   data_mc_ratio__12->SetBinContent(26,0.1576066);
   data_mc_ratio__12->SetBinContent(27,0.1904161);
   data_mc_ratio__12->SetBinContent(28,0.1880636);
   data_mc_ratio__12->SetBinContent(29,0.1565031);
   data_mc_ratio__12->SetBinContent(30,0.1769799);
   data_mc_ratio__12->SetBinContent(31,0.2487539);
   data_mc_ratio__12->SetBinError(2,0.006987959);
   data_mc_ratio__12->SetBinError(3,0.002013215);
   data_mc_ratio__12->SetBinError(4,0.001035339);
   data_mc_ratio__12->SetBinError(5,0.001032114);
   data_mc_ratio__12->SetBinError(6,0.001259211);
   data_mc_ratio__12->SetBinError(7,0.001264182);
   data_mc_ratio__12->SetBinError(8,0.001276042);
   data_mc_ratio__12->SetBinError(9,0.001406671);
   data_mc_ratio__12->SetBinError(10,0.001573081);
   data_mc_ratio__12->SetBinError(11,0.001543983);
   data_mc_ratio__12->SetBinError(12,0.001534238);
   data_mc_ratio__12->SetBinError(13,0.001478124);
   data_mc_ratio__12->SetBinError(14,0.001519097);
   data_mc_ratio__12->SetBinError(15,0.001674538);
   data_mc_ratio__12->SetBinError(16,0.001617885);
   data_mc_ratio__12->SetBinError(17,0.001680314);
   data_mc_ratio__12->SetBinError(18,0.001527558);
   data_mc_ratio__12->SetBinError(19,0.001782784);
   data_mc_ratio__12->SetBinError(20,0.001828325);
   data_mc_ratio__12->SetBinError(21,0.002233995);
   data_mc_ratio__12->SetBinError(22,0.002288846);
   data_mc_ratio__12->SetBinError(23,0.00250024);
   data_mc_ratio__12->SetBinError(24,0.002613412);
   data_mc_ratio__12->SetBinError(25,0.002805085);
   data_mc_ratio__12->SetBinError(26,0.002837571);
   data_mc_ratio__12->SetBinError(27,0.003519593);
   data_mc_ratio__12->SetBinError(28,0.003626006);
   data_mc_ratio__12->SetBinError(29,0.003140127);
   data_mc_ratio__12->SetBinError(30,0.003620894);
   data_mc_ratio__12->SetBinError(31,0.00742016);
   data_mc_ratio__12->SetMinimum(0.4);
   data_mc_ratio__12->SetMaximum(1.6);
   data_mc_ratio__12->SetEntries(3147.406);
   data_mc_ratio__12->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__12->SetLineColor(ci);
   data_mc_ratio__12->SetLineWidth(2);
   data_mc_ratio__12->SetMarkerStyle(20);
   data_mc_ratio__12->SetMarkerSize(1.2);
   data_mc_ratio__12->GetXaxis()->SetTitle("M_{H}");
   data_mc_ratio__12->GetXaxis()->SetRange(1,30);
   data_mc_ratio__12->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__12->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__12->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__12->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__12->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__12->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__12->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__12->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__12->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__12->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__12->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__12->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__12->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__12->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__12->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__12->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__12->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1012[30] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295};
   Double_t Graph_from_mc_statistical_error_fy1012[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1012[30] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1012[30] = {
   0,
   0.6458706,
   0.1287333,
   0.06924451,
   0.05897637,
   0.05900066,
   0.0560542,
   0.05504428,
   0.05429559,
   0.05679455,
   0.05896999,
   0.05910856,
   0.0595498,
   0.06201727,
   0.06411779,
   0.06724094,
   0.06801479,
   0.06862684,
   0.07360667,
   0.0747547,
   0.08162416,
   0.08298645,
   0.08738562,
   0.08989155,
   0.09461907,
   0.09519254,
   0.1049188,
   0.1115634,
   0.1076681,
   0.1114786};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1012,Graph_from_mc_statistical_error_fy1012,Graph_from_mc_statistical_error_fex1012,Graph_from_mc_statistical_error_fey1012);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1012 = new TH1F("Graph_Graph_from_mc_statistical_error1012","",100,0,330);
   Graph_Graph_from_mc_statistical_error1012->SetMinimum(0.2249553);
   Graph_Graph_from_mc_statistical_error1012->SetMaximum(1.775045);
   Graph_Graph_from_mc_statistical_error1012->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1012->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1012);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   HMass_VbbHcc_17->cd();
   HMass_VbbHcc_17->Modified();
   HMass_VbbHcc_17->cd();
   HMass_VbbHcc_17->SetSelected(HMass_VbbHcc_17);
}
