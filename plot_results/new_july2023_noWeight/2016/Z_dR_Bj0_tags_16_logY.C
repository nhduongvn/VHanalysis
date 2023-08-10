void Z_dR_Bj0_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_16/Z_dR_Bj0_tags_16
//=========  (Thu Aug 10 12:31:25 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_16 = new TCanvas("Z_dR_Bj0_tags_16", "Z_dR_Bj0_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_16->SetHighLightColor(2);
   Z_dR_Bj0_tags_16->Range(0,0,1,1);
   Z_dR_Bj0_tags_16->SetFillColor(0);
   Z_dR_Bj0_tags_16->SetFillStyle(4000);
   Z_dR_Bj0_tags_16->SetBorderMode(0);
   Z_dR_Bj0_tags_16->SetBorderSize(2);
   Z_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.856597,6.314516,11.89983);
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
   st->SetMaximum(7.859446e+09);
   
   TH1F *st_stack_49 = new TH1F("st_stack_49","",30,0,6);
   st_stack_49->SetMinimum(0.001439326);
   st_stack_49->SetMaximum(2.655768e+10);
   st_stack_49->SetDirectory(0);
   st_stack_49->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_49->SetLineColor(ci);
   st_stack_49->GetXaxis()->SetRange(1,30);
   st_stack_49->GetXaxis()->SetLabelFont(42);
   st_stack_49->GetXaxis()->SetLabelSize(0.035);
   st_stack_49->GetXaxis()->SetTitleSize(0.035);
   st_stack_49->GetXaxis()->SetTitleFont(42);
   st_stack_49->GetYaxis()->SetTitle("Events/0.2");
   st_stack_49->GetYaxis()->SetLabelFont(42);
   st_stack_49->GetYaxis()->SetLabelSize(0.05);
   st_stack_49->GetYaxis()->SetTitleSize(0.057);
   st_stack_49->GetYaxis()->SetTitleOffset(1.2);
   st_stack_49->GetYaxis()->SetTitleFont(42);
   st_stack_49->GetZaxis()->SetLabelFont(42);
   st_stack_49->GetZaxis()->SetLabelSize(0.035);
   st_stack_49->GetZaxis()->SetTitleSize(0.035);
   st_stack_49->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_49);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,4799.368);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,26815.54);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,20098.76);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,16201.7);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,18166.92);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,13607.46);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,6484.862);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,8370.474);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,6144.865);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,7016.816);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,6949.14);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,6905.282);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,4855.512);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,5189.898);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,2951.646);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,3557.943);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,3747.546);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,2475.494);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,2658.561);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,1064.631);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,1042.762);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,802.7405);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(23,341.5137);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,1353.223);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,261.6987);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(26,444.0929);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(27,92.40119);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(28,39.45458);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(29,49.68694);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(30,28.08319);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(31,357.7958);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,781.538);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,2817.265);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,2181.098);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,2087.573);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,3196.529);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,2428.254);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,922.6243);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,1772.934);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,991.3872);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,1727.413);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,1707.797);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,1727.803);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,908.7076);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,1617.565);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,621.4481);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,817.6796);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,859.8209);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,1448.058);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,765.1858);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,390.0763);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,390.3433);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,384.8191);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(23,71.99481);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,542.0403);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,65.84024);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(26,273.8644);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(27,35.0944);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(28,14.8372);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(29,31.6097);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(30,22.96885);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(31,272.4392);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(9717);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,16.38268);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,72.75271);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,87.93761);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,86.12684);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,68.12949);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,61.168);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,46.83942);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,40.22075);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,36.12701);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,31.51301);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,28.68275);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,27.90658);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,22.11065);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,19.7831);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,19.27394);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,16.05732);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,11.58684);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,10.83137);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,7.492918);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,6.424085);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,4.724377);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,3.158924);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,3.791288);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,2.888234);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,2.156005);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,1.753966);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,0.9268468);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(28,0.8428624);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(29,0.269396);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(30,0.3708476);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(31,0.1312021);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,1.623184);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,3.351482);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,3.588745);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,3.635585);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,3.194623);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,3.104977);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,2.753465);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,2.516039);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,2.442055);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,2.261421);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,2.06519);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,2.169761);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,1.806172);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,1.791715);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,1.700117);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,1.618753);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,1.330733);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,1.27531);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,1.05393);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,1.03145);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.8647066);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.513565);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.8034277);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.652804);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.6715152);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.5607958);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.3992402);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(28,0.3967682);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(29,0.1101655);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(30,0.1314635);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(31,0.07574959);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(9491);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(1,199.563);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(2,1191.618);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(3,1716.059);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(4,1674.615);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(5,1393.143);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(6,1130.381);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(7,917.5186);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(8,773.2213);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(9,666.2468);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(10,599.1541);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(11,544.8653);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(12,483.0613);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(13,436.0391);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(14,385.3871);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(15,324.4194);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(16,273.327);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(17,223.9801);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(18,190.2918);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(19,154.4556);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(20,120.7149);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(21,97.70841);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(22,70.69354);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(23,58.11152);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(24,39.48625);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(25,29.55994);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(26,20.78742);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(27,14.47032);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(28,9.932347);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(29,6.081661);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(30,3.480092);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(31,6.597487);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(1,3.540635);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(2,8.623154);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(3,10.38275);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(4,10.26698);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(5,9.372977);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(6,8.43879);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(7,7.60839);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(8,6.975477);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(9,6.474893);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(10,6.146727);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(11,5.871281);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(12,5.518534);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(13,5.244951);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(14,4.936303);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(15,4.521151);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(16,4.152776);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(17,3.757581);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(18,3.465361);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(19,3.117232);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(20,2.745473);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(21,2.468967);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(22,2.096446);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(23,1.901391);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(24,1.575083);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(25,1.355123);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(26,1.126482);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(27,0.9465863);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(28,0.7805462);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(29,0.6136659);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(30,0.4606603);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(31,0.6255046);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetEntries(225965);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(1,55.40205);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(2,243.538);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(3,307.3565);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(4,269.7652);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(5,178.8653);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(6,144.3375);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(7,97.05757);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(8,95.30194);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(9,84.49631);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(10,64.17133);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(11,57.14718);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(12,76.02991);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(13,58.12257);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(14,55.50752);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(15,39.87439);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(16,37.0472);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(17,33.1066);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(18,29.74182);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(19,25.21042);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(20,15.84929);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(21,13.31384);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(22,7.97626);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(23,5.765746);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(24,6.002143);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(25,4.256164);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(26,2.217774);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(27,2.327468);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(28,0.7792356);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(29,0.6343579);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(30,0.1566053);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(31,0.4909697);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(1,2.401952);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(2,9.184129);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(3,13.71333);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(4,15.14074);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(5,11.82009);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(6,10.34544);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(7,6.624117);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(8,8.400596);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(9,7.869225);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(10,5.534929);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(11,4.818117);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(12,8.202528);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(13,6.125518);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(14,7.094473);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(15,5.167994);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(16,5.148503);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(17,5.707403);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(18,4.322344);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(19,4.20971);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(20,3.077953);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(21,3.009148);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(22,1.151881);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(23,0.9665587);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(24,1.00565);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(25,0.7688043);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(26,0.4671069);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(27,0.472922);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(28,0.2356922);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(29,0.2121021);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(30,0.1107367);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(31,0.3051648);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetEntries(14953);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(1,10.06697);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(2,37.80219);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(3,27.28844);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(4,19.1732);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(5,10.76625);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(6,10.03584);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(7,7.321186);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(8,10.32722);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(9,11.63615);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(10,6.798887);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(11,4.290789);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(12,7.359328);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(13,4.235312);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(14,3.102345);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(15,2.228354);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(16,3.548545);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(17,1.50075);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(18,2.80658);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(19,1.404098);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(20,1.594961);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(21,0.5120264);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(22,0.7732482);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(23,2.874315);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(24,0.8075181);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(25,0.6066422);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(26,0.3907392);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(27,0.2973402);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(28,0.1583505);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(29,0.008204514);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(30,0.0002136538);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(1,0.9002453);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(2,6.880321);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(3,3.391282);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(4,2.963459);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(5,1.750478);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(6,1.495312);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(7,1.323127);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(8,1.982682);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(9,6.190748);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(10,1.925618);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(11,1.218082);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(12,1.697019);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(13,1.153523);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(14,0.6701398);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(15,0.506877);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(16,1.226341);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(17,0.3196149);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(18,1.196911);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(19,0.3389639);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(20,0.4680182);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(21,0.2117902);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(22,0.2452533);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(23,1.482103);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(24,0.2783791);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(25,0.2736366);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(26,0.1558272);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(27,0.1779744);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(28,0.1009695);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(29,0.007783074);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(30,0.0002136538);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetEntries(3420);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(1,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(2,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(7,0.2687386);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(8,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(11,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(13,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(19,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(1,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(2,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(6,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(7,0.1900269);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(8,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(11,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(13,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(19,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(21,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(1,0.2181173);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(2,1.526821);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(3,0.9815278);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(4,0.2181173);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(5,0.2181173);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(6,0.3271759);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(7,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(8,0.3271759);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(9,0.3271759);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(10,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(11,0.3271759);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(13,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(17,0.2181173);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(20,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(1,0.1542322);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(2,0.4080601);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(3,0.3271759);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(4,0.1542322);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(5,0.1542322);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(6,0.1888951);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(7,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(8,0.1888951);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(9,0.1888951);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(10,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(11,0.1888951);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(12,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(13,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(17,0.1542322);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(20,0.1090586);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetEntries(48);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(1,0.7296215);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(2,4.620936);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(3,6.323386);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(4,4.377729);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(5,3.648107);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(6,3.161693);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(7,1.459243);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(8,1.945657);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(9,2.188864);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(10,2.918486);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(11,1.945657);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(12,1.945657);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(13,1.945657);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(14,1.216036);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(15,1.216036);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(16,0.4864143);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(17,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(18,0.9728286);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(21,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(28,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(1,0.4212471);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(2,1.060115);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(3,1.240118);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(4,1.031841);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(5,0.9419372);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(6,0.8768959);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(7,0.5957334);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(8,0.6878937);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(9,0.7296215);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(10,0.8424943);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(11,0.6878937);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(12,0.6878937);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(13,0.6878937);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(14,0.5438277);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(15,0.5438277);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(16,0.3439469);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(17,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(18,0.4864143);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(20,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(21,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(28,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetEntries(173);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(1,0.921921);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(2,4.652197);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(3,6.097594);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(4,5.31032);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(5,3.860802);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(6,2.6847);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(7,2.12138);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(8,1.72156);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(9,1.556686);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(10,1.589661);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(11,1.525085);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(12,1.464632);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(13,1.364333);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(14,1.064812);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(15,0.7927696);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(16,0.6512527);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(17,0.5275971);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(18,0.3132608);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(19,0.2679204);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(20,0.1566304);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(21,0.167622);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(22,0.11129);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(23,0.06869754);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(24,0.05495803);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(25,0.05221013);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(26,0.03847062);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(27,0.01786136);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(28,0.01099161);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(29,0.005495803);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(31,0.001373951);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(1,0.03559036);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(2,0.0799493);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(3,0.09153029);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(4,0.08541732);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(5,0.07283235);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(6,0.06073422);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(7,0.0539877);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(8,0.04863475);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(9,0.04624727);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(10,0.04673453);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(11,0.04577545);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(12,0.04485902);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(13,0.0432958);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(14,0.03824917);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(15,0.03300343);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(16,0.02991303);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(17,0.02692383);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(18,0.0207462);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(19,0.01918618);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(20,0.01466978);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(21,0.01517578);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(22,0.01236556);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(23,0.009715299);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(24,0.008689628);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(25,0.008469601);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(26,0.007270264);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(27,0.00495385);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(28,0.00388612);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(29,0.002747902);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(31,0.001373951);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetEntries(28512);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(1,0.3895543);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(2,2.167254);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(3,2.858999);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(4,2.378859);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(5,1.756217);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(6,1.253878);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(7,0.945242);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(8,0.7959367);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(9,0.6906711);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(10,0.6842263);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(11,0.6208521);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(12,0.5703676);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(13,0.5066354);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(14,0.4117531);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(15,0.34086);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(16,0.2739053);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(17,0.2187662);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(18,0.1743685);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(19,0.1267484);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(20,0.1002529);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(21,0.08342477);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(22,0.06695464);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(23,0.0565713);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(24,0.03580462);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(25,0.02434714);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(26,0.01790231);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(27,0.01503794);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(28,0.005370693);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(29,0.003580462);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(30,0.0007160924);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(31,0.001432185);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(1,0.0118101);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(2,0.02785636);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(3,0.03199459);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(4,0.02918461);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(5,0.02507602);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(6,0.02118835);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(7,0.01839675);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(8,0.01688141);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(9,0.01572553);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(10,0.01565198);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(11,0.01490952);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(12,0.01429048);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(13,0.01346844);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(14,0.01214194);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(15,0.01104734);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(16,0.009903069);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(17,0.008850334);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(18,0.007901391);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(19,0.006736599);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(20,0.005991259);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(21,0.005465338);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(22,0.004896208);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(23,0.004500571);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(24,0.003580462);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(25,0.002952525);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(26,0.002531769);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(27,0.002320405);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(28,0.001386707);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(29,0.001132242);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(30,0.0005063538);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(31,0.0007160924);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(2,0.01367504);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(3,0.02461507);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(4,0.01367504);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(5,0.005470015);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(6,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(7,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(8,0.005470015);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(14,0.01094003);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(17,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(1,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(2,0.006115663);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(3,0.008205022);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(4,0.006115663);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(5,0.003867885);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(6,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(7,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(8,0.003867885);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(9,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(10,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(12,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(13,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(14,0.005470015);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(15,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(17,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(1,0.001071798);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(2,0.009288912);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(3,0.007145317);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(4,0.008217114);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(5,0.005001722);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(6,0.001071798);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(7,0.002500861);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(8,0.002143595);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(9,0.001786329);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(11,0.0007145317);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(12,0.001429063);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(13,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(15,0.001071798);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(16,0.001429063);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(17,0.0007145317);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(18,0.001071798);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(1,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(2,0.001821706);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(3,0.001597741);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(4,0.001713387);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(5,0.001336766);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(6,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(7,0.0009452366);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(8,0.000875119);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(9,0.0007988707);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(11,0.0005052502);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(12,0.0007145317);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(13,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(15,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(16,0.0007145317);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(17,0.0005052502);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(18,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__133 = new TH1D("VbbHcc_tags_Z_dR_Bj0__133","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(1,3440);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(2,13454);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(3,13145);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(4,10574);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(5,8455);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(6,6833);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(7,5422);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(8,4760);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(9,4043);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(10,3544);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(11,3270);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(12,2882);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(13,2620);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(14,2414);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(15,2156);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(16,1851);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(17,1498);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(18,1246);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(19,1031);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(20,857);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(21,734);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(22,600);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(23,448);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(24,339);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(25,312);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(26,235);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(27,137);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(28,87);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(29,70);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(30,38);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(31,50);
   VbbHcc_tags_Z_dR_Bj0__133->SetEntries(96574);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0__133->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0__133->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj0__133->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj0__133->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj0__133->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0__133->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0__133->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1097[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1097[30] = {
   5083.18,
   28374.38,
   22253.69,
   18263.69,
   19827.32,
   14960.94,
   7558.507,
   9294.477,
   6948.139,
   7723.757,
   7588.68,
   7503.733,
   5380.082,
   5656.517,
   3339.795,
   3889.336,
   4018.932,
   2710.627,
   2847.653,
   1209.823,
   1159.649,
   885.5207,
   412.1818,
   1402.497,
   298.3544,
   469.2992,
   110.4561,
   51.42694,
   56.68964,
   32.09167};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1097[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1097[30] = {
   781.5521,
   2817.304,
   2181.172,
   2087.659,
   3196.567,
   2428.294,
   922.6847,
   1772.971,
   991.4622,
   1727.435,
   1707.815,
   1727.834,
   908.7462,
   1617.589,
   621.4888,
   817.7089,
   859.8492,
   1448.07,
   765.2045,
   390.0998,
   390.3638,
   384.827,
   72.04613,
   542.044,
   65.86267,
   273.8677,
   35.11307,
   14.86721,
   31.61656,
   22.97411};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1097,Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1097,Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1097,Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1097);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetMinimum(8.205798);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetMaximum(34309.94);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__134 = new TH1D("data_mc_ratio__134","",30,0,6);
   data_mc_ratio__134->SetBinContent(1,0.6767418);
   data_mc_ratio__134->SetBinContent(2,0.4741602);
   data_mc_ratio__134->SetBinContent(3,0.5906884);
   data_mc_ratio__134->SetBinContent(4,0.578963);
   data_mc_ratio__134->SetBinContent(5,0.4264318);
   data_mc_ratio__134->SetBinContent(6,0.4567225);
   data_mc_ratio__134->SetBinContent(7,0.7173374);
   data_mc_ratio__134->SetBinContent(8,0.5121321);
   data_mc_ratio__134->SetBinContent(9,0.5818824);
   data_mc_ratio__134->SetBinContent(10,0.458844);
   data_mc_ratio__134->SetBinContent(11,0.430905);
   data_mc_ratio__134->SetBinContent(12,0.3840755);
   data_mc_ratio__134->SetBinContent(13,0.4869814);
   data_mc_ratio__134->SetBinContent(14,0.4267644);
   data_mc_ratio__134->SetBinContent(15,0.6455485);
   data_mc_ratio__134->SetBinContent(16,0.4759167);
   data_mc_ratio__134->SetBinContent(17,0.3727359);
   data_mc_ratio__134->SetBinContent(18,0.4596722);
   data_mc_ratio__134->SetBinContent(19,0.3620525);
   data_mc_ratio__134->SetBinContent(20,0.708368);
   data_mc_ratio__134->SetBinContent(21,0.63295);
   data_mc_ratio__134->SetBinContent(22,0.6775675);
   data_mc_ratio__134->SetBinContent(23,1.086899);
   data_mc_ratio__134->SetBinContent(24,0.2417117);
   data_mc_ratio__134->SetBinContent(25,1.045736);
   data_mc_ratio__134->SetBinContent(26,0.5007466);
   data_mc_ratio__134->SetBinContent(27,1.240312);
   data_mc_ratio__134->SetBinContent(28,1.69172);
   data_mc_ratio__134->SetBinContent(29,1.234794);
   data_mc_ratio__134->SetBinContent(30,1.184108);
   data_mc_ratio__134->SetBinContent(31,0.1369794);
   data_mc_ratio__134->SetBinError(1,0.01153835);
   data_mc_ratio__134->SetBinError(2,0.004087891);
   data_mc_ratio__134->SetBinError(3,0.005152028);
   data_mc_ratio__134->SetBinError(4,0.005630295);
   data_mc_ratio__134->SetBinError(5,0.004637594);
   data_mc_ratio__134->SetBinError(6,0.005525184);
   data_mc_ratio__134->SetBinError(7,0.009741901);
   data_mc_ratio__134->SetBinError(8,0.007422984);
   data_mc_ratio__134->SetBinError(9,0.009151312);
   data_mc_ratio__134->SetBinError(10,0.007707583);
   data_mc_ratio__134->SetBinError(11,0.007535423);
   data_mc_ratio__134->SetBinError(12,0.007154341);
   data_mc_ratio__134->SetBinError(13,0.009513969);
   data_mc_ratio__134->SetBinError(14,0.008685995);
   data_mc_ratio__134->SetBinError(15,0.01390287);
   data_mc_ratio__134->SetBinError(16,0.01106185);
   data_mc_ratio__134->SetBinError(17,0.009630421);
   data_mc_ratio__134->SetBinError(18,0.01302235);
   data_mc_ratio__134->SetBinError(19,0.01127567);
   data_mc_ratio__134->SetBinError(20,0.02419739);
   data_mc_ratio__134->SetBinError(21,0.02336261);
   data_mc_ratio__134->SetBinError(22,0.02766158);
   data_mc_ratio__134->SetBinError(23,0.05135115);
   data_mc_ratio__134->SetBinError(24,0.01312798);
   data_mc_ratio__134->SetBinError(25,0.05920316);
   data_mc_ratio__134->SetBinError(26,0.03266511);
   data_mc_ratio__134->SetBinError(27,0.105967);
   data_mc_ratio__134->SetBinError(28,0.1813715);
   data_mc_ratio__134->SetBinError(29,0.1475861);
   data_mc_ratio__134->SetBinError(30,0.1920877);
   data_mc_ratio__134->SetBinError(31,0.104057);
   data_mc_ratio__134->SetMinimum(0.4);
   data_mc_ratio__134->SetMaximum(1.6);
   data_mc_ratio__134->SetEntries(171.7687);
   data_mc_ratio__134->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__134->SetLineColor(ci);
   data_mc_ratio__134->SetLineWidth(2);
   data_mc_ratio__134->SetMarkerStyle(20);
   data_mc_ratio__134->SetMarkerSize(1.2);
   data_mc_ratio__134->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__134->GetXaxis()->SetRange(1,30);
   data_mc_ratio__134->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__134->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__134->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__134->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__134->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__134->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__134->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__134->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__134->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__134->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__134->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__134->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__134->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__134->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__134->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__134->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__134->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1098[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1098[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1098[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1098[30] = {
   0.1537526,
   0.09929042,
   0.09801393,
   0.1143065,
   0.1612203,
   0.1623089,
   0.1220723,
   0.1907553,
   0.1426946,
   0.2236522,
   0.2250477,
   0.2302632,
   0.1689094,
   0.2859692,
   0.1860859,
   0.2102438,
   0.2139497,
   0.5342195,
   0.2687141,
   0.3224437,
   0.3366223,
   0.4345771,
   0.1747921,
   0.3864848,
   0.2207531,
   0.5835673,
   0.3178917,
   0.2890938,
   0.5577132,
   0.7158903};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1098,Graph_from_mc_statistical_error_fy1098,Graph_from_mc_statistical_error_fex1098,Graph_from_mc_statistical_error_fey1098);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1098 = new TH1F("Graph_Graph_from_mc_statistical_error1098","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1098->SetMinimum(0.1409316);
   Graph_Graph_from_mc_statistical_error1098->SetMaximum(1.859068);
   Graph_Graph_from_mc_statistical_error1098->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1098->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1098->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1098->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1098);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_tags_16->cd();
   Z_dR_Bj0_tags_16->Modified();
   Z_dR_Bj0_tags_16->cd();
   Z_dR_Bj0_tags_16->SetSelected(Z_dR_Bj0_tags_16);
}
