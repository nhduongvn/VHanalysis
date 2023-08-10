void H_dR_both_17()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Thu Aug 10 12:24:48 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(0,0,1,1);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetFillStyle(4000);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-88.4852,6.525,88406.71);
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
   st->SetMaximum(75768.75);
   
   TH1F *st_stack_214 = new TH1F("st_stack_214","",30,0,6);
   st_stack_214->SetMinimum(0.01);
   st_stack_214->SetMaximum(79557.19);
   st_stack_214->SetDirectory(0);
   st_stack_214->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_214->SetLineColor(ci);
   st_stack_214->GetXaxis()->SetRange(1,31);
   st_stack_214->GetXaxis()->SetLabelFont(42);
   st_stack_214->GetXaxis()->SetLabelSize(0.035);
   st_stack_214->GetXaxis()->SetTitleSize(0.035);
   st_stack_214->GetXaxis()->SetTitleFont(42);
   st_stack_214->GetYaxis()->SetTitle("Events/0.2");
   st_stack_214->GetYaxis()->SetLabelFont(42);
   st_stack_214->GetYaxis()->SetLabelSize(0.05);
   st_stack_214->GetYaxis()->SetTitleSize(0.057);
   st_stack_214->GetYaxis()->SetTitleOffset(1.2);
   st_stack_214->GetYaxis()->SetTitleFont(42);
   st_stack_214->GetZaxis()->SetLabelFont(42);
   st_stack_214->GetZaxis()->SetLabelSize(0.035);
   st_stack_214->GetZaxis()->SetTitleSize(0.035);
   st_stack_214->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_214);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,7.566021);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,33357.61);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,12828.44);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,9988.006);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,8918.775);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,7460.878);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,8213.638);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,6795.449);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,24941.96);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,9801.212);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,10436.64);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,12953.09);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,15994.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,18148.28);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,20609.32);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,9315.371);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,10161.73);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,7321.12);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,2723.509);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,2394.863);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1169.349);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,1161.354);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,814.4204);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,125.2599);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,359.5897);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,7.566021);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,21715.05);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,1582.786);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,1386.537);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,1327.51);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,1174.569);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,1218.382);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,996.2259);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,15321.78);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,1318.953);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1320.613);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,1532.43);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,1681.376);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,1822.834);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,2450.548);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,1182.409);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,1450.031);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,1209.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,626.1624);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,640.9733);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,479.9848);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,465.8342);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,423.4243);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,42.37503);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,304.7945);
   VbbHcc_both_H_dR_stack_1->SetEntries(10320);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,27.93355);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,36.28379);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,40.82862);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,46.36);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,41.55155);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,51.82509);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,55.28734);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,61.67859);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,68.28221);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,73.26512);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,79.83416);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,80.76476);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,102.3603);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,106.817);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,61.69928);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,37.52929);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,24.88401);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,17.86246);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,12.59499);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,6.353001);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,5.147348);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,2.688469);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,1.625554);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.5133038);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.05359184);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,0.007026072);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,2.327539);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,2.738976);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,2.784574);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,3.023194);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,2.756158);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,3.20003);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,3.310334);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,3.509742);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,3.751162);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,3.879977);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,3.992969);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,3.865276);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,4.537128);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,4.647299);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,3.600113);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,2.647237);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,2.085872);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,1.850056);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,1.480609);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.9041616);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,1.017738);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.6378994);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.4329117);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.1703795);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.05359184);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.007026072);
   VbbHcc_both_H_dR_stack_2->SetEntries(12006);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_stack_3 = new TH1D("VbbHcc_both_H_dR_stack_3","",30,0,6);
   VbbHcc_both_H_dR_stack_3->SetBinContent(2,0.4583419);
   VbbHcc_both_H_dR_stack_3->SetBinContent(3,559.103);
   VbbHcc_both_H_dR_stack_3->SetBinContent(4,900.7921);
   VbbHcc_both_H_dR_stack_3->SetBinContent(5,1044.552);
   VbbHcc_both_H_dR_stack_3->SetBinContent(6,1174.239);
   VbbHcc_both_H_dR_stack_3->SetBinContent(7,1203.8);
   VbbHcc_both_H_dR_stack_3->SetBinContent(8,1240.907);
   VbbHcc_both_H_dR_stack_3->SetBinContent(9,1253.355);
   VbbHcc_both_H_dR_stack_3->SetBinContent(10,1325.373);
   VbbHcc_both_H_dR_stack_3->SetBinContent(11,1451.661);
   VbbHcc_both_H_dR_stack_3->SetBinContent(12,1587.257);
   VbbHcc_both_H_dR_stack_3->SetBinContent(13,1743.57);
   VbbHcc_both_H_dR_stack_3->SetBinContent(14,1880.889);
   VbbHcc_both_H_dR_stack_3->SetBinContent(15,2024.689);
   VbbHcc_both_H_dR_stack_3->SetBinContent(16,2021.504);
   VbbHcc_both_H_dR_stack_3->SetBinContent(17,1149.892);
   VbbHcc_both_H_dR_stack_3->SetBinContent(18,718.954);
   VbbHcc_both_H_dR_stack_3->SetBinContent(19,460.4239);
   VbbHcc_both_H_dR_stack_3->SetBinContent(20,297.4592);
   VbbHcc_both_H_dR_stack_3->SetBinContent(21,183.702);
   VbbHcc_both_H_dR_stack_3->SetBinContent(22,113.4172);
   VbbHcc_both_H_dR_stack_3->SetBinContent(23,64.14898);
   VbbHcc_both_H_dR_stack_3->SetBinContent(24,36.83031);
   VbbHcc_both_H_dR_stack_3->SetBinContent(25,15.9273);
   VbbHcc_both_H_dR_stack_3->SetBinContent(26,7.108456);
   VbbHcc_both_H_dR_stack_3->SetBinContent(27,2.669568);
   VbbHcc_both_H_dR_stack_3->SetBinContent(28,1.070891);
   VbbHcc_both_H_dR_stack_3->SetBinContent(29,0.07763288);
   VbbHcc_both_H_dR_stack_3->SetBinError(2,0.1800135);
   VbbHcc_both_H_dR_stack_3->SetBinError(3,6.46605);
   VbbHcc_both_H_dR_stack_3->SetBinError(4,8.2155);
   VbbHcc_both_H_dR_stack_3->SetBinError(5,8.883582);
   VbbHcc_both_H_dR_stack_3->SetBinError(6,9.417161);
   VbbHcc_both_H_dR_stack_3->SetBinError(7,9.505681);
   VbbHcc_both_H_dR_stack_3->SetBinError(8,9.634647);
   VbbHcc_both_H_dR_stack_3->SetBinError(9,9.633483);
   VbbHcc_both_H_dR_stack_3->SetBinError(10,9.881802);
   VbbHcc_both_H_dR_stack_3->SetBinError(11,10.36523);
   VbbHcc_both_H_dR_stack_3->SetBinError(12,10.81342);
   VbbHcc_both_H_dR_stack_3->SetBinError(13,11.3443);
   VbbHcc_both_H_dR_stack_3->SetBinError(14,11.81061);
   VbbHcc_both_H_dR_stack_3->SetBinError(15,12.29417);
   VbbHcc_both_H_dR_stack_3->SetBinError(16,12.27387);
   VbbHcc_both_H_dR_stack_3->SetBinError(17,9.228656);
   VbbHcc_both_H_dR_stack_3->SetBinError(18,7.28626);
   VbbHcc_both_H_dR_stack_3->SetBinError(19,5.800034);
   VbbHcc_both_H_dR_stack_3->SetBinError(20,4.645821);
   VbbHcc_both_H_dR_stack_3->SetBinError(21,3.628098);
   VbbHcc_both_H_dR_stack_3->SetBinError(22,2.847125);
   VbbHcc_both_H_dR_stack_3->SetBinError(23,2.13087);
   VbbHcc_both_H_dR_stack_3->SetBinError(24,1.618552);
   VbbHcc_both_H_dR_stack_3->SetBinError(25,1.051476);
   VbbHcc_both_H_dR_stack_3->SetBinError(26,0.6975246);
   VbbHcc_both_H_dR_stack_3->SetBinError(27,0.4225335);
   VbbHcc_both_H_dR_stack_3->SetBinError(28,0.255715);
   VbbHcc_both_H_dR_stack_3->SetBinError(29,0.07763288);
   VbbHcc_both_H_dR_stack_3->SetEntries(333938);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_stack_4 = new TH1D("VbbHcc_both_H_dR_stack_4","",30,0,6);
   VbbHcc_both_H_dR_stack_4->SetBinContent(3,128.8093);
   VbbHcc_both_H_dR_stack_4->SetBinContent(4,186.6699);
   VbbHcc_both_H_dR_stack_4->SetBinContent(5,162.945);
   VbbHcc_both_H_dR_stack_4->SetBinContent(6,120.8768);
   VbbHcc_both_H_dR_stack_4->SetBinContent(7,114.2754);
   VbbHcc_both_H_dR_stack_4->SetBinContent(8,113.19);
   VbbHcc_both_H_dR_stack_4->SetBinContent(9,138.4045);
   VbbHcc_both_H_dR_stack_4->SetBinContent(10,124.5181);
   VbbHcc_both_H_dR_stack_4->SetBinContent(11,154.3566);
   VbbHcc_both_H_dR_stack_4->SetBinContent(12,193.8552);
   VbbHcc_both_H_dR_stack_4->SetBinContent(13,196.9489);
   VbbHcc_both_H_dR_stack_4->SetBinContent(14,235.2699);
   VbbHcc_both_H_dR_stack_4->SetBinContent(15,246.5292);
   VbbHcc_both_H_dR_stack_4->SetBinContent(16,261.363);
   VbbHcc_both_H_dR_stack_4->SetBinContent(17,133.2557);
   VbbHcc_both_H_dR_stack_4->SetBinContent(18,94.39509);
   VbbHcc_both_H_dR_stack_4->SetBinContent(19,49.29352);
   VbbHcc_both_H_dR_stack_4->SetBinContent(20,29.10933);
   VbbHcc_both_H_dR_stack_4->SetBinContent(21,20.70455);
   VbbHcc_both_H_dR_stack_4->SetBinContent(22,12.50119);
   VbbHcc_both_H_dR_stack_4->SetBinContent(23,6.318976);
   VbbHcc_both_H_dR_stack_4->SetBinContent(24,2.767459);
   VbbHcc_both_H_dR_stack_4->SetBinContent(25,2.797854);
   VbbHcc_both_H_dR_stack_4->SetBinContent(26,0.9005378);
   VbbHcc_both_H_dR_stack_4->SetBinContent(27,0.1461408);
   VbbHcc_both_H_dR_stack_4->SetBinError(3,7.598777);
   VbbHcc_both_H_dR_stack_4->SetBinError(4,8.768043);
   VbbHcc_both_H_dR_stack_4->SetBinError(5,9.492603);
   VbbHcc_both_H_dR_stack_4->SetBinError(6,5.913132);
   VbbHcc_both_H_dR_stack_4->SetBinError(7,7.743745);
   VbbHcc_both_H_dR_stack_4->SetBinError(8,6.034304);
   VbbHcc_both_H_dR_stack_4->SetBinError(9,10.57139);
   VbbHcc_both_H_dR_stack_4->SetBinError(10,6.924888);
   VbbHcc_both_H_dR_stack_4->SetBinError(11,9.22894);
   VbbHcc_both_H_dR_stack_4->SetBinError(12,12.22551);
   VbbHcc_both_H_dR_stack_4->SetBinError(13,9.941974);
   VbbHcc_both_H_dR_stack_4->SetBinError(14,12.3463);
   VbbHcc_both_H_dR_stack_4->SetBinError(15,9.987498);
   VbbHcc_both_H_dR_stack_4->SetBinError(16,11.08441);
   VbbHcc_both_H_dR_stack_4->SetBinError(17,6.872773);
   VbbHcc_both_H_dR_stack_4->SetBinError(18,8.5966);
   VbbHcc_both_H_dR_stack_4->SetBinError(19,4.660092);
   VbbHcc_both_H_dR_stack_4->SetBinError(20,2.470863);
   VbbHcc_both_H_dR_stack_4->SetBinError(21,2.229777);
   VbbHcc_both_H_dR_stack_4->SetBinError(22,1.739217);
   VbbHcc_both_H_dR_stack_4->SetBinError(23,1.276614);
   VbbHcc_both_H_dR_stack_4->SetBinError(24,0.7816505);
   VbbHcc_both_H_dR_stack_4->SetBinError(25,0.9184264);
   VbbHcc_both_H_dR_stack_4->SetBinError(26,0.5557897);
   VbbHcc_both_H_dR_stack_4->SetBinError(27,0.1045942);
   VbbHcc_both_H_dR_stack_4->SetEntries(18216);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,12.95404);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,15.26107);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,11.84198);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,7.535207);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,19.17428);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,11.56153);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,13.18569);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,22.34766);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,16.93296);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,15.07289);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,19.10003);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,24.95922);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,27.65645);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,22.31361);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,11.21939);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,8.252529);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,5.653185);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,5.658363);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,4.347734);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,3.496813);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,1.052108);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,0.5204002);
   VbbHcc_both_H_dR_stack_5->SetBinContent(27,0.1704336);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,1.952543);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,2.726299);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,2.369386);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,0.9949141);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,5.972585);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,2.581791);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,2.868465);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,8.304684);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,3.262098);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,2.44295);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,3.080682);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,3.815695);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,3.534856);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,3.058938);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,2.415345);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,1.175867);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,0.9958598);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,1.352786);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,1.534319);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,1.764688);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,0.3934187);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,0.2100491);
   VbbHcc_both_H_dR_stack_5->SetBinError(27,0.1704336);
   VbbHcc_both_H_dR_stack_5->SetEntries(2376);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_stack_6 = new TH1D("VbbHcc_both_H_dR_stack_6","",30,0,6);
   VbbHcc_both_H_dR_stack_6->SetBinContent(3,0.3608682);
   VbbHcc_both_H_dR_stack_6->SetBinContent(16,0.6450547);
   VbbHcc_both_H_dR_stack_6->SetBinContent(19,0.3402984);
   VbbHcc_both_H_dR_stack_6->SetBinContent(24,0.268632);
   VbbHcc_both_H_dR_stack_6->SetBinError(3,0.3608682);
   VbbHcc_both_H_dR_stack_6->SetBinError(16,0.4685642);
   VbbHcc_both_H_dR_stack_6->SetBinError(19,0.3402984);
   VbbHcc_both_H_dR_stack_6->SetBinError(24,0.268632);
   VbbHcc_both_H_dR_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_stack_7 = new TH1D("VbbHcc_both_H_dR_stack_7","",30,0,6);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,0.1957868);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,0.9922148);
   VbbHcc_both_H_dR_stack_7->SetBinContent(6,0.4828385);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,0.3138408);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,0.2655071);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,0.8254024);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,1.458458);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,0.941796);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,0.8914984);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,0.1859687);
   VbbHcc_both_H_dR_stack_7->SetBinContent(19,0.2861422);
   VbbHcc_both_H_dR_stack_7->SetBinContent(21,0.2900543);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,0.1957868);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,0.5077416);
   VbbHcc_both_H_dR_stack_7->SetBinError(6,0.3496776);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,0.3138408);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,0.2655071);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,0.477779);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,0.657798);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,0.544373);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,0.515717);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,0.1859687);
   VbbHcc_both_H_dR_stack_7->SetBinError(19,0.2861422);
   VbbHcc_both_H_dR_stack_7->SetBinError(21,0.2900543);
   VbbHcc_both_H_dR_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,5.371245);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,4.278073);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,6.817275);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,3.723545);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,2.131104);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,0.5855256);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,0.3052438);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,1.281284);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,1.104459);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,2.323979);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,0.02446564);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,4.462672);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,6.137275);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,8.152721);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,1.815445);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,1.243854);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,0.4392965);
   VbbHcc_both_H_dR_stack_8->SetBinContent(20,0.9480945);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,1.265346);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,1.105052);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.379933);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,1.051465);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.7755622);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.4350429);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.2926576);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.6429446);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,0.5536651);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,0.8244857);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,0.02446564);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,1.176363);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.319868);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,1.543685);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,0.7487521);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.6222592);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.3106296);
   VbbHcc_both_H_dR_stack_8->SetBinError(20,0.5475202);
   VbbHcc_both_H_dR_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_stack_9 = new TH1D("VbbHcc_both_H_dR_stack_9","",30,0,6);
   VbbHcc_both_H_dR_stack_9->SetBinContent(3,2.936431);
   VbbHcc_both_H_dR_stack_9->SetBinContent(4,5.57327);
   VbbHcc_both_H_dR_stack_9->SetBinContent(5,5.740428);
   VbbHcc_both_H_dR_stack_9->SetBinContent(6,4.671787);
   VbbHcc_both_H_dR_stack_9->SetBinContent(7,3.337468);
   VbbHcc_both_H_dR_stack_9->SetBinContent(8,2.006279);
   VbbHcc_both_H_dR_stack_9->SetBinContent(9,1.52207);
   VbbHcc_both_H_dR_stack_9->SetBinContent(10,1.320822);
   VbbHcc_both_H_dR_stack_9->SetBinContent(11,1.767137);
   VbbHcc_both_H_dR_stack_9->SetBinContent(12,2.38054);
   VbbHcc_both_H_dR_stack_9->SetBinContent(13,3.245429);
   VbbHcc_both_H_dR_stack_9->SetBinContent(14,4.145928);
   VbbHcc_both_H_dR_stack_9->SetBinContent(15,4.949897);
   VbbHcc_both_H_dR_stack_9->SetBinContent(16,5.183711);
   VbbHcc_both_H_dR_stack_9->SetBinContent(17,1.816119);
   VbbHcc_both_H_dR_stack_9->SetBinContent(18,0.6489246);
   VbbHcc_both_H_dR_stack_9->SetBinContent(19,0.2747613);
   VbbHcc_both_H_dR_stack_9->SetBinContent(20,0.1230757);
   VbbHcc_both_H_dR_stack_9->SetBinContent(21,0.07176107);
   VbbHcc_both_H_dR_stack_9->SetBinContent(22,0.04814683);
   VbbHcc_both_H_dR_stack_9->SetBinContent(23,0.02038871);
   VbbHcc_both_H_dR_stack_9->SetBinContent(24,0.01118056);
   VbbHcc_both_H_dR_stack_9->SetBinContent(25,0.00160745);
   VbbHcc_both_H_dR_stack_9->SetBinContent(26,0.001885904);
   VbbHcc_both_H_dR_stack_9->SetBinContent(27,0.0009271028);
   VbbHcc_both_H_dR_stack_9->SetBinContent(28,0.001987934);
   VbbHcc_both_H_dR_stack_9->SetBinError(3,0.07694308);
   VbbHcc_both_H_dR_stack_9->SetBinError(4,0.1060469);
   VbbHcc_both_H_dR_stack_9->SetBinError(5,0.1072399);
   VbbHcc_both_H_dR_stack_9->SetBinError(6,0.09670399);
   VbbHcc_both_H_dR_stack_9->SetBinError(7,0.08162533);
   VbbHcc_both_H_dR_stack_9->SetBinError(8,0.06278575);
   VbbHcc_both_H_dR_stack_9->SetBinError(9,0.05453272);
   VbbHcc_both_H_dR_stack_9->SetBinError(10,0.05093361);
   VbbHcc_both_H_dR_stack_9->SetBinError(11,0.0593142);
   VbbHcc_both_H_dR_stack_9->SetBinError(12,0.06896727);
   VbbHcc_both_H_dR_stack_9->SetBinError(13,0.08018807);
   VbbHcc_both_H_dR_stack_9->SetBinError(14,0.09085435);
   VbbHcc_both_H_dR_stack_9->SetBinError(15,0.09965643);
   VbbHcc_both_H_dR_stack_9->SetBinError(16,0.1020351);
   VbbHcc_both_H_dR_stack_9->SetBinError(17,0.06022194);
   VbbHcc_both_H_dR_stack_9->SetBinError(18,0.03593712);
   VbbHcc_both_H_dR_stack_9->SetBinError(19,0.02290251);
   VbbHcc_both_H_dR_stack_9->SetBinError(20,0.01589066);
   VbbHcc_both_H_dR_stack_9->SetBinError(21,0.01174454);
   VbbHcc_both_H_dR_stack_9->SetBinError(22,0.009372123);
   VbbHcc_both_H_dR_stack_9->SetBinError(23,0.005828666);
   VbbHcc_both_H_dR_stack_9->SetBinError(24,0.004273075);
   VbbHcc_both_H_dR_stack_9->SetBinError(25,0.00160745);
   VbbHcc_both_H_dR_stack_9->SetBinError(26,0.001885904);
   VbbHcc_both_H_dR_stack_9->SetBinError(27,0.0009271028);
   VbbHcc_both_H_dR_stack_9->SetBinError(28,0.001987934);
   VbbHcc_both_H_dR_stack_9->SetEntries(28446);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_stack_10 = new TH1D("VbbHcc_both_H_dR_stack_10","",30,0,6);
   VbbHcc_both_H_dR_stack_10->SetBinContent(2,0.000499439);
   VbbHcc_both_H_dR_stack_10->SetBinContent(3,0.859544);
   VbbHcc_both_H_dR_stack_10->SetBinContent(4,1.84695);
   VbbHcc_both_H_dR_stack_10->SetBinContent(5,2.219983);
   VbbHcc_both_H_dR_stack_10->SetBinContent(6,2.18668);
   VbbHcc_both_H_dR_stack_10->SetBinContent(7,1.72316);
   VbbHcc_both_H_dR_stack_10->SetBinContent(8,1.272138);
   VbbHcc_both_H_dR_stack_10->SetBinContent(9,0.9570655);
   VbbHcc_both_H_dR_stack_10->SetBinContent(10,0.8553177);
   VbbHcc_both_H_dR_stack_10->SetBinContent(11,0.9546811);
   VbbHcc_both_H_dR_stack_10->SetBinContent(12,1.183788);
   VbbHcc_both_H_dR_stack_10->SetBinContent(13,1.409733);
   VbbHcc_both_H_dR_stack_10->SetBinContent(14,1.641886);
   VbbHcc_both_H_dR_stack_10->SetBinContent(15,1.851903);
   VbbHcc_both_H_dR_stack_10->SetBinContent(16,1.789743);
   VbbHcc_both_H_dR_stack_10->SetBinContent(17,0.7307169);
   VbbHcc_both_H_dR_stack_10->SetBinContent(18,0.3229741);
   VbbHcc_both_H_dR_stack_10->SetBinContent(19,0.1532393);
   VbbHcc_both_H_dR_stack_10->SetBinContent(20,0.08166614);
   VbbHcc_both_H_dR_stack_10->SetBinContent(21,0.04899538);
   VbbHcc_both_H_dR_stack_10->SetBinContent(22,0.02269323);
   VbbHcc_both_H_dR_stack_10->SetBinContent(23,0.01018266);
   VbbHcc_both_H_dR_stack_10->SetBinContent(24,0.007582084);
   VbbHcc_both_H_dR_stack_10->SetBinContent(25,0.003066217);
   VbbHcc_both_H_dR_stack_10->SetBinContent(26,0.0008688548);
   VbbHcc_both_H_dR_stack_10->SetBinContent(27,0.0004164854);
   VbbHcc_both_H_dR_stack_10->SetBinError(2,0.000499439);
   VbbHcc_both_H_dR_stack_10->SetBinError(3,0.01957583);
   VbbHcc_both_H_dR_stack_10->SetBinError(4,0.02875937);
   VbbHcc_both_H_dR_stack_10->SetBinError(5,0.03152456);
   VbbHcc_both_H_dR_stack_10->SetBinError(6,0.03136185);
   VbbHcc_both_H_dR_stack_10->SetBinError(7,0.02781252);
   VbbHcc_both_H_dR_stack_10->SetBinError(8,0.02392641);
   VbbHcc_both_H_dR_stack_10->SetBinError(9,0.02071796);
   VbbHcc_both_H_dR_stack_10->SetBinError(10,0.0195628);
   VbbHcc_both_H_dR_stack_10->SetBinError(11,0.02067269);
   VbbHcc_both_H_dR_stack_10->SetBinError(12,0.02303691);
   VbbHcc_both_H_dR_stack_10->SetBinError(13,0.02518378);
   VbbHcc_both_H_dR_stack_10->SetBinError(14,0.02712361);
   VbbHcc_both_H_dR_stack_10->SetBinError(15,0.02884687);
   VbbHcc_both_H_dR_stack_10->SetBinError(16,0.02833802);
   VbbHcc_both_H_dR_stack_10->SetBinError(17,0.01810276);
   VbbHcc_both_H_dR_stack_10->SetBinError(18,0.01202212);
   VbbHcc_both_H_dR_stack_10->SetBinError(19,0.008250466);
   VbbHcc_both_H_dR_stack_10->SetBinError(20,0.006005439);
   VbbHcc_both_H_dR_stack_10->SetBinError(21,0.004653189);
   VbbHcc_both_H_dR_stack_10->SetBinError(22,0.00315806);
   VbbHcc_both_H_dR_stack_10->SetBinError(23,0.002096078);
   VbbHcc_both_H_dR_stack_10->SetBinError(24,0.001809862);
   VbbHcc_both_H_dR_stack_10->SetBinError(25,0.001163099);
   VbbHcc_both_H_dR_stack_10->SetBinError(26,0.0006143972);
   VbbHcc_both_H_dR_stack_10->SetBinError(27,0.0004164854);
   VbbHcc_both_H_dR_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(3,0.003614904);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.0233424);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.009208526);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.02173164);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.02175064);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.01837727);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.00707511);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.006223292);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.00726553);
   VbbHcc_both_H_dR_stack_11->SetBinContent(12,0.009517493);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.00798139);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.00560736);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.006967617);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.009251562);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.009418995);
   VbbHcc_both_H_dR_stack_11->SetBinContent(18,0.001185265);
   VbbHcc_both_H_dR_stack_11->SetBinContent(20,0.002100715);
   VbbHcc_both_H_dR_stack_11->SetBinContent(21,0.001245676);
   VbbHcc_both_H_dR_stack_11->SetBinError(3,0.00262964);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.006771918);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.004143002);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.006339256);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.006152242);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.005947543);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.003569651);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.003612465);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.003648917);
   VbbHcc_both_H_dR_stack_11->SetBinError(12,0.004337109);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.003817787);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.003241882);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.003541869);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.004205521);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.004273048);
   VbbHcc_both_H_dR_stack_11->SetBinError(18,0.001185265);
   VbbHcc_both_H_dR_stack_11->SetBinError(20,0.002100715);
   VbbHcc_both_H_dR_stack_11->SetBinError(21,0.001245676);
   VbbHcc_both_H_dR_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.002303543);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.003770915);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.006067787);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.006513224);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.008159869);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.004505123);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.003726578);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.004137044);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.004650089);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.004015967);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.003911299);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.003698248);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.005645573);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.004838875);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.001844276);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.001753557);
   VbbHcc_both_H_dR_stack_12->SetBinContent(19,0.0006854137);
   VbbHcc_both_H_dR_stack_12->SetBinContent(20,0.0007236514);
   VbbHcc_both_H_dR_stack_12->SetBinContent(21,0.0005705953);
   VbbHcc_both_H_dR_stack_12->SetBinContent(23,0.0003004564);
   VbbHcc_both_H_dR_stack_12->SetBinContent(24,9.545455e-05);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.0007368707);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.000978171);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.001199802);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.001252224);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.001437555);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.001063234);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.000973405);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.000979901);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.001054172);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.0009845937);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.0009838813);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.0009297261);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.001161346);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.001070762);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0006699555);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.0006700718);
   VbbHcc_both_H_dR_stack_12->SetBinError(19,0.000397906);
   VbbHcc_both_H_dR_stack_12->SetBinError(20,0.0004185448);
   VbbHcc_both_H_dR_stack_12->SetBinError(21,0.0003356427);
   VbbHcc_both_H_dR_stack_12->SetBinError(23,0.0003004564);
   VbbHcc_both_H_dR_stack_12->SetBinError(24,9.545455e-05);
   VbbHcc_both_H_dR_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR__587 = new TH1D("VbbHcc_both_H_dR__587","",30,0,6);
   VbbHcc_both_H_dR__587->SetBinContent(2,4);
   VbbHcc_both_H_dR__587->SetBinContent(3,3183);
   VbbHcc_both_H_dR__587->SetBinContent(4,3749);
   VbbHcc_both_H_dR__587->SetBinContent(5,3049);
   VbbHcc_both_H_dR__587->SetBinContent(6,3071);
   VbbHcc_both_H_dR__587->SetBinContent(7,3052);
   VbbHcc_both_H_dR__587->SetBinContent(8,3182);
   VbbHcc_both_H_dR__587->SetBinContent(9,3361);
   VbbHcc_both_H_dR__587->SetBinContent(10,3719);
   VbbHcc_both_H_dR__587->SetBinContent(11,3967);
   VbbHcc_both_H_dR__587->SetBinContent(12,4385);
   VbbHcc_both_H_dR__587->SetBinContent(13,4797);
   VbbHcc_both_H_dR__587->SetBinContent(14,5421);
   VbbHcc_both_H_dR__587->SetBinContent(15,5926);
   VbbHcc_both_H_dR__587->SetBinContent(16,6020);
   VbbHcc_both_H_dR__587->SetBinContent(17,3602);
   VbbHcc_both_H_dR__587->SetBinContent(18,2423);
   VbbHcc_both_H_dR__587->SetBinContent(19,1710);
   VbbHcc_both_H_dR__587->SetBinContent(20,1117);
   VbbHcc_both_H_dR__587->SetBinContent(21,783);
   VbbHcc_both_H_dR__587->SetBinContent(22,511);
   VbbHcc_both_H_dR__587->SetBinContent(23,299);
   VbbHcc_both_H_dR__587->SetBinContent(24,199);
   VbbHcc_both_H_dR__587->SetBinContent(25,88);
   VbbHcc_both_H_dR__587->SetBinContent(26,45);
   VbbHcc_both_H_dR__587->SetBinContent(27,17);
   VbbHcc_both_H_dR__587->SetBinContent(28,4);
   VbbHcc_both_H_dR__587->SetEntries(67713);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR__587->SetLineColor(ci);
   VbbHcc_both_H_dR__587->SetLineWidth(2);
   VbbHcc_both_H_dR__587->SetMarkerStyle(20);
   VbbHcc_both_H_dR__587->SetMarkerSize(1.2);
   VbbHcc_both_H_dR__587->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR__587->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__587->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__587->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__587->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__587->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__587->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__587->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__587->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR__587->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__587->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__587->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR__587->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR__587->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__587->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_fx1427[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_fy1427[30] = {
   0,
   8.024862,
   34095.94,
   13979.37,
   11263.96,
   10278.88,
   8847.215,
   9635.008,
   8258.477,
   26479.35,
   11496.55,
   12312.82,
   14998.69,
   18226.65,
   20563.4,
   23037.99,
   10676,
   11023.08,
   7862.869,
   3074.754,
   2616.625,
   1305.188,
   1238.053,
   857.5146,
   145.6152,
   368.1147,
   3.041077,
   1.079905,
   0.07763288,
   0};
   Double_t Graph_from_VbbHcc_both_H_dR_fex1427[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_fey1427[30] = {
   0,
   7.568162,
   21715.05,
   1582.836,
   1386.604,
   1327.561,
   1174.652,
   1218.442,
   996.3383,
   15321.78,
   1319.036,
   1320.722,
   1532.513,
   1681.472,
   1822.913,
   2450.611,
   1182.473,
   1450.078,
   1209.925,
   626.189,
   640.991,
   480.0005,
   465.8421,
   423.4287,
   42.40023,
   304.7959,
   0.4705265,
   0.2558192,
   0.07763288,
   0};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_fx1427,Graph_from_VbbHcc_both_H_dR_fy1427,Graph_from_VbbHcc_both_H_dR_fex1427,Graph_from_VbbHcc_both_H_dR_fey1427);
   gre->SetName("Graph_from_VbbHcc_both_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR1427 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR1427","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetMinimum(-5581.099);
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetMaximum(61392.09);
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR1427->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR1427->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR1427);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR","MC unc. (stat.)","fl");

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
   H_dR_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__588 = new TH1D("data_mc_ratio__588","",30,0,6);
   data_mc_ratio__588->SetBinContent(2,0.4984509);
   data_mc_ratio__588->SetBinContent(3,0.09335423);
   data_mc_ratio__588->SetBinContent(4,0.2681809);
   data_mc_ratio__588->SetBinContent(5,0.2706864);
   data_mc_ratio__588->SetBinContent(6,0.298768);
   data_mc_ratio__588->SetBinContent(7,0.3449673);
   data_mc_ratio__588->SetBinContent(8,0.330254);
   data_mc_ratio__588->SetBinContent(9,0.4069758);
   data_mc_ratio__588->SetBinContent(10,0.1404491);
   data_mc_ratio__588->SetBinContent(11,0.3450601);
   data_mc_ratio__588->SetBinContent(12,0.3561329);
   data_mc_ratio__588->SetBinContent(13,0.3198279);
   data_mc_ratio__588->SetBinContent(14,0.2974217);
   data_mc_ratio__588->SetBinContent(15,0.2881819);
   data_mc_ratio__588->SetBinContent(16,0.2613075);
   data_mc_ratio__588->SetBinContent(17,0.3373924);
   data_mc_ratio__588->SetBinContent(18,0.2198116);
   data_mc_ratio__588->SetBinContent(19,0.2174779);
   data_mc_ratio__588->SetBinContent(20,0.3632811);
   data_mc_ratio__588->SetBinContent(21,0.2992404);
   data_mc_ratio__588->SetBinContent(22,0.3915144);
   data_mc_ratio__588->SetBinContent(23,0.2415083);
   data_mc_ratio__588->SetBinContent(24,0.232066);
   data_mc_ratio__588->SetBinContent(25,0.6043323);
   data_mc_ratio__588->SetBinContent(26,0.1222445);
   data_mc_ratio__588->SetBinContent(27,5.590124);
   data_mc_ratio__588->SetBinContent(28,3.704028);
   data_mc_ratio__588->SetBinError(2,0.2492255);
   data_mc_ratio__588->SetBinError(3,0.001654686);
   data_mc_ratio__588->SetBinError(4,0.00437996);
   data_mc_ratio__588->SetBinError(5,0.004902162);
   data_mc_ratio__588->SetBinError(6,0.005391308);
   data_mc_ratio__588->SetBinError(7,0.006244327);
   data_mc_ratio__588->SetBinError(8,0.00585461);
   data_mc_ratio__588->SetBinError(9,0.007019955);
   data_mc_ratio__588->SetBinError(10,0.002303063);
   data_mc_ratio__588->SetBinError(11,0.005478525);
   data_mc_ratio__588->SetBinError(12,0.00537808);
   data_mc_ratio__588->SetBinError(13,0.004617762);
   data_mc_ratio__588->SetBinError(14,0.004039549);
   data_mc_ratio__588->SetBinError(15,0.003743569);
   data_mc_ratio__588->SetBinError(16,0.003367857);
   data_mc_ratio__588->SetBinError(17,0.005621645);
   data_mc_ratio__588->SetBinError(18,0.004465539);
   data_mc_ratio__588->SetBinError(19,0.005259168);
   data_mc_ratio__588->SetBinError(20,0.01086967);
   data_mc_ratio__588->SetBinError(21,0.01069398);
   data_mc_ratio__588->SetBinError(22,0.01731958);
   data_mc_ratio__588->SetBinError(23,0.01396679);
   data_mc_ratio__588->SetBinError(24,0.01645072);
   data_mc_ratio__588->SetBinError(25,0.06442204);
   data_mc_ratio__588->SetBinError(26,0.01822313);
   data_mc_ratio__588->SetBinError(27,1.355804);
   data_mc_ratio__588->SetBinError(28,1.852014);
   data_mc_ratio__588->SetMinimum(0.4);
   data_mc_ratio__588->SetMaximum(1.6);
   data_mc_ratio__588->SetEntries(39.40732);
   data_mc_ratio__588->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__588->SetLineColor(ci);
   data_mc_ratio__588->SetLineWidth(2);
   data_mc_ratio__588->SetMarkerStyle(20);
   data_mc_ratio__588->SetMarkerSize(1.2);
   data_mc_ratio__588->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__588->GetXaxis()->SetRange(1,31);
   data_mc_ratio__588->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__588->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__588->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__588->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__588->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__588->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__588->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__588->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__588->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__588->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__588->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__588->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__588->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__588->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__588->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__588->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__588->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1428[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1428[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1428[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1428[30] = {
   0,
   0.9430893,
   0.6368809,
   0.1132266,
   0.1231009,
   0.1291543,
   0.1327708,
   0.1264599,
   0.1206443,
   0.5786315,
   0.1147332,
   0.107264,
   0.1021765,
   0.09225349,
   0.0886484,
   0.1063726,
   0.11076,
   0.1315493,
   0.1538783,
   0.203655,
   0.2449686,
   0.3677635,
   0.3762701,
   0.4937861,
   0.2911799,
   0.8279915,
   0.1547236,
   0.2368904,
   1,
   0};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1428,Graph_from_mc_statistical_error_fy1428,Graph_from_mc_statistical_error_fex1428,Graph_from_mc_statistical_error_fey1428);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1428 = new TH1F("Graph_Graph_from_mc_statistical_error1428","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1428->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1428->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1428->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1428->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1428->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1428->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1428->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1428->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1428->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1428);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
