void H_dR_Bj0_tags_16()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_16/H_dR_Bj0_tags_16
//=========  (Thu Aug  3 12:23:23 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_16 = new TCanvas("H_dR_Bj0_tags_16", "H_dR_Bj0_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_16->SetHighLightColor(2);
   H_dR_Bj0_tags_16->Range(0,0,1,1);
   H_dR_Bj0_tags_16->SetFillColor(0);
   H_dR_Bj0_tags_16->SetFillStyle(4000);
   H_dR_Bj0_tags_16->SetBorderMode(0);
   H_dR_Bj0_tags_16->SetBorderSize(2);
   H_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-62.37441,6.314516,62322.03);
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
   st->SetMaximum(53412.95);
   
   TH1F *st_stack_41 = new TH1F("st_stack_41","",30,0,6);
   st_stack_41->SetMinimum(0.01);
   st_stack_41->SetMaximum(56083.59);
   st_stack_41->SetDirectory(0);
   st_stack_41->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_41->SetLineColor(ci);
   st_stack_41->GetXaxis()->SetRange(1,30);
   st_stack_41->GetXaxis()->SetLabelFont(42);
   st_stack_41->GetXaxis()->SetLabelSize(0.035);
   st_stack_41->GetXaxis()->SetTitleSize(0.035);
   st_stack_41->GetXaxis()->SetTitleFont(42);
   st_stack_41->GetYaxis()->SetTitle("Events/0.2");
   st_stack_41->GetYaxis()->SetLabelFont(42);
   st_stack_41->GetYaxis()->SetLabelSize(0.05);
   st_stack_41->GetYaxis()->SetTitleSize(0.057);
   st_stack_41->GetYaxis()->SetTitleOffset(1.2);
   st_stack_41->GetYaxis()->SetTitleFont(42);
   st_stack_41->GetZaxis()->SetLabelFont(42);
   st_stack_41->GetZaxis()->SetLabelSize(0.035);
   st_stack_41->GetZaxis()->SetTitleSize(0.035);
   st_stack_41->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_41);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,3525.575);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,20230.7);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,21062.5);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,22099.48);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,12307.93);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,11793.66);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,11005.96);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,9556.688);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,8008.015);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,6026.57);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,6710.852);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,8056.995);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,5736.667);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,5492.519);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,5457.427);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,3984.422);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,1706.005);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,1986.373);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,2235.264);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,615.2877);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,770.3007);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,745.0317);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,1396.493);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,318.4762);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,1090.873);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,206.3662);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(27,336.2194);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(28,378.1366);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(29,10.70091);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(30,10.97352);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(31,13.40275);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,502.3633);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,2545.488);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,2305.593);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,3301.416);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,1448.835);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,1951.626);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,1913.318);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,2254.521);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,1191.89);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,989.7243);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,1686.844);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,1790.405);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,1640.15);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,1051.269);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,1618.531);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,1524.588);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,404.5271);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,550.2513);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,611.969);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,92.02374);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,282.9712);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,281.5382);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,541.879);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,70.73795);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,470.3468);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,54.46282);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(27,270.0861);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(28,271.2289);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(29,6.894694);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(30,6.907423);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(31,7.728803);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(9717);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,17.63985);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,80.53893);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,85.67871);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,82.96647);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,62.82172);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,58.61352);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,42.69989);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,36.14724);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,31.84551);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,32.57759);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,25.98665);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,26.66092);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,21.63551);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,19.31723);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,22.96548);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,18.79882);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,14.73835);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,12.04941);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,7.996619);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,6.986954);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,6.271762);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,5.966828);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,5.00683);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,3.00997);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,2.56213);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,2.181758);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,1.11925);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,1.210226);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,0.8533622);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,0.1959114);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,1.317636);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,1.712386);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,3.645856);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,3.649192);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,3.680401);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,3.127049);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,3.057477);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,2.514049);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,2.366337);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,2.172887);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,2.259263);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,1.912896);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,2.012707);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,1.817915);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,1.647335);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,1.880068);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,1.711696);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,1.470959);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,1.35963);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,1.069489);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,0.9541999);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,0.8735344);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,0.9898706);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.9011349);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.6103655);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.5949421);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.5293687);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.4125796);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,0.4157524);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,0.3960912);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,0.09814267);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,0.4884039);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(9491);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(1,273.7161);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(2,1310.707);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(3,1731.144);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(4,1588.848);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(5,1328.248);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(6,1064.401);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(7,852.0042);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(8,721.9546);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(9,631.8569);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(10,577.6861);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(11,529.2054);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(12,475.9063);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(13,438.3539);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(14,396.2666);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(15,336.8797);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(16,304.6123);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(17,244.1404);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(18,197.7538);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(19,167.7343);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(20,135.31);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(21,108.724);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(22,85.31086);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(23,70.62156);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(24,54.53283);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(25,40.40937);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(26,26.45366);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(27,21.97588);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(28,14.26251);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(29,10.45866);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(30,5.507394);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(31,9.986393);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(1,4.129296);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(2,9.056644);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(3,10.43718);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(4,10.01197);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(5,9.157668);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(6,8.190883);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(7,7.327313);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(8,6.741224);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(9,6.30511);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(10,6.03076);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(11,5.767655);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(12,5.484862);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(13,5.259612);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(14,5.005146);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(15,4.602433);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(16,4.372417);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(17,3.919031);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(18,3.515066);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(19,3.244609);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(20,2.912379);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(21,2.607992);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(22,2.308618);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(23,2.097982);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(24,1.838037);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(25,1.587228);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(26,1.286272);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(27,1.170657);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(28,0.9416674);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(29,0.8069125);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(30,0.576568);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(31,0.7745527);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetEntries(225965);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(1,53.44917);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(2,220.1264);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(3,251.7838);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(4,234.7119);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(5,176.0835);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(6,140.0664);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(7,124.4194);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(8,99.17732);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(9,80.53855);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(10,82.74535);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(11,76.54844);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(12,72.64147);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(13,68.24737);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(14,65.43903);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(15,52.12103);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(16,43.72764);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(17,38.8811);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(18,29.32303);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(19,20.18145);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(20,18.186);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(21,14.10033);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(22,10.39674);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(23,12.40722);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(24,6.468168);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(25,8.358718);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(26,4.116567);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(27,4.072635);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(28,1.325053);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(29,0.8904197);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(30,0.9036367);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(31,0.4111776);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(1,4.476253);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(2,9.781219);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(3,11.15368);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(4,14.02239);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(5,12.06649);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(6,9.947949);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(7,10.08512);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(8,8.05226);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(9,5.821265);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(10,7.398482);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(11,7.320617);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(12,6.784541);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(13,6.713273);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(14,6.706432);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(15,5.38913);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(16,5.239541);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(17,5.778666);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(18,4.978083);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(19,3.181811);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(20,1.829543);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(21,2.989334);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(22,1.294496);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(23,2.959299);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(24,1.020959);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(25,2.859305);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(26,0.8030944);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(27,0.869234);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(28,0.3891138);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(29,0.3460042);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(30,0.4244052);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(31,0.1682036);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetEntries(14953);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(1,12.64608);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(2,22.83634);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(3,18.12536);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(4,15.66289);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(5,10.34922);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(6,12.15772);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(7,7.82428);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(8,8.94436);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(9,10.04866);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(10,5.192337);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(11,5.845375);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(12,7.545777);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(13,4.006094);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(14,4.213903);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(15,8.135527);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(16,3.035963);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(17,6.248978);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(18,5.100134);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(19,3.824205);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(20,1.712683);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(21,1.20426);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(22,8.398819);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(23,3.245551);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(24,0.6818465);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(25,1.06242);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(26,0.7515353);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(27,0.2211167);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(28,0.2504978);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(29,0.1803073);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(30,0.1085564);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(31,0.1551851);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(1,6.112017);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(2,2.724253);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(3,2.2783);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(4,2.389944);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(5,1.993196);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(6,2.046983);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(7,1.311124);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(8,1.69908);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(9,2.021818);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(10,1.188717);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(11,1.225763);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(12,1.688236);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(13,0.6554622);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(14,0.7074087);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(15,2.179255);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(16,1.100454);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(17,1.866079);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(18,1.594426);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(19,1.242447);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(20,0.3990533);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(21,0.3146253);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(22,6.165794);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(23,1.519517);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(24,0.2617398);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(25,0.4286255);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(26,0.2711905);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(27,0.123171);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(28,0.1268524);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(29,0.1004465);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(30,0.07757472);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(31,0.1469733);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetEntries(3420);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(2,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(3,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(4,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(7,0.4031079);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(8,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(10,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(12,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(15,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(2,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(3,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(4,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(6,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(7,0.2327345);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(8,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(10,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(12,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(15,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(1,0.3271759);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(2,1.090586);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(3,0.5452932);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(4,0.2181173);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(5,0.1090586);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(6,0.3271759);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(8,0.3271759);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(9,0.3271759);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(10,0.3271759);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(11,0.2181173);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(12,0.3271759);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(14,0.4362346);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(15,0.1090586);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(16,0.1090586);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(17,0.1090586);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(19,0.1090586);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(21,0.1090586);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(25,0.1090586);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(1,0.1888951);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(2,0.3448737);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(3,0.2438625);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(4,0.1542322);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(5,0.1090586);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(6,0.1888951);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(8,0.1888951);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(9,0.1888951);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(10,0.1888951);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(11,0.1542322);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(12,0.1888951);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(14,0.2181173);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(15,0.1090586);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(16,0.1090586);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(17,0.1090586);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(19,0.1090586);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(21,0.1090586);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(25,0.1090586);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetEntries(48);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(1,0.2432072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(2,4.864143);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(3,6.8098);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(4,6.566593);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(5,3.161693);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(6,3.161693);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(7,2.675279);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(8,1.216036);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(9,1.216036);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(10,3.161693);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(11,1.70245);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(12,1.70245);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(13,0.9728286);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(14,1.216036);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(15,0.4864143);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(16,0.4864143);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(17,0.7296215);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(18,0.2432072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(19,0.4864143);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(20,0.4864143);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(23,0.2432072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(25,0.2432072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(1,0.2432072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(2,1.087655);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(3,1.286931);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(4,1.263741);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(5,0.8768959);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(6,0.8768959);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(7,0.8066269);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(8,0.5438277);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(9,0.5438277);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(10,0.8768959);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(11,0.6434656);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(12,0.6434656);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(13,0.4864143);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(14,0.5438277);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(15,0.3439469);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(16,0.3439469);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(17,0.4212471);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(18,0.2432072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(19,0.3439469);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(20,0.3439469);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(23,0.2432072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(25,0.2432072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetEntries(173);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(1,0.9878706);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(2,4.410382);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(3,5.609841);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(4,4.909126);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(5,3.767373);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(6,2.712179);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(7,2.198321);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(8,1.775144);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(9,1.673472);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(10,1.711943);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(11,1.602027);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(12,1.522337);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(13,1.457762);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(14,1.200833);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(15,0.9521479);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(16,0.7240721);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(17,0.5221013);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(18,0.3503574);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(19,0.2953994);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(20,0.2005968);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(21,0.138769);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(22,0.1277774);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(23,0.09342865);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(24,0.06732359);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(25,0.05633198);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(26,0.04808828);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(27,0.03709667);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(28,0.008243705);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(29,0.008243705);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(30,0.001373951);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(31,0.004121852);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(1,0.03684136);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(2,0.07784374);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(3,0.0877932);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(4,0.08212733);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(5,0.07194571);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(6,0.06104425);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(7,0.05495803);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(8,0.04938584);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(9,0.04795069);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(10,0.04849871);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(11,0.04691594);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(12,0.0457342);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(13,0.04475369);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(14,0.04061878);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(15,0.03616911);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(16,0.03154107);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(17,0.02678323);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(18,0.02194023);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(19,0.02014607);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(20,0.01660151);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(21,0.01380803);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(22,0.0132499);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(23,0.01132989);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(24,0.009617655);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(25,0.008797578);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(26,0.008128402);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(27,0.007139258);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(28,0.003365478);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(29,0.003365478);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(30,0.001373951);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(31,0.002379753);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetEntries(28512);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(1,0.4038761);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(2,1.999688);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(3,2.609441);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(4,2.294002);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(5,1.733302);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(6,1.25352);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(7,0.968515);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(8,0.8374701);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(9,0.7386493);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(10,0.666324);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(11,0.673843);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(12,0.6018757);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(13,0.5438722);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(14,0.472979);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(15,0.3992215);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(16,0.3193772);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(17,0.2624479);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(18,0.1883323);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(19,0.1485892);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(20,0.1113524);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(21,0.08915351);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(22,0.07304143);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(23,0.06158395);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(24,0.04547187);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(25,0.02971784);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(26,0.01790231);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(27,0.01467989);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(28,0.007160924);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(29,0.006086786);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(30,0.001432185);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(31,0.003580462);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(1,0.01202524);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(2,0.02675782);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(3,0.03056633);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(4,0.02865936);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(5,0.02491189);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(6,0.02118533);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(7,0.01862185);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(8,0.01731626);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(9,0.01626255);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(10,0.01544587);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(11,0.01553277);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(12,0.01467989);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(13,0.01395462);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(14,0.01301339);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(15,0.01195574);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(16,0.01069354);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(17,0.009693733);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(18,0.008211679);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(19,0.007293956);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(20,0.006314214);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(21,0.005649874);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(22,0.005113923);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(23,0.004695732);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(24,0.004034976);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(25,0.003261956);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(26,0.002531769);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(27,0.002292614);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(28,0.001601231);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(29,0.001476262);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(30,0.0007160924);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(31,0.001132242);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(2,0.01641004);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(3,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(4,0.03008508);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(5,0.008205022);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(6,0.008205022);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(7,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(9,0.005470015);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(16,0.008205022);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(1,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(2,0.006699373);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(3,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(4,0.009070994);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(5,0.004737172);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(6,0.004737172);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(7,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(9,0.003867885);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(10,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(13,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(14,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(15,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(16,0.004737172);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(18,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(1,0.001786329);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(2,0.004644456);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(3,0.00857438);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(4,0.008217114);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(5,0.003929924);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(6,0.005358988);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(7,0.001786329);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(8,0.001071798);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(9,0.001429063);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(10,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(11,0.001071798);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(12,0.001071798);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(13,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(14,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(15,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(17,0.001429063);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(19,0.001071798);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(21,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(27,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(1,0.0007988707);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(2,0.00128814);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(3,0.001750238);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(4,0.001713387);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(5,0.001184917);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(6,0.001383685);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(7,0.0007988707);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(8,0.0006188026);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(9,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(10,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(11,0.0006188026);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(12,0.0006188026);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(13,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(14,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(15,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(17,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(19,0.0006188026);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(21,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(27,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj0__111 = new TH1D("VbbHcc_tags_H_dR_Bj0__111","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(1,3350);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(2,11622);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(3,11521);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(4,9687);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(5,7951);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(6,6624);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(7,5746);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(8,4871);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(9,4293);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(10,3859);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(11,3592);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(12,3389);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(13,3081);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(14,2789);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(15,2573);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(16,2259);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(17,1849);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(18,1501);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(19,1201);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(20,1089);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(21,904);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(22,655);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(23,563);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(24,424);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(25,343);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(26,283);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(27,166);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(28,138);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(29,88);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(30,47);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(31,87);
   VbbHcc_tags_H_dR_Bj0__111->SetEntries(96574);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0__111->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0__111->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj0__111->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj0__111->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj0__111->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0__111->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__111->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__111->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__111->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0__111->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__111->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__111->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__111->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fx1081[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fy1081[30] = {
   3884.993,
   21877.43,
   23164.96,
   24035.83,
   13894.22,
   13076.5,
   12039.16,
   10427.2,
   8766.267,
   6730.776,
   7352.636,
   8644.039,
   6271.887,
   5981.085,
   5879.613,
   4356.244,
   2011.639,
   2231.384,
   2436.041,
   778.2821,
   900.9384,
   855.3057,
   1488.173,
   383.2818,
   1143.704,
   239.9357,
   363.6608,
   395.2003,
   23.09798,
   17.69183};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fex1081[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fey1081[30] = {
   502.4404,
   2545.527,
   2305.648,
   3301.464,
   1448.919,
   1951.672,
   1913.361,
   2254.548,
   1191.924,
   989.7741,
   1686.871,
   1790.428,
   1640.173,
   1051.304,
   1618.549,
   1524.605,
   404.5946,
   550.2891,
   611.9882,
   92.09445,
   283.0005,
   281.6199,
   541.8941,
   70.77231,
   470.3588,
   54.48717,
   270.0904,
   271.2312,
   6.962372,
   6.945553};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj0_fx1081,Graph_from_VbbHcc_tags_H_dR_Bj0_fy1081,Graph_from_VbbHcc_tags_H_dR_Bj0_fex1081,Graph_from_VbbHcc_tags_H_dR_Bj0_fey1081);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetMinimum(9.671646);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetMaximum(30069.94);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj0","MC unc. (stat.)","fl");

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
   H_dR_Bj0_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__112 = new TH1D("data_mc_ratio__112","",30,0,6);
   data_mc_ratio__112->SetBinContent(1,0.8622925);
   data_mc_ratio__112->SetBinContent(2,0.5312324);
   data_mc_ratio__112->SetBinContent(3,0.4973461);
   data_mc_ratio__112->SetBinContent(4,0.4030234);
   data_mc_ratio__112->SetBinContent(5,0.5722525);
   data_mc_ratio__112->SetBinContent(6,0.5065575);
   data_mc_ratio__112->SetBinContent(7,0.4772758);
   data_mc_ratio__112->SetBinContent(8,0.4671435);
   data_mc_ratio__112->SetBinContent(9,0.4897182);
   data_mc_ratio__112->SetBinContent(10,0.5733365);
   data_mc_ratio__112->SetBinContent(11,0.4885323);
   data_mc_ratio__112->SetBinContent(12,0.3920621);
   data_mc_ratio__112->SetBinContent(13,0.4912397);
   data_mc_ratio__112->SetBinContent(14,0.4663034);
   data_mc_ratio__112->SetBinContent(15,0.4376138);
   data_mc_ratio__112->SetBinContent(16,0.518566);
   data_mc_ratio__112->SetBinContent(17,0.9191511);
   data_mc_ratio__112->SetBinContent(18,0.6726766);
   data_mc_ratio__112->SetBinContent(19,0.4930131);
   data_mc_ratio__112->SetBinContent(20,1.399236);
   data_mc_ratio__112->SetBinContent(21,1.003398);
   data_mc_ratio__112->SetBinContent(22,0.765808);
   data_mc_ratio__112->SetBinContent(23,0.3783163);
   data_mc_ratio__112->SetBinContent(24,1.106236);
   data_mc_ratio__112->SetBinContent(25,0.2999028);
   data_mc_ratio__112->SetBinContent(26,1.179482);
   data_mc_ratio__112->SetBinContent(27,0.4564693);
   data_mc_ratio__112->SetBinContent(28,0.34919);
   data_mc_ratio__112->SetBinContent(29,3.809856);
   data_mc_ratio__112->SetBinContent(30,2.656594);
   data_mc_ratio__112->SetBinContent(31,3.44134);
   data_mc_ratio__112->SetBinError(1,0.01489815);
   data_mc_ratio__112->SetBinError(2,0.004927698);
   data_mc_ratio__112->SetBinError(3,0.004633547);
   data_mc_ratio__112->SetBinError(4,0.004094827);
   data_mc_ratio__112->SetBinError(5,0.006417661);
   data_mc_ratio__112->SetBinError(6,0.006223985);
   data_mc_ratio__112->SetBinError(7,0.006296317);
   data_mc_ratio__112->SetBinError(8,0.006693315);
   data_mc_ratio__112->SetBinError(9,0.007474218);
   data_mc_ratio__112->SetBinError(10,0.009229374);
   data_mc_ratio__112->SetBinError(11,0.008151267);
   data_mc_ratio__112->SetBinError(12,0.006734713);
   data_mc_ratio__112->SetBinError(13,0.008850089);
   data_mc_ratio__112->SetBinError(14,0.008829666);
   data_mc_ratio__112->SetBinError(15,0.008627225);
   data_mc_ratio__112->SetBinError(16,0.01091053);
   data_mc_ratio__112->SetBinError(17,0.02137561);
   data_mc_ratio__112->SetBinError(18,0.01736265);
   data_mc_ratio__112->SetBinError(19,0.01422614);
   data_mc_ratio__112->SetBinError(20,0.04240108);
   data_mc_ratio__112->SetBinError(21,0.03337253);
   data_mc_ratio__112->SetBinError(22,0.0299226);
   data_mc_ratio__112->SetBinError(23,0.01594413);
   data_mc_ratio__112->SetBinError(24,0.05372355);
   data_mc_ratio__112->SetBinError(25,0.01619323);
   data_mc_ratio__112->SetBinError(26,0.07011295);
   data_mc_ratio__112->SetBinError(27,0.03542889);
   data_mc_ratio__112->SetBinError(28,0.02972503);
   data_mc_ratio__112->SetBinError(29,0.4061321);
   data_mc_ratio__112->SetBinError(30,0.3875041);
   data_mc_ratio__112->SetBinError(31,1.122255);
   data_mc_ratio__112->SetMinimum(0.4);
   data_mc_ratio__112->SetMaximum(1.6);
   data_mc_ratio__112->SetEntries(161.2052);
   data_mc_ratio__112->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__112->SetLineColor(ci);
   data_mc_ratio__112->SetLineWidth(2);
   data_mc_ratio__112->SetMarkerStyle(20);
   data_mc_ratio__112->SetMarkerSize(1.2);
   data_mc_ratio__112->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__112->GetXaxis()->SetRange(1,30);
   data_mc_ratio__112->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__112->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__112->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__112->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__112->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__112->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__112->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__112->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__112->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__112->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__112->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__112->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__112->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__112->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__112->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__112->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__112->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1082[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1082[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1082[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1082[30] = {
   0.1293285,
   0.116354,
   0.09953171,
   0.1373559,
   0.1042822,
   0.1492503,
   0.1589281,
   0.2162179,
   0.1359672,
   0.147052,
   0.229424,
   0.2071286,
   0.2615119,
   0.1757714,
   0.2752815,
   0.3499814,
   0.2011268,
   0.2466133,
   0.2512225,
   0.1183304,
   0.3141175,
   0.3292622,
   0.3641339,
   0.1846482,
   0.4112592,
   0.2270907,
   0.7426986,
   0.6863131,
   0.3014277,
   0.3925854};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1082,Graph_from_mc_statistical_error_fy1082,Graph_from_mc_statistical_error_fex1082,Graph_from_mc_statistical_error_fey1082);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1082 = new TH1F("Graph_Graph_from_mc_statistical_error1082","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1082->SetMinimum(0.1087617);
   Graph_Graph_from_mc_statistical_error1082->SetMaximum(1.891238);
   Graph_Graph_from_mc_statistical_error1082->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1082->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1082->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1082->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1082);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_tags_16->cd();
   H_dR_Bj0_tags_16->Modified();
   H_dR_Bj0_tags_16->cd();
   H_dR_Bj0_tags_16->SetSelected(H_dR_Bj0_tags_16);
}
