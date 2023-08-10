void Z_dR_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Thu Aug 10 12:21:32 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(0,0,1,1);
   Z_dR_both_17->SetFillColor(0);
   Z_dR_both_17->SetFillStyle(4000);
   Z_dR_both_17->SetBorderMode(0);
   Z_dR_both_17->SetBorderSize(2);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.863593,6.314516,12.14828);
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
   st->SetMaximum(1.296399e+10);
   
   TH1F *st_stack_210 = new TH1F("st_stack_210","",30,0,6);
   st_stack_210->SetMinimum(0.001417159);
   st_stack_210->SetMaximum(4.436988e+10);
   st_stack_210->SetDirectory(0);
   st_stack_210->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_210->SetLineColor(ci);
   st_stack_210->GetXaxis()->SetRange(1,30);
   st_stack_210->GetXaxis()->SetLabelFont(42);
   st_stack_210->GetXaxis()->SetLabelSize(0.035);
   st_stack_210->GetXaxis()->SetTitleSize(0.035);
   st_stack_210->GetXaxis()->SetTitleFont(42);
   st_stack_210->GetYaxis()->SetTitle("Events/0.2");
   st_stack_210->GetYaxis()->SetLabelFont(42);
   st_stack_210->GetYaxis()->SetLabelSize(0.05);
   st_stack_210->GetYaxis()->SetTitleSize(0.057);
   st_stack_210->GetYaxis()->SetTitleOffset(1.2);
   st_stack_210->GetYaxis()->SetTitleFont(42);
   st_stack_210->GetZaxis()->SetLabelFont(42);
   st_stack_210->GetZaxis()->SetLabelSize(0.035);
   st_stack_210->GetZaxis()->SetTitleSize(0.035);
   st_stack_210->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_210);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,14402.44);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,15724.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,34035.3);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,9019.424);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,9648.307);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,8219.157);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,6147.185);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,7927.463);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,8918.714);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,9106.606);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,12120.16);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,8660.734);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,11061.71);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,9191.314);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,9080.238);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,21556.93);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,7101.163);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,4937.676);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,3804.071);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,4130.46);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,3659.767);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,3902.015);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,3163.666);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,3121.081);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,1898.932);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,1811.913);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,1952.882);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(30,530.636);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(31,1167.48);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,1452.085);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,1674.819);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,21715.5);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,1260.341);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,1390.614);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,1236.517);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,893.4647);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,1262.101);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,1293.165);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,1344.086);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,2223.444);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,1287.225);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,1571.711);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,1264.466);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,1324.658);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,15294.79);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,1117.773);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,841.648);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,739.2406);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,776.4307);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,802.0505);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,927.513);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,817.0321);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,881.0195);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,486.3918);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,464.3293);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,565.48);
   VbbHcc_both_Z_dR_stack_1->SetBinError(30,105.3506);
   VbbHcc_both_Z_dR_stack_1->SetBinError(31,481.6174);
   VbbHcc_both_Z_dR_stack_1->SetEntries(10320);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,0.06738933);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,39.3821);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,57.65244);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,49.99578);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,51.34988);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,51.19312);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,54.84436);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,54.34228);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,52.08172);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,46.3563);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,54.78503);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,54.77632);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,49.24417);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,59.74018);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,49.99895);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,35.10603);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,45.87033);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,36.07449);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,30.36877);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,31.02808);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,25.95145);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,25.52472);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,18.85741);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,15.4372);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,15.12418);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,11.5032);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,10.16689);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,8.441485);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(30,5.727005);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(31,3.039185);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.06738933);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,2.81665);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,3.343223);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,3.078316);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,3.219855);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,3.18522);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,3.367385);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,3.277368);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,3.169865);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,3.014093);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,3.256655);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,3.218181);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,3.08527);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,3.516107);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,3.128971);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,2.490617);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,3.12299);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,2.634157);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,2.46096);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,2.527819);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,2.245669);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,2.279468);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,1.954078);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,1.68627);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,1.736675);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,1.493568);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,1.359582);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,1.31236);
   VbbHcc_both_Z_dR_stack_2->SetBinError(30,0.9909754);
   VbbHcc_both_Z_dR_stack_2->SetBinError(31,0.7339015);
   VbbHcc_both_Z_dR_stack_2->SetEntries(12006);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_3 = new TH1D("VbbHcc_both_Z_dR_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(2,1.013593);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(3,771.484);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(4,1152.28);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(5,1217.495);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(6,1260.459);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(7,1264.241);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(8,1212.874);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(9,1173.959);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(10,1127.019);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(11,1131.309);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(12,1096.275);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(13,1123.027);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(14,1086.109);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(15,1045.116);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(16,1014.988);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(17,943.0417);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(18,850.9446);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(19,782.0408);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(20,696.5628);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(21,619.666);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(22,529.0663);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(23,473.4647);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(24,416.7093);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(25,342.3451);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(26,301.2367);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(27,258.1201);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(28,212.6588);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(29,169.1751);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(30,108.8868);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(31,82.26201);
   VbbHcc_both_Z_dR_stack_3->SetBinError(2,0.3009879);
   VbbHcc_both_Z_dR_stack_3->SetBinError(3,7.568923);
   VbbHcc_both_Z_dR_stack_3->SetBinError(4,9.250726);
   VbbHcc_both_Z_dR_stack_3->SetBinError(5,9.548199);
   VbbHcc_both_Z_dR_stack_3->SetBinError(6,9.723961);
   VbbHcc_both_Z_dR_stack_3->SetBinError(7,9.719321);
   VbbHcc_both_Z_dR_stack_3->SetBinError(8,9.490103);
   VbbHcc_both_Z_dR_stack_3->SetBinError(9,9.310848);
   VbbHcc_both_Z_dR_stack_3->SetBinError(10,9.116869);
   VbbHcc_both_Z_dR_stack_3->SetBinError(11,9.133369);
   VbbHcc_both_Z_dR_stack_3->SetBinError(12,8.9884);
   VbbHcc_both_Z_dR_stack_3->SetBinError(13,9.116397);
   VbbHcc_both_Z_dR_stack_3->SetBinError(14,8.973183);
   VbbHcc_both_Z_dR_stack_3->SetBinError(15,8.808112);
   VbbHcc_both_Z_dR_stack_3->SetBinError(16,8.704026);
   VbbHcc_both_Z_dR_stack_3->SetBinError(17,8.402534);
   VbbHcc_both_Z_dR_stack_3->SetBinError(18,7.966478);
   VbbHcc_both_Z_dR_stack_3->SetBinError(19,7.63816);
   VbbHcc_both_Z_dR_stack_3->SetBinError(20,7.19898);
   VbbHcc_both_Z_dR_stack_3->SetBinError(21,6.80628);
   VbbHcc_both_Z_dR_stack_3->SetBinError(22,6.242465);
   VbbHcc_both_Z_dR_stack_3->SetBinError(23,5.918267);
   VbbHcc_both_Z_dR_stack_3->SetBinError(24,5.542599);
   VbbHcc_both_Z_dR_stack_3->SetBinError(25,5.031248);
   VbbHcc_both_Z_dR_stack_3->SetBinError(26,4.743601);
   VbbHcc_both_Z_dR_stack_3->SetBinError(27,4.36967);
   VbbHcc_both_Z_dR_stack_3->SetBinError(28,3.969058);
   VbbHcc_both_Z_dR_stack_3->SetBinError(29,3.516025);
   VbbHcc_both_Z_dR_stack_3->SetBinError(30,2.845921);
   VbbHcc_both_Z_dR_stack_3->SetBinError(31,2.466303);
   VbbHcc_both_Z_dR_stack_3->SetEntries(333938);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_4 = new TH1D("VbbHcc_both_Z_dR_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(2,0.08328016);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(3,149.8301);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(4,212.0286);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(5,205.5091);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(6,199.678);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(7,137.1057);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(8,131.2265);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(9,122.4312);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(10,102.7716);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(11,118.8356);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(12,113.5812);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(13,116.1358);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(14,132.908);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(15,113.6495);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(16,117.9276);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(17,112.3923);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(18,101.6593);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(19,98.328);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(20,79.00815);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(21,56.4591);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(22,54.48069);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(23,49.56013);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(24,41.16979);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(25,29.76143);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(26,32.80895);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(27,32.03553);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(28,25.07136);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(29,20.01245);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(30,14.14284);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(31,9.610355);
   VbbHcc_both_Z_dR_stack_4->SetBinError(2,0.08328016);
   VbbHcc_both_Z_dR_stack_4->SetBinError(3,4.930425);
   VbbHcc_both_Z_dR_stack_4->SetBinError(4,6.721593);
   VbbHcc_both_Z_dR_stack_4->SetBinError(5,10.27966);
   VbbHcc_both_Z_dR_stack_4->SetBinError(6,10.85251);
   VbbHcc_both_Z_dR_stack_4->SetBinError(7,8.696746);
   VbbHcc_both_Z_dR_stack_4->SetBinError(8,8.788327);
   VbbHcc_both_Z_dR_stack_4->SetBinError(9,9.295988);
   VbbHcc_both_Z_dR_stack_4->SetBinError(10,6.799978);
   VbbHcc_both_Z_dR_stack_4->SetBinError(11,9.615814);
   VbbHcc_both_Z_dR_stack_4->SetBinError(12,8.638949);
   VbbHcc_both_Z_dR_stack_4->SetBinError(13,7.957847);
   VbbHcc_both_Z_dR_stack_4->SetBinError(14,10.5279);
   VbbHcc_both_Z_dR_stack_4->SetBinError(15,7.158082);
   VbbHcc_both_Z_dR_stack_4->SetBinError(16,8.091395);
   VbbHcc_both_Z_dR_stack_4->SetBinError(17,6.448713);
   VbbHcc_both_Z_dR_stack_4->SetBinError(18,6.246959);
   VbbHcc_both_Z_dR_stack_4->SetBinError(19,7.773385);
   VbbHcc_both_Z_dR_stack_4->SetBinError(20,5.182937);
   VbbHcc_both_Z_dR_stack_4->SetBinError(21,4.742053);
   VbbHcc_both_Z_dR_stack_4->SetBinError(22,5.000507);
   VbbHcc_both_Z_dR_stack_4->SetBinError(23,6.206143);
   VbbHcc_both_Z_dR_stack_4->SetBinError(24,4.588814);
   VbbHcc_both_Z_dR_stack_4->SetBinError(25,4.270066);
   VbbHcc_both_Z_dR_stack_4->SetBinError(26,5.561094);
   VbbHcc_both_Z_dR_stack_4->SetBinError(27,3.101122);
   VbbHcc_both_Z_dR_stack_4->SetBinError(28,2.294335);
   VbbHcc_both_Z_dR_stack_4->SetBinError(29,1.957577);
   VbbHcc_both_Z_dR_stack_4->SetBinError(30,1.859274);
   VbbHcc_both_Z_dR_stack_4->SetBinError(31,1.391408);
   VbbHcc_both_Z_dR_stack_4->SetEntries(18216);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_5 = new TH1D("VbbHcc_both_Z_dR_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(3,28.89035);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(4,28.91105);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(5,16.87496);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(6,18.7528);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(7,12.52987);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(8,10.96809);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(9,14.937);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(10,6.754884);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(11,10.83028);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(12,8.324354);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(13,11.74825);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(14,13.71316);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(15,10.23192);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(16,6.343878);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(17,10.90667);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(18,11.12683);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(19,5.213811);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(20,3.746269);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(21,4.27282);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(22,4.292087);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(23,4.806096);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(24,2.801018);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(25,11.92538);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(26,6.360412);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(27,4.224802);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(28,3.835667);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(29,2.336363);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(30,2.096751);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(31,2.511735);
   VbbHcc_both_Z_dR_stack_5->SetBinError(3,3.398079);
   VbbHcc_both_Z_dR_stack_5->SetBinError(4,3.789004);
   VbbHcc_both_Z_dR_stack_5->SetBinError(5,2.911732);
   VbbHcc_both_Z_dR_stack_5->SetBinError(6,3.418237);
   VbbHcc_both_Z_dR_stack_5->SetBinError(7,2.24336);
   VbbHcc_both_Z_dR_stack_5->SetBinError(8,2.230877);
   VbbHcc_both_Z_dR_stack_5->SetBinError(9,5.847593);
   VbbHcc_both_Z_dR_stack_5->SetBinError(10,1.112585);
   VbbHcc_both_Z_dR_stack_5->SetBinError(11,1.949923);
   VbbHcc_both_Z_dR_stack_5->SetBinError(12,1.759934);
   VbbHcc_both_Z_dR_stack_5->SetBinError(13,2.348225);
   VbbHcc_both_Z_dR_stack_5->SetBinError(14,2.856145);
   VbbHcc_both_Z_dR_stack_5->SetBinError(15,1.550249);
   VbbHcc_both_Z_dR_stack_5->SetBinError(16,0.9838428);
   VbbHcc_both_Z_dR_stack_5->SetBinError(17,2.485711);
   VbbHcc_both_Z_dR_stack_5->SetBinError(18,2.71111);
   VbbHcc_both_Z_dR_stack_5->SetBinError(19,0.8415809);
   VbbHcc_both_Z_dR_stack_5->SetBinError(20,0.6900041);
   VbbHcc_both_Z_dR_stack_5->SetBinError(21,0.9339005);
   VbbHcc_both_Z_dR_stack_5->SetBinError(22,0.7230135);
   VbbHcc_both_Z_dR_stack_5->SetBinError(23,1.670412);
   VbbHcc_both_Z_dR_stack_5->SetBinError(24,1.101933);
   VbbHcc_both_Z_dR_stack_5->SetBinError(25,8.14848);
   VbbHcc_both_Z_dR_stack_5->SetBinError(26,2.405994);
   VbbHcc_both_Z_dR_stack_5->SetBinError(27,1.517585);
   VbbHcc_both_Z_dR_stack_5->SetBinError(28,1.573899);
   VbbHcc_both_Z_dR_stack_5->SetBinError(29,0.5883514);
   VbbHcc_both_Z_dR_stack_5->SetBinError(30,0.6693303);
   VbbHcc_both_Z_dR_stack_5->SetBinError(31,1.518124);
   VbbHcc_both_Z_dR_stack_5->SetEntries(2376);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_6 = new TH1D("VbbHcc_both_Z_dR_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(5,0.3402984);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(9,0.3608682);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(14,0.5153152);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(17,0.3983715);
   VbbHcc_both_Z_dR_stack_6->SetBinError(5,0.3402984);
   VbbHcc_both_Z_dR_stack_6->SetBinError(9,0.3608682);
   VbbHcc_both_Z_dR_stack_6->SetBinError(14,0.3647133);
   VbbHcc_both_Z_dR_stack_6->SetBinError(17,0.3983715);
   VbbHcc_both_Z_dR_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_7 = new TH1D("VbbHcc_both_Z_dR_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(3,1.340989);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(4,0.8521563);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(5,0.1954472);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(6,0.4750702);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(7,0.77973);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(8,0.2572919);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(10,0.2655071);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(14,0.6199659);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(15,0.294848);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(16,0.302748);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(17,0.2715318);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(19,0.584361);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(23,0.2861422);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(24,0.3136654);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(28,0.2900543);
   VbbHcc_both_Z_dR_stack_7->SetBinError(3,0.6103554);
   VbbHcc_both_Z_dR_stack_7->SetBinError(4,0.5065196);
   VbbHcc_both_Z_dR_stack_7->SetBinError(5,0.1954472);
   VbbHcc_both_Z_dR_stack_7->SetBinError(6,0.34375);
   VbbHcc_both_Z_dR_stack_7->SetBinError(7,0.4569943);
   VbbHcc_both_Z_dR_stack_7->SetBinError(8,0.2572919);
   VbbHcc_both_Z_dR_stack_7->SetBinError(10,0.2655071);
   VbbHcc_both_Z_dR_stack_7->SetBinError(14,0.438445);
   VbbHcc_both_Z_dR_stack_7->SetBinError(15,0.294848);
   VbbHcc_both_Z_dR_stack_7->SetBinError(16,0.302748);
   VbbHcc_both_Z_dR_stack_7->SetBinError(17,0.2715318);
   VbbHcc_both_Z_dR_stack_7->SetBinError(19,0.4139108);
   VbbHcc_both_Z_dR_stack_7->SetBinError(23,0.2861422);
   VbbHcc_both_Z_dR_stack_7->SetBinError(24,0.3136654);
   VbbHcc_both_Z_dR_stack_7->SetBinError(28,0.2900543);
   VbbHcc_both_Z_dR_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_8 = new TH1D("VbbHcc_both_Z_dR_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(3,4.370021);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(4,6.716013);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(5,7.621538);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(6,3.365158);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(7,1.056403);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(8,1.478201);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(9,1.222422);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(10,1.053787);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(11,1.179612);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(12,0.8705781);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(13,2.221648);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(14,1.45726);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(15,3.412858);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(16,2.140765);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(17,0.8482364);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(18,2.068326);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(19,2.609495);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(20,2.243966);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(21,0.9672112);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(22,0.5985458);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(23,0.6531596);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(24,0.6539889);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(25,0.3872143);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(27,0.3217996);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(28,0.8535516);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(29,0.543562);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(30,0.2302364);
   VbbHcc_both_Z_dR_stack_8->SetBinError(3,1.121988);
   VbbHcc_both_Z_dR_stack_8->SetBinError(4,1.348748);
   VbbHcc_both_Z_dR_stack_8->SetBinError(5,1.504257);
   VbbHcc_both_Z_dR_stack_8->SetBinError(6,0.9859562);
   VbbHcc_both_Z_dR_stack_8->SetBinError(7,0.5371796);
   VbbHcc_both_Z_dR_stack_8->SetBinError(8,0.6620404);
   VbbHcc_both_Z_dR_stack_8->SetBinError(9,0.6117013);
   VbbHcc_both_Z_dR_stack_8->SetBinError(10,0.5496721);
   VbbHcc_both_Z_dR_stack_8->SetBinError(11,0.5943153);
   VbbHcc_both_Z_dR_stack_8->SetBinError(12,0.4355529);
   VbbHcc_both_Z_dR_stack_8->SetBinError(13,0.7919157);
   VbbHcc_both_Z_dR_stack_8->SetBinError(14,0.6663159);
   VbbHcc_both_Z_dR_stack_8->SetBinError(15,1.034653);
   VbbHcc_both_Z_dR_stack_8->SetBinError(16,0.8176026);
   VbbHcc_both_Z_dR_stack_8->SetBinError(17,0.4930517);
   VbbHcc_both_Z_dR_stack_8->SetBinError(18,0.7872614);
   VbbHcc_both_Z_dR_stack_8->SetBinError(19,0.8778561);
   VbbHcc_both_Z_dR_stack_8->SetBinError(20,0.8312207);
   VbbHcc_both_Z_dR_stack_8->SetBinError(21,0.5641008);
   VbbHcc_both_Z_dR_stack_8->SetBinError(22,0.4241608);
   VbbHcc_both_Z_dR_stack_8->SetBinError(23,0.3788926);
   VbbHcc_both_Z_dR_stack_8->SetBinError(24,0.4626568);
   VbbHcc_both_Z_dR_stack_8->SetBinError(25,0.3872143);
   VbbHcc_both_Z_dR_stack_8->SetBinError(27,0.3217996);
   VbbHcc_both_Z_dR_stack_8->SetBinError(28,0.5064996);
   VbbHcc_both_Z_dR_stack_8->SetBinError(29,0.3865494);
   VbbHcc_both_Z_dR_stack_8->SetBinError(30,0.2302364);
   VbbHcc_both_Z_dR_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_9 = new TH1D("VbbHcc_both_Z_dR_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(3,2.802164);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(4,5.687202);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(5,5.540181);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(6,4.375868);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(7,2.928386);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(8,1.783249);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(9,1.233417);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(10,1.235541);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(11,1.391929);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(12,1.723762);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(13,2.022847);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(14,2.261828);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(15,2.657165);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(16,2.59245);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(17,2.490484);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(18,2.267261);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(19,1.907104);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(20,1.430918);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(21,0.9644816);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(22,0.7045756);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(23,0.4649096);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(24,0.4201622);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(25,0.3797816);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(26,0.4672371);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(27,0.5250366);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(28,0.6025313);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(29,0.5254856);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(30,0.2626524);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(31,0.153356);
   VbbHcc_both_Z_dR_stack_9->SetBinError(3,0.07496862);
   VbbHcc_both_Z_dR_stack_9->SetBinError(4,0.1066529);
   VbbHcc_both_Z_dR_stack_9->SetBinError(5,0.1054333);
   VbbHcc_both_Z_dR_stack_9->SetBinError(6,0.09330384);
   VbbHcc_both_Z_dR_stack_9->SetBinError(7,0.07664195);
   VbbHcc_both_Z_dR_stack_9->SetBinError(8,0.0597379);
   VbbHcc_both_Z_dR_stack_9->SetBinError(9,0.04894958);
   VbbHcc_both_Z_dR_stack_9->SetBinError(10,0.04895689);
   VbbHcc_both_Z_dR_stack_9->SetBinError(11,0.05226931);
   VbbHcc_both_Z_dR_stack_9->SetBinError(12,0.05859608);
   VbbHcc_both_Z_dR_stack_9->SetBinError(13,0.06343978);
   VbbHcc_both_Z_dR_stack_9->SetBinError(14,0.06760415);
   VbbHcc_both_Z_dR_stack_9->SetBinError(15,0.07318981);
   VbbHcc_both_Z_dR_stack_9->SetBinError(16,0.07209607);
   VbbHcc_both_Z_dR_stack_9->SetBinError(17,0.07041031);
   VbbHcc_both_Z_dR_stack_9->SetBinError(18,0.06758785);
   VbbHcc_both_Z_dR_stack_9->SetBinError(19,0.06181273);
   VbbHcc_both_Z_dR_stack_9->SetBinError(20,0.05374652);
   VbbHcc_both_Z_dR_stack_9->SetBinError(21,0.04427751);
   VbbHcc_both_Z_dR_stack_9->SetBinError(22,0.03763226);
   VbbHcc_both_Z_dR_stack_9->SetBinError(23,0.03028985);
   VbbHcc_both_Z_dR_stack_9->SetBinError(24,0.02840056);
   VbbHcc_both_Z_dR_stack_9->SetBinError(25,0.02688964);
   VbbHcc_both_Z_dR_stack_9->SetBinError(26,0.03027496);
   VbbHcc_both_Z_dR_stack_9->SetBinError(27,0.03220967);
   VbbHcc_both_Z_dR_stack_9->SetBinError(28,0.03501713);
   VbbHcc_both_Z_dR_stack_9->SetBinError(29,0.03239019);
   VbbHcc_both_Z_dR_stack_9->SetBinError(30,0.02278677);
   VbbHcc_both_Z_dR_stack_9->SetBinError(31,0.01737681);
   VbbHcc_both_Z_dR_stack_9->SetEntries(28446);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_10 = new TH1D("VbbHcc_both_Z_dR_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(3,0.914625);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(4,1.9084);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(5,2.309716);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(6,2.080671);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(7,1.54749);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(8,1.097984);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(9,0.8079313);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(10,0.7314777);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(11,0.7120956);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(12,0.7918343);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(13,0.8567183);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(14,0.8700098);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(15,0.8806369);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(16,0.8810674);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(17,0.8377693);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(18,0.7742139);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(19,0.6557253);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(20,0.5765562);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(21,0.4625619);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(22,0.3905246);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(23,0.2945137);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(24,0.2698411);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(25,0.2590029);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(26,0.2856891);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(27,0.297366);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(28,0.2482607);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(29,0.2017201);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(30,0.1262918);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(31,0.06477878);
   VbbHcc_both_Z_dR_stack_10->SetBinError(3,0.02022997);
   VbbHcc_both_Z_dR_stack_10->SetBinError(4,0.02920688);
   VbbHcc_both_Z_dR_stack_10->SetBinError(5,0.03218461);
   VbbHcc_both_Z_dR_stack_10->SetBinError(6,0.03055808);
   VbbHcc_both_Z_dR_stack_10->SetBinError(7,0.02631405);
   VbbHcc_both_Z_dR_stack_10->SetBinError(8,0.02219914);
   VbbHcc_both_Z_dR_stack_10->SetBinError(9,0.0190082);
   VbbHcc_both_Z_dR_stack_10->SetBinError(10,0.01811892);
   VbbHcc_both_Z_dR_stack_10->SetBinError(11,0.01787304);
   VbbHcc_both_Z_dR_stack_10->SetBinError(12,0.01885695);
   VbbHcc_both_Z_dR_stack_10->SetBinError(13,0.01962079);
   VbbHcc_both_Z_dR_stack_10->SetBinError(14,0.01976773);
   VbbHcc_both_Z_dR_stack_10->SetBinError(15,0.01989258);
   VbbHcc_both_Z_dR_stack_10->SetBinError(16,0.01988609);
   VbbHcc_both_Z_dR_stack_10->SetBinError(17,0.01942024);
   VbbHcc_both_Z_dR_stack_10->SetBinError(18,0.01864023);
   VbbHcc_both_Z_dR_stack_10->SetBinError(19,0.01718351);
   VbbHcc_both_Z_dR_stack_10->SetBinError(20,0.0160772);
   VbbHcc_both_Z_dR_stack_10->SetBinError(21,0.01440544);
   VbbHcc_both_Z_dR_stack_10->SetBinError(22,0.01327113);
   VbbHcc_both_Z_dR_stack_10->SetBinError(23,0.01145266);
   VbbHcc_both_Z_dR_stack_10->SetBinError(24,0.01098853);
   VbbHcc_both_Z_dR_stack_10->SetBinError(25,0.01077661);
   VbbHcc_both_Z_dR_stack_10->SetBinError(26,0.01130432);
   VbbHcc_both_Z_dR_stack_10->SetBinError(27,0.011537);
   VbbHcc_both_Z_dR_stack_10->SetBinError(28,0.01056101);
   VbbHcc_both_Z_dR_stack_10->SetBinError(29,0.009484435);
   VbbHcc_both_Z_dR_stack_10->SetBinError(30,0.007502312);
   VbbHcc_both_Z_dR_stack_10->SetBinError(31,0.005402445);
   VbbHcc_both_Z_dR_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_11 = new TH1D("VbbHcc_both_Z_dR_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.02247596);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.01420633);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.03929802);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.01883791);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(7,0.00560013);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(8,0.007701738);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.005153904);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(10,0.003866432);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.00200821);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(12,0.01119274);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.001245676);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.001780205);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.007726777);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.003249323);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(19,0.002310481);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(20,0.002127615);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(22,0.004335175);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.003696304);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(25,0.00394522);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(26,0.004058264);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(27,0.001355193);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(28,0.004322923);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(31,0.001370852);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.00629833);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.005092355);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.008674554);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.006003597);
   VbbHcc_both_Z_dR_stack_11->SetBinError(7,0.00289972);
   VbbHcc_both_Z_dR_stack_11->SetBinError(8,0.003855167);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.003106976);
   VbbHcc_both_Z_dR_stack_11->SetBinError(10,0.002801563);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.00200821);
   VbbHcc_both_Z_dR_stack_11->SetBinError(12,0.004618872);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.001245676);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.001780205);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.003882213);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.002299987);
   VbbHcc_both_Z_dR_stack_11->SetBinError(19,0.002310481);
   VbbHcc_both_Z_dR_stack_11->SetBinError(20,0.001771275);
   VbbHcc_both_Z_dR_stack_11->SetBinError(22,0.003085562);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.002622485);
   VbbHcc_both_Z_dR_stack_11->SetBinError(25,0.002789905);
   VbbHcc_both_Z_dR_stack_11->SetBinError(26,0.002872144);
   VbbHcc_both_Z_dR_stack_11->SetBinError(27,0.001355193);
   VbbHcc_both_Z_dR_stack_11->SetBinError(28,0.003077958);
   VbbHcc_both_Z_dR_stack_11->SetBinError(31,0.001370852);
   VbbHcc_both_Z_dR_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_12 = new TH1D("VbbHcc_both_Z_dR_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(3,0.005163676);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(4,0.01123177);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(5,0.01076977);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(6,0.006200607);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(7,0.005302105);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(8,0.003749799);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(9,0.001428088);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(10,0.001989104);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(11,0.002560377);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(12,0.001418458);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(13,0.002700039);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(14,0.001931643);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(15,0.001081871);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(16,0.002455081);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(17,0.001037142);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(18,0.001939368);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(19,0.001842431);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(20,0.0007079588);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(21,0.001336581);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(22,0.0007251663);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(23,0.001082265);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(24,0.000777488);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(25,0.001317644);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(27,0.0008510938);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(28,0.0007394506);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(29,0.0004253058);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(30,0.0004793034);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(31,0.0006739541);
   VbbHcc_both_Z_dR_stack_12->SetBinError(3,0.001117133);
   VbbHcc_both_Z_dR_stack_12->SetBinError(4,0.001680387);
   VbbHcc_both_Z_dR_stack_12->SetBinError(5,0.001623548);
   VbbHcc_both_Z_dR_stack_12->SetBinError(6,0.001236835);
   VbbHcc_both_Z_dR_stack_12->SetBinError(7,0.00113065);
   VbbHcc_both_Z_dR_stack_12->SetBinError(8,0.0009425425);
   VbbHcc_both_Z_dR_stack_12->SetBinError(9,0.0005885924);
   VbbHcc_both_Z_dR_stack_12->SetBinError(10,0.0006699176);
   VbbHcc_both_Z_dR_stack_12->SetBinError(11,0.0008127284);
   VbbHcc_both_Z_dR_stack_12->SetBinError(12,0.0005469378);
   VbbHcc_both_Z_dR_stack_12->SetBinError(13,0.0008204881);
   VbbHcc_both_Z_dR_stack_12->SetBinError(14,0.0006929245);
   VbbHcc_both_Z_dR_stack_12->SetBinError(15,0.0004708343);
   VbbHcc_both_Z_dR_stack_12->SetBinError(16,0.0007835141);
   VbbHcc_both_Z_dR_stack_12->SetBinError(17,0.0004737431);
   VbbHcc_both_Z_dR_stack_12->SetBinError(18,0.0006961271);
   VbbHcc_both_Z_dR_stack_12->SetBinError(19,0.0006563882);
   VbbHcc_both_Z_dR_stack_12->SetBinError(20,0.0004112133);
   VbbHcc_both_Z_dR_stack_12->SetBinError(21,0.0006003511);
   VbbHcc_both_Z_dR_stack_12->SetBinError(22,0.0004192567);
   VbbHcc_both_Z_dR_stack_12->SetBinError(23,0.000505673);
   VbbHcc_both_Z_dR_stack_12->SetBinError(24,0.0004489769);
   VbbHcc_both_Z_dR_stack_12->SetBinError(25,0.000525173);
   VbbHcc_both_Z_dR_stack_12->SetBinError(27,0.0004304465);
   VbbHcc_both_Z_dR_stack_12->SetBinError(28,0.000428302);
   VbbHcc_both_Z_dR_stack_12->SetBinError(29,0.0003046073);
   VbbHcc_both_Z_dR_stack_12->SetBinError(30,0.000340647);
   VbbHcc_both_Z_dR_stack_12->SetBinError(31,0.0004001985);
   VbbHcc_both_Z_dR_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR__576 = new TH1D("VbbHcc_both_Z_dR__576","",30,0,6);
   VbbHcc_both_Z_dR__576->SetBinContent(2,1);
   VbbHcc_both_Z_dR__576->SetBinContent(3,4933);
   VbbHcc_both_Z_dR__576->SetBinContent(4,5633);
   VbbHcc_both_Z_dR__576->SetBinContent(5,4130);
   VbbHcc_both_Z_dR__576->SetBinContent(6,3640);
   VbbHcc_both_Z_dR__576->SetBinContent(7,3439);
   VbbHcc_both_Z_dR__576->SetBinContent(8,3269);
   VbbHcc_both_Z_dR__576->SetBinContent(9,3040);
   VbbHcc_both_Z_dR__576->SetBinContent(10,2899);
   VbbHcc_both_Z_dR__576->SetBinContent(11,2924);
   VbbHcc_both_Z_dR__576->SetBinContent(12,2871);
   VbbHcc_both_Z_dR__576->SetBinContent(13,2961);
   VbbHcc_both_Z_dR__576->SetBinContent(14,2939);
   VbbHcc_both_Z_dR__576->SetBinContent(15,2942);
   VbbHcc_both_Z_dR__576->SetBinContent(16,2883);
   VbbHcc_both_Z_dR__576->SetBinContent(17,2669);
   VbbHcc_both_Z_dR__576->SetBinContent(18,2426);
   VbbHcc_both_Z_dR__576->SetBinContent(19,2213);
   VbbHcc_both_Z_dR__576->SetBinContent(20,1939);
   VbbHcc_both_Z_dR__576->SetBinContent(21,1668);
   VbbHcc_both_Z_dR__576->SetBinContent(22,1506);
   VbbHcc_both_Z_dR__576->SetBinContent(23,1284);
   VbbHcc_both_Z_dR__576->SetBinContent(24,1073);
   VbbHcc_both_Z_dR__576->SetBinContent(25,897);
   VbbHcc_both_Z_dR__576->SetBinContent(26,792);
   VbbHcc_both_Z_dR__576->SetBinContent(27,762);
   VbbHcc_both_Z_dR__576->SetBinContent(28,618);
   VbbHcc_both_Z_dR__576->SetBinContent(29,611);
   VbbHcc_both_Z_dR__576->SetBinContent(30,442);
   VbbHcc_both_Z_dR__576->SetBinContent(31,280);
   VbbHcc_both_Z_dR__576->SetEntries(67713);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR__576->SetLineColor(ci);
   VbbHcc_both_Z_dR__576->SetLineWidth(2);
   VbbHcc_both_Z_dR__576->SetMarkerStyle(20);
   VbbHcc_both_Z_dR__576->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR__576->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR__576->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__576->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__576->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__576->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__576->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__576->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__576->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__576->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR__576->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__576->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__576->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__576->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__576->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__576->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_fx1419[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fy1419[30] = {
   0,
   1.164262,
   15401.48,
   17190.56,
   35541.23,
   10559.99,
   11119.7,
   9633.699,
   7516.486,
   9219.382,
   10229.33,
   10382.97,
   13430.96,
   9948.437,
   12297.7,
   10386.49,
   10186.53,
   22571.64,
   8028.581,
   5751.616,
   4517.893,
   4745.949,
   4214.827,
   4383.211,
   3564.166,
   3477.368,
   2205.962,
   2065.645,
   2154.119,
   662.1091};
   Double_t Graph_from_VbbHcc_both_Z_dR_fex1419[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fey1419[30] = {
   0,
   0.3194849,
   1452.121,
   1674.866,
   21715.51,
   1260.434,
   1390.681,
   1236.592,
   893.587,
   1262.157,
   1293.238,
   1344.149,
   2223.48,
   1287.307,
   1571.757,
   1264.526,
   1324.705,
   15294.8,
   1117.83,
   841.699,
   739.2923,
   776.4756,
   802.1014,
   927.5438,
   817.1012,
   881.0548,
   486.4261,
   464.3569,
   565.4963,
   105.4124};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_fx1419,Graph_from_VbbHcc_both_Z_dR_fy1419,Graph_from_VbbHcc_both_Z_dR_fex1419,Graph_from_VbbHcc_both_Z_dR_fey1419);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR1419 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR1419","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetMinimum(62.98241);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetMaximum(62982.41);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR1419);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__577 = new TH1D("data_mc_ratio__577","",30,0,6);
   data_mc_ratio__577->SetBinContent(2,0.8589129);
   data_mc_ratio__577->SetBinContent(3,0.3202939);
   data_mc_ratio__577->SetBinContent(4,0.3276798);
   data_mc_ratio__577->SetBinContent(5,0.1162031);
   data_mc_ratio__577->SetBinContent(6,0.3446974);
   data_mc_ratio__577->SetBinContent(7,0.3092709);
   data_mc_ratio__577->SetBinContent(8,0.3393297);
   data_mc_ratio__577->SetBinContent(9,0.4044443);
   data_mc_ratio__577->SetBinContent(10,0.3144463);
   data_mc_ratio__577->SetBinContent(11,0.2858446);
   data_mc_ratio__577->SetBinContent(12,0.2765105);
   data_mc_ratio__577->SetBinContent(13,0.2204608);
   data_mc_ratio__577->SetBinContent(14,0.2954233);
   data_mc_ratio__577->SetBinContent(15,0.2392317);
   data_mc_ratio__577->SetBinContent(16,0.277572);
   data_mc_ratio__577->SetBinContent(17,0.2620126);
   data_mc_ratio__577->SetBinContent(18,0.10748);
   data_mc_ratio__577->SetBinContent(19,0.2756403);
   data_mc_ratio__577->SetBinContent(20,0.3371227);
   data_mc_ratio__577->SetBinContent(21,0.3691987);
   data_mc_ratio__577->SetBinContent(22,0.3173233);
   data_mc_ratio__577->SetBinContent(23,0.3046389);
   data_mc_ratio__577->SetBinContent(24,0.2447977);
   data_mc_ratio__577->SetBinContent(25,0.2516718);
   data_mc_ratio__577->SetBinContent(26,0.2277585);
   data_mc_ratio__577->SetBinContent(27,0.3454275);
   data_mc_ratio__577->SetBinContent(28,0.2991802);
   data_mc_ratio__577->SetBinContent(29,0.2836427);
   data_mc_ratio__577->SetBinContent(30,0.6675637);
   data_mc_ratio__577->SetBinContent(31,0.2213223);
   data_mc_ratio__577->SetBinError(2,0.8589129);
   data_mc_ratio__577->SetBinError(3,0.004560297);
   data_mc_ratio__577->SetBinError(4,0.00436596);
   data_mc_ratio__577->SetBinError(5,0.001808184);
   data_mc_ratio__577->SetBinError(6,0.005713304);
   data_mc_ratio__577->SetBinError(7,0.005273792);
   data_mc_ratio__577->SetBinError(8,0.005934914);
   data_mc_ratio__577->SetBinError(9,0.007335368);
   data_mc_ratio__577->SetBinError(10,0.005840127);
   data_mc_ratio__577->SetBinError(11,0.005286173);
   data_mc_ratio__577->SetBinError(12,0.005160538);
   data_mc_ratio__577->SetBinError(13,0.004051466);
   data_mc_ratio__577->SetBinError(14,0.005449353);
   data_mc_ratio__577->SetBinError(15,0.004410597);
   data_mc_ratio__577->SetBinError(16,0.005169557);
   data_mc_ratio__577->SetBinError(17,0.005071634);
   data_mc_ratio__577->SetBinError(18,0.002182138);
   data_mc_ratio__577->SetBinError(19,0.005859384);
   data_mc_ratio__577->SetBinError(20,0.007655949);
   data_mc_ratio__577->SetBinError(21,0.009039868);
   data_mc_ratio__577->SetBinError(22,0.008176914);
   data_mc_ratio__577->SetBinError(23,0.008501642);
   data_mc_ratio__577->SetBinError(24,0.007473215);
   data_mc_ratio__577->SetBinError(25,0.008403076);
   data_mc_ratio__577->SetBinError(26,0.008093045);
   data_mc_ratio__577->SetBinError(27,0.01251352);
   data_mc_ratio__577->SetBinError(28,0.01203479);
   data_mc_ratio__577->SetBinError(29,0.01147496);
   data_mc_ratio__577->SetBinError(30,0.03175277);
   data_mc_ratio__577->SetBinError(31,0.08528857);
   data_mc_ratio__577->SetMinimum(0.4);
   data_mc_ratio__577->SetMaximum(1.6);
   data_mc_ratio__577->SetEntries(97.13214);
   data_mc_ratio__577->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__577->SetLineColor(ci);
   data_mc_ratio__577->SetLineWidth(2);
   data_mc_ratio__577->SetMarkerStyle(20);
   data_mc_ratio__577->SetMarkerSize(1.2);
   data_mc_ratio__577->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__577->GetXaxis()->SetRange(1,30);
   data_mc_ratio__577->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__577->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__577->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__577->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__577->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__577->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__577->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__577->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__577->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__577->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__577->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__577->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__577->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__577->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__577->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__577->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__577->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1420[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1420[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1420[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1420[30] = {
   0,
   0.2744097,
   0.09428449,
   0.09742939,
   0.6109949,
   0.1193595,
   0.1250646,
   0.128361,
   0.1188836,
   0.1369026,
   0.1264245,
   0.1294571,
   0.1655489,
   0.1293979,
   0.127809,
   0.1217471,
   0.1300447,
   0.6776111,
   0.1392313,
   0.1463413,
   0.1636365,
   0.1636081,
   0.1903047,
   0.2116128,
   0.2292545,
   0.2533683,
   0.2205052,
   0.2248,
   0.2625186,
   0.159207};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1420,Graph_from_mc_statistical_error_fy1420,Graph_from_mc_statistical_error_fex1420,Graph_from_mc_statistical_error_fey1420);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1420 = new TH1F("Graph_Graph_from_mc_statistical_error1420","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1420->SetMinimum(0.1868666);
   Graph_Graph_from_mc_statistical_error1420->SetMaximum(1.813133);
   Graph_Graph_from_mc_statistical_error1420->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1420->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1420->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1420->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1420);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->SetSelected(Z_dR_both_17);
}
