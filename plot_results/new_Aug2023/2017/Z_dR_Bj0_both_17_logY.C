void Z_dR_Bj0_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_17/Z_dR_Bj0_both_17
//=========  (Tue Aug 22 09:18:40 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_17 = new TCanvas("Z_dR_Bj0_both_17", "Z_dR_Bj0_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_17->SetHighLightColor(2);
   Z_dR_Bj0_both_17->Range(0,0,1,1);
   Z_dR_Bj0_both_17->SetFillColor(0);
   Z_dR_Bj0_both_17->SetFillStyle(4000);
   Z_dR_Bj0_both_17->SetBorderMode(0);
   Z_dR_Bj0_both_17->SetBorderSize(2);
   Z_dR_Bj0_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.874395,6.314516,12.53909);
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
   st->SetMaximum(2.849687e+10);
   
   TH1F *st_stack_242 = new TH1F("st_stack_242","",30,0,6);
   st_stack_242->SetMinimum(0.001383624);
   st_stack_242->SetMaximum(9.94814e+10);
   st_stack_242->SetDirectory(0);
   st_stack_242->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_242->SetLineColor(ci);
   st_stack_242->GetXaxis()->SetRange(1,30);
   st_stack_242->GetXaxis()->SetLabelFont(42);
   st_stack_242->GetXaxis()->SetLabelSize(0.035);
   st_stack_242->GetXaxis()->SetTitleSize(0.035);
   st_stack_242->GetXaxis()->SetTitleFont(42);
   st_stack_242->GetYaxis()->SetTitle("Events/0.2");
   st_stack_242->GetYaxis()->SetLabelFont(42);
   st_stack_242->GetYaxis()->SetLabelSize(0.05);
   st_stack_242->GetYaxis()->SetTitleSize(0.057);
   st_stack_242->GetYaxis()->SetTitleOffset(1.2);
   st_stack_242->GetYaxis()->SetTitleFont(42);
   st_stack_242->GetZaxis()->SetLabelFont(42);
   st_stack_242->GetZaxis()->SetLabelSize(0.035);
   st_stack_242->GetZaxis()->SetTitleSize(0.035);
   st_stack_242->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_242);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,8500.567);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,27339.88);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,46924);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,23311.34);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,13551.76);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,14642.29);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,7741.414);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,9587.674);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,7470.667);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,23718.46);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,4712.716);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,4605.823);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,3165.212);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,3035.141);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,3211.098);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,2240.773);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,1839.766);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,848.915);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,1389.652);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,2442.696);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,1647.671);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,785.0896);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(23,1098.179);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,464.1458);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,209.2472);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(26,430.9361);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(27,152.5973);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(28,61.49972);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,33.39275);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(30,7.234983);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(31,4.395935);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,1003.442);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,1922.962);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,17203.33);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,2315.482);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,1477.135);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,1594.207);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,1037.553);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,1283.579);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,1098.751);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,17060.75);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,828.2367);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,789.6831);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,676.6629);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,570.6171);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,677.2365);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,555.7388);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,483.8181);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,125.7849);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,398.1488);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,667.978);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,545.0239);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,286.3134);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(23,467.9635);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,273.2716);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,56.7535);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(26,271.9759);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(27,49.2384);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(28,29.44537);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,26.30803);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(30,7.234983);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(31,4.101853);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(9795);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,37.53217);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,142.4663);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,152.9627);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,119.3701);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,96.86318);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,77.72838);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,61.67101);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,48.54048);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,42.56201);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,35.17999);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,33.30297);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,29.58851);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,27.77266);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,23.68811);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,20.67538);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,17.80192);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,12.61025);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,9.647908);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,9.695339);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,9.99161);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,8.039171);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,7.122632);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,6.579735);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,2.887954);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,3.366282);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,2.699483);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,1.517324);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(28,0.7104092);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(29,0.6633169);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(30,0.5725128);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(31,0.5048323);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,2.533888);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,4.71057);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,4.830365);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,4.320635);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,3.875564);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,3.501657);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,3.07269);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,2.684606);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,2.509686);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,2.241508);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,2.317105);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,2.202374);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,2.076101);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,1.998702);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,1.873008);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,1.674417);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,1.347811);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,1.175879);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,1.200889);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,1.294581);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,1.116016);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,1.043576);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,1.055824);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.732307);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.7859983);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.7255677);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.4325723);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(28,0.3020448);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(29,0.2991877);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(30,0.2914711);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(31,0.2847971);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(12402);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(1,581.0135);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(2,2616.506);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(3,3105.118);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(4,2651.933);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(5,2074.254);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(6,1592.258);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(7,1242.652);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(8,1006.32);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(9,837.7451);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(10,726.8896);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(11,625.7632);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(12,549.6828);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(13,483.9819);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(14,431.5708);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(15,367.835);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(16,317.8439);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(17,269.6543);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(18,234.1735);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(19,200.5335);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(20,158.156);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(21,133.1712);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(22,106.9969);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(23,81.04683);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(24,61.71294);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(25,47.60231);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(26,32.7181);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(27,21.94095);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(28,13.80862);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(29,8.103203);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(30,3.945272);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(31,8.15622);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(1,6.138769);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(2,12.99803);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(3,14.18043);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(4,13.11244);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(5,11.59586);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(6,10.14343);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(7,8.957841);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(8,8.059502);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(9,7.347814);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(10,6.85369);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(11,6.359445);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(12,5.961834);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(13,5.596372);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(14,5.287353);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(15,4.876281);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(16,4.526848);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(17,4.182044);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(18,3.891989);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(19,3.60036);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(20,3.188618);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(21,2.920208);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(22,2.617461);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(23,2.292129);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(24,1.986641);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(25,1.744772);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(26,1.454922);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(27,1.183553);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(28,0.9435214);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(29,0.7221016);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(30,0.4883089);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(31,0.7215149);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetEntries(333238);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(1,98.80161);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(2,395.7809);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(3,405.6864);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(4,314.8733);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(5,214.7482);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(6,158.5373);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(7,113.9797);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(8,106.7513);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(9,105.5395);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(10,79.68704);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(11,68.21435);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(12,58.30501);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(13,50.97716);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(14,48.41882);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(15,37.74636);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(16,46.57292);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(17,25.56085);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(18,23.84577);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(19,24.66181);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(20,13.07139);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(21,17.04942);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(22,14.45056);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(23,9.844853);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(24,5.815897);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(25,5.898524);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(26,4.696244);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(27,2.691937);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(28,1.906126);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(29,0.5855857);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(30,1.17662);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(31,1.094324);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(1,3.454529);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(2,10.34563);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(3,13.59755);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(4,13.13189);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(5,11.85873);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(6,8.725711);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(7,6.346994);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(8,7.577969);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(9,8.640927);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(10,6.486494);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(11,5.553563);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(12,4.520225);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(13,3.155049);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(14,4.230498);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(15,2.672098);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(16,5.988296);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(17,2.102433);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(18,2.108077);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(19,3.696618);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(20,1.386442);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(21,1.898042);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(22,3.413719);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(23,1.393739);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(24,1.034897);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(25,0.9705704);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(26,0.7403918);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(27,0.6051059);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(28,0.4831712);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(29,0.3454493);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(30,0.4964453);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(31,0.4054939);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetEntries(18334);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(1,20.85195);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(2,48.7201);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(3,47.26145);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(4,33.94157);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(5,14.55907);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(6,14.19917);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(7,12.88145);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(8,9.84407);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(9,9.310004);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(10,5.99147);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(11,4.142438);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(12,6.052849);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(13,4.898389);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(14,4.407285);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(15,4.849675);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(16,5.524891);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(17,2.024478);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(18,1.723434);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(19,0.9642755);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(20,1.822342);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(21,3.436539);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(22,2.838284);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(23,1.038202);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(24,0.6278884);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(25,1.279545);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(26,1.846268);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(27,0.5671106);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(28,0.5049709);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(29,0.108058);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(30,0.09122051);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(31,0.09122051);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(1,2.781603);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(2,4.741395);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(3,4.962077);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(4,10.70117);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(5,2.129339);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(6,2.506076);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(7,2.604747);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(8,2.001119);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(9,1.956531);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(10,1.807404);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(11,0.7897777);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(12,1.507251);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(13,0.8429667);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(14,0.7840981);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(15,1.752969);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(16,1.866899);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(17,0.4749056);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(18,0.4155876);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(19,0.3103315);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(20,0.5648058);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(21,1.363);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(22,1.294772);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(23,0.3189013);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(24,0.226167);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(25,0.4771254);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(26,1.201009);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(27,0.2557772);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(28,0.2366031);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(29,0.09255777);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(30,0.09122051);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(31,0.09122051);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetEntries(2217);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(3,0.6306118);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(5,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(7,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(3,0.4459099);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(5,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(7,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(11,0.3153059);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(1,0.5303731);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(2,1.591119);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(3,1.325933);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(4,1.325933);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(5,0.2651865);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(6,0.2651865);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(8,0.5303731);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(12,0.2651865);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(16,0.5303731);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(24,0.2651865);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(1,0.3750304);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(2,0.6495717);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(3,0.5929751);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(4,0.5929751);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(5,0.2651865);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(6,0.2651865);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(8,0.3750304);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(12,0.2651865);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(16,0.3750304);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(24,0.2651865);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(1,3.545159);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(2,10.12902);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(3,9.116122);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(4,4.304835);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(5,2.785482);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(6,2.785482);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(7,1.266128);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(8,2.785482);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(9,2.27903);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(10,1.266128);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(11,1.519354);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(12,0.7596768);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(14,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(15,0.5064512);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(16,0.5064512);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(17,0.7596768);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(20,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(23,0.7596768);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(25,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(26,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(1,0.9474835);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(2,1.601539);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(3,1.519354);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(4,1.044076);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(5,0.8398543);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(6,0.8398543);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(7,0.5662297);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(8,0.8398543);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(9,0.7596768);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(10,0.5662297);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(11,0.6202735);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(12,0.4385996);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(14,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(15,0.3581151);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(16,0.3581151);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(17,0.4385996);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(19,0.3581151);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(20,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(23,0.4385996);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(25,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(26,0.2532256);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(1,1.817006);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(2,8.561735);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(3,9.114105);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(4,6.181052);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(5,3.910198);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(6,2.647177);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(7,2.017281);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(8,1.712024);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(9,1.592505);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(10,1.476217);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(11,1.414842);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(12,1.335702);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(13,1.135427);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(14,0.8657026);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(15,0.7914073);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(16,0.6008235);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(17,0.4716141);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(18,0.3924734);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(19,0.2794152);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(20,0.2164257);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(21,0.2115803);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(22,0.1679722);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(23,0.1389001);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(24,0.1227489);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(25,0.06621979);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(26,0.05329886);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(27,0.05006862);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(28,0.01776629);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(29,0.006460468);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(31,0.001615117);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(1,0.05417267);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(2,0.1175934);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(3,0.1213274);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(4,0.09991557);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(5,0.07946966);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(6,0.0653873);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(7,0.05708016);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(8,0.0525844);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(9,0.0507157);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(10,0.04882891);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(11,0.04780309);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(12,0.0464469);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(13,0.04282345);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(14,0.03739266);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(15,0.03575214);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(16,0.03115125);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(17,0.02759913);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(18,0.02517718);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(19,0.02124355);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(20,0.01869633);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(21,0.01848586);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(22,0.01647102);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(23,0.01497798);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(24,0.01408026);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(25,0.01034179);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(26,0.00927814);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(27,0.00899259);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(28,0.005356737);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(29,0.003230234);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(31,0.001615117);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetEntries(29329);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(1,0.6805524);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(2,3.307366);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(3,3.989394);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(4,2.928244);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(5,1.943803);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(6,1.313407);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(7,0.9603459);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(8,0.8039762);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(9,0.6397389);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(10,0.6259705);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(11,0.5551616);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(12,0.4548489);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(13,0.4051843);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(14,0.3540446);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(15,0.326016);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(16,0.2586492);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(17,0.2183275);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(18,0.1814478);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(19,0.1362088);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(20,0.1244073);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(21,0.09342843);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(22,0.08801942);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(23,0.07867657);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(24,0.04573076);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(25,0.03687964);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(26,0.0206526);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(27,0.01671877);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(28,0.004917286);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(29,0.005900743);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(30,0.0004917286);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(31,0.0004917286);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(1,0.01829336);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(2,0.04032774);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(3,0.04429107);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(4,0.03794603);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(5,0.0309164);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(6,0.02541338);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(7,0.02173084);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(8,0.01988311);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(9,0.01773634);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(10,0.01754445);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(11,0.01652237);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(12,0.01495534);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(13,0.01411527);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(14,0.01319446);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(15,0.01266141);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(16,0.01127764);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(17,0.01036136);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(18,0.009445798);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(19,0.008183995);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(20,0.007821422);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(21,0.006778011);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(22,0.00657888);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(23,0.006219929);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(24,0.004742059);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(25,0.004258494);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(26,0.003186765);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(27,0.002867246);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(28,0.001554982);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(29,0.001703398);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(30,0.0004917286);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(31,0.0004917286);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(1,0.009481507);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(2,0.04108653);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(3,0.03160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(4,0.02212352);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(5,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(6,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(8,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(9,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(10,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(11,0.003160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(14,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(15,0.003160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(18,0.003160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(1,0.003870809);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(2,0.008057731);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(3,0.007067098);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(4,0.005912758);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(5,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(6,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(7,0.003533549);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(8,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(9,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(10,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(11,0.002234813);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(13,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(14,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(15,0.002234813);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(17,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(18,0.002234813);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(21,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(1,0.003944507);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(2,0.01287155);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(3,0.01141831);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(4,0.01058789);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(5,0.007058592);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(6,0.002283662);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(7,0.001868451);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(8,0.001245634);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(9,0.001245634);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(10,0.002491268);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(11,0.001038028);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(12,0.001038028);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(13,0.000622817);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(14,0.000622817);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(15,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(16,0.0008304226);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(17,0.0008304226);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(18,0.000622817);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(19,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(20,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(21,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(22,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(23,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(1,0.0009049321);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(2,0.001634689);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(3,0.001539645);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(4,0.001482601);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(5,0.001210539);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(6,0.0006885501);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(7,0.000622817);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(8,0.0005085279);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(9,0.0005085279);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(10,0.0007191671);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(11,0.0004642204);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(12,0.0004642204);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(13,0.0003595835);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(14,0.0003595835);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(15,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(16,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(17,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(18,0.0003595835);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(19,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(20,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(21,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(22,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(23,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(24,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj0__664 = new TH1D("VbbHcc_both_Z_dR_Bj0__664","",30,0,6);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(1,3327);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(2,11202);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(3,10285);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(4,7668);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(5,5823);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(6,4492);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(7,3562);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(8,2857);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(9,2607);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(10,2118);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(11,1870);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(12,1668);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(13,1532);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(14,1272);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(15,1190);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(16,979);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(17,779);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(18,697);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(19,635);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(20,549);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(21,452);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(22,390);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(23,303);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(24,234);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(25,169);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(26,132);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(27,95);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(28,62);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(29,37);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(30,18);
   VbbHcc_both_Z_dR_Bj0__664->SetBinContent(31,32);
   VbbHcc_both_Z_dR_Bj0__664->SetEntries(67065);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0__664->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0__664->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj0__664->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj0__664->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj0__664->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0__664->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__664->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__664->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__664->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0__664->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__664->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__664->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__664->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__664->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fx1483[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fy1483[30] = {
   9245.352,
   30566.99,
   50659.24,
   26446.24,
   15961.42,
   16492.03,
   9177.167,
   10764.97,
   8470.338,
   24569.58,
   5447.948,
   5252.269,
   3734.385,
   3544.704,
   3643.832,
   2630.414,
   2151.068,
   1118.883,
   1626.429,
   2626.332,
   1809.674,
   916.7543,
   1197.666,
   535.6243,
   267.7502,
   473.2238,
   179.3817,
   78.45253,
   42.86528,
   13.0211};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fex1483[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fey1483[30] = {
   1003.474,
   1923.046,
   17203.34,
   2315.585,
   1477.235,
   1594.269,
   1037.62,
   1283.632,
   1098.815,
   17060.75,
   828.2837,
   789.7233,
   676.6971,
   570.6613,
   677.2643,
   555.7954,
   483.8431,
   125.869,
   398.1843,
   667.9886,
   545.0378,
   286.3505,
   467.9727,
   273.282,
   56.79662,
   271.9845,
   49.2589,
   29.46694,
   26.32207,
   7.274831};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj0_fx1483,Graph_from_VbbHcc_both_Z_dR_Bj0_fy1483,Graph_from_VbbHcc_both_Z_dR_Bj0_fex1483,Graph_from_VbbHcc_both_Z_dR_Bj0_fey1483);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetMinimum(5.171643);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetMaximum(74648.27);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__665 = new TH1D("data_mc_ratio__665","",30,0,6);
   data_mc_ratio__665->SetBinContent(1,0.3598565);
   data_mc_ratio__665->SetBinContent(2,0.3664737);
   data_mc_ratio__665->SetBinContent(3,0.2030232);
   data_mc_ratio__665->SetBinContent(4,0.2899468);
   data_mc_ratio__665->SetBinContent(5,0.3648172);
   data_mc_ratio__665->SetBinContent(6,0.272374);
   data_mc_ratio__665->SetBinContent(7,0.3881372);
   data_mc_ratio__665->SetBinContent(8,0.2653979);
   data_mc_ratio__665->SetBinContent(9,0.3077799);
   data_mc_ratio__665->SetBinContent(10,0.08620416);
   data_mc_ratio__665->SetBinContent(11,0.3432485);
   data_mc_ratio__665->SetBinContent(12,0.3175771);
   data_mc_ratio__665->SetBinContent(13,0.4102416);
   data_mc_ratio__665->SetBinContent(14,0.3588452);
   data_mc_ratio__665->SetBinContent(15,0.3265793);
   data_mc_ratio__665->SetBinContent(16,0.3721848);
   data_mc_ratio__665->SetBinContent(17,0.3621457);
   data_mc_ratio__665->SetBinContent(18,0.6229426);
   data_mc_ratio__665->SetBinContent(19,0.3904259);
   data_mc_ratio__665->SetBinContent(20,0.2090368);
   data_mc_ratio__665->SetBinContent(21,0.2497687);
   data_mc_ratio__665->SetBinContent(22,0.4254139);
   data_mc_ratio__665->SetBinContent(23,0.2529921);
   data_mc_ratio__665->SetBinContent(24,0.4368733);
   data_mc_ratio__665->SetBinContent(25,0.6311853);
   data_mc_ratio__665->SetBinContent(26,0.2789378);
   data_mc_ratio__665->SetBinContent(27,0.529597);
   data_mc_ratio__665->SetBinContent(28,0.7902868);
   data_mc_ratio__665->SetBinContent(29,0.8631695);
   data_mc_ratio__665->SetBinContent(30,1.382372);
   data_mc_ratio__665->SetBinContent(31,2.24621);
   data_mc_ratio__665->SetBinError(1,0.006238827);
   data_mc_ratio__665->SetBinError(2,0.003462542);
   data_mc_ratio__665->SetBinError(3,0.002001905);
   data_mc_ratio__665->SetBinError(4,0.003311137);
   data_mc_ratio__665->SetBinError(5,0.004780815);
   data_mc_ratio__665->SetBinError(6,0.004063925);
   data_mc_ratio__665->SetBinError(7,0.006503368);
   data_mc_ratio__665->SetBinError(8,0.004965265);
   data_mc_ratio__665->SetBinError(9,0.006027952);
   data_mc_ratio__665->SetBinError(10,0.001873118);
   data_mc_ratio__665->SetBinError(11,0.007937575);
   data_mc_ratio__665->SetBinError(12,0.007775908);
   data_mc_ratio__665->SetBinError(13,0.01048118);
   data_mc_ratio__665->SetBinError(14,0.01006152);
   data_mc_ratio__665->SetBinError(15,0.00946706);
   data_mc_ratio__665->SetBinError(16,0.01189508);
   data_mc_ratio__665->SetBinError(17,0.01297522);
   data_mc_ratio__665->SetBinError(18,0.02359563);
   data_mc_ratio__665->SetBinError(19,0.01549358);
   data_mc_ratio__665->SetBinError(20,0.008921474);
   data_mc_ratio__665->SetBinError(21,0.01174813);
   data_mc_ratio__665->SetBinError(22,0.02154167);
   data_mc_ratio__665->SetBinError(23,0.01453401);
   data_mc_ratio__665->SetBinError(24,0.0285593);
   data_mc_ratio__665->SetBinError(25,0.04855271);
   data_mc_ratio__665->SetBinError(26,0.02427842);
   data_mc_ratio__665->SetBinError(27,0.05433551);
   data_mc_ratio__665->SetBinError(28,0.1003665);
   data_mc_ratio__665->SetBinError(29,0.1419042);
   data_mc_ratio__665->SetBinError(30,0.3258281);
   data_mc_ratio__665->SetBinError(31,0.7714908);
   data_mc_ratio__665->SetMinimum(0.4);
   data_mc_ratio__665->SetMaximum(1.6);
   data_mc_ratio__665->SetEntries(117.2672);
   data_mc_ratio__665->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__665->SetLineColor(ci);
   data_mc_ratio__665->SetLineWidth(2);
   data_mc_ratio__665->SetMarkerStyle(20);
   data_mc_ratio__665->SetMarkerSize(1.2);
   data_mc_ratio__665->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__665->GetXaxis()->SetRange(1,30);
   data_mc_ratio__665->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__665->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__665->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__665->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__665->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__665->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__665->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__665->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__665->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__665->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__665->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__665->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__665->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__665->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__665->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__665->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__665->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1484[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1484[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1484[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1484[30] = {
   0.1085382,
   0.06291251,
   0.3395893,
   0.08755823,
   0.09255037,
   0.09666904,
   0.1130653,
   0.1192416,
   0.129725,
   0.6943852,
   0.1520359,
   0.1503585,
   0.1812071,
   0.1609898,
   0.1858659,
   0.2112958,
   0.2249316,
   0.1124952,
   0.2448212,
   0.2543428,
   0.3011801,
   0.3123525,
   0.3907372,
   0.5102121,
   0.2121254,
   0.5747481,
   0.2746039,
   0.3756022,
   0.614065,
   0.5586955};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1484,Graph_from_mc_statistical_error_fy1484,Graph_from_mc_statistical_error_fex1484,Graph_from_mc_statistical_error_fey1484);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1484 = new TH1F("Graph_Graph_from_mc_statistical_error1484","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1484->SetMinimum(0.1667377);
   Graph_Graph_from_mc_statistical_error1484->SetMaximum(1.833262);
   Graph_Graph_from_mc_statistical_error1484->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1484->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1484->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1484);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_both_17->cd();
   Z_dR_Bj0_both_17->Modified();
   Z_dR_Bj0_both_17->cd();
   Z_dR_Bj0_both_17->SetSelected(Z_dR_Bj0_both_17);
}
