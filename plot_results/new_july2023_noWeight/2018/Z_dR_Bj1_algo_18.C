void Z_dR_Bj1_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_18/Z_dR_Bj1_algo_18
//=========  (Thu Aug 10 12:28:41 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_algo_18 = new TCanvas("Z_dR_Bj1_algo_18", "Z_dR_Bj1_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_algo_18->SetHighLightColor(2);
   Z_dR_Bj1_algo_18->Range(0,0,1,1);
   Z_dR_Bj1_algo_18->SetFillColor(0);
   Z_dR_Bj1_algo_18->SetFillStyle(4000);
   Z_dR_Bj1_algo_18->SetBorderMode(0);
   Z_dR_Bj1_algo_18->SetBorderSize(2);
   Z_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-638.4253,6.314516,637796.9);
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
   st->SetMaximum(546622.2);
   
   TH1F *st_stack_151 = new TH1F("st_stack_151","",30,0,6);
   st_stack_151->SetMinimum(0.01);
   st_stack_151->SetMaximum(573953.3);
   st_stack_151->SetDirectory(0);
   st_stack_151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_151->SetLineColor(ci);
   st_stack_151->GetXaxis()->SetRange(1,30);
   st_stack_151->GetXaxis()->SetLabelFont(42);
   st_stack_151->GetXaxis()->SetLabelSize(0.035);
   st_stack_151->GetXaxis()->SetTitleSize(0.035);
   st_stack_151->GetXaxis()->SetTitleFont(42);
   st_stack_151->GetYaxis()->SetTitle("Events/0.2");
   st_stack_151->GetYaxis()->SetLabelFont(42);
   st_stack_151->GetYaxis()->SetLabelSize(0.05);
   st_stack_151->GetYaxis()->SetTitleSize(0.057);
   st_stack_151->GetYaxis()->SetTitleOffset(1.2);
   st_stack_151->GetYaxis()->SetTitleFont(42);
   st_stack_151->GetZaxis()->SetLabelFont(42);
   st_stack_151->GetZaxis()->SetLabelSize(0.035);
   st_stack_151->GetZaxis()->SetTitleSize(0.035);
   st_stack_151->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_151);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,376.2278);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,146106.1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,199632.9);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,181010.6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,180251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,162353);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,138428.5);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,103978.1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,98638.08);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,80019.1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,60598.51);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,56651.88);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,55804.09);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,44567.57);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,36615.97);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,37062.21);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,29170.56);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,29341.59);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,29018.89);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,24220.45);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,23579.66);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,20181.21);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,19760.24);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,32631.82);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(25,10717.92);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(26,10248.83);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(27,6079.106);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(28,4043.941);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(29,2173.317);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(30,946.9012);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(31,3314.469);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,95.57156);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,5069.292);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,5980.408);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,6282.497);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,6074.573);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,6161.508);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,5541.967);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,4671.714);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,4782.443);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,3868.767);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,3126.715);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,3151.791);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,3539.532);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,2714.941);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,2320.91);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,2918.651);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,2052.82);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,2661.395);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,2321.581);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,2026.186);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,2538.276);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,1908);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,2814.281);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,20113.01);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(25,1054.404);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(26,1220.822);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(27,866.348);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(28,676.1995);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(29,407.2195);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(30,125.1507);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(31,843.7377);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(114901);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,1.454527);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,865.5721);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,1710.611);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,1653.982);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,1469.949);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,1228.237);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,1000.168);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,777.5059);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,629.15);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,520.0134);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,423.8242);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,383.6312);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,315.0834);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,311.6284);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,271.6675);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,241.2403);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,222.5091);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,204.1765);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,197.7387);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,183.3435);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,155.8474);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(22,128.2377);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,117.6341);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,86.0912);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,66.92209);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(26,40.64398);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,31.2647);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(28,20.3128);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(29,14.69862);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(30,6.939282);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(31,11.97834);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.5174418);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,11.8238);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,16.44167);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,15.9435);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,15.35329);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,14.07808);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,12.84593);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,11.26103);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,9.984693);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,9.113894);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,8.08991);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,7.743596);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,6.896322);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,7.069652);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,6.616333);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,6.095581);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,6.010854);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,5.698871);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,5.68804);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,5.467718);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,4.90689);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(22,4.430155);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,4.384484);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,3.585918);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,3.078723);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(26,2.417304);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,2.141649);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(28,1.735659);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(29,1.484735);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(30,1.004923);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(31,1.292024);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(162879);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(1,41.22764);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(2,19099.03);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(3,40510.77);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(4,36271.85);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(5,26741);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(6,19277.31);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(7,14089.85);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(8,10593.86);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(9,8309.443);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(10,6829.082);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(11,5797.486);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(12,5103.745);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(13,4559.494);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(14,4137.997);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(15,3820.656);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(16,3494.437);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(17,3204.118);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(18,3016.705);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(19,2869.597);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(20,2731.567);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(21,2539.667);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(22,2228.966);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(23,1761.144);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(24,1326.07);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(25,905.1479);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(26,564.6388);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(27,324.3898);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(28,173.5671);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(29,96.41402);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(30,58.31895);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(31,93.48493);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(1,1.55412);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(2,34.62747);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(3,50.47648);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(4,47.52751);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(5,40.51709);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(6,34.21568);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(7,29.1395);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(8,25.21049);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(9,22.30559);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(10,20.21632);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(11,18.61741);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(12,17.47408);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(13,16.53475);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(14,15.74984);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(15,15.14568);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(16,14.49401);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(17,13.90241);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(18,13.51792);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(19,13.19624);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(20,12.90601);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(21,12.47037);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(22,11.70203);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(23,10.39018);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(24,9.013796);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(25,7.432959);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(26,5.854098);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(27,4.417475);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(28,3.202337);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(29,2.369265);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(30,1.834509);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(31,2.324901);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetEntries(3891102);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(1,3.18162);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(2,1037.676);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(3,1692.552);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(4,1354.395);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(5,1118.789);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(6,925.5954);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(7,751.4627);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(8,607.2375);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(9,480.2022);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(10,429.0625);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(11,341.0863);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(12,321.863);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(13,254.3017);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(14,248.556);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(15,226.4113);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(16,203.5764);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(17,193.1171);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(18,175.0445);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(19,138.4443);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(20,161.7514);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(21,120.1329);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(22,123.7096);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(23,98.68128);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(24,83.12148);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(25,61.93661);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(26,41.77091);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(27,33.98394);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(28,15.17423);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(29,9.777297);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(30,7.521264);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(31,9.12271);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(1,0.8390443);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(2,21.09994);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(3,32.10639);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(4,30.31575);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(5,27.104);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(6,21.81644);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(7,21.44006);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(8,17.59495);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(9,15.27673);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(10,14.39736);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(11,12.82823);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(12,16.11986);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(13,11.58749);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(14,11.58943);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(15,12.51523);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(16,11.54468);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(17,11.5044);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(18,10.64226);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(19,7.570299);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(20,10.53622);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(21,7.27414);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(22,10.55543);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(23,7.619905);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(24,8.34426);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(25,5.621602);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(26,3.213132);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(27,4.920988);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(28,1.584243);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(29,1.470625);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(30,1.515431);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(31,1.51402);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetEntries(56536);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(1,0.615858);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(2,300.5386);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(3,392.5096);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(4,395.9639);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(5,397.566);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(6,267.5141);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(7,294.2641);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(8,188.8067);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(9,148.8175);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(10,127.0044);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(11,123.7415);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(12,85.82663);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(13,100.001);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(14,83.3809);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(15,88.91953);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(16,71.01328);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(17,47.23552);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(18,71.98804);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(19,52.82796);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(20,65.75422);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(21,36.07351);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(22,46.05838);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(23,48.30687);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(24,24.38792);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(25,23.4191);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(26,12.37353);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(27,9.815751);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(28,4.975424);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(29,3.123919);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(30,1.526386);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(31,3.678945);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(1,0.3314308);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(2,17.07865);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(3,23.62559);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(4,34.50786);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(5,33.44025);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(6,19.22688);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(7,28.169);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(8,19.20564);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(9,15.00426);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(10,14.16462);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(11,14.44204);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(12,8.528272);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(13,10.32654);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(14,13.3991);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(15,13.7395);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(16,8.564775);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(17,5.764432);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(18,16.32278);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(19,11.93305);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(20,13.14166);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(21,5.868638);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(22,12.02045);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(23,15.66141);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(24,4.063864);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(25,5.29016);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(26,2.514712);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(27,2.406675);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(28,0.9547414);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(29,0.7819929);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(30,0.4590777);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(31,0.894507);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetEntries(15329);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(2,4.068384);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(3,4.972469);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(4,4.972469);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(5,3.164299);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(6,1.808171);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(7,1.808171);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(8,2.712256);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(9,1.356128);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(11,1.356128);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(13,1.356128);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(14,1.356128);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(16,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(17,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(19,0.9040853);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(21,0.9040853);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(22,1.356128);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(23,0.9040853);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(24,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(31,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(2,1.356128);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(3,1.499256);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(4,1.499256);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(5,1.195992);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(6,0.9040853);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(7,0.9040853);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(8,1.107274);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(9,0.7829609);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(11,0.7829609);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(13,0.7829609);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(14,0.7829609);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(16,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(17,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(19,0.6392849);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(21,0.6392849);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(22,0.7829609);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(23,0.6392849);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(24,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(31,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetEntries(77);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(2,15.93896);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(3,16.29316);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(4,6.729783);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(5,5.667186);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(6,6.375584);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(7,3.187792);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(8,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(9,2.833593);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(10,4.250389);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(11,2.833593);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(12,2.479394);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(13,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(14,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(15,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(16,1.416796);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(17,1.062597);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(18,0.7083982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(19,0.7083982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(20,0.7083982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(21,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(22,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(23,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(24,1.416796);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(25,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(26,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(27,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(28,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(29,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(2,2.37604);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(3,2.402295);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(4,1.543918);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(5,1.416796);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(6,1.50274);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(7,1.062597);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(8,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(9,1.001826);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(10,1.226982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(11,1.001826);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(12,0.9371228);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(13,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(14,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(15,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(16,0.7083982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(17,0.6134909);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(18,0.5009132);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(19,0.5009132);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(20,0.5009132);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(21,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(22,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(23,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(24,0.7083982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(25,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(26,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(27,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(28,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(29,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(2,24.58846);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(3,33.25031);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(4,21.23549);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(5,9.220674);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(6,8.661845);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(7,7.544187);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(8,6.42653);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(9,6.705944);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(10,5.029458);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(11,5.867701);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(12,2.514729);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(13,1.397072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(14,2.794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(15,2.235315);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(16,1.676486);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(17,2.235315);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(18,1.117657);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(20,1.397072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(21,1.676486);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(22,1.397072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(23,1.676486);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(24,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(25,0.8382431);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(26,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(27,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(28,0.5588287);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(2,2.621139);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(3,3.048051);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(4,2.435878);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(5,1.605113);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(6,1.555713);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(7,1.45188);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(8,1.340024);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(9,1.368845);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(10,1.185455);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(11,1.280437);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(12,0.8382431);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(13,0.6247895);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(14,0.8835858);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(15,0.7903031);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(16,0.6844226);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(17,0.7903031);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(18,0.5588287);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(19,0.4839599);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(20,0.6247895);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(21,0.6844226);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(22,0.6247895);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(23,0.6844226);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(24,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(25,0.4839599);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(26,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(27,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(28,0.3951516);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(1,0.04571557);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(2,18.40509);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(3,27.68992);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(4,15.077);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(5,8.368236);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(6,5.673303);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(7,4.25612);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(8,3.5681);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(9,3.0538);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(10,2.694933);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(11,2.322351);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(12,2.118917);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(13,1.98177);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(14,1.762335);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(15,1.545186);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(16,1.437755);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(17,1.211463);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(18,1.083459);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(19,1.003457);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(20,0.9440266);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(21,0.8914537);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(22,0.8937395);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(23,0.8251661);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(24,0.6834478);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(25,0.5508727);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(26,0.3451526);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(27,0.1828623);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(28,0.08914537);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(29,0.05028713);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(30,0.01600045);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(31,0.04114402);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(1,0.01022231);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(2,0.2051096);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(3,0.2515811);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(4,0.1856413);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(5,0.1383038);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(6,0.1138767);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(7,0.0986334);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(8,0.09030995);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(9,0.08354826);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(10,0.0784858);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(11,0.07285863);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(12,0.06959436);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(13,0.06730444);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(14,0.06346896);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(15,0.05943024);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(16,0.05732704);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(17,0.05262258);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(18,0.04976492);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(19,0.04789238);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(20,0.04645251);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(21,0.04514051);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(22,0.04519835);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(23,0.04342979);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(24,0.03952481);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(25,0.03548483);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(26,0.02808812);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(27,0.02044463);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(28,0.01427468);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(29,0.01072125);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(30,0.006047602);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(31,0.009697737);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetEntries(47604);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(1,0.01192289);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(2,5.608529);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(3,13.00072);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(4,10.89454);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(5,7.49473);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(6,5.048153);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(7,3.636482);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(8,2.86984);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(9,2.379213);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(10,1.98695);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(11,1.717493);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(12,1.482016);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(13,1.338941);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(14,1.207789);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(15,1.16129);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(16,1.044445);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(17,0.9299856);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(18,0.8381794);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(19,0.7922762);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(20,0.7147774);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(21,0.6575475);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(22,0.6253557);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(23,0.5120882);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(24,0.370802);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(25,0.2479962);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(26,0.1824203);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(27,0.1079022);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(28,0.04769157);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(29,0.0280188);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(30,0.01669205);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(31,0.02324964);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(1,0.00266604);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(2,0.05782296);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(3,0.08803585);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(4,0.08058985);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(5,0.06684268);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(6,0.05485827);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(7,0.04656038);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(8,0.0413623);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(9,0.03766106);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(10,0.03441671);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(11,0.03199803);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(12,0.02972365);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(13,0.02825248);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(14,0.02683313);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(15,0.02631153);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(16,0.02495277);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(17,0.02354583);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(18,0.02235344);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(19,0.02173272);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(20,0.02064245);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(21,0.01979882);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(22,0.01930809);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(23,0.01747223);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(24,0.0148678);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(25,0.01215901);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(26,0.01042827);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(27,0.008020306);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(28,0.00533208);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(29,0.004086962);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(30,0.003154501);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(31,0.003722922);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(2,0.1456488);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(3,0.1934398);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(4,0.09103048);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(5,0.05916981);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(6,0.03868795);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(7,0.05461829);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(8,0.02730914);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(9,0.01365457);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(10,0.01593033);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(11,0.02503338);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(12,0.0182061);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(13,0.01593033);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(14,0.01593033);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(15,0.01137881);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(16,0.006827286);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(17,0.01137881);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(18,0.009103048);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(19,0.01137881);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(20,0.01137881);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(21,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(22,0.009103048);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(23,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(25,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(30,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(2,0.0182061);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(3,0.02098149);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(4,0.01439318);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(5,0.01160415);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(6,0.009383207);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(7,0.01114891);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(8,0.00788347);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(9,0.005574455);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(10,0.0060211);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(11,0.007547848);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(12,0.006436827);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(13,0.0060211);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(14,0.0060211);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(15,0.005088758);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(16,0.003941735);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(17,0.005088758);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(18,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(19,0.005088758);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(20,0.005088758);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(21,0.003218413);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(22,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(23,0.003218413);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(25,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(27,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(30,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetEntries(352);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(2,0.04165229);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(3,0.07431489);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(4,0.05423788);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(5,0.03655813);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(6,0.02936637);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(7,0.02127563);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(8,0.01857872);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(9,0.01648112);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(10,0.01378421);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(11,0.009589018);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(12,0.005693479);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(13,0.009289361);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(14,0.003296225);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(15,0.005393822);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(16,0.006292793);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(17,0.005094166);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(18,0.005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(19,0.003595882);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(20,0.005393822);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(21,0.002097598);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(22,0.002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(23,0.002696911);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(24,0.002696911);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(25,0.001797941);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(27,0.0008989704);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(28,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(29,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(2,0.003532902);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(3,0.004719);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(4,0.00403147);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(5,0.003309818);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(6,0.002966451);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(7,0.002524953);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(8,0.0023595);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(9,0.002222314);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(10,0.002032371);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(11,0.001695115);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(12,0.001306174);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(13,0.001668418);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(14,0.0009938492);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(15,0.001271336);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(16,0.0013732);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(17,0.001235517);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(18,0.001340106);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(19,0.001038042);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(20,0.001271336);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(21,0.0007928174);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(22,0.000947598);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(23,0.0008989704);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(24,0.0008989704);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(25,0.0007340063);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(27,0.0005190208);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(28,0.0004237787);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(29,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1__414 = new TH1D("VbbHcc_algo_Z_dR_Bj1__414","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(1,459);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(2,163701);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(3,245980);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(4,229637);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(5,217442);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(6,189962);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(7,159157);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(8,130470);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(9,108087);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(10,89994);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(11,76568);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(12,67383);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(13,59546);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(14,53689);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(15,48967);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(16,45067);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(17,38937);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(18,34696);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(19,31848);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(20,28756);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(21,26446);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(22,23013);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(23,19390);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(24,15857);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(25,12153);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(26,8915);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(27,6215);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(28,4053);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(29,2725);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(30,1821);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(31,2966);
   VbbHcc_algo_Z_dR_Bj1__414->SetEntries(2143929);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1__414->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1__414->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj1__414->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj1__414->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj1__414->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1__414->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1__414->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1301[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1301[30] = {
   422.7651,
   167477.7,
   244034.8,
   220745.8,
   210012.4,
   184079.3,
   154584.7,
   116163.3,
   108222,
   87938.25,
   67298.78,
   62555.57,
   61041.19,
   49358.4,
   41030.7,
   41078.52,
   32843.45,
   32813.27,
   32281.76,
   27366.65,
   26435.87,
   22714.6,
   21792.06,
   34154.7,
   11777.34,
   10909.42,
   6479.488,
   4259.021,
   2297.764,
   1021.242};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1301[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1301[30] = {
   95.58985,
   5069.498,
   5980.778,
   6282.866,
   6074.881,
   6161.688,
   5542.172,
   4671.868,
   4782.553,
   3868.884,
   3126.841,
   3151.901,
   3539.612,
   2715.054,
   2321.044,
   2918.729,
   2052.917,
   2661.506,
   2321.668,
   2026.304,
   2538.329,
   1908.109,
   2814.358,
   20113.02,
   1054.463,
   1220.846,
   866.3794,
   676.212,
   407.2326,
   125.1782};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1301,Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1301,Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1301,Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1301);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetMinimum(294.4577);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetMaximum(274984.4);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_algo_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__415 = new TH1D("data_mc_ratio__415","",30,0,6);
   data_mc_ratio__415->SetBinContent(1,1.085709);
   data_mc_ratio__415->SetBinContent(2,0.9774496);
   data_mc_ratio__415->SetBinContent(3,1.007971);
   data_mc_ratio__415->SetBinContent(4,1.040278);
   data_mc_ratio__415->SetBinContent(5,1.035377);
   data_mc_ratio__415->SetBinContent(6,1.031958);
   data_mc_ratio__415->SetBinContent(7,1.029578);
   data_mc_ratio__415->SetBinContent(8,1.12316);
   data_mc_ratio__415->SetBinContent(9,0.9987521);
   data_mc_ratio__415->SetBinContent(10,1.023377);
   data_mc_ratio__415->SetBinContent(11,1.137732);
   data_mc_ratio__415->SetBinContent(12,1.07717);
   data_mc_ratio__415->SetBinContent(13,0.9755052);
   data_mc_ratio__415->SetBinContent(14,1.087738);
   data_mc_ratio__415->SetBinContent(15,1.193423);
   data_mc_ratio__415->SetBinContent(16,1.097094);
   data_mc_ratio__415->SetBinContent(17,1.185533);
   data_mc_ratio__415->SetBinContent(18,1.057377);
   data_mc_ratio__415->SetBinContent(19,0.9865632);
   data_mc_ratio__415->SetBinContent(20,1.050768);
   data_mc_ratio__415->SetBinContent(21,1.000383);
   data_mc_ratio__415->SetBinContent(22,1.013137);
   data_mc_ratio__415->SetBinContent(23,0.8897738);
   data_mc_ratio__415->SetBinContent(24,0.46427);
   data_mc_ratio__415->SetBinContent(25,1.031897);
   data_mc_ratio__415->SetBinContent(26,0.8171836);
   data_mc_ratio__415->SetBinContent(27,0.9591807);
   data_mc_ratio__415->SetBinContent(28,0.9516272);
   data_mc_ratio__415->SetBinContent(29,1.185935);
   data_mc_ratio__415->SetBinContent(30,1.783122);
   data_mc_ratio__415->SetBinContent(31,0.8639045);
   data_mc_ratio__415->SetBinError(1,0.05067657);
   data_mc_ratio__415->SetBinError(2,0.002415843);
   data_mc_ratio__415->SetBinError(3,0.002032348);
   data_mc_ratio__415->SetBinError(4,0.002170843);
   data_mc_ratio__415->SetBinError(5,0.002220378);
   data_mc_ratio__415->SetBinError(6,0.00236771);
   data_mc_ratio__415->SetBinError(7,0.002580752);
   data_mc_ratio__415->SetBinError(8,0.003109471);
   data_mc_ratio__415->SetBinError(9,0.003037883);
   data_mc_ratio__415->SetBinError(10,0.003411371);
   data_mc_ratio__415->SetBinError(11,0.004111653);
   data_mc_ratio__415->SetBinError(12,0.004149628);
   data_mc_ratio__415->SetBinError(13,0.003997636);
   data_mc_ratio__415->SetBinError(14,0.004694416);
   data_mc_ratio__415->SetBinError(15,0.005393153);
   data_mc_ratio__415->SetBinError(16,0.005167906);
   data_mc_ratio__415->SetBinError(17,0.006008035);
   data_mc_ratio__415->SetBinError(18,0.005676624);
   data_mc_ratio__415->SetBinError(19,0.005528201);
   data_mc_ratio__415->SetBinError(20,0.006196446);
   data_mc_ratio__415->SetBinError(21,0.006151576);
   data_mc_ratio__415->SetBinError(22,0.006678541);
   data_mc_ratio__415->SetBinError(23,0.00638985);
   data_mc_ratio__415->SetBinError(24,0.003686889);
   data_mc_ratio__415->SetBinError(25,0.009360403);
   data_mc_ratio__415->SetBinError(26,0.008654838);
   data_mc_ratio__415->SetBinError(27,0.0121669);
   data_mc_ratio__415->SetBinError(28,0.01494784);
   data_mc_ratio__415->SetBinError(29,0.0227184);
   data_mc_ratio__415->SetBinError(30,0.04178556);
   data_mc_ratio__415->SetBinError(31,0.212902);
   data_mc_ratio__415->SetMinimum(0.4);
   data_mc_ratio__415->SetMaximum(1.6);
   data_mc_ratio__415->SetEntries(2594.658);
   data_mc_ratio__415->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__415->SetLineColor(ci);
   data_mc_ratio__415->SetLineWidth(2);
   data_mc_ratio__415->SetMarkerStyle(20);
   data_mc_ratio__415->SetMarkerSize(1.2);
   data_mc_ratio__415->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__415->GetXaxis()->SetRange(1,30);
   data_mc_ratio__415->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__415->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__415->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__415->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__415->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__415->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__415->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__415->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__415->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__415->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__415->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__415->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__415->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__415->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__415->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__415->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__415->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1302[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1302[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1302[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1302[30] = {
   0.2261063,
   0.03026969,
   0.02450789,
   0.02846199,
   0.0289263,
   0.03347301,
   0.035852,
   0.04021811,
   0.04419204,
   0.04399546,
   0.04646208,
   0.05038563,
   0.05798726,
   0.05500692,
   0.05656846,
   0.07105244,
   0.06250612,
   0.08111067,
   0.07191889,
   0.07404284,
   0.09601836,
   0.08400365,
   0.1291461,
   0.58888,
   0.08953322,
   0.1119075,
   0.1337111,
   0.1587717,
   0.17723,
   0.1225744};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1302,Graph_from_mc_statistical_error_fy1302,Graph_from_mc_statistical_error_fex1302,Graph_from_mc_statistical_error_fey1302);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1302 = new TH1F("Graph_Graph_from_mc_statistical_error1302","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1302->SetMinimum(0.293344);
   Graph_Graph_from_mc_statistical_error1302->SetMaximum(1.706656);
   Graph_Graph_from_mc_statistical_error1302->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1302->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1302->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1302->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1302);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_algo_18->cd();
   Z_dR_Bj1_algo_18->Modified();
   Z_dR_Bj1_algo_18->cd();
   Z_dR_Bj1_algo_18->SetSelected(Z_dR_Bj1_algo_18);
}
