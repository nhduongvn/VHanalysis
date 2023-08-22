void H_dR_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Tue Aug 22 09:16:05 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(0,0,1,1);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetFillStyle(4000);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-2.82584,6.525,10.8497);
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
   st->SetMaximum(9.497414e+08);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",30,0,6);
   st_stack_21->SetMinimum(0.001541116);
   st_stack_21->SetMaximum(3.034919e+09);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetRange(1,31);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetLabelSize(0.035);
   st_stack_21->GetXaxis()->SetTitleSize(0.035);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/0.2");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetLabelSize(0.05);
   st_stack_21->GetYaxis()->SetTitleSize(0.057);
   st_stack_21->GetYaxis()->SetTitleOffset(1.2);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetLabelSize(0.035);
   st_stack_21->GetZaxis()->SetTitleSize(0.035);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,9476.083);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,5919.464);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,4104.607);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,4879.551);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,3243.54);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,3113.533);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,3324.058);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,5284.568);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,4386.431);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,5277.355);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,9330.784);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,7589.705);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,6756.783);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,10160.34);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,7265.581);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,7336.541);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,6253.183);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,6446.158);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,4460.202);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,3274.345);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,3556.173);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,1311.013);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,2479.015);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,1490.28);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,956.6288);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,541.6178);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,811.3371);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(30,856.9671);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(31,1364.68);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,1581.393);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,933.8012);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,710.6454);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,832.4908);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,663.3451);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,594.5459);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,670.2889);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,1285.435);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,1388.924);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,863.161);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,1997.364);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,1615.767);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,940.6793);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,1804.724);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,1241.005);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,1016.566);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,900.1617);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,1369.784);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,1202.832);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,675.9567);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,1491.859);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,299.666);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,695.0462);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,493.0535);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,339.0042);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,231.4285);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,326.1239);
   VbbHcc_tags_H_dR_stack_1->SetBinError(30,375.3058);
   VbbHcc_tags_H_dR_stack_1->SetBinError(31,527.9543);
   VbbHcc_tags_H_dR_stack_1->SetEntries(8758);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,19.72482);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,18.35386);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,18.15904);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,22.48311);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,21.54782);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,18.68235);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,22.57622);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,21.20621);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,22.77618);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,26.99323);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,23.3422);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,29.24713);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,36.25628);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,34.94741);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,31.71696);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,28.34268);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,22.74712);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,21.50513);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,18.75048);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,14.93199);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,13.90228);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,10.23437);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,8.033559);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,8.812173);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,4.526958);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,4.770597);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,3.95135);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(30,3.061867);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(31,1.793128);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,1.723214);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,1.511307);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,1.561701);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,1.825923);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,1.788526);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,1.622901);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,1.85038);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,1.771253);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,1.836786);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,1.972822);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,1.781474);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,2.045158);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,2.274582);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,2.232581);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,2.126403);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,1.966534);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,1.671971);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,1.769191);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,1.619335);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,1.479618);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,1.428104);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,1.154358);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,1.01059);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,1.159943);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,0.7309415);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,0.9303566);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.755731);
   VbbHcc_tags_H_dR_stack_2->SetBinError(30,0.6414938);
   VbbHcc_tags_H_dR_stack_2->SetBinError(31,0.4678282);
   VbbHcc_tags_H_dR_stack_2->SetEntries(8949);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_3 = new TH1D("VbbHcc_tags_H_dR_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(2,0.5080539);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(3,305.8695);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(4,421.9885);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(5,437.3737);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(6,449.5549);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(7,451.7123);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(8,436.082);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(9,438.0956);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(10,452.0668);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(11,480.3256);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(12,511.6092);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(13,562.3566);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(14,596.4039);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(15,640.4424);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(16,653.1921);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(17,618.8669);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(18,573.826);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(19,507.8766);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(20,437.8105);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(21,371.4998);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(22,298.8388);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(23,248.6176);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(24,195.7504);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(25,159.5191);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(26,137.1844);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(27,109.4575);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(28,89.07625);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(29,71.91095);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(30,47.70075);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(31,39.20272);
   VbbHcc_tags_H_dR_stack_3->SetBinError(2,0.1637312);
   VbbHcc_tags_H_dR_stack_3->SetBinError(3,4.083181);
   VbbHcc_tags_H_dR_stack_3->SetBinError(4,4.769308);
   VbbHcc_tags_H_dR_stack_3->SetBinError(5,4.845598);
   VbbHcc_tags_H_dR_stack_3->SetBinError(6,4.898713);
   VbbHcc_tags_H_dR_stack_3->SetBinError(7,4.904408);
   VbbHcc_tags_H_dR_stack_3->SetBinError(8,4.805941);
   VbbHcc_tags_H_dR_stack_3->SetBinError(9,4.804768);
   VbbHcc_tags_H_dR_stack_3->SetBinError(10,4.882982);
   VbbHcc_tags_H_dR_stack_3->SetBinError(11,5.033255);
   VbbHcc_tags_H_dR_stack_3->SetBinError(12,5.201554);
   VbbHcc_tags_H_dR_stack_3->SetBinError(13,5.462732);
   VbbHcc_tags_H_dR_stack_3->SetBinError(14,5.641849);
   VbbHcc_tags_H_dR_stack_3->SetBinError(15,5.8568);
   VbbHcc_tags_H_dR_stack_3->SetBinError(16,5.918813);
   VbbHcc_tags_H_dR_stack_3->SetBinError(17,5.766186);
   VbbHcc_tags_H_dR_stack_3->SetBinError(18,5.542721);
   VbbHcc_tags_H_dR_stack_3->SetBinError(19,5.227895);
   VbbHcc_tags_H_dR_stack_3->SetBinError(20,4.83848);
   VbbHcc_tags_H_dR_stack_3->SetBinError(21,4.44826);
   VbbHcc_tags_H_dR_stack_3->SetBinError(22,3.971448);
   VbbHcc_tags_H_dR_stack_3->SetBinError(23,3.630272);
   VbbHcc_tags_H_dR_stack_3->SetBinError(24,3.207226);
   VbbHcc_tags_H_dR_stack_3->SetBinError(25,2.892671);
   VbbHcc_tags_H_dR_stack_3->SetBinError(26,2.684467);
   VbbHcc_tags_H_dR_stack_3->SetBinError(27,2.407553);
   VbbHcc_tags_H_dR_stack_3->SetBinError(28,2.162753);
   VbbHcc_tags_H_dR_stack_3->SetBinError(29,1.949992);
   VbbHcc_tags_H_dR_stack_3->SetBinError(30,1.592765);
   VbbHcc_tags_H_dR_stack_3->SetBinError(31,1.43849);
   VbbHcc_tags_H_dR_stack_3->SetEntries(216002);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_4 = new TH1D("VbbHcc_tags_H_dR_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(2,0.02707554);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(3,58.66985);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(4,80.17503);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(5,64.64368);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(6,66.99827);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(7,62.58895);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(8,51.74542);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(9,55.93427);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(10,54.69638);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(11,59.74852);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(12,69.23845);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(13,77.82174);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(14,79.9076);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(15,94.28841);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(16,99.03189);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(17,100.0612);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(18,93.10535);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(19,74.27482);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(20,58.14725);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(21,61.29285);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(22,34.85758);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(23,27.47361);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(24,23.79696);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(25,18.29525);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(26,24.98974);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(27,14.04997);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(28,14.73718);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(29,10.67471);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(30,6.319829);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(31,4.987807);
   VbbHcc_tags_H_dR_stack_4->SetBinError(2,0.02707554);
   VbbHcc_tags_H_dR_stack_4->SetBinError(3,4.31088);
   VbbHcc_tags_H_dR_stack_4->SetBinError(4,4.365784);
   VbbHcc_tags_H_dR_stack_4->SetBinError(5,3.466282);
   VbbHcc_tags_H_dR_stack_4->SetBinError(6,5.199355);
   VbbHcc_tags_H_dR_stack_4->SetBinError(7,6.161253);
   VbbHcc_tags_H_dR_stack_4->SetBinError(8,4.263246);
   VbbHcc_tags_H_dR_stack_4->SetBinError(9,4.906831);
   VbbHcc_tags_H_dR_stack_4->SetBinError(10,5.177007);
   VbbHcc_tags_H_dR_stack_4->SetBinError(11,4.8417);
   VbbHcc_tags_H_dR_stack_4->SetBinError(12,5.629394);
   VbbHcc_tags_H_dR_stack_4->SetBinError(13,5.518715);
   VbbHcc_tags_H_dR_stack_4->SetBinError(14,5.198284);
   VbbHcc_tags_H_dR_stack_4->SetBinError(15,6.663189);
   VbbHcc_tags_H_dR_stack_4->SetBinError(16,5.843793);
   VbbHcc_tags_H_dR_stack_4->SetBinError(17,5.608356);
   VbbHcc_tags_H_dR_stack_4->SetBinError(18,6.186178);
   VbbHcc_tags_H_dR_stack_4->SetBinError(19,5.246668);
   VbbHcc_tags_H_dR_stack_4->SetBinError(20,3.779861);
   VbbHcc_tags_H_dR_stack_4->SetBinError(21,5.87073);
   VbbHcc_tags_H_dR_stack_4->SetBinError(22,3.133993);
   VbbHcc_tags_H_dR_stack_4->SetBinError(23,2.564698);
   VbbHcc_tags_H_dR_stack_4->SetBinError(24,2.712855);
   VbbHcc_tags_H_dR_stack_4->SetBinError(25,2.224229);
   VbbHcc_tags_H_dR_stack_4->SetBinError(26,4.375489);
   VbbHcc_tags_H_dR_stack_4->SetBinError(27,2.515359);
   VbbHcc_tags_H_dR_stack_4->SetBinError(28,2.276232);
   VbbHcc_tags_H_dR_stack_4->SetBinError(29,1.936104);
   VbbHcc_tags_H_dR_stack_4->SetBinError(30,0.9440851);
   VbbHcc_tags_H_dR_stack_4->SetBinError(31,0.9561002);
   VbbHcc_tags_H_dR_stack_4->SetEntries(14509);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_5 = new TH1D("VbbHcc_tags_H_dR_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(3,11.83948);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(4,5.626423);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(5,6.385683);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(6,5.143794);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(7,6.013947);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(8,3.149828);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(9,3.970462);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(10,4.314955);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(11,5.554663);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(12,6.845878);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(13,7.762631);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(14,5.722576);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(15,10.16168);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(16,9.123767);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(17,9.715914);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(18,8.117115);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(19,8.369009);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(20,8.816432);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(21,4.052669);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(22,4.26376);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(23,2.353383);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(24,2.265913);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(25,2.809915);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(26,1.280427);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(27,2.075002);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(28,7.719321);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(29,1.011169);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(30,0.6999737);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(31,0.3955592);
   VbbHcc_tags_H_dR_stack_5->SetBinError(3,5.274272);
   VbbHcc_tags_H_dR_stack_5->SetBinError(4,0.7654282);
   VbbHcc_tags_H_dR_stack_5->SetBinError(5,1.401593);
   VbbHcc_tags_H_dR_stack_5->SetBinError(6,1.193415);
   VbbHcc_tags_H_dR_stack_5->SetBinError(7,1.483572);
   VbbHcc_tags_H_dR_stack_5->SetBinError(8,0.5146984);
   VbbHcc_tags_H_dR_stack_5->SetBinError(9,1.199416);
   VbbHcc_tags_H_dR_stack_5->SetBinError(10,0.9375545);
   VbbHcc_tags_H_dR_stack_5->SetBinError(11,1.104397);
   VbbHcc_tags_H_dR_stack_5->SetBinError(12,1.362003);
   VbbHcc_tags_H_dR_stack_5->SetBinError(13,1.207875);
   VbbHcc_tags_H_dR_stack_5->SetBinError(14,0.9894813);
   VbbHcc_tags_H_dR_stack_5->SetBinError(15,1.852943);
   VbbHcc_tags_H_dR_stack_5->SetBinError(16,1.66629);
   VbbHcc_tags_H_dR_stack_5->SetBinError(17,1.744889);
   VbbHcc_tags_H_dR_stack_5->SetBinError(18,1.348435);
   VbbHcc_tags_H_dR_stack_5->SetBinError(19,1.6976);
   VbbHcc_tags_H_dR_stack_5->SetBinError(20,1.823604);
   VbbHcc_tags_H_dR_stack_5->SetBinError(21,0.9555858);
   VbbHcc_tags_H_dR_stack_5->SetBinError(22,1.189699);
   VbbHcc_tags_H_dR_stack_5->SetBinError(23,0.4214418);
   VbbHcc_tags_H_dR_stack_5->SetBinError(24,0.5628857);
   VbbHcc_tags_H_dR_stack_5->SetBinError(25,0.9146445);
   VbbHcc_tags_H_dR_stack_5->SetBinError(26,0.3914806);
   VbbHcc_tags_H_dR_stack_5->SetBinError(27,0.8806431);
   VbbHcc_tags_H_dR_stack_5->SetBinError(28,5.673615);
   VbbHcc_tags_H_dR_stack_5->SetBinError(29,0.3307175);
   VbbHcc_tags_H_dR_stack_5->SetBinError(30,0.237104);
   VbbHcc_tags_H_dR_stack_5->SetBinError(31,0.1532624);
   VbbHcc_tags_H_dR_stack_5->SetEntries(3148);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_6 = new TH1D("VbbHcc_tags_H_dR_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(5,0.1195687);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(6,0.1335451);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(9,0.1243737);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(12,0.1152503);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(13,0.1142782);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(15,0.2077953);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(16,0.2467491);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(18,0.1234178);
   VbbHcc_tags_H_dR_stack_6->SetBinError(5,0.1195687);
   VbbHcc_tags_H_dR_stack_6->SetBinError(6,0.1335451);
   VbbHcc_tags_H_dR_stack_6->SetBinError(9,0.1243737);
   VbbHcc_tags_H_dR_stack_6->SetBinError(12,0.1152503);
   VbbHcc_tags_H_dR_stack_6->SetBinError(13,0.1142782);
   VbbHcc_tags_H_dR_stack_6->SetBinError(15,0.1514189);
   VbbHcc_tags_H_dR_stack_6->SetBinError(16,0.1746882);
   VbbHcc_tags_H_dR_stack_6->SetBinError(18,0.1234178);
   VbbHcc_tags_H_dR_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(3,0.5636597);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(4,0.26109);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,0.3482192);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,0.2772399);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(10,0.09516179);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,0.2556988);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,0.08828565);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(14,0.09078265);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(15,0.1879754);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,0.195889);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,0.3823005);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,0.1762745);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,0.4294301);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,0.09837659);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(21,0.1879639);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(24,0.101844);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(26,0.08117422);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(27,0.09049555);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(28,0.08787806);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(30,0.0686903);
   VbbHcc_tags_H_dR_stack_7->SetBinError(3,0.2314642);
   VbbHcc_tags_H_dR_stack_7->SetBinError(4,0.1507716);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,0.1745005);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,0.1603674);
   VbbHcc_tags_H_dR_stack_7->SetBinError(10,0.09516179);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,0.148425);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,0.08828565);
   VbbHcc_tags_H_dR_stack_7->SetBinError(14,0.09078265);
   VbbHcc_tags_H_dR_stack_7->SetBinError(15,0.1332554);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,0.1388659);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,0.1918884);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,0.1253516);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,0.1925586);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,0.09837659);
   VbbHcc_tags_H_dR_stack_7->SetBinError(21,0.132912);
   VbbHcc_tags_H_dR_stack_7->SetBinError(24,0.101844);
   VbbHcc_tags_H_dR_stack_7->SetBinError(26,0.08117422);
   VbbHcc_tags_H_dR_stack_7->SetBinError(27,0.09049555);
   VbbHcc_tags_H_dR_stack_7->SetBinError(28,0.08787806);
   VbbHcc_tags_H_dR_stack_7->SetBinError(30,0.0686903);
   VbbHcc_tags_H_dR_stack_7->SetEntries(45);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_8 = new TH1D("VbbHcc_tags_H_dR_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(3,1.265857);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(4,2.259589);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(5,1.469595);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(6,1.721726);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(7,0.9876961);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(8,0.5943795);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(9,0.3320463);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(10,0.6353418);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(11,0.8511496);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(12,0.5670463);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(13,0.8273189);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(14,1.835963);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(15,3.137371);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(16,2.57694);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(17,2.533093);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(18,3.386216);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(19,0.7934162);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(20,1.708534);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(21,1.948746);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(22,0.8722616);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(23,0.2387884);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(24,0.2279215);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(26,0.1768116);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(27,0.1931017);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(28,0.2147682);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(30,0.4753591);
   VbbHcc_tags_H_dR_stack_8->SetBinError(3,0.5183246);
   VbbHcc_tags_H_dR_stack_8->SetBinError(4,0.6879546);
   VbbHcc_tags_H_dR_stack_8->SetBinError(5,0.559209);
   VbbHcc_tags_H_dR_stack_8->SetBinError(6,0.6109193);
   VbbHcc_tags_H_dR_stack_8->SetBinError(7,0.4437392);
   VbbHcc_tags_H_dR_stack_8->SetBinError(8,0.3449237);
   VbbHcc_tags_H_dR_stack_8->SetBinError(9,0.2373122);
   VbbHcc_tags_H_dR_stack_8->SetBinError(10,0.3340033);
   VbbHcc_tags_H_dR_stack_8->SetBinError(11,0.4256814);
   VbbHcc_tags_H_dR_stack_8->SetBinError(12,0.3273893);
   VbbHcc_tags_H_dR_stack_8->SetBinError(13,0.425723);
   VbbHcc_tags_H_dR_stack_8->SetBinError(14,0.5899405);
   VbbHcc_tags_H_dR_stack_8->SetBinError(15,0.8191875);
   VbbHcc_tags_H_dR_stack_8->SetBinError(16,0.7197065);
   VbbHcc_tags_H_dR_stack_8->SetBinError(17,0.740301);
   VbbHcc_tags_H_dR_stack_8->SetBinError(18,0.8402381);
   VbbHcc_tags_H_dR_stack_8->SetBinError(19,0.3978378);
   VbbHcc_tags_H_dR_stack_8->SetBinError(20,0.606317);
   VbbHcc_tags_H_dR_stack_8->SetBinError(21,0.6537222);
   VbbHcc_tags_H_dR_stack_8->SetBinError(22,0.4390112);
   VbbHcc_tags_H_dR_stack_8->SetBinError(23,0.2387884);
   VbbHcc_tags_H_dR_stack_8->SetBinError(24,0.2279215);
   VbbHcc_tags_H_dR_stack_8->SetBinError(26,0.1768116);
   VbbHcc_tags_H_dR_stack_8->SetBinError(27,0.1931017);
   VbbHcc_tags_H_dR_stack_8->SetBinError(28,0.2147682);
   VbbHcc_tags_H_dR_stack_8->SetBinError(30,0.3361304);
   VbbHcc_tags_H_dR_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_9 = new TH1D("VbbHcc_tags_H_dR_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(2,0.001188163);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(3,1.083237);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(4,1.900773);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(5,1.965708);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(6,1.598831);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(7,1.126239);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(8,0.8364098);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(9,0.6542898);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(10,0.6890589);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(11,0.8247742);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(12,1.029036);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(13,1.298532);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(14,1.668689);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(15,2.11413);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(16,2.283113);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(17,2.225459);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(18,1.949759);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(19,1.450618);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(20,0.9976132);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(21,0.7649148);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(22,0.4893231);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(23,0.3312112);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(24,0.2631222);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(25,0.2648182);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(26,0.2181478);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(27,0.1972409);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(28,0.219048);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(29,0.2082114);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(30,0.1145794);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(31,0.06010931);
   VbbHcc_tags_H_dR_stack_9->SetBinError(2,0.001188163);
   VbbHcc_tags_H_dR_stack_9->SetBinError(3,0.03568003);
   VbbHcc_tags_H_dR_stack_9->SetBinError(4,0.04658299);
   VbbHcc_tags_H_dR_stack_9->SetBinError(5,0.0469849);
   VbbHcc_tags_H_dR_stack_9->SetBinError(6,0.0416473);
   VbbHcc_tags_H_dR_stack_9->SetBinError(7,0.03444711);
   VbbHcc_tags_H_dR_stack_9->SetBinError(8,0.02949333);
   VbbHcc_tags_H_dR_stack_9->SetBinError(9,0.02627963);
   VbbHcc_tags_H_dR_stack_9->SetBinError(10,0.02718068);
   VbbHcc_tags_H_dR_stack_9->SetBinError(11,0.02971075);
   VbbHcc_tags_H_dR_stack_9->SetBinError(12,0.03351702);
   VbbHcc_tags_H_dR_stack_9->SetBinError(13,0.03750984);
   VbbHcc_tags_H_dR_stack_9->SetBinError(14,0.04286608);
   VbbHcc_tags_H_dR_stack_9->SetBinError(15,0.04827117);
   VbbHcc_tags_H_dR_stack_9->SetBinError(16,0.05058678);
   VbbHcc_tags_H_dR_stack_9->SetBinError(17,0.04976706);
   VbbHcc_tags_H_dR_stack_9->SetBinError(18,0.04662954);
   VbbHcc_tags_H_dR_stack_9->SetBinError(19,0.04014062);
   VbbHcc_tags_H_dR_stack_9->SetBinError(20,0.03298587);
   VbbHcc_tags_H_dR_stack_9->SetBinError(21,0.02887646);
   VbbHcc_tags_H_dR_stack_9->SetBinError(22,0.02327466);
   VbbHcc_tags_H_dR_stack_9->SetBinError(23,0.01883977);
   VbbHcc_tags_H_dR_stack_9->SetBinError(24,0.01683814);
   VbbHcc_tags_H_dR_stack_9->SetBinError(25,0.01667824);
   VbbHcc_tags_H_dR_stack_9->SetBinError(26,0.01503623);
   VbbHcc_tags_H_dR_stack_9->SetBinError(27,0.0146976);
   VbbHcc_tags_H_dR_stack_9->SetBinError(28,0.01536047);
   VbbHcc_tags_H_dR_stack_9->SetBinError(29,0.01521257);
   VbbHcc_tags_H_dR_stack_9->SetBinError(30,0.01137162);
   VbbHcc_tags_H_dR_stack_9->SetBinError(31,0.008501541);
   VbbHcc_tags_H_dR_stack_9->SetEntries(28512);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_10 = new TH1D("VbbHcc_tags_H_dR_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(3,0.4263889);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(4,0.8251831);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(5,0.9088537);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(6,0.8434268);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(7,0.6550495);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(8,0.5107421);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(9,0.4311153);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(10,0.4005175);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(11,0.4435467);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(12,0.5331093);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(13,0.6607115);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(14,0.7362001);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(15,0.8253079);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(16,0.8709101);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(17,0.8472887);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(18,0.7695282);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(19,0.5837563);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(20,0.5000182);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(21,0.3791115);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(22,0.2777521);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(23,0.1892193);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(24,0.1703418);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(25,0.1378229);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(26,0.1424137);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(27,0.1330193);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(28,0.1005802);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(29,0.08686699);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(30,0.05095198);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(31,0.03048661);
   VbbHcc_tags_H_dR_stack_10->SetBinError(3,0.01229946);
   VbbHcc_tags_H_dR_stack_10->SetBinError(4,0.01690918);
   VbbHcc_tags_H_dR_stack_10->SetBinError(5,0.01753617);
   VbbHcc_tags_H_dR_stack_10->SetBinError(6,0.01674482);
   VbbHcc_tags_H_dR_stack_10->SetBinError(7,0.01471112);
   VbbHcc_tags_H_dR_stack_10->SetBinError(8,0.01300853);
   VbbHcc_tags_H_dR_stack_10->SetBinError(9,0.01201439);
   VbbHcc_tags_H_dR_stack_10->SetBinError(10,0.01157682);
   VbbHcc_tags_H_dR_stack_10->SetBinError(11,0.01218285);
   VbbHcc_tags_H_dR_stack_10->SetBinError(12,0.01335509);
   VbbHcc_tags_H_dR_stack_10->SetBinError(13,0.01484935);
   VbbHcc_tags_H_dR_stack_10->SetBinError(14,0.01567189);
   VbbHcc_tags_H_dR_stack_10->SetBinError(15,0.01661668);
   VbbHcc_tags_H_dR_stack_10->SetBinError(16,0.01708806);
   VbbHcc_tags_H_dR_stack_10->SetBinError(17,0.0167908);
   VbbHcc_tags_H_dR_stack_10->SetBinError(18,0.01601308);
   VbbHcc_tags_H_dR_stack_10->SetBinError(19,0.01395921);
   VbbHcc_tags_H_dR_stack_10->SetBinError(20,0.01288923);
   VbbHcc_tags_H_dR_stack_10->SetBinError(21,0.01125968);
   VbbHcc_tags_H_dR_stack_10->SetBinError(22,0.00966378);
   VbbHcc_tags_H_dR_stack_10->SetBinError(23,0.00791643);
   VbbHcc_tags_H_dR_stack_10->SetBinError(24,0.007518992);
   VbbHcc_tags_H_dR_stack_10->SetBinError(25,0.006800721);
   VbbHcc_tags_H_dR_stack_10->SetBinError(26,0.006922683);
   VbbHcc_tags_H_dR_stack_10->SetBinError(27,0.006628022);
   VbbHcc_tags_H_dR_stack_10->SetBinError(28,0.005820373);
   VbbHcc_tags_H_dR_stack_10->SetBinError(29,0.005447653);
   VbbHcc_tags_H_dR_stack_10->SetBinError(30,0.004154926);
   VbbHcc_tags_H_dR_stack_10->SetBinError(31,0.003185428);
   VbbHcc_tags_H_dR_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.008984434);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.004636889);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.006250067);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.005603249);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.00662769);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.004122407);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.002082123);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.003849515);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.002114099);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,0.008299265);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.002123896);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(18,0.0085325);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.00404955);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(20,0.002155655);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.002422398);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.002036349);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.001598357);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.002108704);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.004496037);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.003284079);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.003633261);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.003988595);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.003840496);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.00292035);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.002082123);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.002731274);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.002114099);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.004168792);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.002123896);
   VbbHcc_tags_H_dR_stack_11->SetBinError(18,0.004272009);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.002864089);
   VbbHcc_tags_H_dR_stack_11->SetBinError(20,0.002155655);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.002422398);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.002036349);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.001598357);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.002108704);
   VbbHcc_tags_H_dR_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_12 = new TH1D("VbbHcc_tags_H_dR_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(3,0.0006040001);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(4,0.001964009);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(5,0.004199541);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(6,0.002059919);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(7,0.004193356);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(8,0.002197116);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(9,0.0008872285);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(10,0.0008881688);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(11,0.001986118);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(12,0.001113523);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(13,0.001695712);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(14,0.001144642);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(15,0.001123484);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(16,0.00151545);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(17,0.001063542);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(18,0.00200459);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(19,0.001417771);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(20,0.0004542679);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(21,0.0007939662);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(22,0.0007877413);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(23,0.001197018);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(25,0.0002778119);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(26,0.0005671428);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(27,0.0002847795);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(28,0.0006585903);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(29,0.0002715638);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(31,0.0002776519);
   VbbHcc_tags_H_dR_stack_12->SetBinError(3,0.0004271618);
   VbbHcc_tags_H_dR_stack_12->SetBinError(4,0.0007484853);
   VbbHcc_tags_H_dR_stack_12->SetBinError(5,0.001092533);
   VbbHcc_tags_H_dR_stack_12->SetBinError(6,0.000780434);
   VbbHcc_tags_H_dR_stack_12->SetBinError(7,0.001085353);
   VbbHcc_tags_H_dR_stack_12->SetBinError(8,0.0007559449);
   VbbHcc_tags_H_dR_stack_12->SetBinError(9,0.0005126446);
   VbbHcc_tags_H_dR_stack_12->SetBinError(10,0.0005131891);
   VbbHcc_tags_H_dR_stack_12->SetBinError(11,0.0007517836);
   VbbHcc_tags_H_dR_stack_12->SetBinError(12,0.0005572329);
   VbbHcc_tags_H_dR_stack_12->SetBinError(13,0.0006952053);
   VbbHcc_tags_H_dR_stack_12->SetBinError(14,0.0005723446);
   VbbHcc_tags_H_dR_stack_12->SetBinError(15,0.0005618978);
   VbbHcc_tags_H_dR_stack_12->SetBinError(16,0.0006795646);
   VbbHcc_tags_H_dR_stack_12->SetBinError(17,0.000532928);
   VbbHcc_tags_H_dR_stack_12->SetBinError(18,0.0007588762);
   VbbHcc_tags_H_dR_stack_12->SetBinError(19,0.0006351431);
   VbbHcc_tags_H_dR_stack_12->SetBinError(20,0.0003217655);
   VbbHcc_tags_H_dR_stack_12->SetBinError(21,0.000459367);
   VbbHcc_tags_H_dR_stack_12->SetBinError(22,0.0004570715);
   VbbHcc_tags_H_dR_stack_12->SetBinError(23,0.0005992223);
   VbbHcc_tags_H_dR_stack_12->SetBinError(25,0.0002778119);
   VbbHcc_tags_H_dR_stack_12->SetBinError(26,0.0004015447);
   VbbHcc_tags_H_dR_stack_12->SetBinError(27,0.0002847795);
   VbbHcc_tags_H_dR_stack_12->SetBinError(28,0.0004673688);
   VbbHcc_tags_H_dR_stack_12->SetBinError(29,0.0002715638);
   VbbHcc_tags_H_dR_stack_12->SetBinError(31,0.0002776519);
   VbbHcc_tags_H_dR_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR__56 = new TH1D("VbbHcc_tags_H_dR__56","",30,0,6);
   VbbHcc_tags_H_dR__56->SetBinContent(2,5);
   VbbHcc_tags_H_dR__56->SetBinContent(3,4585);
   VbbHcc_tags_H_dR__56->SetBinContent(4,4650);
   VbbHcc_tags_H_dR__56->SetBinContent(5,3660);
   VbbHcc_tags_H_dR__56->SetBinContent(6,3405);
   VbbHcc_tags_H_dR__56->SetBinContent(7,3334);
   VbbHcc_tags_H_dR__56->SetBinContent(8,3230);
   VbbHcc_tags_H_dR__56->SetBinContent(9,3453);
   VbbHcc_tags_H_dR__56->SetBinContent(10,3523);
   VbbHcc_tags_H_dR__56->SetBinContent(11,3847);
   VbbHcc_tags_H_dR__56->SetBinContent(12,4151);
   VbbHcc_tags_H_dR__56->SetBinContent(13,4460);
   VbbHcc_tags_H_dR__56->SetBinContent(14,5074);
   VbbHcc_tags_H_dR__56->SetBinContent(15,5473);
   VbbHcc_tags_H_dR__56->SetBinContent(16,5950);
   VbbHcc_tags_H_dR__56->SetBinContent(17,5596);
   VbbHcc_tags_H_dR__56->SetBinContent(18,5212);
   VbbHcc_tags_H_dR__56->SetBinContent(19,4677);
   VbbHcc_tags_H_dR__56->SetBinContent(20,4033);
   VbbHcc_tags_H_dR__56->SetBinContent(21,3382);
   VbbHcc_tags_H_dR__56->SetBinContent(22,2739);
   VbbHcc_tags_H_dR__56->SetBinContent(23,2199);
   VbbHcc_tags_H_dR__56->SetBinContent(24,1768);
   VbbHcc_tags_H_dR__56->SetBinContent(25,1396);
   VbbHcc_tags_H_dR__56->SetBinContent(26,1090);
   VbbHcc_tags_H_dR__56->SetBinContent(27,968);
   VbbHcc_tags_H_dR__56->SetBinContent(28,762);
   VbbHcc_tags_H_dR__56->SetBinContent(29,679);
   VbbHcc_tags_H_dR__56->SetBinContent(30,490);
   VbbHcc_tags_H_dR__56->SetBinContent(31,383);
   VbbHcc_tags_H_dR__56->SetEntries(94203);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR__56->SetLineColor(ci);
   VbbHcc_tags_H_dR__56->SetLineWidth(2);
   VbbHcc_tags_H_dR__56->SetMarkerStyle(20);
   VbbHcc_tags_H_dR__56->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR__56->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR__56->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__56->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__56->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__56->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__56->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__56->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__56->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__56->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR__56->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__56->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__56->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__56->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__56->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__56->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_fx1041[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fy1041[30] = {
   0,
   0.5363176,
   9875.527,
   6450.865,
   4635.99,
   5428.036,
   3788.459,
   3625.137,
   3846.184,
   5818.677,
   4956.958,
   5894.543,
   10005.06,
   8305.323,
   7544.407,
   10962.82,
   8031.933,
   8046.348,
   6869.713,
   6975.744,
   4919.082,
   3628.879,
   3849.282,
   1543.826,
   2668.076,
   1663.166,
   1087.352,
   658.5441,
   899.1806,
   915.4591};
   Double_t Graph_from_VbbHcc_tags_H_dR_fex1041[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fey1041[30] = {
   0,
   0.1659591,
   1581.414,
   933.8254,
   710.6737,
   832.5246,
   663.3961,
   594.5831,
   670.3278,
   1285.456,
   1388.944,
   863.1984,
   1997.38,
   1615.787,
   940.7261,
   1804.746,
   1241.034,
   1016.603,
   900.1954,
   1369.8,
   1202.856,
   675.9784,
   1491.867,
   299.6983,
   695.0572,
   493.0817,
   339.0241,
   231.5213,
   326.1365,
   375.3112};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_fx1041,Graph_from_VbbHcc_tags_H_dR_fy1041,Graph_from_VbbHcc_tags_H_dR_fex1041,Graph_from_VbbHcc_tags_H_dR_fey1041);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR1041 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR1041","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetMinimum(14.04433);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetMaximum(14044.33);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR1041);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR","MC unc. (stat.)","fl");

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
   H_dR_tags_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__57 = new TH1D("data_mc_ratio__57","",30,0,6);
   data_mc_ratio__57->SetBinContent(2,9.322834);
   data_mc_ratio__57->SetBinContent(3,0.464279);
   data_mc_ratio__57->SetBinContent(4,0.7208335);
   data_mc_ratio__57->SetBinContent(5,0.7894754);
   data_mc_ratio__57->SetBinContent(6,0.6272987);
   data_mc_ratio__57->SetBinContent(7,0.8800412);
   data_mc_ratio__57->SetBinContent(8,0.8910009);
   data_mc_ratio__57->SetBinContent(9,0.8977729);
   data_mc_ratio__57->SetBinContent(10,0.6054641);
   data_mc_ratio__57->SetBinContent(11,0.7760808);
   data_mc_ratio__57->SetBinContent(12,0.7042107);
   data_mc_ratio__57->SetBinContent(13,0.4457744);
   data_mc_ratio__57->SetBinContent(14,0.6109335);
   data_mc_ratio__57->SetBinContent(15,0.725438);
   data_mc_ratio__57->SetBinContent(16,0.5427434);
   data_mc_ratio__57->SetBinContent(17,0.6967189);
   data_mc_ratio__57->SetBinContent(18,0.6477473);
   data_mc_ratio__57->SetBinContent(19,0.6808145);
   data_mc_ratio__57->SetBinContent(20,0.5781462);
   data_mc_ratio__57->SetBinContent(21,0.6875267);
   data_mc_ratio__57->SetBinContent(22,0.7547785);
   data_mc_ratio__57->SetBinContent(23,0.5712754);
   data_mc_ratio__57->SetBinContent(24,1.145207);
   data_mc_ratio__57->SetBinContent(25,0.5232235);
   data_mc_ratio__57->SetBinContent(26,0.6553764);
   data_mc_ratio__57->SetBinContent(27,0.8902358);
   data_mc_ratio__57->SetBinContent(28,1.157098);
   data_mc_ratio__57->SetBinContent(29,0.7551319);
   data_mc_ratio__57->SetBinContent(30,0.5352505);
   data_mc_ratio__57->SetBinContent(31,0.2714098);
   data_mc_ratio__57->SetBinError(2,4.169298);
   data_mc_ratio__57->SetBinError(3,0.006856609);
   data_mc_ratio__57->SetBinError(4,0.01057082);
   data_mc_ratio__57->SetBinError(5,0.01304963);
   data_mc_ratio__57->SetBinError(6,0.01075018);
   data_mc_ratio__57->SetBinError(7,0.01524124);
   data_mc_ratio__57->SetBinError(8,0.0156775);
   data_mc_ratio__57->SetBinError(9,0.01527806);
   data_mc_ratio__57->SetBinError(10,0.01020075);
   data_mc_ratio__57->SetBinError(11,0.01251255);
   data_mc_ratio__57->SetBinError(12,0.01093015);
   data_mc_ratio__57->SetBinError(13,0.006674946);
   data_mc_ratio__57->SetBinError(14,0.00857667);
   data_mc_ratio__57->SetBinError(15,0.009805903);
   data_mc_ratio__57->SetBinError(16,0.007036166);
   data_mc_ratio__57->SetBinError(17,0.009313625);
   data_mc_ratio__57->SetBinError(18,0.008972292);
   data_mc_ratio__57->SetBinError(19,0.009955088);
   data_mc_ratio__57->SetBinError(20,0.009103818);
   data_mc_ratio__57->SetBinError(21,0.01182232);
   data_mc_ratio__57->SetBinError(22,0.01442193);
   data_mc_ratio__57->SetBinError(23,0.0121824);
   data_mc_ratio__57->SetBinError(24,0.02723596);
   data_mc_ratio__57->SetBinError(25,0.01400376);
   data_mc_ratio__57->SetBinError(26,0.01985078);
   data_mc_ratio__57->SetBinError(27,0.02861326);
   data_mc_ratio__57->SetBinError(28,0.04191723);
   data_mc_ratio__57->SetBinError(29,0.0289793);
   data_mc_ratio__57->SetBinError(30,0.02418015);
   data_mc_ratio__57->SetBinError(31,0.1024859);
   data_mc_ratio__57->SetMinimum(0.4);
   data_mc_ratio__57->SetMaximum(1.6);
   data_mc_ratio__57->SetEntries(32.30266);
   data_mc_ratio__57->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__57->SetLineColor(ci);
   data_mc_ratio__57->SetLineWidth(2);
   data_mc_ratio__57->SetMarkerStyle(20);
   data_mc_ratio__57->SetMarkerSize(1.2);
   data_mc_ratio__57->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__57->GetXaxis()->SetRange(1,31);
   data_mc_ratio__57->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__57->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__57->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__57->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__57->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__57->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__57->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__57->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__57->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__57->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__57->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__57->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__57->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__57->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__57->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__57->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__57->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1042[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1042[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1042[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1042[30] = {
   0,
   0.3094418,
   0.1601347,
   0.1447597,
   0.1532949,
   0.1533749,
   0.1751097,
   0.1640167,
   0.1742838,
   0.220919,
   0.2802008,
   0.1464403,
   0.199637,
   0.1945483,
   0.1246919,
   0.1646242,
   0.1545125,
   0.1263434,
   0.1310383,
   0.1963662,
   0.2445285,
   0.1862775,
   0.3875702,
   0.194127,
   0.2605088,
   0.2964717,
   0.3117886,
   0.3515654,
   0.3627042,
   0.4099704};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1042,Graph_from_mc_statistical_error_fy1042,Graph_from_mc_statistical_error_fex1042,Graph_from_mc_statistical_error_fey1042);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1042 = new TH1F("Graph_Graph_from_mc_statistical_error1042","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1042->SetMinimum(0.5080355);
   Graph_Graph_from_mc_statistical_error1042->SetMaximum(1.491964);
   Graph_Graph_from_mc_statistical_error1042->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1042->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1042);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
