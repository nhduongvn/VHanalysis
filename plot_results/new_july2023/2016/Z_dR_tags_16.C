void Z_dR_tags_16()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Fri Jul 14 13:37:56 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(0,0,1,1);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetFillStyle(4000);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-700.5634,6.314516,699872.8);
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
   st->SetMaximum(599824.2);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",30,0,6);
   st_stack_17->SetMinimum(0.01);
   st_stack_17->SetMaximum(629815.4);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetRange(1,30);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetLabelSize(0.035);
   st_stack_17->GetXaxis()->SetTitleSize(0.035);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Events/0.2");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetLabelSize(0.05);
   st_stack_17->GetYaxis()->SetTitleSize(0.057);
   st_stack_17->GetYaxis()->SetTitleOffset(1.2);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetLabelSize(0.035);
   st_stack_17->GetZaxis()->SetTitleSize(0.035);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,85.39974);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,233313.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,254491.4);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,204365.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,158739.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,131146.9);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,106665.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,114888.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,112473.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,97457.29);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,91956.12);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,98599.18);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,132500.2);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,117537.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,119542.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,105803);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,120811.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,91826.97);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,83029.44);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,63495.97);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,61417.87);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,46014.33);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,46247.6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,31593.68);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,29836.87);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,29188.37);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,26753.35);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,33709.88);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(30,19539.68);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(31,11298.29);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,38.27175);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,5985.774);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,8157.958);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,23551.06);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,7387.029);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,6210.401);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,4340.106);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,6459.421);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,6301.789);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,5658.914);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,4926.748);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,5888.439);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,24136.29);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,6480.144);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,5234.143);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,5952.274);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,21859.46);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,5323.679);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,5297.318);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,4144.967);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,4332.511);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,3479.141);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,4487.547);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,2337.88);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,2771.736);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,2965.827);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,2597.492);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,4050.146);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(30,2668.812);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(31,1332.552);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(174298);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,0.421902);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,398.6154);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,736.0504);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,871.9814);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,992.9713);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,1105.928);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,1190.501);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,1267.155);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,1350.897);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,1461.055);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,1547.557);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,1636.137);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,1696.841);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,1732.279);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,1720.034);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,1625.917);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,1446.121);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,1334.446);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,1135.039);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,979.6744);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,828.7925);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,664.7514);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,543.4102);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,433.8597);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,350.653);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,280.0601);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,212.1526);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,165.084);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(30,105.5406);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(31,93.18925);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.2913491);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,8.371464);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,11.48717);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,12.57678);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,13.381);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,14.04838);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,14.55414);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,15.07404);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,15.45922);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,16.11991);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,16.52714);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,17.06753);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,17.37655);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,17.55875);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,17.53585);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,16.94499);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,15.87476);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,15.39117);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,14.12432);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,13.14441);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,12.18995);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,10.86052);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,9.916985);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,8.860702);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,8.066988);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,7.218674);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,6.287372);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,5.495798);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(30,4.536982);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(31,4.175421);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(391454);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_3 = new TH1D("VbbHcc_tags_Z_dR_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(2,4.974262);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(3,5840.269);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(4,11272.21);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(5,13455.71);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(6,15580.84);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(7,17247.68);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(8,18552.2);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(9,19915.04);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(10,21547.55);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(11,23652.47);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(12,26114.82);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(13,28596);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(14,30963.96);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(15,32552.78);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(16,33192.1);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(17,31859.55);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(18,29474.69);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(19,26043.47);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(20,22051.23);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(21,18141.9);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(22,14543.82);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(23,11368.46);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(24,8832.514);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(25,6744.213);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(26,5135.794);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(27,3918.84);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(28,2910.876);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(29,2085.537);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(30,1285.748);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(31,1098.616);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(2,0.5697296);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(3,19.68923);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(4,27.38569);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(5,29.95496);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(6,32.24283);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(7,33.91342);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(8,35.16546);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(9,36.43675);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(10,37.90694);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(11,39.75297);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(12,41.82548);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(13,43.82412);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(14,45.66999);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(15,46.89782);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(16,47.42069);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(17,46.49104);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(18,44.75504);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(19,42.05047);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(20,38.66386);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(21,35.04016);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(22,31.34627);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(23,27.67743);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(24,24.34481);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(25,21.24432);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(26,18.51391);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(27,16.15422);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(28,13.90076);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(29,11.76474);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(30,9.212524);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(31,8.500678);
   VbbHcc_tags_Z_dR_stack_3->SetEntries(7663533);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_4 = new TH1D("VbbHcc_tags_Z_dR_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(2,0.5458396);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(3,1510.722);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(4,2225.214);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(5,2103.222);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(6,1930.738);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(7,1404.222);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(8,1007.577);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(9,751.1309);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(10,636.5637);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(11,618.6509);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(12,593.7633);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(13,609.6025);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(14,692.3271);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(15,753.7652);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(16,743.5026);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(17,677.7055);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(18,665.6659);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(19,603.4741);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(20,491.0757);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(21,427.1062);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(22,347.9631);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(23,309.5187);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(24,266.3604);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(25,265.4178);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(26,272.7123);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(27,274.0478);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(28,267.4453);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(29,217.8962);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(30,143.3385);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(31,85.19776);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(2,0.1973111);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(3,17.49797);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(4,22.24847);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(5,29.52993);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(6,39.58293);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(7,36.85492);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(8,31.56192);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(9,26.09035);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(10,21.79898);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(11,22.26755);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(12,20.34858);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(13,19.10177);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(14,21.77457);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(15,23.34637);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(16,22.18872);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(17,19.00855);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(18,20.63613);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(19,20.62868);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(20,16.997);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(21,16.13561);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(22,14.4341);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(23,14.14886);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(24,12.66662);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(25,14.2927);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(26,13.90967);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(27,14.08352);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(28,11.61353);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(29,8.342935);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(30,6.795047);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(31,6.116786);
   VbbHcc_tags_Z_dR_stack_4->SetEntries(163132);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_5 = new TH1D("VbbHcc_tags_Z_dR_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(2,0.7863665);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(3,1255.719);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(4,1130.804);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(5,745.5056);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(6,632.4465);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(7,532.4971);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(8,474.5416);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(9,410.9996);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(10,437.8204);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(11,424.259);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(12,432.3449);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(13,467.327);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(14,516.8258);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(15,590.8963);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(16,599.3045);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(17,552.1017);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(18,492.8624);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(19,467.6707);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(20,386.0076);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(21,315.5526);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(22,255.5496);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(23,196.5632);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(24,164.1817);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(25,157.9007);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(26,141.1098);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(27,132.0345);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(28,104.2303);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(29,110.4001);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(30,72.70297);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(31,61.83606);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(2,0.3084681);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(3,40.12897);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(4,39.30135);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(5,25.65315);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(6,29.27376);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(7,30.3207);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(8,25.00704);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(9,22.11705);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(10,27.21002);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(11,24.51567);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(12,25.4995);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(13,27.28862);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(14,27.68342);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(15,32.54969);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(16,34.04366);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(17,28.2251);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(18,26.43467);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(19,28.53728);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(20,24.07008);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(21,19.29675);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(22,16.02822);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(23,16.1229);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(24,12.09762);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(25,14.78321);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(26,12.87319);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(27,15.00406);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(28,9.492875);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(29,10.10653);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(30,8.373219);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(31,8.337977);
   VbbHcc_tags_Z_dR_stack_5->SetEntries(113083);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_6 = new TH1D("VbbHcc_tags_Z_dR_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(3,4.632742);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(4,4.312398);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(5,2.666096);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(6,2.623776);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(7,2.615274);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(8,2.116119);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(9,2.075616);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(10,2.203929);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(11,3.922738);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(12,2.455);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(13,3.88572);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(14,3.287718);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(15,4.357827);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(16,4.903046);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(17,2.975659);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(18,3.347584);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(19,3.698722);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(20,2.773631);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(21,1.426397);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(22,1.234907);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(23,1.203965);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(24,1.114395);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(25,1.177454);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(26,1.026054);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(27,0.3718345);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(28,0.7070037);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(29,0.7329037);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(30,0.4677638);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(31,0.2906975);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(3,0.6473554);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(4,0.6262593);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(5,0.4839726);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(6,0.4894894);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(7,0.4818025);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(8,0.4438777);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(9,0.4331854);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(10,0.4461681);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(11,0.5993828);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(12,0.4684173);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(13,0.5881515);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(14,0.5497027);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(15,0.6315702);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(16,0.6624837);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(17,0.5210035);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(18,0.5520193);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(19,0.5818466);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(20,0.5046877);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(21,0.3583105);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(22,0.3432583);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(23,0.3343711);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(24,0.3219249);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(25,0.3273384);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(26,0.3109928);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(27,0.185963);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(28,0.2513711);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(29,0.2599037);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(30,0.2096306);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(31,0.1680707);
   VbbHcc_tags_Z_dR_stack_6->SetEntries(766);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_7 = new TH1D("VbbHcc_tags_Z_dR_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,15.72583);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,29.05908);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,22.98071);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,16.96184);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(7,12.40103);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(8,6.361517);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(9,5.035107);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(10,3.034029);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(11,3.038936);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(12,3.085673);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,2.690227);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,3.685582);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,4.73541);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(16,4.089581);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,4.39794);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(18,3.676515);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(19,3.573392);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(20,3.080761);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(21,2.711178);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(22,1.847467);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(23,1.572482);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(24,0.8910584);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(25,1.621448);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(26,1.303457);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(27,2.623316);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(28,2.621103);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(29,1.789373);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(30,1.153652);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(31,1.204696);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,1.034907);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,1.406809);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,1.256151);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,1.07185);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(7,0.9232135);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(8,0.6626625);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(9,0.585627);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(10,0.451533);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(11,0.4523577);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(12,0.456962);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,0.4260583);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,0.493734);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,0.565464);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(16,0.5337401);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,0.5512369);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(18,0.5008718);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(19,0.4936799);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(20,0.4581955);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(21,0.4299122);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(22,0.3533916);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(23,0.3253633);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(24,0.2474168);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(25,0.3300724);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(26,0.2998535);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(27,0.4267948);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(28,0.4188572);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(29,0.3457756);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(30,0.2811511);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(31,0.2859668);
   VbbHcc_tags_Z_dR_stack_7->SetEntries(2496);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_8 = new TH1D("VbbHcc_tags_Z_dR_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(3,14.22681);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,19.93342);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,19.7321);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,14.68704);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,11.30952);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,6.371288);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,5.137522);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,4.366025);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,3.496763);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,2.459987);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,3.405252);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,4.826992);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,5.459479);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,6.846915);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,5.37253);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,5.290009);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,2.871152);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,2.716881);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,2.345765);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,2.34465);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,1.544977);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(24,1.806143);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,1.124881);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(26,1.826414);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(27,1.86013);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(28,3.01082);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(29,1.150295);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(30,1.018123);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(31,0.2151267);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(3,1.652569);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,1.960612);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,1.940327);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,1.670992);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,1.476871);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,1.109447);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,0.9909797);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,0.9151086);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,0.8256207);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,0.7008798);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,0.80635);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,0.9620188);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,1.020187);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,1.146538);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,1.017695);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,1.002595);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,0.7270095);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,0.7266305);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,0.6788282);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,0.6564125);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.5470089);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(24,0.5736498);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.4595103);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(26,0.5819287);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(27,0.5899676);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(28,0.7544695);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(29,0.4708077);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(30,0.4393041);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(31,0.2151267);
   VbbHcc_tags_Z_dR_stack_8->SetEntries(834);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_9 = new TH1D("VbbHcc_tags_Z_dR_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(3,3.304265);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(4,7.422807);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(5,8.838184);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(6,9.501152);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(7,8.394088);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(8,6.357348);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(9,4.573207);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(10,3.470104);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(11,2.962257);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(12,2.816257);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(13,3.095774);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(14,3.333267);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(15,3.841336);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(16,3.917406);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(17,4.017961);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(18,3.303083);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(19,2.688012);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(20,2.102145);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(21,1.629452);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(22,1.46801);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(23,1.228994);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(24,1.280485);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(25,1.350135);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(26,1.381836);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(27,1.242079);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(28,1.0955);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(29,0.8354027);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(30,0.4417805);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(31,0.320866);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(3,0.07039968);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(4,0.1059583);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(5,0.1158871);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(6,0.1198492);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(7,0.1126273);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(8,0.0983876);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(9,0.08291438);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(10,0.07198922);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(11,0.06642873);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(12,0.06499687);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(13,0.06813107);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(14,0.07102273);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(15,0.07604048);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(16,0.07679646);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(17,0.07803248);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(18,0.07068447);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(19,0.06340218);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(20,0.0559363);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(21,0.04962033);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(22,0.04697453);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(23,0.04286594);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(24,0.0436745);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(25,0.04525496);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(26,0.04538939);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(27,0.04350307);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(28,0.04058482);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(29,0.03574565);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(30,0.02556859);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(31,0.02200006);
   VbbHcc_tags_Z_dR_stack_9->SetEntries(67621);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_10 = new TH1D("VbbHcc_tags_Z_dR_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(2,0.001144654);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(3,1.920463);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(4,3.940678);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(5,4.830849);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(6,5.051609);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(7,4.428402);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(8,3.223372);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(9,2.192172);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(10,1.575709);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(11,1.390342);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(12,1.359868);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(13,1.374424);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(14,1.388677);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(15,1.495581);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(16,1.554286);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(17,1.448506);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(18,1.288363);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(19,1.122986);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(20,0.9440305);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(21,0.7974802);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(22,0.6805886);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(23,0.612833);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(24,0.673875);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(25,0.6921233);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(26,0.7204852);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(27,0.701527);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(28,0.5838037);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(29,0.4500345);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(30,0.2687407);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(31,0.1703075);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(2,0.0006645706);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(3,0.02702903);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(4,0.03873305);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(5,0.04293701);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(6,0.04395946);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(7,0.04120195);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(8,0.03515806);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(9,0.02895466);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(10,0.0245361);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(11,0.02306492);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(12,0.02280275);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(13,0.02292642);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(14,0.02304487);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(15,0.02391025);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(16,0.02440594);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(17,0.02358234);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(18,0.02222635);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(19,0.02075368);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(20,0.01900771);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(21,0.01743052);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(22,0.0161073);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(23,0.01531331);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(24,0.01606401);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(25,0.01628596);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(26,0.01661704);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(27,0.0163698);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(28,0.01494056);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(29,0.01312404);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(30,0.01010724);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(31,0.008071393);
   VbbHcc_tags_Z_dR_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.217252);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.3788069);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.3524466);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.2639422);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.1772183);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(8,0.09948318);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(9,0.04538027);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(10,0.07736015);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.04745935);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.05519802);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(13,0.05983545);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.08966102);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.06996891);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.07957337);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.05507988);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.07632787);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.037681);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(20,0.04491882);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(21,0.02132952);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(22,0.03035952);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.01453697);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(24,0.03280003);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(25,0.02777447);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(26,0.02042324);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(27,0.03295019);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(28,0.03240518);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(29,0.04965822);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(30,0.01238566);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(31,0.01184239);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.02509772);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.03334151);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.03233974);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.02783161);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.02283042);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(8,0.01718456);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(9,0.01322314);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(10,0.01519711);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.01167896);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.01274865);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(13,0.01319235);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.01625278);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.0143133);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.01526264);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.01281775);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.01549362);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.01143767);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(20,0.01151621);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(21,0.00774976);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(22,0.00922998);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.006540287);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(24,0.00989602);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(25,0.009270285);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(26,0.00772377);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(27,0.009832991);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(28,0.009834104);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(29,0.01208471);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(30,0.005629404);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(31,0.005925602);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(888);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_12 = new TH1D("VbbHcc_tags_Z_dR_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(3,0.08309497);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(4,0.175692);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(5,0.182406);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(6,0.1306146);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(7,0.07745733);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(8,0.04338432);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(9,0.02733116);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(10,0.02826225);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(11,0.02178439);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(12,0.02630734);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(13,0.02852197);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(14,0.03191253);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(15,0.02761841);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(16,0.03619844);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(17,0.03347922);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(18,0.02504958);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(19,0.02143075);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(20,0.01838926);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(21,0.01591314);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(22,0.01456049);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(23,0.01243844);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(24,0.01128532);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(25,0.01042948);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(26,0.01334817);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(27,0.01617004);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(28,0.01210121);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(29,0.01354345);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(30,0.007852629);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(31,0.003773223);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(3,0.005599836);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(4,0.008178093);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(5,0.008344033);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(6,0.007079658);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(7,0.005453144);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(8,0.004052492);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(9,0.003215793);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(10,0.003279571);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(11,0.002863718);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(12,0.003166099);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(13,0.003279522);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(14,0.00350835);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(15,0.003249473);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(16,0.003716244);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(17,0.003571445);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(18,0.003095532);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(19,0.002844884);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(20,0.002668833);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(21,0.002467092);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(22,0.002322517);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(23,0.002136476);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(24,0.002050571);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(25,0.001976459);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(26,0.002237824);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(27,0.002474366);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(28,0.00215036);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(29,0.002250423);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(30,0.001724004);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(31,0.001195463);
   VbbHcc_tags_Z_dR_stack_12->SetEntries(3081);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR__33 = new TH1D("VbbHcc_tags_Z_dR__33","",30,0,6);
   VbbHcc_tags_Z_dR__33->SetBinContent(2,65);
   VbbHcc_tags_Z_dR__33->SetBinContent(3,112492);
   VbbHcc_tags_Z_dR__33->SetBinContent(4,121611);
   VbbHcc_tags_Z_dR__33->SetBinContent(5,86474);
   VbbHcc_tags_Z_dR__33->SetBinContent(6,73843);
   VbbHcc_tags_Z_dR__33->SetBinContent(7,66057);
   VbbHcc_tags_Z_dR__33->SetBinContent(8,61492);
   VbbHcc_tags_Z_dR__33->SetBinContent(9,58767);
   VbbHcc_tags_Z_dR__33->SetBinContent(10,58012);
   VbbHcc_tags_Z_dR__33->SetBinContent(11,58615);
   VbbHcc_tags_Z_dR__33->SetBinContent(12,60143);
   VbbHcc_tags_Z_dR__33->SetBinContent(13,63017);
   VbbHcc_tags_Z_dR__33->SetBinContent(14,66673);
   VbbHcc_tags_Z_dR__33->SetBinContent(15,70858);
   VbbHcc_tags_Z_dR__33->SetBinContent(16,73802);
   VbbHcc_tags_Z_dR__33->SetBinContent(17,70027);
   VbbHcc_tags_Z_dR__33->SetBinContent(18,65458);
   VbbHcc_tags_Z_dR__33->SetBinContent(19,58352);
   VbbHcc_tags_Z_dR__33->SetBinContent(20,50558);
   VbbHcc_tags_Z_dR__33->SetBinContent(21,42950);
   VbbHcc_tags_Z_dR__33->SetBinContent(22,36084);
   VbbHcc_tags_Z_dR__33->SetBinContent(23,29515);
   VbbHcc_tags_Z_dR__33->SetBinContent(24,24414);
   VbbHcc_tags_Z_dR__33->SetBinContent(25,20525);
   VbbHcc_tags_Z_dR__33->SetBinContent(26,17706);
   VbbHcc_tags_Z_dR__33->SetBinContent(27,15624);
   VbbHcc_tags_Z_dR__33->SetBinContent(28,14409);
   VbbHcc_tags_Z_dR__33->SetBinContent(29,14423);
   VbbHcc_tags_Z_dR__33->SetBinContent(30,9727);
   VbbHcc_tags_Z_dR__33->SetBinContent(31,6982);
   VbbHcc_tags_Z_dR__33->SetEntries(1508675);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR__33->SetLineColor(ci);
   VbbHcc_tags_Z_dR__33->SetLineWidth(2);
   VbbHcc_tags_Z_dR__33->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR__33->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR__33->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR__33->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__33->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__33->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__33->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__33->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__33->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__33->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__33->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR__33->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__33->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__33->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__33->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__33->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__33->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_fx1033[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fy1033[30] = {
   0,
   92.12925,
   242358.7,
   269920.9,
   221601.8,
   177925.4,
   151476.6,
   127915.2,
   137252,
   136460.8,
   123628.6,
   120656.9,
   129922.8,
   166386.8,
   153186.8,
   155819,
   140536.6,
   152908.2,
   120290,
   107104.5,
   83369.15,
   77401.62,
   58559.82,
   56059.88,
   39201.07,
   35743.43,
   33800.2,
   30256.11,
   36293.82,
   21150.38};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fex1033[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fey1033[30] = {
   0,
   38.27885,
   5985.973,
   8158.138,
   23551.12,
   7387.276,
   6210.693,
   4340.46,
   6459.632,
   6302.019,
   5659.174,
   4927.061,
   5888.721,
   24136.37,
   6480.462,
   5234.545,
   5952.577,
   21859.54,
   5323.984,
   5297.56,
   4145.212,
   4332.695,
   3479.334,
   4487.658,
   2338.084,
   2771.875,
   2965.951,
   2597.581,
   4050.188,
   2668.854};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_fx1033,Graph_from_VbbHcc_tags_Z_dR_fy1033,Graph_from_VbbHcc_tags_Z_dR_fex1033,Graph_from_VbbHcc_tags_Z_dR_fey1033);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR1033 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR1033","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetMaximum(305886.9);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR1033);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__34 = new TH1D("data_mc_ratio__34","",30,0,6);
   data_mc_ratio__34->SetBinContent(2,0.7055305);
   data_mc_ratio__34->SetBinContent(3,0.4641549);
   data_mc_ratio__34->SetBinContent(4,0.4505431);
   data_mc_ratio__34->SetBinContent(5,0.3902225);
   data_mc_ratio__34->SetBinContent(6,0.4150223);
   data_mc_ratio__34->SetBinContent(7,0.436087);
   data_mc_ratio__34->SetBinContent(8,0.4807246);
   data_mc_ratio__34->SetBinContent(9,0.4281686);
   data_mc_ratio__34->SetBinContent(10,0.4251186);
   data_mc_ratio__34->SetBinContent(11,0.4741217);
   data_mc_ratio__34->SetBinContent(12,0.4984631);
   data_mc_ratio__34->SetBinContent(13,0.4850342);
   data_mc_ratio__34->SetBinContent(14,0.4007108);
   data_mc_ratio__34->SetBinContent(15,0.4625596);
   data_mc_ratio__34->SetBinContent(16,0.4736394);
   data_mc_ratio__34->SetBinContent(17,0.498283);
   data_mc_ratio__34->SetBinContent(18,0.4280869);
   data_mc_ratio__34->SetBinContent(19,0.4850942);
   data_mc_ratio__34->SetBinContent(20,0.4720438);
   data_mc_ratio__34->SetBinContent(21,0.5151786);
   data_mc_ratio__34->SetBinContent(22,0.4661918);
   data_mc_ratio__34->SetBinContent(23,0.5040146);
   data_mc_ratio__34->SetBinContent(24,0.4354986);
   data_mc_ratio__34->SetBinContent(25,0.5235826);
   data_mc_ratio__34->SetBinContent(26,0.4953637);
   data_mc_ratio__34->SetBinContent(27,0.4622458);
   data_mc_ratio__34->SetBinContent(28,0.4762343);
   data_mc_ratio__34->SetBinContent(29,0.3973955);
   data_mc_ratio__34->SetBinContent(30,0.4598972);
   data_mc_ratio__34->SetBinContent(31,0.5524021);
   data_mc_ratio__34->SetBinError(2,0.08751029);
   data_mc_ratio__34->SetBinError(3,0.001383892);
   data_mc_ratio__34->SetBinError(4,0.001291963);
   data_mc_ratio__34->SetBinError(5,0.001326996);
   data_mc_ratio__34->SetBinError(6,0.001527273);
   data_mc_ratio__34->SetBinError(7,0.001696734);
   data_mc_ratio__34->SetBinError(8,0.001938595);
   data_mc_ratio__34->SetBinError(9,0.001766233);
   data_mc_ratio__34->SetBinError(10,0.001765026);
   data_mc_ratio__34->SetBinError(11,0.001958328);
   data_mc_ratio__34->SetBinError(12,0.002032547);
   data_mc_ratio__34->SetBinError(13,0.001932162);
   data_mc_ratio__34->SetBinError(14,0.001551873);
   data_mc_ratio__34->SetBinError(15,0.001737694);
   data_mc_ratio__34->SetBinError(16,0.001743467);
   data_mc_ratio__34->SetBinError(17,0.00188297);
   data_mc_ratio__34->SetBinError(18,0.001673211);
   data_mc_ratio__34->SetBinError(19,0.00200816);
   data_mc_ratio__34->SetBinError(20,0.002099362);
   data_mc_ratio__34->SetBinError(21,0.002485857);
   data_mc_ratio__34->SetBinError(22,0.002454185);
   data_mc_ratio__34->SetBinError(23,0.00293374);
   data_mc_ratio__34->SetBinError(24,0.002787195);
   data_mc_ratio__34->SetBinError(25,0.003654632);
   data_mc_ratio__34->SetBinError(26,0.003722751);
   data_mc_ratio__34->SetBinError(27,0.003698085);
   data_mc_ratio__34->SetBinError(28,0.00396738);
   data_mc_ratio__34->SetBinError(29,0.003308988);
   data_mc_ratio__34->SetBinError(30,0.004663063);
   data_mc_ratio__34->SetBinError(31,0.05861637);
   data_mc_ratio__34->SetMinimum(0.4);
   data_mc_ratio__34->SetMaximum(1.6);
   data_mc_ratio__34->SetEntries(1510.614);
   data_mc_ratio__34->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__34->SetLineColor(ci);
   data_mc_ratio__34->SetLineWidth(2);
   data_mc_ratio__34->SetMarkerStyle(20);
   data_mc_ratio__34->SetMarkerSize(1.2);
   data_mc_ratio__34->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__34->GetXaxis()->SetRange(1,30);
   data_mc_ratio__34->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__34->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__34->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__34->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__34->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__34->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__34->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__34->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__34->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__34->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__34->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__34->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__34->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__34->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__34->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__34->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__34->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1034[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1034[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1034[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1034[30] = {
   0,
   0.4154907,
   0.02469881,
   0.03022418,
   0.1062767,
   0.04151896,
   0.04100099,
   0.03393232,
   0.04706402,
   0.04618191,
   0.0457756,
   0.04083532,
   0.04532478,
   0.1450618,
   0.04230432,
   0.03359376,
   0.04235606,
   0.1429586,
   0.04425956,
   0.04946161,
   0.04972118,
   0.0559768,
   0.05941504,
   0.08005115,
   0.05964338,
   0.0775492,
   0.08774953,
   0.08585308,
   0.1115944,
   0.1261847};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1034,Graph_from_mc_statistical_error_fy1034,Graph_from_mc_statistical_error_fex1034,Graph_from_mc_statistical_error_fey1034);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1034 = new TH1F("Graph_Graph_from_mc_statistical_error1034","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1034->SetMinimum(0.5014111);
   Graph_Graph_from_mc_statistical_error1034->SetMaximum(1.498589);
   Graph_Graph_from_mc_statistical_error1034->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1034->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1034);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}
