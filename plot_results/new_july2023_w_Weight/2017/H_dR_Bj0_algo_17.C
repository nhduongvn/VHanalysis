void H_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Thu Aug 10 12:24:12 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(0,0,1,1);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetFillStyle(4000);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1020.388,6.314516,1019378);
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
   st->SetMaximum(873655.4);
   
   TH1F *st_stack_138 = new TH1F("st_stack_138","",30,0,6);
   st_stack_138->SetMinimum(0.01);
   st_stack_138->SetMaximum(917338.2);
   st_stack_138->SetDirectory(0);
   st_stack_138->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_138->SetLineColor(ci);
   st_stack_138->GetXaxis()->SetRange(1,30);
   st_stack_138->GetXaxis()->SetLabelFont(42);
   st_stack_138->GetXaxis()->SetLabelSize(0.035);
   st_stack_138->GetXaxis()->SetTitleSize(0.035);
   st_stack_138->GetXaxis()->SetTitleFont(42);
   st_stack_138->GetYaxis()->SetTitle("Events/0.2");
   st_stack_138->GetYaxis()->SetLabelFont(42);
   st_stack_138->GetYaxis()->SetLabelSize(0.05);
   st_stack_138->GetYaxis()->SetTitleSize(0.057);
   st_stack_138->GetYaxis()->SetTitleOffset(1.2);
   st_stack_138->GetYaxis()->SetTitleFont(42);
   st_stack_138->GetZaxis()->SetLabelFont(42);
   st_stack_138->GetZaxis()->SetLabelSize(0.035);
   st_stack_138->GetZaxis()->SetTitleSize(0.035);
   st_stack_138->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_138);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,149431.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,339664.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,267247.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,182667.5);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,154996.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,84590.54);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,66513.65);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,61130.23);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,63317.06);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,43209.05);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,31100.03);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,30528.99);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,25657.31);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,20951.58);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,11124.83);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,11702.87);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,6537.737);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,5190.524);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,4068.377);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,1854.487);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1281.057);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,412.2743);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(23,150.6925);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,676.0068);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(25,32.06802);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,271.8939);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,71.22015);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(28,57.05193);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(29,7.084112);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(30,32.06802);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(31,7.084112);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,15191.7);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,16263.73);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,7111.29);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,5802.751);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,21566.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,3820.589);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,3187.275);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,3944.247);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,15071.01);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,2903.164);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,2193.679);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,2845.005);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,2127.686);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,2262.815);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,1314.593);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,1465.322);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,993.9492);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,980.9756);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,899.8856);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,549.562);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,472.6363);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,271.8389);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(23,52.85483);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,382.543);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(25,25.96883);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,267.5518);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,37.40248);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(28,36.03576);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(29,7.084112);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(30,25.96883);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(31,7.084112);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(112106);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,726.5306);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,2539.619);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,2198.137);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,1466.779);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,987.0353);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,697.8103);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,541.8384);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,440.6515);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,370.1847);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,303.8032);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,235.6535);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,197.4598);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,161.5904);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,131.8803);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,107.1645);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,84.46789);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,58.78893);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,43.6461);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,30.71903);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,17.83556);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,11.51299);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,6.573774);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,3.358984);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,3.155175);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,2.892169);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,1.523639);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,1.050252);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.4761133);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.2651449);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.4738181);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,0.6301797);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,10.82512);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,19.34873);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,17.96459);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,14.74305);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,12.08615);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,10.09296);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,8.819939);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,8.042363);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,7.268185);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,6.593558);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,5.689225);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,5.315369);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,4.79511);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,4.287929);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,3.820529);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,3.507028);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,2.869337);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,2.392554);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,2.120042);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.505928);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.243636);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.9484343);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.4810389);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.5759153);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.6957528);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.3682839);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.2348573);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.1587081);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.1185764);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.1579477);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.297776);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(138653);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(1,12845.9);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(2,48025.64);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(3,40457.19);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(4,24426.79);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(5,15131.57);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(6,10389.63);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(7,7794.864);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(8,6262.835);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(9,5060.681);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(10,4099.084);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(11,3315.664);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(12,2790.998);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(13,2373.263);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(14,2083.231);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(15,1735.702);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(16,1432.046);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(17,1086.635);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(18,791.4428);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(19,542.4364);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(20,337.5478);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(21,177.6141);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(22,92.98049);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(23,48.6849);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(24,30.86521);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(25,19.82079);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(26,12.64157);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(27,9.722819);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(28,5.263594);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(29,5.001519);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(30,3.257636);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(31,6.352596);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(1,28.77735);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(2,55.41909);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(3,50.7557);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(4,39.36204);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(5,30.93761);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(6,25.60047);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(7,22.14649);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(8,19.84577);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(9,17.84205);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(10,16.0554);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(11,14.44164);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(12,13.24131);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(13,12.23794);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(14,11.48523);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(15,10.48917);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(16,9.537758);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(17,8.316956);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(18,7.08863);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(19,5.876355);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(20,4.622474);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(21,3.335065);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(22,2.404072);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(23,1.7389);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(24,1.375593);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(25,1.105431);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(26,0.884088);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(27,0.7766592);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(28,0.5654364);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(29,0.5511752);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(30,0.4478595);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(31,0.6214489);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetEntries(3113082);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(1,727.0348);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(2,2070.469);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(3,1597.052);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(4,1050.485);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(5,705.7852);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(6,477.0975);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(7,380.4069);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(8,335.4889);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(9,276.7763);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(10,229.7046);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(11,191.8149);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(12,152.8958);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(13,130.6714);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(14,87.75379);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(15,83.34541);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(16,63.38352);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(17,41.595);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(18,31.94181);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(19,14.86306);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(20,12.50911);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(21,6.619558);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(22,3.71787);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(23,3.590944);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(24,2.145532);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(25,0.7217341);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(26,0.4507913);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(27,0.1613479);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(28,0.7217341);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(29,0.360867);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(30,0.07142358);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(31,0.4322906);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(1,12.07296);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(2,31.06126);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(3,31.14788);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(4,25.54104);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(5,21.15739);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(6,17.45601);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(7,15.29932);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(8,14.04716);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(9,11.91552);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(10,13.04405);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(11,10.44115);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(12,9.927542);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(13,10.35381);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(14,5.91804);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(15,7.47151);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(16,7.561012);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(17,5.605641);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(18,5.942688);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(19,3.249035);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(20,3.217116);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(21,2.92683);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(22,2.761569);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(23,2.759023);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(24,0.8249155);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(25,0.5103431);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(26,0.3719024);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(27,0.1148377);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(28,0.5103431);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(29,0.360867);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(30,0.07142358);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(31,0.3678673);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetEntries(54522);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(1,330.2932);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(2,747.1096);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(3,539.7097);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(4,333.808);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(5,195.5658);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(6,198.7072);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(7,135.8747);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(8,79.52524);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(9,78.50414);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(10,69.24963);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(11,61.27408);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(12,56.16512);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(13,34.87255);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(14,21.76388);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(15,27.63184);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(16,13.46586);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(17,10.0743);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(18,7.342871);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(19,3.419267);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(20,4.731057);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(21,1.689331);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(22,1.688754);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(23,0.3714352);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(24,0.08447854);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(25,0.1689571);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(27,0.1695762);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(28,0.08447854);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(29,0.08447854);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(1,12.23701);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(2,31.58383);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(3,30.00564);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(4,21.06222);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(5,10.93079);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(6,20.20448);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(7,14.28085);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(8,6.639579);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(9,9.219288);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(10,9.153048);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(11,9.013599);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(12,10.65249);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(13,7.656626);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(14,3.25055);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(15,7.639955);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(16,6.76062);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(17,2.270555);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(18,2.407238);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(19,1.680232);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(20,2.085905);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(21,1.189258);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(22,0.713579);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(23,0.3714352);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(24,0.08447854);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(25,0.1194707);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(27,0.1695762);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(28,0.08447854);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(29,0.08447854);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetEntries(16864);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(1,4.729588);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(2,5.3602);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(3,5.3602);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(4,4.414282);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(5,0.6306118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(6,0.6306118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(7,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(8,1.576529);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(9,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(10,1.261224);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(13,0.6306118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(14,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(16,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(1,1.221174);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(2,1.300039);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(3,1.300039);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(4,1.179767);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(5,0.4459099);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(6,0.4459099);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(7,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(8,0.7050454);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(9,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(10,0.6306118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(11,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(13,0.4459099);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(14,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(16,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(1,8.677976);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(2,22.81068);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(3,9.669745);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(4,7.686208);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(5,3.471191);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(6,2.23148);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(7,2.975306);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(8,4.215017);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(9,1.487653);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(10,2.727364);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(11,1.487653);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(12,0.4958844);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(13,1.239711);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(14,0.9917687);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(16,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(18,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(19,0.4958844);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(20,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(21,0.4958844);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(1,1.466846);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(2,2.378178);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(3,1.548398);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(4,1.380484);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(5,0.9277147);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(6,0.7438266);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(7,0.8588969);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(8,1.022292);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(9,0.6073318);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(10,0.8223312);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(11,0.6073318);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(12,0.3506432);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(13,0.5544156);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(14,0.4958844);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(16,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(18,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(19,0.3506432);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(20,0.2479422);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(21,0.3506432);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetEntries(290);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(1,18.99192);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(2,32.91933);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(3,16.71289);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(4,10.63548);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(5,6.077415);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(6,5.064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(7,3.545159);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(8,3.545159);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(9,2.785482);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(10,2.025805);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(11,2.532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(12,1.772579);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(13,1.012902);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(14,1.772579);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(15,0.5064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(16,0.7596768);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(17,0.2532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(18,0.5064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(1,2.192998);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(2,2.887216);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(3,2.057215);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(4,1.64109);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(5,1.240547);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(6,1.132459);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(7,0.9474835);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(8,0.9474835);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(9,0.8398543);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(10,0.7162302);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(11,0.8007697);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(12,0.669972);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(13,0.5064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(14,0.669972);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(15,0.3581151);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(16,0.4385996);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(17,0.2532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(18,0.3581151);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(19,0.3581151);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(21,0.2532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(1,10.34324);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(2,24.63374);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(3,14.84392);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(4,8.194577);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(5,4.494015);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(6,3.082134);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(7,2.545386);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(8,2.250341);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(9,1.848614);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(10,1.476891);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(11,1.261858);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(12,1.048492);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(13,0.8818005);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(14,0.7551146);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(15,0.5700865);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(16,0.4934082);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(17,0.270041);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(18,0.2400364);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(19,0.1350205);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(20,0.0933475);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(21,0.04834067);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(22,0.03000455);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(23,0.006667678);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(24,0.006667678);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(25,0.003333839);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(27,0.003333839);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(28,0.00166692);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(31,0.003333839);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(1,0.1313063);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(2,0.2026387);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(3,0.157301);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(4,0.1168747);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(5,0.0865515);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(6,0.07167754);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(7,0.06513796);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(8,0.06124654);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(9,0.05551117);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(10,0.04961711);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(11,0.04586301);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(12,0.04180613);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(13,0.03833915);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(14,0.03547838);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(15,0.03082675);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(16,0.02867877);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(17,0.02121642);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(18,0.02000303);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(19,0.01500228);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(20,0.01247408);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(21,0.008976637);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(22,0.007072141);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(23,0.003333839);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(24,0.003333839);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(25,0.00235738);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(27,0.00235738);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(28,0.00166692);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(31,0.00235738);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetEntries(47732);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(1,3.491649);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(2,12.0061);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(3,9.337803);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(4,5.826619);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(5,3.42889);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(6,2.332892);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(7,1.865732);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(8,1.525752);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(9,1.355347);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(10,1.068567);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(11,0.8245961);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(12,0.7273403);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(13,0.6188627);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(14,0.549038);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(15,0.466329);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(16,0.371567);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(17,0.2718175);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(18,0.1803804);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(19,0.1371556);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(20,0.0955933);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(21,0.04488729);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(22,0.01787179);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(23,0.01122182);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(24,0.008728084);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(25,0.005403099);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(26,0.003324984);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(27,0.002493738);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(28,0.002078115);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(29,0.0008312461);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(31,0.002493738);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(1,0.03809475);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(2,0.07064002);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(3,0.06229772);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(4,0.04921054);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(5,0.03775084);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(6,0.03113846);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(7,0.02784674);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(8,0.02518209);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(9,0.02373422);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(10,0.02107418);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(11,0.01851273);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(12,0.01738676);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(13,0.01603788);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(14,0.01510605);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(15,0.01392182);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(16,0.01242706);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(17,0.0106289);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(18,0.008658536);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(19,0.007550167);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(20,0.006303235);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(21,0.004319281);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(22,0.002725422);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(23,0.002159641);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(24,0.001904624);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(25,0.00149855);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(26,0.001175559);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(27,0.001018064);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(28,0.0009293614);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(29,0.0005877797);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(31,0.001018064);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(1,0.06953105);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(2,0.1690869);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(3,0.1311608);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(4,0.08533356);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(5,0.03318527);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(6,0.03318527);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(7,0.03160502);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(8,0.01738276);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(9,0.01106176);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(10,0.01896301);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(11,0.004740753);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(12,0.01106176);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(13,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(15,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(16,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(18,0.004740753);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(22,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(1,0.0104822);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(2,0.01634624);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(3,0.01439677);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(4,0.01161243);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(5,0.00724162);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(6,0.00724162);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(7,0.007067098);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(8,0.0052411);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(9,0.004180952);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(10,0.005474151);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(11,0.002737075);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(12,0.004180952);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(13,0.003533549);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(14,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(15,0.003533549);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(16,0.003533549);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(18,0.002737075);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(19,0.002234813);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(21,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(22,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(1,0.02491268);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(2,0.07764452);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(3,0.05958282);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(4,0.03550057);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(5,0.02491268);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(6,0.01432479);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(7,0.01224873);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(8,0.009965071);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(9,0.00954986);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(10,0.006020564);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(11,0.004567324);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(12,0.007473804);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(13,0.004152113);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(14,0.002283662);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(15,0.003944507);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(16,0.001868451);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(17,0.00145324);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(18,0.001660845);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(19,0.0008304226);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(1,0.002274206);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(2,0.004014902);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(3,0.003517063);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(4,0.002714796);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(5,0.002274206);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(6,0.001724502);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(7,0.001594649);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(8,0.001438334);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(9,0.00140805);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(10,0.001117991);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(11,0.0009737568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(12,0.001245634);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(13,0.0009284407);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(14,0.0006885501);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(15,0.0009049321);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(16,0.000622817);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(17,0.0005492729);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(18,0.0005871975);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(19,0.0004152113);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj0__378 = new TH1D("VbbHcc_algo_H_dR_Bj0__378","",30,0,6);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(1,22966);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(2,53073);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(3,42380);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(4,28611);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(5,18593);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(6,13453);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(7,10574);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(8,8856);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(9,7363);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(10,6058);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(11,5069);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(12,4104);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(13,3509);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(14,2758);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(15,2161);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(16,1704);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(17,1229);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(18,862);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(19,574);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(20,373);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(21,229);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(22,145);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(23,85);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(24,59);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(25,47);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(26,15);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(27,16);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(28,8);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(29,10);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(30,6);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(31,18);
   VbbHcc_algo_H_dR_Bj0__378->SetEntries(234937);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0__378->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0__378->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj0__378->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj0__378->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj0__378->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0__378->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__378->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__378->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__378->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0__378->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__378->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__378->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__378->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fx1275[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fy1275[30] = {
   164107.4,
   393144.9,
   312095.5,
   209982.3,
   172034.4,
   96367.18,
   75377.93,
   68261.87,
   69111.02,
   47919.48,
   34910.87,
   33730.57,
   28362.11,
   23280.6,
   13080.23,
   13298.44,
   7735.627,
   6066.079,
   4661.093,
   2227.548,
   1479.336,
   517.2846,
   206.7167,
   712.2726,
   55.68041,
   286.5132,
   82.32997,
   63.60159,
   12.79695,
   35.8709};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fex1275[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fey1275[30] = {
   15191.74,
   16263.9,
   7111.626,
   5802.998,
   21566.84,
   3820.782,
   3187.433,
   3944.336,
   15071.03,
   2903.26,
   2193.777,
   2845.078,
   2127.765,
   2262.858,
   1314.684,
   1465.392,
   994.0066,
   981.0252,
   899.9149,
   549.5969,
   472.6605,
   271.8661,
   52.95883,
   382.5468,
   26.00694,
   267.5538,
   37.41184,
   36.04426,
   7.116169,
   25.97327};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj0_fx1275,Graph_from_VbbHcc_algo_H_dR_Bj0_fy1275,Graph_from_VbbHcc_algo_H_dR_Bj0_fex1275,Graph_from_VbbHcc_algo_H_dR_Bj0_fey1275);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetMinimum(5.112705);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetMaximum(450349.2);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj0","MC unc. (stat.)","fl");

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
   H_dR_Bj0_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__379 = new TH1D("data_mc_ratio__379","",30,0,6);
   data_mc_ratio__379->SetBinContent(1,0.1399449);
   data_mc_ratio__379->SetBinContent(2,0.134996);
   data_mc_ratio__379->SetBinContent(3,0.1357918);
   data_mc_ratio__379->SetBinContent(4,0.1362544);
   data_mc_ratio__379->SetBinContent(5,0.1080772);
   data_mc_ratio__379->SetBinContent(6,0.1396015);
   data_mc_ratio__379->SetBinContent(7,0.1402798);
   data_mc_ratio__379->SetBinContent(8,0.1297357);
   data_mc_ratio__379->SetBinContent(9,0.1065387);
   data_mc_ratio__379->SetBinContent(10,0.1264204);
   data_mc_ratio__379->SetBinContent(11,0.1451983);
   data_mc_ratio__379->SetBinContent(12,0.12167);
   data_mc_ratio__379->SetBinContent(13,0.1237214);
   data_mc_ratio__379->SetBinContent(14,0.1184677);
   data_mc_ratio__379->SetBinContent(15,0.1652111);
   data_mc_ratio__379->SetBinContent(16,0.1281354);
   data_mc_ratio__379->SetBinContent(17,0.1588753);
   data_mc_ratio__379->SetBinContent(18,0.1421017);
   data_mc_ratio__379->SetBinContent(19,0.1231471);
   data_mc_ratio__379->SetBinContent(20,0.1674487);
   data_mc_ratio__379->SetBinContent(21,0.1547991);
   data_mc_ratio__379->SetBinContent(22,0.2803099);
   data_mc_ratio__379->SetBinContent(23,0.4111908);
   data_mc_ratio__379->SetBinContent(24,0.08283346);
   data_mc_ratio__379->SetBinContent(25,0.844103);
   data_mc_ratio__379->SetBinContent(26,0.0523536);
   data_mc_ratio__379->SetBinContent(27,0.1943399);
   data_mc_ratio__379->SetBinContent(28,0.125783);
   data_mc_ratio__379->SetBinContent(29,0.7814361);
   data_mc_ratio__379->SetBinContent(30,0.1672665);
   data_mc_ratio__379->SetBinContent(31,1.240951);
   data_mc_ratio__379->SetBinError(1,0.0009234524);
   data_mc_ratio__379->SetBinError(2,0.0005859818);
   data_mc_ratio__379->SetBinError(3,0.0006596187);
   data_mc_ratio__379->SetBinError(4,0.000805534);
   data_mc_ratio__379->SetBinError(5,0.0007926096);
   data_mc_ratio__379->SetBinError(6,0.001203595);
   data_mc_ratio__379->SetBinError(7,0.001364192);
   data_mc_ratio__379->SetBinError(8,0.001378607);
   data_mc_ratio__379->SetBinError(9,0.001241595);
   data_mc_ratio__379->SetBinError(10,0.001624249);
   data_mc_ratio__379->SetBinError(11,0.002039391);
   data_mc_ratio__379->SetBinError(12,0.00189924);
   data_mc_ratio__379->SetBinError(13,0.00208859);
   data_mc_ratio__379->SetBinError(14,0.002255812);
   data_mc_ratio__379->SetBinError(15,0.003553955);
   data_mc_ratio__379->SetBinError(16,0.003104089);
   data_mc_ratio__379->SetBinError(17,0.004531901);
   data_mc_ratio__379->SetBinError(18,0.004840002);
   data_mc_ratio__379->SetBinError(19,0.00514006);
   data_mc_ratio__379->SetBinError(20,0.008670164);
   data_mc_ratio__379->SetBinError(21,0.01022941);
   data_mc_ratio__379->SetBinError(22,0.02327847);
   data_mc_ratio__379->SetBinError(23,0.0445999);
   data_mc_ratio__379->SetBinError(24,0.010784);
   data_mc_ratio__379->SetBinError(25,0.1231251);
   data_mc_ratio__379->SetBinError(26,0.01351764);
   data_mc_ratio__379->SetBinError(27,0.04858498);
   data_mc_ratio__379->SetBinError(28,0.04447101);
   data_mc_ratio__379->SetBinError(29,0.2471118);
   data_mc_ratio__379->SetBinError(30,0.06828627);
   data_mc_ratio__379->SetBinError(31,0.6762687);
   data_mc_ratio__379->SetMinimum(0.4);
   data_mc_ratio__379->SetMaximum(1.6);
   data_mc_ratio__379->SetEntries(66.29118);
   data_mc_ratio__379->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__379->SetLineColor(ci);
   data_mc_ratio__379->SetLineWidth(2);
   data_mc_ratio__379->SetMarkerStyle(20);
   data_mc_ratio__379->SetMarkerSize(1.2);
   data_mc_ratio__379->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__379->GetXaxis()->SetRange(1,30);
   data_mc_ratio__379->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__379->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__379->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__379->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__379->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__379->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__379->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__379->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__379->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__379->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__379->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__379->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__379->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__379->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__379->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__379->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__379->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1276[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1276[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1276[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1276[30] = {
   0.09257194,
   0.04136871,
   0.0227867,
   0.02763566,
   0.1253635,
   0.03964817,
   0.04228603,
   0.05778242,
   0.2180698,
   0.06058622,
   0.06283938,
   0.08434716,
   0.07502142,
   0.09719932,
   0.1005092,
   0.1101928,
   0.1284972,
   0.1617231,
   0.1930695,
   0.2467273,
   0.3195084,
   0.5255639,
   0.2561904,
   0.5370793,
   0.4670753,
   0.9338271,
   0.4544133,
   0.5667194,
   0.5560831,
   0.7240765};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1276,Graph_from_mc_statistical_error_fy1276,Graph_from_mc_statistical_error_fex1276,Graph_from_mc_statistical_error_fey1276);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1276 = new TH1F("Graph_Graph_from_mc_statistical_error1276","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1276->SetMinimum(0.05955565);
   Graph_Graph_from_mc_statistical_error1276->SetMaximum(2.120592);
   Graph_Graph_from_mc_statistical_error1276->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1276->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1276->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1276->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1276);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->SetSelected(H_dR_Bj0_algo_17);
}
