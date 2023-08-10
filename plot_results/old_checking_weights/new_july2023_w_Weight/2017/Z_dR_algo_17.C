void Z_dR_algo_17()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Thu Aug 10 10:41:56 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(0,0,1,1);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetFillStyle(4000);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.906058,6.314516,13.73662);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(3.191915e+11);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",30,0,6);
   st_stack_114->SetMinimum(0.001289985);
   st_stack_114->SetMaximum(1.181267e+12);
   st_stack_114->SetDirectory(0);
   st_stack_114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_114->SetLineColor(ci);
   st_stack_114->GetXaxis()->SetRange(1,30);
   st_stack_114->GetXaxis()->SetLabelFont(42);
   st_stack_114->GetXaxis()->SetLabelSize(0.035);
   st_stack_114->GetXaxis()->SetTitleSize(0.035);
   st_stack_114->GetXaxis()->SetTitleFont(42);
   st_stack_114->GetYaxis()->SetTitle("Events/0.2");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetLabelSize(0.05);
   st_stack_114->GetYaxis()->SetTitleSize(0.057);
   st_stack_114->GetYaxis()->SetTitleOffset(1.2);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetLabelSize(0.035);
   st_stack_114->GetZaxis()->SetTitleSize(0.035);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,31.66209);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,96313.63);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,131096.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,106004.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,88057.39);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,92454.63);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,86649.92);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,83518.79);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,84003.24);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,83681.71);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,73818.76);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,73558.18);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,73313.09);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,65070.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,98494.27);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,53715.99);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,65928.32);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,39454.52);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,34676.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,36618.57);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,32951.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,25065.09);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,24365.47);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,22004.11);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,34867.77);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,21356.64);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(28,17907.01);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(29,18708.21);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(30,10213.84);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(31,12192.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,12.798);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,3624.655);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,19170.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,4811.399);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,4081.728);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,4644.816);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,4070.063);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,3732.306);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,3844.349);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,4540.692);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,3615.405);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,3641.219);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,4250.368);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,3698.233);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,22148.98);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,3099.066);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,15709.59);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,2588.907);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,2385.96);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,2556.156);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,2395.025);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,2046.312);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,1998.39);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,2352.138);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,10967.52);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,1875.138);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(28,1924.117);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(29,2391.184);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(30,1200.823);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(31,1480.354);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(112106);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.5824419);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,426.8037);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,688.8823);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,765.3964);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,786.7716);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,756.989);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,750.2254);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,659.9812);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,626.9907);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,564.5576);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,511.7665);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,469.818);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,441.6633);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,391.4461);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,358.7261);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,310.0099);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,289.0311);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,248.4316);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,237.7419);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,224.9533);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,217.4803);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,218.7007);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,193.9413);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,176.7181);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,169.617);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,152.9874);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,139.243);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(29,104.8761);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(30,71.88936);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(31,60.34251);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.4580549);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,9.250661);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,11.57893);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,12.06421);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,12.30593);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,11.92644);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,12.11778);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,11.28957);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,11.1669);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,10.50602);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,9.952401);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,9.595542);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,9.071101);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,8.510939);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,8.113909);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,7.536687);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,7.319617);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,6.760799);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,6.745397);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,6.568155);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,6.566099);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,6.526371);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,6.206658);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,5.766407);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,5.702912);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,5.336967);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,5.177722);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(29,4.393937);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(30,3.682047);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(31,3.396408);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(138653);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_3 = new TH1D("VbbHcc_algo_Z_dR_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(2,4.718001);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(3,8969.121);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(4,17335.77);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(5,20117.14);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(6,20259.89);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(7,17964.58);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(8,14948.43);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(9,12211.66);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(10,10009.25);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(11,8507.196);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(12,7474.334);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(13,6754.322);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(14,6162.366);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(15,5711.091);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(16,5305.931);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(17,4777.004);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(18,4382.265);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(19,4020.438);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(20,3723.367);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(21,3527.556);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(22,3384.085);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(23,3304.251);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(24,3288.526);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(25,3328.605);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(26,3355.968);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(27,3187.075);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(28,2836.698);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(29,2185.885);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(30,1308.462);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(31,923.587);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(2,0.6027956);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(3,26.3989);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(4,36.51298);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(5,39.23228);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(6,39.22155);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(7,36.7954);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(8,33.36065);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(9,30.02367);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(10,27.0545);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(11,24.86908);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(12,23.23588);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(13,22.04886);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(14,21.06068);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(15,20.25904);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(16,19.50669);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(17,18.54716);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(18,17.79871);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(19,17.02918);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(20,16.42654);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(21,16.01185);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(22,15.70202);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(23,15.54609);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(24,15.55737);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(25,15.71638);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(26,15.82527);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(27,15.45915);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(28,14.59908);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(29,12.83726);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(30,9.934151);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(31,8.278185);
   VbbHcc_algo_Z_dR_stack_3->SetEntries(3113082);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_4 = new TH1D("VbbHcc_algo_Z_dR_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(2,0.2522114);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(3,578.6357);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(4,811.5161);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(5,812.3587);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(6,713.1256);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(7,614.7135);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(8,525.1622);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(9,526.0529);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(10,464.5843);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(11,444.7961);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(12,414.2831);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(13,388.3388);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(14,356.2774);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(15,324.6737);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(16,328.0541);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(17,259.1696);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(18,251.0458);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(19,236.2594);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(20,196.8188);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(21,172.5495);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(22,177.0654);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(23,172.1842);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(24,142.8249);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(25,127.2324);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(26,109.0117);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(27,125.8772);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(28,114.3124);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(29,93.18997);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(30,59.72586);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(31,46.17459);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(2,0.1465179);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(3,14.09104);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(4,18.6692);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(5,23.33147);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(6,25.03991);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(7,24.30197);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(8,19.58059);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(9,18.5883);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(10,17.69661);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(11,16.47012);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(12,16.007);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(13,17.27611);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(14,16.0752);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(15,13.63358);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(16,14.42685);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(17,11.35159);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(18,13.0452);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(19,13.15661);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(20,10.72185);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(21,8.783557);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(22,11.55524);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(23,11.9415);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(24,9.800596);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(25,9.170896);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(26,7.218116);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(27,8.534525);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(28,8.616632);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(29,6.795874);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(30,5.230698);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(31,3.508573);
   VbbHcc_algo_Z_dR_stack_4->SetEntries(54522);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_5 = new TH1D("VbbHcc_algo_Z_dR_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(2,0.1017105);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(3,227.5895);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(4,273.2789);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(5,206.1115);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(6,193.9473);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(7,153.3851);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(8,178.7497);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(9,172.307);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(10,165.706);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(11,150.8153);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(12,163.0992);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(13,131.6909);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(14,134.8978);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(15,104.5708);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(16,125.3077);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(17,89.85836);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(18,96.50976);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(19,84.8847);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(20,51.21891);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(21,66.72224);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(22,53.23177);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(23,71.89039);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(24,46.2506);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(25,47.35824);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(26,41.79273);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(27,45.34883);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(28,26.66671);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(29,38.71261);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(30,13.81793);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(31,24.38822);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(2,0.08975396);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(3,14.51885);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(4,20.79209);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(5,14.36236);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(6,17.93713);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(7,10.62985);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(8,18.60422);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(9,16.09512);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(10,16.86907);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(11,12.86597);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(12,21.24448);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(13,15.83734);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(14,14.87652);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(15,11.07927);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(16,14.17862);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(17,14.39269);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(18,15.79446);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(19,11.21749);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(20,5.811232);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(21,11.54795);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(22,5.793626);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(23,9.677846);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(24,5.331614);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(25,5.834513);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(26,5.535439);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(27,6.05015);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(28,4.188069);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(29,5.159852);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(30,2.037933);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(31,8.421621);
   VbbHcc_algo_Z_dR_stack_5->SetEntries(16864);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_6 = new TH1D("VbbHcc_algo_Z_dR_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,3.267274);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(4,2.670594);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,2.565948);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(6,1.911777);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(7,2.473412);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(8,1.657876);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(9,0.6393626);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(10,1.140776);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(11,0.9385159);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(12,0.9708915);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(13,1.369023);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(14,2.328857);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(15,1.269908);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(16,0.7560791);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(17,0.268632);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(18,1.487738);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(19,0.3271959);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,0.4006913);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(21,0.3792301);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(22,0.385383);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(23,0.4175465);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(25,0.3973656);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(29,0.3642091);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(30,0.3954369);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,1.056593);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(4,0.9571481);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,0.9176639);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(6,0.8561203);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(7,0.9491348);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(8,0.7486577);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(9,0.4567856);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(10,0.6591332);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(11,0.5524706);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(12,0.5648103);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(13,0.6920618);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(14,0.9569394);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(15,0.7354129);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(16,0.5355875);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(17,0.268632);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(18,0.7083115);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(19,0.3271959);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,0.4006913);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(21,0.3792301);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(22,0.385383);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(23,0.4175465);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(25,0.3973656);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(29,0.3642091);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(30,0.3954369);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_7 = new TH1D("VbbHcc_algo_Z_dR_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(3,6.582761);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(4,9.440479);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(5,10.22834);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(6,4.637146);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(7,3.562123);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(8,2.367685);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(9,2.141161);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(10,3.336802);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(11,2.88584);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(12,4.100287);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(13,2.121881);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(14,1.772123);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(15,2.903216);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(16,2.40582);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(17,1.598811);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(18,3.39246);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(19,1.839394);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(20,2.256522);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(21,1.706004);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(22,0.8094673);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(23,1.297239);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(24,0.4441357);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(25,1.03787);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(26,0.9826294);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(27,1.278175);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(28,1.673239);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(29,0.8735332);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(30,0.6150536);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(31,0.3068598);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(3,1.377836);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(4,1.640542);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(5,1.695832);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(6,1.12168);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(7,1.054898);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(8,0.804137);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(9,0.7940277);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(10,0.9789414);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(11,0.8735576);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(12,1.069638);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(13,0.7607464);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(14,0.7273034);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(15,0.9346742);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(16,0.8588595);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(17,0.6619615);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(18,0.9536179);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(19,0.7217575);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(20,0.7822838);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(21,0.7016361);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(22,0.4765977);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(23,0.5869253);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(24,0.3143587);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(25,0.5421141);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(26,0.5017099);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(27,0.5875024);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(28,0.687137);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(29,0.5054085);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(30,0.4349553);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(31,0.3068598);
   VbbHcc_algo_Z_dR_stack_7->SetEntries(290);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_8 = new TH1D("VbbHcc_algo_Z_dR_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(3,13.75641);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(4,16.06942);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(5,20.95471);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(6,7.839879);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(7,4.131389);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(8,5.46859);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(9,4.414875);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(10,3.398365);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(11,4.711098);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(12,3.587566);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(13,4.550509);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(14,3.600406);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(15,2.309101);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(16,2.498698);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(17,3.85255);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(18,3.345187);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(19,2.312232);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(20,3.98078);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(21,2.379896);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(22,1.920233);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(23,0.240723);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(24,1.810435);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(25,0.295262);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(26,0.7379375);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(27,0.8658606);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(28,1.149609);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(29,2.712286);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(30,1.469513);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(31,0.9032022);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(3,2.017705);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(4,2.158495);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(5,2.507206);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(6,1.533849);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(7,1.083088);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(8,1.297647);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(9,1.14877);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(10,0.9645592);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(11,1.217432);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(12,0.9964557);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(13,1.149965);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(14,1.012216);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(15,0.7947277);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(16,0.8409831);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(17,1.078569);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(18,1.016381);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(19,0.8373578);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(20,1.081021);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(21,0.808868);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(22,0.7415816);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(23,0.240723);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(24,0.6982916);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(25,0.295262);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(26,0.4343932);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(27,0.5002886);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(28,0.5838771);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(29,0.9160296);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(30,0.6612029);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(31,0.4922286);
   VbbHcc_algo_Z_dR_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_9 = new TH1D("VbbHcc_algo_Z_dR_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(2,0.008145897);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(3,7.962311);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(4,13.53036);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(5,12.49486);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(6,8.998491);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(7,5.450515);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(8,3.18798);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(9,2.59505);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(10,2.391075);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(11,2.409253);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(12,2.487508);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(13,2.460158);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(14,2.245625);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(15,2.223706);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(16,1.829098);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(17,1.791713);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(18,1.556307);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(19,1.563767);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(20,1.241276);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(21,1.243355);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(22,0.9999663);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(23,0.8827828);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(24,0.7335051);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(25,0.6877913);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(26,0.9900314);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(27,1.113556);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(28,1.311177);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(29,1.164838);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(30,0.7159071);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(31,0.4133254);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(2,0.004123235);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(3,0.1271835);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(4,0.1657871);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(5,0.1588276);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(6,0.1342054);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(7,0.1040563);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(8,0.07900361);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(9,0.07104672);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(10,0.0677328);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(11,0.06881317);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(12,0.07013326);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(13,0.0694714);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(14,0.06673329);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(15,0.06612069);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(16,0.0604144);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(17,0.05912709);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(18,0.05572869);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(19,0.05550656);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(20,0.0494815);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(21,0.04951291);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(22,0.04407078);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(23,0.04201029);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(24,0.03720448);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(25,0.0364784);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(26,0.04398307);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(27,0.04726797);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(28,0.05092601);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(29,0.04836248);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(30,0.03811864);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(31,0.02805389);
   VbbHcc_algo_Z_dR_stack_9->SetEntries(47732);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_10 = new TH1D("VbbHcc_algo_Z_dR_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(2,0.00137393);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(3,2.142179);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(4,4.766122);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(5,5.726896);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(6,5.336848);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(7,3.78161);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(8,2.660605);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(9,2.080075);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(10,1.864712);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(11,1.840113);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(12,1.790349);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(13,1.763187);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(14,1.5988);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(15,1.468919);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(16,1.332259);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(17,1.17278);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(18,1.082436);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(19,1.033636);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(20,0.957969);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(21,0.9009566);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(22,0.8000213);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(23,0.7100653);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(24,0.6367911);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(25,0.6465372);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(26,0.6806351);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(27,0.7529992);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(28,0.7352745);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(29,0.5509519);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(30,0.3494078);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(31,0.2213481);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(2,0.0007991665);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(3,0.03097794);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(4,0.04622466);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(5,0.05068592);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(6,0.04895859);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(7,0.04119356);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(8,0.03451615);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(9,0.03051625);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(10,0.02885865);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(11,0.02864549);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(12,0.02830401);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(13,0.02806917);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(14,0.02667282);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(15,0.02558305);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(16,0.02436455);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(17,0.02283484);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(18,0.02193607);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(19,0.02150453);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(20,0.02068172);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(21,0.02004778);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(22,0.01887741);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(23,0.01775502);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(24,0.01685449);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(25,0.01701823);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(26,0.0174784);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(27,0.01840112);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(28,0.01818398);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(29,0.01572401);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(30,0.01251259);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(31,0.009983926);
   VbbHcc_algo_Z_dR_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_11 = new TH1D("VbbHcc_algo_Z_dR_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(3,0.0717765);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(4,0.1017065);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(5,0.07994105);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(6,0.0797292);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(7,0.03876247);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(8,0.03148936);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(9,0.01647431);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(10,0.02336995);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(11,0.01763157);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(12,0.02804878);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(13,0.02394027);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(14,0.02686916);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(15,0.01477234);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(16,0.01186679);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(17,0.01410553);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(18,0.009994114);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(19,0.02072224);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(20,0.01155431);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(21,0.01202827);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(22,0.005712886);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(23,0.01096811);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(24,0.008003586);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(25,0.01093098);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(26,0.007956433);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(27,0.007775516);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(28,0.01057309);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(29,0.009274127);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(30,0.007347342);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(31,0.001370853);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(3,0.01166468);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(4,0.01401627);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(5,0.01201593);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(6,0.01217591);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(7,0.008291528);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(8,0.007715434);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(9,0.005923951);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(10,0.006595632);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(11,0.005941492);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(12,0.007285926);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(13,0.006585211);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(14,0.006986655);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(15,0.005039598);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(16,0.004298975);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(17,0.005349535);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(18,0.00403574);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(19,0.006309127);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(20,0.004595412);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(21,0.004591858);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(22,0.002981154);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(23,0.004496523);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(24,0.003602504);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(25,0.004207125);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(26,0.003986643);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(27,0.003908726);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(28,0.004370701);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(29,0.00417639);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(30,0.003762465);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(31,0.001370853);
   VbbHcc_algo_Z_dR_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_12 = new TH1D("VbbHcc_algo_Z_dR_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(3,0.01605773);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(4,0.03230673);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(5,0.04203931);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(6,0.03079652);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(7,0.02471111);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(8,0.01371086);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(9,0.01470098);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(10,0.0141787);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(11,0.01478754);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(12,0.01365118);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(13,0.0125222);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(14,0.01242816);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(15,0.01207343);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(16,0.01127862);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(17,0.005997333);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(18,0.009263371);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(19,0.006208205);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(20,0.007411441);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(21,0.005790416);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(22,0.004356478);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(23,0.00342331);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(24,0.004352154);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(25,0.003567851);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(26,0.003423155);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(27,0.005276498);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(28,0.006076984);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(29,0.002807878);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(30,0.0017673);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(31,0.001252831);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(3,0.001950905);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(4,0.002756637);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(5,0.003207802);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(6,0.002697483);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(7,0.002465363);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(8,0.001808817);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(9,0.001912058);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(10,0.001835153);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(11,0.001886822);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(12,0.001811892);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(13,0.00173912);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(14,0.001707286);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(15,0.001671987);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(16,0.001669717);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(17,0.00119026);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(18,0.001483596);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(19,0.001217967);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(20,0.001447859);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(21,0.001174476);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(22,0.001018936);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(23,0.0008878283);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(24,0.00104593);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(25,0.0009315547);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(26,0.0008926536);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(27,0.001130334);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(28,0.001230626);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(29,0.0008028501);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(30,0.0006360436);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(31,0.0005609825);
   VbbHcc_algo_Z_dR_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR__312 = new TH1D("VbbHcc_algo_Z_dR__312","",30,0,6);
   VbbHcc_algo_Z_dR__312->SetBinContent(2,7);
   VbbHcc_algo_Z_dR__312->SetBinContent(3,13414);
   VbbHcc_algo_Z_dR__312->SetBinContent(4,16937);
   VbbHcc_algo_Z_dR__312->SetBinContent(5,14310);
   VbbHcc_algo_Z_dR__312->SetBinContent(6,13679);
   VbbHcc_algo_Z_dR__312->SetBinContent(7,13377);
   VbbHcc_algo_Z_dR__312->SetBinContent(8,13165);
   VbbHcc_algo_Z_dR__312->SetBinContent(9,12609);
   VbbHcc_algo_Z_dR__312->SetBinContent(10,12514);
   VbbHcc_algo_Z_dR__312->SetBinContent(11,11865);
   VbbHcc_algo_Z_dR__312->SetBinContent(12,11292);
   VbbHcc_algo_Z_dR__312->SetBinContent(13,10743);
   VbbHcc_algo_Z_dR__312->SetBinContent(14,10201);
   VbbHcc_algo_Z_dR__312->SetBinContent(15,9503);
   VbbHcc_algo_Z_dR__312->SetBinContent(16,9159);
   VbbHcc_algo_Z_dR__312->SetBinContent(17,7666);
   VbbHcc_algo_Z_dR__312->SetBinContent(18,6883);
   VbbHcc_algo_Z_dR__312->SetBinContent(19,6157);
   VbbHcc_algo_Z_dR__312->SetBinContent(20,5599);
   VbbHcc_algo_Z_dR__312->SetBinContent(21,5036);
   VbbHcc_algo_Z_dR__312->SetBinContent(22,4604);
   VbbHcc_algo_Z_dR__312->SetBinContent(23,4216);
   VbbHcc_algo_Z_dR__312->SetBinContent(24,3839);
   VbbHcc_algo_Z_dR__312->SetBinContent(25,3443);
   VbbHcc_algo_Z_dR__312->SetBinContent(26,3285);
   VbbHcc_algo_Z_dR__312->SetBinContent(27,3011);
   VbbHcc_algo_Z_dR__312->SetBinContent(28,2779);
   VbbHcc_algo_Z_dR__312->SetBinContent(29,2385);
   VbbHcc_algo_Z_dR__312->SetBinContent(30,1787);
   VbbHcc_algo_Z_dR__312->SetBinContent(31,1443);
   VbbHcc_algo_Z_dR__312->SetEntries(234937);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR__312->SetLineColor(ci);
   VbbHcc_algo_Z_dR__312->SetLineWidth(2);
   VbbHcc_algo_Z_dR__312->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR__312->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR__312->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR__312->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__312->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__312->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__312->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__312->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__312->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__312->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__312->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR__312->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__312->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__312->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__312->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__312->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__312->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_fx1227[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fy1227[30] = {
   0,
   37.32598,
   106549.6,
   150253,
   127957.6,
   110040,
   111963.8,
   103067.9,
   97100.69,
   95281.93,
   93361.9,
   82395.22,
   81314.65,
   80419.88,
   71612.19,
   104621.1,
   59160.73,
   70958.06,
   44051.64,
   38894.81,
   40616.97,
   36787.99,
   28835.68,
   28040.65,
   25687.1,
   38547.56,
   24871.95,
   21028.81,
   21136.55,
   11671.29};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fex1227[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fey1227[30] = {
   0,
   12.82153,
   3624.82,
   19170.96,
   4811.654,
   4082.052,
   4645.053,
   4070.307,
   3732.525,
   3844.539,
   4540.82,
   3615.592,
   3641.374,
   4250.487,
   3698.34,
   22149,
   3099.185,
   15709.61,
   2589.029,
   2386.058,
   2556.256,
   2395.121,
   2046.44,
   1998.491,
   2352.222,
   10967.54,
   1875.239,
   1924.203,
   2391.238,
   1200.884};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_fx1227,Graph_from_VbbHcc_algo_Z_dR_fy1227,Graph_from_VbbHcc_algo_Z_dR_fex1227,Graph_from_VbbHcc_algo_Z_dR_fey1227);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR1227 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR1227","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetMinimum(186.3663);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetMaximum(186366.3);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR1227);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__313 = new TH1D("data_mc_ratio__313","",30,0,6);
   data_mc_ratio__313->SetBinContent(2,0.187537);
   data_mc_ratio__313->SetBinContent(3,0.1258944);
   data_mc_ratio__313->SetBinContent(4,0.1127232);
   data_mc_ratio__313->SetBinContent(5,0.111834);
   data_mc_ratio__313->SetBinContent(6,0.1243094);
   data_mc_ratio__313->SetBinContent(7,0.1194762);
   data_mc_ratio__313->SetBinContent(8,0.1277314);
   data_mc_ratio__313->SetBinContent(9,0.1298549);
   data_mc_ratio__313->SetBinContent(10,0.1313365);
   data_mc_ratio__313->SetBinContent(11,0.1270861);
   data_mc_ratio__313->SetBinContent(12,0.1370468);
   data_mc_ratio__313->SetBinContent(13,0.1321164);
   data_mc_ratio__313->SetBinContent(14,0.1268468);
   data_mc_ratio__313->SetBinContent(15,0.1327009);
   data_mc_ratio__313->SetBinContent(16,0.08754446);
   data_mc_ratio__313->SetBinContent(17,0.1295792);
   data_mc_ratio__313->SetBinContent(18,0.09700097);
   data_mc_ratio__313->SetBinContent(19,0.1397678);
   data_mc_ratio__313->SetBinContent(20,0.1439524);
   data_mc_ratio__313->SetBinContent(21,0.1239876);
   data_mc_ratio__313->SetBinContent(22,0.1251495);
   data_mc_ratio__313->SetBinContent(23,0.1462078);
   data_mc_ratio__313->SetBinContent(24,0.1369084);
   data_mc_ratio__313->SetBinContent(25,0.1340361);
   data_mc_ratio__313->SetBinContent(26,0.0852194);
   data_mc_ratio__313->SetBinContent(27,0.1210601);
   data_mc_ratio__313->SetBinContent(28,0.132152);
   data_mc_ratio__313->SetBinContent(29,0.1128377);
   data_mc_ratio__313->SetBinContent(30,0.1531107);
   data_mc_ratio__313->SetBinContent(31,0.1089185);
   data_mc_ratio__313->SetBinError(2,0.07088231);
   data_mc_ratio__313->SetBinError(3,0.001086995);
   data_mc_ratio__313->SetBinError(4,0.0008661541);
   data_mc_ratio__313->SetBinError(5,0.0009348758);
   data_mc_ratio__313->SetBinError(6,0.001062862);
   data_mc_ratio__313->SetBinError(7,0.001033004);
   data_mc_ratio__313->SetBinError(8,0.001113236);
   data_mc_ratio__313->SetBinError(9,0.001156426);
   data_mc_ratio__313->SetBinError(10,0.001174052);
   data_mc_ratio__313->SetBinError(11,0.001166713);
   data_mc_ratio__313->SetBinError(12,0.001289684);
   data_mc_ratio__313->SetBinError(13,0.001274659);
   data_mc_ratio__313->SetBinError(14,0.001255908);
   data_mc_ratio__313->SetBinError(15,0.001361267);
   data_mc_ratio__313->SetBinError(16,0.0009147547);
   data_mc_ratio__313->SetBinError(17,0.001479963);
   data_mc_ratio__313->SetBinError(18,0.001169196);
   data_mc_ratio__313->SetBinError(19,0.00178124);
   data_mc_ratio__313->SetBinError(20,0.001923816);
   data_mc_ratio__313->SetBinError(21,0.001747171);
   data_mc_ratio__313->SetBinError(22,0.001844427);
   data_mc_ratio__313->SetBinError(23,0.00225175);
   data_mc_ratio__313->SetBinError(24,0.002209637);
   data_mc_ratio__313->SetBinError(25,0.002284301);
   data_mc_ratio__313->SetBinError(26,0.001486862);
   data_mc_ratio__313->SetBinError(27,0.002206203);
   data_mc_ratio__313->SetBinError(28,0.002506857);
   data_mc_ratio__313->SetBinError(29,0.002310522);
   data_mc_ratio__313->SetBinError(30,0.003621958);
   data_mc_ratio__313->SetBinError(31,0.01250398);
   data_mc_ratio__313->SetMinimum(0.4);
   data_mc_ratio__313->SetMaximum(1.6);
   data_mc_ratio__313->SetEntries(1089.635);
   data_mc_ratio__313->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__313->SetLineColor(ci);
   data_mc_ratio__313->SetLineWidth(2);
   data_mc_ratio__313->SetMarkerStyle(20);
   data_mc_ratio__313->SetMarkerSize(1.2);
   data_mc_ratio__313->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__313->GetXaxis()->SetRange(1,30);
   data_mc_ratio__313->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__313->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__313->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__313->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__313->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__313->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__313->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__313->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__313->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__313->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__313->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__313->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__313->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__313->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__313->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__313->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__313->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1228[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1228[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1228[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1228[30] = {
   0,
   0.3435014,
   0.03402003,
   0.1275912,
   0.03760351,
   0.03709609,
   0.04148711,
   0.03949152,
   0.03843974,
   0.04034908,
   0.04863676,
   0.04388108,
   0.04478128,
   0.05285369,
   0.051644,
   0.2117068,
   0.05238585,
   0.221393,
   0.05877261,
   0.06134644,
   0.06293567,
   0.06510605,
   0.07096902,
   0.07127121,
   0.09157211,
   0.2845197,
   0.07539572,
   0.09150316,
   0.1131329,
   0.1028921};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1228,Graph_from_mc_statistical_error_fy1228,Graph_from_mc_statistical_error_fex1228,Graph_from_mc_statistical_error_fey1228);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1228 = new TH1F("Graph_Graph_from_mc_statistical_error1228","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1228->SetMinimum(0.5877983);
   Graph_Graph_from_mc_statistical_error1228->SetMaximum(1.412202);
   Graph_Graph_from_mc_statistical_error1228->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1228->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1228->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1228);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->SetSelected(Z_dR_algo_17);
}
