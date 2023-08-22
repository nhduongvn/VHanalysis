void H_dR_Bj1_both_16()
{
//=========Macro generated from canvas: H_dR_Bj1_both_16/H_dR_Bj1_both_16
//=========  (Tue Aug 22 09:23:04 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_16 = new TCanvas("H_dR_Bj1_both_16", "H_dR_Bj1_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_16->SetHighLightColor(2);
   H_dR_Bj1_both_16->Range(0,0,1,1);
   H_dR_Bj1_both_16->SetFillColor(0);
   H_dR_Bj1_both_16->SetFillStyle(4000);
   H_dR_Bj1_both_16->SetBorderMode(0);
   H_dR_Bj1_both_16->SetBorderSize(2);
   H_dR_Bj1_both_16->SetFrameFillStyle(1000);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-88.17229,6.314516,88094.11);
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
   st->SetMaximum(75500.84);
   
   TH1F *st_stack_237 = new TH1F("st_stack_237","",30,0,6);
   st_stack_237->SetMinimum(0.01);
   st_stack_237->SetMaximum(79275.88);
   st_stack_237->SetDirectory(0);
   st_stack_237->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_237->SetLineColor(ci);
   st_stack_237->GetXaxis()->SetRange(1,30);
   st_stack_237->GetXaxis()->SetLabelFont(42);
   st_stack_237->GetXaxis()->SetLabelSize(0.035);
   st_stack_237->GetXaxis()->SetTitleSize(0.035);
   st_stack_237->GetXaxis()->SetTitleFont(42);
   st_stack_237->GetYaxis()->SetTitle("Events/0.2");
   st_stack_237->GetYaxis()->SetLabelFont(42);
   st_stack_237->GetYaxis()->SetLabelSize(0.05);
   st_stack_237->GetYaxis()->SetTitleSize(0.057);
   st_stack_237->GetYaxis()->SetTitleOffset(1.2);
   st_stack_237->GetYaxis()->SetTitleFont(42);
   st_stack_237->GetZaxis()->SetLabelFont(42);
   st_stack_237->GetZaxis()->SetLabelSize(0.035);
   st_stack_237->GetZaxis()->SetTitleSize(0.035);
   st_stack_237->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_237);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,7696.788);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,31674.29);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,24491.41);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,14880.87);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,13277.38);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,12956.87);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,13134.51);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,8165.61);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,7392.565);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,10353.22);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,7338.599);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,4218.296);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,4714);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,4068.588);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,4842.644);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,5084.91);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,1383.014);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,1406.769);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,913.0279);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,224.1027);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,1600.372);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,495.9441);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,31.59988);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,40.63435);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,16.02769);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,3.532283);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,56.18031);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(28,6.737222);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(29,6.247706);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,915.6295);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,3428.804);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,3192.544);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,1644.079);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,1661.678);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,2519.1);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,2572.173);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,1262.875);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,1254.857);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,2472.974);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,1847.767);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,842.0295);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,946.7891);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,1594.317);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,1680.182);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,1041.219);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,452.1789);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,542.9877);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,442.7598);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,62.18393);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,1491.853);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,314.3191);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,12.46837);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,27.28854);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,9.515496);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,3.532283);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,37.05364);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(28,6.266853);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(29,6.247706);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(9183);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,41.34881);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,102.3196);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,102.7565);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,96.87172);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,72.00325);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,60.64847);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,49.4811);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,37.18699);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,35.06269);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,30.93653);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,26.6513);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,24.93563);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,23.81302);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,23.97949);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,17.9793);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,16.63422);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,10.9542);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,6.287325);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,4.658714);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,3.439873);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,2.791439);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,0.6910688);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,0.5283159);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.6713399);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.2398712);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.1665903);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(28,0.3772566);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(29,0.06092716);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,2.69535);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,4.019093);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,3.98257);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,3.927438);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,3.328081);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,3.057378);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,2.807376);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,2.367081);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,2.396106);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,2.25895);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,1.996242);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,2.112437);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,2.020658);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,2.055316);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,1.702343);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,1.615072);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,1.312189);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,0.9768822);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.8075796);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.7239935);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.661949);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.1867126);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.1690182);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.3021646);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.1082468);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.09708527);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(28,0.2819156);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(29,0.06092716);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(9517);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(1,638.1464);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(2,1854.304);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(3,2135.375);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(4,1857.777);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(5,1530.554);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(6,1206.331);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(7,963.5031);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(8,774.6806);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(9,647.9627);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(10,547.3047);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(11,477.224);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(12,418.9943);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(13,374.2646);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(14,346.1893);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(15,314.7339);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(16,278.196);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(17,162.3826);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(18,106.6032);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(19,72.0604);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(20,44.41232);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(21,34.95772);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(22,21.45501);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(23,15.17704);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(24,8.664547);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(25,5.408115);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(26,2.411373);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(27,2.373213);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(28,1.006196);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(29,0.6493303);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(30,0.3608206);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(31,0.6069952);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(1,6.48983);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(2,11.03412);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(3,11.86131);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(4,11.06444);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(5,10.03762);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(6,8.896476);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(7,7.953832);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(8,7.117667);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(9,6.506082);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(10,5.987824);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(11,5.587947);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(12,5.234394);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(13,4.94797);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(14,4.754427);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(15,4.535353);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(16,4.262092);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(17,3.264758);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(18,2.643905);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(19,2.163152);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(20,1.70236);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(21,1.517538);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(22,1.179495);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(23,0.9936552);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(24,0.7510184);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(25,0.58634);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(26,0.3829308);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(27,0.3951365);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(28,0.2550437);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(29,0.2000261);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(30,0.1613639);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(31,0.1954947);
   VbbHcc_both_H_dR_Bj1_stack_3->SetEntries(232621);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(1,114.0818);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(2,291.7583);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(3,300.0061);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(4,234.9237);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(5,188.4606);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(6,141.4458);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(7,134.5569);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(8,97.12532);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(9,87.20681);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(10,73.22202);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(11,60.78712);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(12,51.10812);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(13,61.30613);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(14,47.00219);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(15,51.66084);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(16,37.49151);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(17,23.96838);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(18,19.24943);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(19,8.781884);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(20,5.857323);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(21,7.01844);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(22,4.70219);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(23,1.422105);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(24,1.174432);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(25,0.4473972);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(26,0.6990652);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(28,0.06733885);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(29,0.07817989);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(31,0.06733885);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(1,3.558274);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(2,9.876938);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(3,12.11481);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(4,12.04681);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(5,11.86784);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(6,9.932382);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(7,10.52487);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(8,8.10977);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(9,7.434287);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(10,7.184514);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(11,5.093292);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(12,4.368039);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(13,6.328307);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(14,4.29408);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(15,5.744146);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(16,3.354589);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(17,3.701882);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(18,4.192565);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(19,2.490064);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(20,1.090401);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(21,3.244786);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(22,2.341311);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(23,0.520225);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(24,0.5056196);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(25,0.1830776);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(26,0.3690595);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(28,0.06733885);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(29,0.07817989);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(31,0.06733885);
   VbbHcc_both_H_dR_Bj1_stack_4->SetEntries(15013);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(1,20.33368);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(2,32.44453);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(3,34.93442);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(4,19.2986);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(5,14.23681);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(6,7.783289);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(7,12.80978);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(8,4.302212);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(9,4.903371);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(10,14.39491);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(11,8.361533);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(12,5.014541);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(13,4.880016);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(14,7.494462);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(15,5.063479);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(16,3.10538);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(17,2.246033);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(18,1.02281);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(19,0.9560492);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(20,0.5838625);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(21,0.4699397);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(22,0.1332826);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(23,0.08629299);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(24,1.185475);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(25,0.07741479);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(26,0.008878203);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(28,0.07717802);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(1,1.702263);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(2,3.042976);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(3,7.816818);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(4,2.684764);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(5,1.988505);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(6,1.648335);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(7,2.372588);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(8,0.693852);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(9,1.216244);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(10,7.418183);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(11,1.959723);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(12,1.559658);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(13,1.246158);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(14,1.938786);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(15,1.269682);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(16,0.5869563);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(17,1.073226);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(18,0.2965722);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(19,0.4224448);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(20,0.2277076);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(21,0.2423552);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(22,0.09079289);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(23,0.07768736);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(24,1.043149);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(25,0.07717839);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(26,0.008878203);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(28,0.07717802);
   VbbHcc_both_H_dR_Bj1_stack_5->SetEntries(3486);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(2,0.1511118);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(3,0.3022236);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(5,0.3022236);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(8,0.1511118);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(10,0.3022236);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(14,0.1511118);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(15,0.1511118);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(2,0.1511118);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(3,0.2137044);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(5,0.2137044);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(8,0.1511118);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(10,0.2137044);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(14,0.1511118);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(15,0.1511118);
   VbbHcc_both_H_dR_Bj1_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(1,0.4489005);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(2,1.234476);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(3,0.3366753);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(4,0.5611256);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(5,0.4489005);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(6,0.6733507);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(7,0.2244502);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(8,0.2244502);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(9,0.1122251);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(10,0.1122251);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(12,0.4489005);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(13,0.2244502);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(14,0.1122251);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(15,0.2244502);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(23,0.1122251);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(1,0.2244502);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(2,0.3722086);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(3,0.1943796);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(4,0.250943);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(5,0.2244502);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(6,0.2748943);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(7,0.1587103);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(8,0.1587103);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(9,0.1122251);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(10,0.1122251);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(12,0.2244502);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(13,0.1587103);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(14,0.1122251);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(15,0.1587103);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(23,0.1122251);
   VbbHcc_both_H_dR_Bj1_stack_7->SetEntries(49);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(1,2.660625);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(2,9.046125);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(3,4.789125);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(4,5.853375);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(5,2.394562);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(6,3.458812);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(7,2.1285);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(8,1.596375);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(9,0.7981875);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(10,1.330312);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(11,1.06425);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(12,1.06425);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(13,0.7981875);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(14,1.596375);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(15,1.596375);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(16,1.06425);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(17,0.2660625);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(18,0.2660625);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(20,0.2660625);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(1,0.8413635);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(2,1.551398);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(3,1.128808);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(4,1.247944);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(5,0.7981875);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(6,0.959302);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(7,0.7525384);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(8,0.6517174);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(9,0.4608338);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(10,0.5949338);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(11,0.532125);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(12,0.532125);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(13,0.4608338);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(14,0.6517174);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(15,0.6517174);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(16,0.532125);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(17,0.2660625);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(18,0.2660625);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(20,0.2660625);
   VbbHcc_both_H_dR_Bj1_stack_8->SetEntries(158);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(1,1.948262);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(2,6.810674);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(3,7.128057);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(4,5.391383);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(5,3.562654);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(6,2.550053);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(7,1.861703);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(8,1.516842);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(9,1.368455);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(10,1.203581);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(11,1.085421);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(12,0.9933664);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(13,0.9329126);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(14,0.8669629);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(15,0.865589);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(16,0.7364376);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(17,0.3956978);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(18,0.2005968);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(19,0.1222816);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(20,0.0865589);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(21,0.05770593);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(22,0.02335716);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(23,0.01923531);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(24,0.004121852);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(25,0.004121852);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(26,0.005495803);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(27,0.002747902);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(29,0.001373951);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(30,0.001373951);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(1,0.05173796);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(2,0.09673433);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(3,0.09896261);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(4,0.0860668);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(5,0.06996365);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(6,0.05919161);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(7,0.05057557);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(8,0.04565157);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(9,0.04336116);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(10,0.04066523);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(11,0.03861755);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(12,0.03694369);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(13,0.0358019);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(14,0.03451325);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(15,0.03448589);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(16,0.03180926);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(17,0.02331672);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(18,0.01660151);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(19,0.01296183);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(20,0.0109054);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(21,0.008904219);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(22,0.005664944);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(23,0.005140853);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(24,0.002379753);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(25,0.002379753);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(26,0.002747902);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(27,0.00194306);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(29,0.001373951);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(30,0.001373951);
   VbbHcc_both_H_dR_Bj1_stack_9->SetEntries(28929);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(1,0.8849245);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(2,2.996599);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(3,3.368573);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(4,2.502757);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(5,1.705305);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(6,1.11847);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(7,0.8492557);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(8,0.70743);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(9,0.6208059);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(10,0.5023348);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(11,0.4717615);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(12,0.4254771);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(13,0.346921);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(14,0.3375791);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(15,0.3053074);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(16,0.2870484);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(17,0.1503183);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(18,0.08577483);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(19,0.04628444);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(20,0.02675155);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(21,0.02208065);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(22,0.009766441);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(23,0.00594479);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(24,0.005095534);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(25,0.001273884);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(26,0.0008492557);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(27,0.002123139);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(28,0.0004246279);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(31,0.0008492557);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(1,0.01938462);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(2,0.03567127);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(3,0.03782049);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(4,0.0325997);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(5,0.02690948);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(6,0.02179297);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(7,0.01898994);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(8,0.01733189);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(9,0.01623612);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(10,0.01460498);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(11,0.01415355);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(12,0.01344133);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(13,0.01213723);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(14,0.0119727);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(15,0.01138605);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(16,0.01104032);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(17,0.007989325);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(18,0.006035096);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(19,0.004433245);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(20,0.003370379);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(21,0.003062035);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(22,0.002036444);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(23,0.001588812);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(24,0.001470954);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(25,0.000735477);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(26,0.0006005145);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(27,0.0009494968);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(28,0.0004246279);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(31,0.0006005145);
   VbbHcc_both_H_dR_Bj1_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(1,0.005470015);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(2,0.01367504);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(3,0.02188006);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(4,0.01094003);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(5,0.008205022);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(6,0.008205022);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(7,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(11,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(15,0.005470015);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(16,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(21,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(1,0.003867885);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(2,0.006115663);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(3,0.007735769);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(4,0.005470015);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(5,0.004737172);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(6,0.004737172);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(7,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(9,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(10,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(11,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(12,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(13,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(14,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(15,0.003867885);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(16,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(21,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(1,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(2,0.008931646);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(3,0.01000344);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(4,0.006788051);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(5,0.006073519);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(6,0.003215393);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(7,0.003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(8,0.001786329);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(9,0.001429063);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(10,0.001071798);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(11,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(12,0.001786329);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(13,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(15,0.001786329);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(16,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(1,0.0005052502);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(2,0.001786329);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(3,0.001890473);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(4,0.001557286);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(5,0.001473045);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(6,0.001071798);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(7,0.001129774);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(8,0.0007988707);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(9,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(10,0.0006188026);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(11,0.0005052502);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(12,0.0007988707);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(13,0.0005052502);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(15,0.0007988707);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(16,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj1__650 = new TH1D("VbbHcc_both_H_dR_Bj1__650","",30,0,6);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(1,6720);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(2,15381);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(3,13883);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(4,10735);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(5,8519);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(6,6875);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(7,5547);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(8,4660);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(9,3915);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(10,3494);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(11,3110);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(12,2841);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(13,2659);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(14,2617);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(15,2328);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(16,2141);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(17,1253);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(18,889);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(19,604);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(20,430);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(21,328);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(22,198);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(23,147);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(24,94);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(25,50);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(26,34);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(27,15);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(28,10);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(29,2);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(30,4);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(31,8);
   VbbHcc_both_H_dR_Bj1__650->SetEntries(99520);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1__650->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1__650->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj1__650->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj1__650->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj1__650->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1__650->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__650->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__650->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__650->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1__650->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__650->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__650->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__650->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fx1473[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fy1473[30] = {
   8516.647,
   33975.38,
   27080.44,
   17104.07,
   15091.06,
   14380.89,
   14299.93,
   9083.103,
   8170.604,
   11022.53,
   7914.247,
   4721.285,
   5180.569,
   4496.32,
   5235.232,
   5422.428,
   1583.377,
   1540.484,
   999.6535,
   278.7755,
   1645.692,
   522.9587,
   48.95104,
   52.33936,
   22.20589,
   6.824535,
   58.5584,
   8.265616,
   7.037517,
   0.3621945};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fex1473[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fey1473[30] = {
   915.6654,
   3428.841,
   3192.601,
   1644.168,
   1661.756,
   2519.138,
   2572.21,
   1262.924,
   1254.898,
   2473.004,
   1847.785,
   842.0614,
   946.8263,
   1594.333,
   1680.199,
   1041.235,
   452.2091,
   543.0113,
   442.7731,
   62.22198,
   1491.858,
   314.3301,
   12.5206,
   27.32514,
   9.536229,
   3.573426,
   37.05574,
   6.279209,
   6.251693,
   0.1613697};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj1_fx1473,Graph_from_VbbHcc_both_H_dR_Bj1_fy1473,Graph_from_VbbHcc_both_H_dR_Bj1_fex1473,Graph_from_VbbHcc_both_H_dR_Bj1_fey1473);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj11473 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj11473","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetMinimum(0.1807423);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetMaximum(41144.62);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj11473);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__651 = new TH1D("data_mc_ratio__651","",30,0,6);
   data_mc_ratio__651->SetBinContent(1,0.7890429);
   data_mc_ratio__651->SetBinContent(2,0.4527102);
   data_mc_ratio__651->SetBinContent(3,0.5126578);
   data_mc_ratio__651->SetBinContent(4,0.6276286);
   data_mc_ratio__651->SetBinContent(5,0.5645065);
   data_mc_ratio__651->SetBinContent(6,0.4780651);
   data_mc_ratio__651->SetBinContent(7,0.387904);
   data_mc_ratio__651->SetBinContent(8,0.5130405);
   data_mc_ratio__651->SetBinContent(9,0.4791567);
   data_mc_ratio__651->SetBinContent(10,0.3169871);
   data_mc_ratio__651->SetBinContent(11,0.3929622);
   data_mc_ratio__651->SetBinContent(12,0.601743);
   data_mc_ratio__651->SetBinContent(13,0.513264);
   data_mc_ratio__651->SetBinContent(14,0.5820315);
   data_mc_ratio__651->SetBinContent(15,0.4446794);
   data_mc_ratio__651->SetBinContent(16,0.3948415);
   data_mc_ratio__651->SetBinContent(17,0.7913464);
   data_mc_ratio__651->SetBinContent(18,0.5770915);
   data_mc_ratio__651->SetBinContent(19,0.6042094);
   data_mc_ratio__651->SetBinContent(20,1.54246);
   data_mc_ratio__651->SetBinContent(21,0.1993083);
   data_mc_ratio__651->SetBinContent(22,0.378615);
   data_mc_ratio__651->SetBinContent(23,3.003001);
   data_mc_ratio__651->SetBinContent(24,1.795972);
   data_mc_ratio__651->SetBinContent(25,2.251655);
   data_mc_ratio__651->SetBinContent(26,4.982025);
   data_mc_ratio__651->SetBinContent(27,0.2561546);
   data_mc_ratio__651->SetBinContent(28,1.209831);
   data_mc_ratio__651->SetBinContent(29,0.2841911);
   data_mc_ratio__651->SetBinContent(30,11.04379);
   data_mc_ratio__651->SetBinContent(31,11.84863);
   data_mc_ratio__651->SetBinError(1,0.009625337);
   data_mc_ratio__651->SetBinError(2,0.003650295);
   data_mc_ratio__651->SetBinError(3,0.004350969);
   data_mc_ratio__651->SetBinError(4,0.006057615);
   data_mc_ratio__651->SetBinError(5,0.006116101);
   data_mc_ratio__651->SetBinError(6,0.005765681);
   data_mc_ratio__651->SetBinError(7,0.00520829);
   data_mc_ratio__651->SetBinError(8,0.007515514);
   data_mc_ratio__651->SetBinError(9,0.007657936);
   data_mc_ratio__651->SetBinError(10,0.005362659);
   data_mc_ratio__651->SetBinError(11,0.007046453);
   data_mc_ratio__651->SetBinError(12,0.01128952);
   data_mc_ratio__651->SetBinError(13,0.009953634);
   data_mc_ratio__651->SetBinError(14,0.01137744);
   data_mc_ratio__651->SetBinError(15,0.009216278);
   data_mc_ratio__651->SetBinError(16,0.008533251);
   data_mc_ratio__651->SetBinError(17,0.02235585);
   data_mc_ratio__651->SetBinError(18,0.01935503);
   data_mc_ratio__651->SetBinError(19,0.02458493);
   data_mc_ratio__651->SetBinError(20,0.07438403);
   data_mc_ratio__651->SetBinError(21,0.01100496);
   data_mc_ratio__651->SetBinError(22,0.02690699);
   data_mc_ratio__651->SetBinError(23,0.2476833);
   data_mc_ratio__651->SetBinError(24,0.1852403);
   data_mc_ratio__651->SetBinError(25,0.3184321);
   data_mc_ratio__651->SetBinError(26,0.8544102);
   data_mc_ratio__651->SetBinError(27,0.06613882);
   data_mc_ratio__651->SetBinError(28,0.3825822);
   data_mc_ratio__651->SetBinError(29,0.2009535);
   data_mc_ratio__651->SetBinError(30,5.521894);
   data_mc_ratio__651->SetBinError(31,5.542109);
   data_mc_ratio__651->SetMinimum(0.4);
   data_mc_ratio__651->SetMaximum(1.6);
   data_mc_ratio__651->SetEntries(20.55876);
   data_mc_ratio__651->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__651->SetLineColor(ci);
   data_mc_ratio__651->SetLineWidth(2);
   data_mc_ratio__651->SetMarkerStyle(20);
   data_mc_ratio__651->SetMarkerSize(1.2);
   data_mc_ratio__651->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__651->GetXaxis()->SetRange(1,30);
   data_mc_ratio__651->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__651->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__651->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__651->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__651->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__651->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__651->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__651->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__651->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__651->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__651->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__651->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__651->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__651->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__651->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__651->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__651->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1474[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1474[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1474[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1474[30] = {
   0.1075148,
   0.1009213,
   0.1178933,
   0.09612731,
   0.1101152,
   0.1751726,
   0.1798757,
   0.139041,
   0.153587,
   0.224359,
   0.2334758,
   0.1783543,
   0.1827649,
   0.3545862,
   0.3209407,
   0.1920237,
   0.2855978,
   0.352494,
   0.4429265,
   0.2231975,
   0.9065231,
   0.6010611,
   0.255778,
   0.5220764,
   0.429446,
   0.5236146,
   0.6327998,
   0.7596783,
   0.8883379,
   0.4455333};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1474,Graph_from_mc_statistical_error_fy1474,Graph_from_mc_statistical_error_fex1474,Graph_from_mc_statistical_error_fey1474);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1474 = new TH1F("Graph_Graph_from_mc_statistical_error1474","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1474->SetMinimum(0.08412924);
   Graph_Graph_from_mc_statistical_error1474->SetMaximum(2.087828);
   Graph_Graph_from_mc_statistical_error1474->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1474->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1474->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1474);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_both_16->cd();
   H_dR_Bj1_both_16->Modified();
   H_dR_Bj1_both_16->cd();
   H_dR_Bj1_both_16->SetSelected(H_dR_Bj1_both_16);
}
