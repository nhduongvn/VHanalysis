void ZMass_VbbHcc_18()
{
//=========Macro generated from canvas: ZMass_VbbHcc_18/ZMass_VbbHcc_18
//=========  (Tue Sep 20 13:13:08 2022) by ROOT version 6.14/09
   TCanvas *ZMass_VbbHcc_18 = new TCanvas("ZMass_VbbHcc_18", "ZMass_VbbHcc_18",0,0,600,600);
   ZMass_VbbHcc_18->SetHighLightColor(2);
   ZMass_VbbHcc_18->Range(0,0,1,1);
   ZMass_VbbHcc_18->SetFillColor(0);
   ZMass_VbbHcc_18->SetFillStyle(4000);
   ZMass_VbbHcc_18->SetBorderMode(0);
   ZMass_VbbHcc_18->SetBorderSize(2);
   ZMass_VbbHcc_18->SetFrameFillStyle(1000);
   ZMass_VbbHcc_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-313.8073,315.7258,313503.5);
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
   st->SetMaximum(268687.4);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",30,0,300);
   st_stack_3->SetMinimum(0.01);
   st_stack_3->SetMaximum(282121.8);
   st_stack_3->SetDirectory(0);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->GetXaxis()->SetRange(1,30);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetLabelSize(0.035);
   st_stack_3->GetXaxis()->SetTitleSize(0.035);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/10.0");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetLabelSize(0.05);
   st_stack_3->GetYaxis()->SetTitleSize(0.057);
   st_stack_3->GetYaxis()->SetTitleOffset(1.2);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetLabelSize(0.035);
   st_stack_3->GetZaxis()->SetTitleSize(0.035);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VbbHcc_ZMass_stack_1 = new TH1D("VbbHcc_ZMass_stack_1","",30,0,300);
   VbbHcc_ZMass_stack_1->SetBinContent(2,318.7086);
   VbbHcc_ZMass_stack_1->SetBinContent(3,20820.6);
   VbbHcc_ZMass_stack_1->SetBinContent(4,72600.3);
   VbbHcc_ZMass_stack_1->SetBinContent(5,113575.6);
   VbbHcc_ZMass_stack_1->SetBinContent(6,86494.2);
   VbbHcc_ZMass_stack_1->SetBinContent(7,86097.51);
   VbbHcc_ZMass_stack_1->SetBinContent(8,66867.11);
   VbbHcc_ZMass_stack_1->SetBinContent(9,72891.62);
   VbbHcc_ZMass_stack_1->SetBinContent(10,61117.74);
   VbbHcc_ZMass_stack_1->SetBinContent(11,51665.21);
   VbbHcc_ZMass_stack_1->SetBinContent(12,60437.28);
   VbbHcc_ZMass_stack_1->SetBinContent(13,55294.61);
   VbbHcc_ZMass_stack_1->SetBinContent(14,51501.11);
   VbbHcc_ZMass_stack_1->SetBinContent(15,48883.19);
   VbbHcc_ZMass_stack_1->SetBinContent(16,45766.15);
   VbbHcc_ZMass_stack_1->SetBinContent(17,38579.36);
   VbbHcc_ZMass_stack_1->SetBinContent(18,42065.75);
   VbbHcc_ZMass_stack_1->SetBinContent(19,39958.52);
   VbbHcc_ZMass_stack_1->SetBinContent(20,34749.53);
   VbbHcc_ZMass_stack_1->SetBinContent(21,30207.82);
   VbbHcc_ZMass_stack_1->SetBinContent(22,30283.5);
   VbbHcc_ZMass_stack_1->SetBinContent(23,27554.79);
   VbbHcc_ZMass_stack_1->SetBinContent(24,23268.74);
   VbbHcc_ZMass_stack_1->SetBinContent(25,27067.47);
   VbbHcc_ZMass_stack_1->SetBinContent(26,22149.09);
   VbbHcc_ZMass_stack_1->SetBinContent(27,18559.52);
   VbbHcc_ZMass_stack_1->SetBinContent(28,16849.78);
   VbbHcc_ZMass_stack_1->SetBinContent(29,11676.07);
   VbbHcc_ZMass_stack_1->SetBinContent(30,13984.34);
   VbbHcc_ZMass_stack_1->SetBinContent(31,167072.3);
   VbbHcc_ZMass_stack_1->SetBinError(2,201.0786);
   VbbHcc_ZMass_stack_1->SetBinError(3,2928.495);
   VbbHcc_ZMass_stack_1->SetBinError(4,5175.087);
   VbbHcc_ZMass_stack_1->SetBinError(5,8756.228);
   VbbHcc_ZMass_stack_1->SetBinError(6,5440.228);
   VbbHcc_ZMass_stack_1->SetBinError(7,5434.499);
   VbbHcc_ZMass_stack_1->SetBinError(8,5033.034);
   VbbHcc_ZMass_stack_1->SetBinError(9,5083.177);
   VbbHcc_ZMass_stack_1->SetBinError(10,4488.966);
   VbbHcc_ZMass_stack_1->SetBinError(11,4187.782);
   VbbHcc_ZMass_stack_1->SetBinError(12,4524.363);
   VbbHcc_ZMass_stack_1->SetBinError(13,4629.242);
   VbbHcc_ZMass_stack_1->SetBinError(14,4373.905);
   VbbHcc_ZMass_stack_1->SetBinError(15,4154.608);
   VbbHcc_ZMass_stack_1->SetBinError(16,3920.911);
   VbbHcc_ZMass_stack_1->SetBinError(17,3572.479);
   VbbHcc_ZMass_stack_1->SetBinError(18,3715.217);
   VbbHcc_ZMass_stack_1->SetBinError(19,3720.524);
   VbbHcc_ZMass_stack_1->SetBinError(20,3956.641);
   VbbHcc_ZMass_stack_1->SetBinError(21,3055.227);
   VbbHcc_ZMass_stack_1->SetBinError(22,3043.264);
   VbbHcc_ZMass_stack_1->SetBinError(23,3032.514);
   VbbHcc_ZMass_stack_1->SetBinError(24,2522.652);
   VbbHcc_ZMass_stack_1->SetBinError(25,2970.787);
   VbbHcc_ZMass_stack_1->SetBinError(26,4746.212);
   VbbHcc_ZMass_stack_1->SetBinError(27,2375.231);
   VbbHcc_ZMass_stack_1->SetBinError(28,2207.92);
   VbbHcc_ZMass_stack_1->SetBinError(29,1701.728);
   VbbHcc_ZMass_stack_1->SetBinError(30,1979.605);
   VbbHcc_ZMass_stack_1->SetBinError(31,6579.257);
   VbbHcc_ZMass_stack_1->SetEntries(20172);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_ZMass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_1->SetLineColor(ci);
   VbbHcc_ZMass_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_1,"");
   
   TH1D *VbbHcc_ZMass_stack_2 = new TH1D("VbbHcc_ZMass_stack_2","",30,0,300);
   VbbHcc_ZMass_stack_2->SetBinContent(2,1.216855);
   VbbHcc_ZMass_stack_2->SetBinContent(3,68.61759);
   VbbHcc_ZMass_stack_2->SetBinContent(4,252.2188);
   VbbHcc_ZMass_stack_2->SetBinContent(5,398.7914);
   VbbHcc_ZMass_stack_2->SetBinContent(6,471.4984);
   VbbHcc_ZMass_stack_2->SetBinContent(7,540.3062);
   VbbHcc_ZMass_stack_2->SetBinContent(8,610.0224);
   VbbHcc_ZMass_stack_2->SetBinContent(9,638.2849);
   VbbHcc_ZMass_stack_2->SetBinContent(10,650.8819);
   VbbHcc_ZMass_stack_2->SetBinContent(11,674.4484);
   VbbHcc_ZMass_stack_2->SetBinContent(12,687.6131);
   VbbHcc_ZMass_stack_2->SetBinContent(13,648.6824);
   VbbHcc_ZMass_stack_2->SetBinContent(14,631.8786);
   VbbHcc_ZMass_stack_2->SetBinContent(15,561.2196);
   VbbHcc_ZMass_stack_2->SetBinContent(16,528.5121);
   VbbHcc_ZMass_stack_2->SetBinContent(17,490.9636);
   VbbHcc_ZMass_stack_2->SetBinContent(18,449.3795);
   VbbHcc_ZMass_stack_2->SetBinContent(19,405.5866);
   VbbHcc_ZMass_stack_2->SetBinContent(20,352.3586);
   VbbHcc_ZMass_stack_2->SetBinContent(21,345.1327);
   VbbHcc_ZMass_stack_2->SetBinContent(22,304.0784);
   VbbHcc_ZMass_stack_2->SetBinContent(23,291.0249);
   VbbHcc_ZMass_stack_2->SetBinContent(24,257.1177);
   VbbHcc_ZMass_stack_2->SetBinContent(25,243.6151);
   VbbHcc_ZMass_stack_2->SetBinContent(26,218.3622);
   VbbHcc_ZMass_stack_2->SetBinContent(27,200.779);
   VbbHcc_ZMass_stack_2->SetBinContent(28,200.5299);
   VbbHcc_ZMass_stack_2->SetBinContent(29,172.3817);
   VbbHcc_ZMass_stack_2->SetBinContent(30,170.3254);
   VbbHcc_ZMass_stack_2->SetBinContent(31,2176.733);
   VbbHcc_ZMass_stack_2->SetBinError(2,0.5479031);
   VbbHcc_ZMass_stack_2->SetBinError(3,3.548928);
   VbbHcc_ZMass_stack_2->SetBinError(4,6.96771);
   VbbHcc_ZMass_stack_2->SetBinError(5,9.474429);
   VbbHcc_ZMass_stack_2->SetBinError(6,10.34378);
   VbbHcc_ZMass_stack_2->SetBinError(7,11.31426);
   VbbHcc_ZMass_stack_2->SetBinError(8,11.91012);
   VbbHcc_ZMass_stack_2->SetBinError(9,12.39872);
   VbbHcc_ZMass_stack_2->SetBinError(10,11.76562);
   VbbHcc_ZMass_stack_2->SetBinError(11,12.4028);
   VbbHcc_ZMass_stack_2->SetBinError(12,12.27924);
   VbbHcc_ZMass_stack_2->SetBinError(13,11.27227);
   VbbHcc_ZMass_stack_2->SetBinError(14,12.10402);
   VbbHcc_ZMass_stack_2->SetBinError(15,12.22334);
   VbbHcc_ZMass_stack_2->SetBinError(16,11.90202);
   VbbHcc_ZMass_stack_2->SetBinError(17,16.6821);
   VbbHcc_ZMass_stack_2->SetBinError(18,9.640732);
   VbbHcc_ZMass_stack_2->SetBinError(19,10.08118);
   VbbHcc_ZMass_stack_2->SetBinError(20,8.684702);
   VbbHcc_ZMass_stack_2->SetBinError(21,15.4555);
   VbbHcc_ZMass_stack_2->SetBinError(22,8.200892);
   VbbHcc_ZMass_stack_2->SetBinError(23,8.095633);
   VbbHcc_ZMass_stack_2->SetBinError(24,7.324203);
   VbbHcc_ZMass_stack_2->SetBinError(25,7.22223);
   VbbHcc_ZMass_stack_2->SetBinError(26,6.905606);
   VbbHcc_ZMass_stack_2->SetBinError(27,6.625541);
   VbbHcc_ZMass_stack_2->SetBinError(28,7.68716);
   VbbHcc_ZMass_stack_2->SetBinError(29,6.327836);
   VbbHcc_ZMass_stack_2->SetBinError(30,6.226906);
   VbbHcc_ZMass_stack_2->SetBinError(31,23.48588);
   VbbHcc_ZMass_stack_2->SetEntries(157315);

   ci = TColor::GetColor("#660066");
   VbbHcc_ZMass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_2->SetLineColor(ci);
   VbbHcc_ZMass_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_2,"");
   
   TH1D *VbbHcc_ZMass_stack_3 = new TH1D("VbbHcc_ZMass_stack_3","",30,0,300);
   VbbHcc_ZMass_stack_3->SetBinContent(2,15.12473);
   VbbHcc_ZMass_stack_3->SetBinContent(3,955.6589);
   VbbHcc_ZMass_stack_3->SetBinContent(4,4085.838);
   VbbHcc_ZMass_stack_3->SetBinContent(5,6581.63);
   VbbHcc_ZMass_stack_3->SetBinContent(6,8098.899);
   VbbHcc_ZMass_stack_3->SetBinContent(7,9309.826);
   VbbHcc_ZMass_stack_3->SetBinContent(8,10312.43);
   VbbHcc_ZMass_stack_3->SetBinContent(9,11234.05);
   VbbHcc_ZMass_stack_3->SetBinContent(10,11959.32);
   VbbHcc_ZMass_stack_3->SetBinContent(11,12385.04);
   VbbHcc_ZMass_stack_3->SetBinContent(12,12565.02);
   VbbHcc_ZMass_stack_3->SetBinContent(13,12356.65);
   VbbHcc_ZMass_stack_3->SetBinContent(14,11660.69);
   VbbHcc_ZMass_stack_3->SetBinContent(15,10668.62);
   VbbHcc_ZMass_stack_3->SetBinContent(16,9622.029);
   VbbHcc_ZMass_stack_3->SetBinContent(17,8596.937);
   VbbHcc_ZMass_stack_3->SetBinContent(18,7682.934);
   VbbHcc_ZMass_stack_3->SetBinContent(19,6951.844);
   VbbHcc_ZMass_stack_3->SetBinContent(20,6271.882);
   VbbHcc_ZMass_stack_3->SetBinContent(21,5648.54);
   VbbHcc_ZMass_stack_3->SetBinContent(22,5086.89);
   VbbHcc_ZMass_stack_3->SetBinContent(23,4595.89);
   VbbHcc_ZMass_stack_3->SetBinContent(24,4186.72);
   VbbHcc_ZMass_stack_3->SetBinContent(25,3763.018);
   VbbHcc_ZMass_stack_3->SetBinContent(26,3396.192);
   VbbHcc_ZMass_stack_3->SetBinContent(27,3077.097);
   VbbHcc_ZMass_stack_3->SetBinContent(28,2764.777);
   VbbHcc_ZMass_stack_3->SetBinContent(29,2513.338);
   VbbHcc_ZMass_stack_3->SetBinContent(30,2277.322);
   VbbHcc_ZMass_stack_3->SetBinContent(31,24715.11);
   VbbHcc_ZMass_stack_3->SetBinError(2,1.215031);
   VbbHcc_ZMass_stack_3->SetBinError(3,9.099513);
   VbbHcc_ZMass_stack_3->SetBinError(4,18.53803);
   VbbHcc_ZMass_stack_3->SetBinError(5,24.29034);
   VbbHcc_ZMass_stack_3->SetBinError(6,26.58577);
   VbbHcc_ZMass_stack_3->SetBinError(7,28.23289);
   VbbHcc_ZMass_stack_3->SetBinError(8,29.19344);
   VbbHcc_ZMass_stack_3->SetBinError(9,31.63238);
   VbbHcc_ZMass_stack_3->SetBinError(10,32.45833);
   VbbHcc_ZMass_stack_3->SetBinError(11,33.16891);
   VbbHcc_ZMass_stack_3->SetBinError(12,32.66984);
   VbbHcc_ZMass_stack_3->SetBinError(13,32.52385);
   VbbHcc_ZMass_stack_3->SetBinError(14,32.15561);
   VbbHcc_ZMass_stack_3->SetBinError(15,30.53194);
   VbbHcc_ZMass_stack_3->SetBinError(16,29.80704);
   VbbHcc_ZMass_stack_3->SetBinError(17,27.34454);
   VbbHcc_ZMass_stack_3->SetBinError(18,25.17955);
   VbbHcc_ZMass_stack_3->SetBinError(19,24.46665);
   VbbHcc_ZMass_stack_3->SetBinError(20,23.35833);
   VbbHcc_ZMass_stack_3->SetBinError(21,21.98726);
   VbbHcc_ZMass_stack_3->SetBinError(22,21.70005);
   VbbHcc_ZMass_stack_3->SetBinError(23,19.95557);
   VbbHcc_ZMass_stack_3->SetBinError(24,18.70304);
   VbbHcc_ZMass_stack_3->SetBinError(25,18.05697);
   VbbHcc_ZMass_stack_3->SetBinError(26,16.69332);
   VbbHcc_ZMass_stack_3->SetBinError(27,16.27587);
   VbbHcc_ZMass_stack_3->SetBinError(28,15.03191);
   VbbHcc_ZMass_stack_3->SetBinError(29,14.59828);
   VbbHcc_ZMass_stack_3->SetBinError(30,14.46116);
   VbbHcc_ZMass_stack_3->SetBinError(31,46.30309);
   VbbHcc_ZMass_stack_3->SetEntries(3233690);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_ZMass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_3->SetLineColor(ci);
   VbbHcc_ZMass_stack_3->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_3,"");
   
   TH1D *VbbHcc_ZMass_stack_4 = new TH1D("VbbHcc_ZMass_stack_4","",30,0,300);
   VbbHcc_ZMass_stack_4->SetBinContent(2,0.7245629);
   VbbHcc_ZMass_stack_4->SetBinContent(3,33.12421);
   VbbHcc_ZMass_stack_4->SetBinContent(4,116.1584);
   VbbHcc_ZMass_stack_4->SetBinContent(5,185.9465);
   VbbHcc_ZMass_stack_4->SetBinContent(6,285.7572);
   VbbHcc_ZMass_stack_4->SetBinContent(7,486.3564);
   VbbHcc_ZMass_stack_4->SetBinContent(8,804.9529);
   VbbHcc_ZMass_stack_4->SetBinContent(9,1133.677);
   VbbHcc_ZMass_stack_4->SetBinContent(10,990.2706);
   VbbHcc_ZMass_stack_4->SetBinContent(11,558.0008);
   VbbHcc_ZMass_stack_4->SetBinContent(12,365.3513);
   VbbHcc_ZMass_stack_4->SetBinContent(13,331.0694);
   VbbHcc_ZMass_stack_4->SetBinContent(14,321.8211);
   VbbHcc_ZMass_stack_4->SetBinContent(15,303.942);
   VbbHcc_ZMass_stack_4->SetBinContent(16,297.102);
   VbbHcc_ZMass_stack_4->SetBinContent(17,283.4428);
   VbbHcc_ZMass_stack_4->SetBinContent(18,288.8269);
   VbbHcc_ZMass_stack_4->SetBinContent(19,258.6888);
   VbbHcc_ZMass_stack_4->SetBinContent(20,245.892);
   VbbHcc_ZMass_stack_4->SetBinContent(21,249.6056);
   VbbHcc_ZMass_stack_4->SetBinContent(22,240.3606);
   VbbHcc_ZMass_stack_4->SetBinContent(23,209.4052);
   VbbHcc_ZMass_stack_4->SetBinContent(24,195.309);
   VbbHcc_ZMass_stack_4->SetBinContent(25,186.8818);
   VbbHcc_ZMass_stack_4->SetBinContent(26,183.7408);
   VbbHcc_ZMass_stack_4->SetBinContent(27,178.487);
   VbbHcc_ZMass_stack_4->SetBinContent(28,173.7241);
   VbbHcc_ZMass_stack_4->SetBinContent(29,146.461);
   VbbHcc_ZMass_stack_4->SetBinContent(30,143.1421);
   VbbHcc_ZMass_stack_4->SetBinContent(31,1847.133);
   VbbHcc_ZMass_stack_4->SetBinError(2,0.6261103);
   VbbHcc_ZMass_stack_4->SetBinError(3,4.169513);
   VbbHcc_ZMass_stack_4->SetBinError(4,7.76555);
   VbbHcc_ZMass_stack_4->SetBinError(5,9.503127);
   VbbHcc_ZMass_stack_4->SetBinError(6,11.58716);
   VbbHcc_ZMass_stack_4->SetBinError(7,15.91435);
   VbbHcc_ZMass_stack_4->SetBinError(8,19.12048);
   VbbHcc_ZMass_stack_4->SetBinError(9,22.53791);
   VbbHcc_ZMass_stack_4->SetBinError(10,20.35795);
   VbbHcc_ZMass_stack_4->SetBinError(11,15.18743);
   VbbHcc_ZMass_stack_4->SetBinError(12,13.17198);
   VbbHcc_ZMass_stack_4->SetBinError(13,14.28175);
   VbbHcc_ZMass_stack_4->SetBinError(14,14.91563);
   VbbHcc_ZMass_stack_4->SetBinError(15,11.82817);
   VbbHcc_ZMass_stack_4->SetBinError(16,12.52437);
   VbbHcc_ZMass_stack_4->SetBinError(17,11.36739);
   VbbHcc_ZMass_stack_4->SetBinError(18,11.55152);
   VbbHcc_ZMass_stack_4->SetBinError(19,10.69056);
   VbbHcc_ZMass_stack_4->SetBinError(20,10.39859);
   VbbHcc_ZMass_stack_4->SetBinError(21,13.48808);
   VbbHcc_ZMass_stack_4->SetBinError(22,12.21161);
   VbbHcc_ZMass_stack_4->SetBinError(23,9.55909);
   VbbHcc_ZMass_stack_4->SetBinError(24,9.125683);
   VbbHcc_ZMass_stack_4->SetBinError(25,8.765964);
   VbbHcc_ZMass_stack_4->SetBinError(26,12.30657);
   VbbHcc_ZMass_stack_4->SetBinError(27,8.680681);
   VbbHcc_ZMass_stack_4->SetBinError(28,10.30935);
   VbbHcc_ZMass_stack_4->SetBinError(29,7.485958);
   VbbHcc_ZMass_stack_4->SetBinError(30,8.084217);
   VbbHcc_ZMass_stack_4->SetBinError(31,24.39114);
   VbbHcc_ZMass_stack_4->SetEntries(45812);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_ZMass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_4->SetLineColor(ci);
   VbbHcc_ZMass_stack_4->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_4,"");
   
   TH1D *VbbHcc_ZMass_stack_5 = new TH1D("VbbHcc_ZMass_stack_5","",30,0,300);
   VbbHcc_ZMass_stack_5->SetBinContent(2,0.6247484);
   VbbHcc_ZMass_stack_5->SetBinContent(3,30.85721);
   VbbHcc_ZMass_stack_5->SetBinContent(4,71.26209);
   VbbHcc_ZMass_stack_5->SetBinContent(5,141.1407);
   VbbHcc_ZMass_stack_5->SetBinContent(6,162.2849);
   VbbHcc_ZMass_stack_5->SetBinContent(7,174.9052);
   VbbHcc_ZMass_stack_5->SetBinContent(8,160.2408);
   VbbHcc_ZMass_stack_5->SetBinContent(9,158.1846);
   VbbHcc_ZMass_stack_5->SetBinContent(10,89.12479);
   VbbHcc_ZMass_stack_5->SetBinContent(11,114.3362);
   VbbHcc_ZMass_stack_5->SetBinContent(12,118.9444);
   VbbHcc_ZMass_stack_5->SetBinContent(13,97.38892);
   VbbHcc_ZMass_stack_5->SetBinContent(14,86.66497);
   VbbHcc_ZMass_stack_5->SetBinContent(15,71.42203);
   VbbHcc_ZMass_stack_5->SetBinContent(16,87.64795);
   VbbHcc_ZMass_stack_5->SetBinContent(17,96.44792);
   VbbHcc_ZMass_stack_5->SetBinContent(18,79.13947);
   VbbHcc_ZMass_stack_5->SetBinContent(19,60.91088);
   VbbHcc_ZMass_stack_5->SetBinContent(20,53.53266);
   VbbHcc_ZMass_stack_5->SetBinContent(21,59.35497);
   VbbHcc_ZMass_stack_5->SetBinContent(22,50.7542);
   VbbHcc_ZMass_stack_5->SetBinContent(23,50.46329);
   VbbHcc_ZMass_stack_5->SetBinContent(24,51.93015);
   VbbHcc_ZMass_stack_5->SetBinContent(25,40.71988);
   VbbHcc_ZMass_stack_5->SetBinContent(26,54.21272);
   VbbHcc_ZMass_stack_5->SetBinContent(27,39.21967);
   VbbHcc_ZMass_stack_5->SetBinContent(28,32.53225);
   VbbHcc_ZMass_stack_5->SetBinContent(29,33.53454);
   VbbHcc_ZMass_stack_5->SetBinContent(30,36.43947);
   VbbHcc_ZMass_stack_5->SetBinContent(31,537.9206);
   VbbHcc_ZMass_stack_5->SetBinError(2,0.3800426);
   VbbHcc_ZMass_stack_5->SetBinError(3,6.997207);
   VbbHcc_ZMass_stack_5->SetBinError(4,11.05131);
   VbbHcc_ZMass_stack_5->SetBinError(5,16.35046);
   VbbHcc_ZMass_stack_5->SetBinError(6,17.63666);
   VbbHcc_ZMass_stack_5->SetBinError(7,17.55459);
   VbbHcc_ZMass_stack_5->SetBinError(8,15.84348);
   VbbHcc_ZMass_stack_5->SetBinError(9,15.62998);
   VbbHcc_ZMass_stack_5->SetBinError(10,9.91977);
   VbbHcc_ZMass_stack_5->SetBinError(11,13.00002);
   VbbHcc_ZMass_stack_5->SetBinError(12,14.57058);
   VbbHcc_ZMass_stack_5->SetBinError(13,11.6227);
   VbbHcc_ZMass_stack_5->SetBinError(14,11.20744);
   VbbHcc_ZMass_stack_5->SetBinError(15,10.54123);
   VbbHcc_ZMass_stack_5->SetBinError(16,11.9508);
   VbbHcc_ZMass_stack_5->SetBinError(17,13.43788);
   VbbHcc_ZMass_stack_5->SetBinError(18,10.72029);
   VbbHcc_ZMass_stack_5->SetBinError(19,10.1052);
   VbbHcc_ZMass_stack_5->SetBinError(20,9.463472);
   VbbHcc_ZMass_stack_5->SetBinError(21,8.848134);
   VbbHcc_ZMass_stack_5->SetBinError(22,7.907109);
   VbbHcc_ZMass_stack_5->SetBinError(23,8.532174);
   VbbHcc_ZMass_stack_5->SetBinError(24,7.982203);
   VbbHcc_ZMass_stack_5->SetBinError(25,7.391839);
   VbbHcc_ZMass_stack_5->SetBinError(26,9.272781);
   VbbHcc_ZMass_stack_5->SetBinError(27,7.094786);
   VbbHcc_ZMass_stack_5->SetBinError(28,6.759823);
   VbbHcc_ZMass_stack_5->SetBinError(29,5.84203);
   VbbHcc_ZMass_stack_5->SetBinError(30,6.500254);
   VbbHcc_ZMass_stack_5->SetBinError(31,21.7225);
   VbbHcc_ZMass_stack_5->SetEntries(10641);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_ZMass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_5->SetLineColor(ci);
   VbbHcc_ZMass_stack_5->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_5,"");
   
   TH1D *VbbHcc_ZMass_stack_6 = new TH1D("VbbHcc_ZMass_stack_6","",30,0,300);
   VbbHcc_ZMass_stack_6->SetBinContent(4,1.899313);
   VbbHcc_ZMass_stack_6->SetBinContent(5,1.860317);
   VbbHcc_ZMass_stack_6->SetBinContent(6,2.590759);
   VbbHcc_ZMass_stack_6->SetBinContent(7,1.431398);
   VbbHcc_ZMass_stack_6->SetBinContent(8,3.167258);
   VbbHcc_ZMass_stack_6->SetBinContent(9,3.465676);
   VbbHcc_ZMass_stack_6->SetBinContent(10,1.456365);
   VbbHcc_ZMass_stack_6->SetBinContent(11,1.135031);
   VbbHcc_ZMass_stack_6->SetBinContent(12,1.444613);
   VbbHcc_ZMass_stack_6->SetBinContent(13,0.6119445);
   VbbHcc_ZMass_stack_6->SetBinContent(14,0.7272485);
   VbbHcc_ZMass_stack_6->SetBinContent(15,1.026275);
   VbbHcc_ZMass_stack_6->SetBinContent(16,0.419823);
   VbbHcc_ZMass_stack_6->SetBinContent(17,0.8910267);
   VbbHcc_ZMass_stack_6->SetBinContent(18,1.295934);
   VbbHcc_ZMass_stack_6->SetBinContent(20,0.7264719);
   VbbHcc_ZMass_stack_6->SetBinContent(21,1.005081);
   VbbHcc_ZMass_stack_6->SetBinContent(22,0.9826503);
   VbbHcc_ZMass_stack_6->SetBinContent(23,0.419823);
   VbbHcc_ZMass_stack_6->SetBinContent(24,0.2834059);
   VbbHcc_ZMass_stack_6->SetBinContent(25,0.9205752);
   VbbHcc_ZMass_stack_6->SetBinContent(26,0.3092106);
   VbbHcc_ZMass_stack_6->SetBinContent(29,0.2709334);
   VbbHcc_ZMass_stack_6->SetBinContent(30,0.5609272);
   VbbHcc_ZMass_stack_6->SetBinContent(31,5.3429);
   VbbHcc_ZMass_stack_6->SetBinError(4,0.7981666);
   VbbHcc_ZMass_stack_6->SetBinError(5,0.8364343);
   VbbHcc_ZMass_stack_6->SetBinError(6,0.976067);
   VbbHcc_ZMass_stack_6->SetBinError(7,0.6325906);
   VbbHcc_ZMass_stack_6->SetBinError(8,1.063521);
   VbbHcc_ZMass_stack_6->SetBinError(9,1.124355);
   VbbHcc_ZMass_stack_6->SetBinError(10,0.7364773);
   VbbHcc_ZMass_stack_6->SetBinError(11,0.593558);
   VbbHcc_ZMass_stack_6->SetBinError(12,0.7296276);
   VbbHcc_ZMass_stack_6->SetBinError(13,0.5053295);
   VbbHcc_ZMass_stack_6->SetBinError(14,0.5156602);
   VbbHcc_ZMass_stack_6->SetBinError(15,0.6006939);
   VbbHcc_ZMass_stack_6->SetBinError(16,0.419823);
   VbbHcc_ZMass_stack_6->SetBinError(17,0.553487);
   VbbHcc_ZMass_stack_6->SetBinError(18,0.5949093);
   VbbHcc_ZMass_stack_6->SetBinError(20,0.5203735);
   VbbHcc_ZMass_stack_6->SetBinError(21,0.5846233);
   VbbHcc_ZMass_stack_6->SetBinError(22,0.5688003);
   VbbHcc_ZMass_stack_6->SetBinError(23,0.419823);
   VbbHcc_ZMass_stack_6->SetBinError(24,0.2834059);
   VbbHcc_ZMass_stack_6->SetBinError(25,0.5315704);
   VbbHcc_ZMass_stack_6->SetBinError(26,0.3092106);
   VbbHcc_ZMass_stack_6->SetBinError(29,0.2709334);
   VbbHcc_ZMass_stack_6->SetBinError(30,0.3980853);
   VbbHcc_ZMass_stack_6->SetBinError(31,1.34273);
   VbbHcc_ZMass_stack_6->SetEntries(105);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_ZMass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_6->SetLineColor(ci);
   VbbHcc_ZMass_stack_6->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_6,"");
   
   TH1D *VbbHcc_ZMass_stack_7 = new TH1D("VbbHcc_ZMass_stack_7","",30,0,300);
   VbbHcc_ZMass_stack_7->SetBinContent(3,2.01389);
   VbbHcc_ZMass_stack_7->SetBinContent(4,1.537146);
   VbbHcc_ZMass_stack_7->SetBinContent(5,2.549701);
   VbbHcc_ZMass_stack_7->SetBinContent(6,4.832838);
   VbbHcc_ZMass_stack_7->SetBinContent(7,6.645615);
   VbbHcc_ZMass_stack_7->SetBinContent(8,15.39811);
   VbbHcc_ZMass_stack_7->SetBinContent(9,15.75381);
   VbbHcc_ZMass_stack_7->SetBinContent(10,19.24244);
   VbbHcc_ZMass_stack_7->SetBinContent(11,5.46568);
   VbbHcc_ZMass_stack_7->SetBinContent(12,3.176308);
   VbbHcc_ZMass_stack_7->SetBinContent(13,2.464038);
   VbbHcc_ZMass_stack_7->SetBinContent(14,2.046991);
   VbbHcc_ZMass_stack_7->SetBinContent(15,2.463897);
   VbbHcc_ZMass_stack_7->SetBinContent(16,1.237132);
   VbbHcc_ZMass_stack_7->SetBinContent(17,1.066773);
   VbbHcc_ZMass_stack_7->SetBinContent(18,0.834406);
   VbbHcc_ZMass_stack_7->SetBinContent(19,1.48145);
   VbbHcc_ZMass_stack_7->SetBinContent(20,0.5396111);
   VbbHcc_ZMass_stack_7->SetBinContent(21,1.425799);
   VbbHcc_ZMass_stack_7->SetBinContent(22,0.8833976);
   VbbHcc_ZMass_stack_7->SetBinContent(23,0.4641796);
   VbbHcc_ZMass_stack_7->SetBinContent(24,0.4475212);
   VbbHcc_ZMass_stack_7->SetBinContent(25,0.4941089);
   VbbHcc_ZMass_stack_7->SetBinContent(26,0.8958328);
   VbbHcc_ZMass_stack_7->SetBinContent(27,0.2183893);
   VbbHcc_ZMass_stack_7->SetBinContent(28,1.168236);
   VbbHcc_ZMass_stack_7->SetBinContent(29,0.8275827);
   VbbHcc_ZMass_stack_7->SetBinContent(30,0.4534323);
   VbbHcc_ZMass_stack_7->SetBinContent(31,5.831266);
   VbbHcc_ZMass_stack_7->SetBinError(3,0.7157547);
   VbbHcc_ZMass_stack_7->SetBinError(4,0.5929876);
   VbbHcc_ZMass_stack_7->SetBinError(5,0.7809165);
   VbbHcc_ZMass_stack_7->SetBinError(6,1.093041);
   VbbHcc_ZMass_stack_7->SetBinError(7,1.299041);
   VbbHcc_ZMass_stack_7->SetBinError(8,1.938018);
   VbbHcc_ZMass_stack_7->SetBinError(9,2.008392);
   VbbHcc_ZMass_stack_7->SetBinError(10,2.211222);
   VbbHcc_ZMass_stack_7->SetBinError(11,1.15766);
   VbbHcc_ZMass_stack_7->SetBinError(12,0.8658626);
   VbbHcc_ZMass_stack_7->SetBinError(13,0.7490492);
   VbbHcc_ZMass_stack_7->SetBinError(14,0.6903508);
   VbbHcc_ZMass_stack_7->SetBinError(15,0.7853645);
   VbbHcc_ZMass_stack_7->SetBinError(16,0.5560318);
   VbbHcc_ZMass_stack_7->SetBinError(17,0.4887538);
   VbbHcc_ZMass_stack_7->SetBinError(18,0.6311027);
   VbbHcc_ZMass_stack_7->SetBinError(19,0.6222474);
   VbbHcc_ZMass_stack_7->SetBinError(20,0.3836654);
   VbbHcc_ZMass_stack_7->SetBinError(21,0.590055);
   VbbHcc_ZMass_stack_7->SetBinError(22,0.4418785);
   VbbHcc_ZMass_stack_7->SetBinError(23,0.3284909);
   VbbHcc_ZMass_stack_7->SetBinError(24,0.3164575);
   VbbHcc_ZMass_stack_7->SetBinError(25,0.3497833);
   VbbHcc_ZMass_stack_7->SetBinError(26,0.5322212);
   VbbHcc_ZMass_stack_7->SetBinError(27,0.2183893);
   VbbHcc_ZMass_stack_7->SetBinError(28,0.5275178);
   VbbHcc_ZMass_stack_7->SetBinError(29,0.4817497);
   VbbHcc_ZMass_stack_7->SetBinError(30,0.3206744);
   VbbHcc_ZMass_stack_7->SetBinError(31,1.173196);
   VbbHcc_ZMass_stack_7->SetEntries(427);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_ZMass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_7->SetLineColor(ci);
   VbbHcc_ZMass_stack_7->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_7,"");
   
   TH1D *VbbHcc_ZMass_stack_8 = new TH1D("VbbHcc_ZMass_stack_8","",30,0,300);
   VbbHcc_ZMass_stack_8->SetBinContent(3,4.293903);
   VbbHcc_ZMass_stack_8->SetBinContent(4,10.29693);
   VbbHcc_ZMass_stack_8->SetBinContent(5,15.14288);
   VbbHcc_ZMass_stack_8->SetBinContent(6,21.60158);
   VbbHcc_ZMass_stack_8->SetBinContent(7,33.0697);
   VbbHcc_ZMass_stack_8->SetBinContent(8,55.25578);
   VbbHcc_ZMass_stack_8->SetBinContent(9,76.87216);
   VbbHcc_ZMass_stack_8->SetBinContent(10,59.57962);
   VbbHcc_ZMass_stack_8->SetBinContent(11,32.80677);
   VbbHcc_ZMass_stack_8->SetBinContent(12,18.83985);
   VbbHcc_ZMass_stack_8->SetBinContent(13,10.85621);
   VbbHcc_ZMass_stack_8->SetBinContent(14,9.805662);
   VbbHcc_ZMass_stack_8->SetBinContent(15,9.509761);
   VbbHcc_ZMass_stack_8->SetBinContent(16,9.995169);
   VbbHcc_ZMass_stack_8->SetBinContent(17,4.99022);
   VbbHcc_ZMass_stack_8->SetBinContent(18,5.943125);
   VbbHcc_ZMass_stack_8->SetBinContent(19,7.492639);
   VbbHcc_ZMass_stack_8->SetBinContent(20,3.900213);
   VbbHcc_ZMass_stack_8->SetBinContent(21,5.412136);
   VbbHcc_ZMass_stack_8->SetBinContent(22,3.083786);
   VbbHcc_ZMass_stack_8->SetBinContent(23,3.993624);
   VbbHcc_ZMass_stack_8->SetBinContent(24,2.798465);
   VbbHcc_ZMass_stack_8->SetBinContent(25,1.864563);
   VbbHcc_ZMass_stack_8->SetBinContent(26,3.411017);
   VbbHcc_ZMass_stack_8->SetBinContent(27,2.503287);
   VbbHcc_ZMass_stack_8->SetBinContent(28,2.00703);
   VbbHcc_ZMass_stack_8->SetBinContent(29,2.339874);
   VbbHcc_ZMass_stack_8->SetBinContent(30,1.914481);
   VbbHcc_ZMass_stack_8->SetBinContent(31,23.30778);
   VbbHcc_ZMass_stack_8->SetBinError(3,1.03333);
   VbbHcc_ZMass_stack_8->SetBinError(4,1.593448);
   VbbHcc_ZMass_stack_8->SetBinError(5,1.983421);
   VbbHcc_ZMass_stack_8->SetBinError(6,2.339163);
   VbbHcc_ZMass_stack_8->SetBinError(7,2.870654);
   VbbHcc_ZMass_stack_8->SetBinError(8,3.712516);
   VbbHcc_ZMass_stack_8->SetBinError(9,5.601057);
   VbbHcc_ZMass_stack_8->SetBinError(10,3.781295);
   VbbHcc_ZMass_stack_8->SetBinError(11,2.769607);
   VbbHcc_ZMass_stack_8->SetBinError(12,2.123931);
   VbbHcc_ZMass_stack_8->SetBinError(13,2.01143);
   VbbHcc_ZMass_stack_8->SetBinError(14,1.49277);
   VbbHcc_ZMass_stack_8->SetBinError(15,1.56128);
   VbbHcc_ZMass_stack_8->SetBinError(16,1.536559);
   VbbHcc_ZMass_stack_8->SetBinError(17,1.110268);
   VbbHcc_ZMass_stack_8->SetBinError(18,1.191241);
   VbbHcc_ZMass_stack_8->SetBinError(19,1.602394);
   VbbHcc_ZMass_stack_8->SetBinError(20,0.9353225);
   VbbHcc_ZMass_stack_8->SetBinError(21,1.117702);
   VbbHcc_ZMass_stack_8->SetBinError(22,0.839216);
   VbbHcc_ZMass_stack_8->SetBinError(23,1.01163);
   VbbHcc_ZMass_stack_8->SetBinError(24,0.8164425);
   VbbHcc_ZMass_stack_8->SetBinError(25,0.6629107);
   VbbHcc_ZMass_stack_8->SetBinError(26,0.8985648);
   VbbHcc_ZMass_stack_8->SetBinError(27,0.7988239);
   VbbHcc_ZMass_stack_8->SetBinError(28,0.6876976);
   VbbHcc_ZMass_stack_8->SetBinError(29,0.7521986);
   VbbHcc_ZMass_stack_8->SetBinError(30,0.673584);
   VbbHcc_ZMass_stack_8->SetBinError(31,2.400331);
   VbbHcc_ZMass_stack_8->SetEntries(1875);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_ZMass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_8->SetLineColor(ci);
   VbbHcc_ZMass_stack_8->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_8,"");
   
   TH1D *VbbHcc_ZMass_stack_9 = new TH1D("VbbHcc_ZMass_stack_9","",30,0,300);
   VbbHcc_ZMass_stack_9->SetBinContent(2,0.01580841);
   VbbHcc_ZMass_stack_9->SetBinContent(3,1.226227);
   VbbHcc_ZMass_stack_9->SetBinContent(4,4.271407);
   VbbHcc_ZMass_stack_9->SetBinContent(5,6.107033);
   VbbHcc_ZMass_stack_9->SetBinContent(6,8.239979);
   VbbHcc_ZMass_stack_9->SetBinContent(7,11.86076);
   VbbHcc_ZMass_stack_9->SetBinContent(8,17.82998);
   VbbHcc_ZMass_stack_9->SetBinContent(9,26.22198);
   VbbHcc_ZMass_stack_9->SetBinContent(10,29.39529);
   VbbHcc_ZMass_stack_9->SetBinContent(11,28.43931);
   VbbHcc_ZMass_stack_9->SetBinContent(12,30.98968);
   VbbHcc_ZMass_stack_9->SetBinContent(13,27.97679);
   VbbHcc_ZMass_stack_9->SetBinContent(14,17.61253);
   VbbHcc_ZMass_stack_9->SetBinContent(15,9.738555);
   VbbHcc_ZMass_stack_9->SetBinContent(16,6.833142);
   VbbHcc_ZMass_stack_9->SetBinContent(17,5.924576);
   VbbHcc_ZMass_stack_9->SetBinContent(18,5.090073);
   VbbHcc_ZMass_stack_9->SetBinContent(19,4.552952);
   VbbHcc_ZMass_stack_9->SetBinContent(20,3.977579);
   VbbHcc_ZMass_stack_9->SetBinContent(21,3.664994);
   VbbHcc_ZMass_stack_9->SetBinContent(22,3.092242);
   VbbHcc_ZMass_stack_9->SetBinContent(23,3.025819);
   VbbHcc_ZMass_stack_9->SetBinContent(24,2.444222);
   VbbHcc_ZMass_stack_9->SetBinContent(25,2.258117);
   VbbHcc_ZMass_stack_9->SetBinContent(26,2.012619);
   VbbHcc_ZMass_stack_9->SetBinContent(27,1.752171);
   VbbHcc_ZMass_stack_9->SetBinContent(28,1.698449);
   VbbHcc_ZMass_stack_9->SetBinContent(29,1.555332);
   VbbHcc_ZMass_stack_9->SetBinContent(30,1.269741);
   VbbHcc_ZMass_stack_9->SetBinContent(31,12.91604);
   VbbHcc_ZMass_stack_9->SetBinError(2,0.007663484);
   VbbHcc_ZMass_stack_9->SetBinError(3,0.05922996);
   VbbHcc_ZMass_stack_9->SetBinError(4,0.1146903);
   VbbHcc_ZMass_stack_9->SetBinError(5,0.1489786);
   VbbHcc_ZMass_stack_9->SetBinError(6,0.1623747);
   VbbHcc_ZMass_stack_9->SetBinError(7,0.1922913);
   VbbHcc_ZMass_stack_9->SetBinError(8,0.2463816);
   VbbHcc_ZMass_stack_9->SetBinError(9,0.3090073);
   VbbHcc_ZMass_stack_9->SetBinError(10,0.3378943);
   VbbHcc_ZMass_stack_9->SetBinError(11,0.2961709);
   VbbHcc_ZMass_stack_9->SetBinError(12,0.314048);
   VbbHcc_ZMass_stack_9->SetBinError(13,0.2934264);
   VbbHcc_ZMass_stack_9->SetBinError(14,0.2273171);
   VbbHcc_ZMass_stack_9->SetBinError(15,0.1655617);
   VbbHcc_ZMass_stack_9->SetBinError(16,0.1499404);
   VbbHcc_ZMass_stack_9->SetBinError(17,0.137726);
   VbbHcc_ZMass_stack_9->SetBinError(18,0.119826);
   VbbHcc_ZMass_stack_9->SetBinError(19,0.113948);
   VbbHcc_ZMass_stack_9->SetBinError(20,0.1072836);
   VbbHcc_ZMass_stack_9->SetBinError(21,0.1040383);
   VbbHcc_ZMass_stack_9->SetBinError(22,0.1043928);
   VbbHcc_ZMass_stack_9->SetBinError(23,0.1011091);
   VbbHcc_ZMass_stack_9->SetBinError(24,0.08441337);
   VbbHcc_ZMass_stack_9->SetBinError(25,0.0833753);
   VbbHcc_ZMass_stack_9->SetBinError(26,0.0782615);
   VbbHcc_ZMass_stack_9->SetBinError(27,0.07715087);
   VbbHcc_ZMass_stack_9->SetBinError(28,0.08073447);
   VbbHcc_ZMass_stack_9->SetBinError(29,0.0749253);
   VbbHcc_ZMass_stack_9->SetBinError(30,0.06312098);
   VbbHcc_ZMass_stack_9->SetBinError(31,0.2024915);
   VbbHcc_ZMass_stack_9->SetEntries(111628);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_ZMass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_9->SetLineColor(ci);
   VbbHcc_ZMass_stack_9->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_9,"");
   
   TH1D *VbbHcc_ZMass_stack_10 = new TH1D("VbbHcc_ZMass_stack_10","",30,0,300);
   VbbHcc_ZMass_stack_10->SetBinContent(2,0.000625399);
   VbbHcc_ZMass_stack_10->SetBinContent(3,0.02709792);
   VbbHcc_ZMass_stack_10->SetBinContent(4,0.1811463);
   VbbHcc_ZMass_stack_10->SetBinContent(5,0.3723581);
   VbbHcc_ZMass_stack_10->SetBinContent(6,0.7224144);
   VbbHcc_ZMass_stack_10->SetBinContent(7,1.427586);
   VbbHcc_ZMass_stack_10->SetBinContent(8,2.793344);
   VbbHcc_ZMass_stack_10->SetBinContent(9,4.267506);
   VbbHcc_ZMass_stack_10->SetBinContent(10,4.762649);
   VbbHcc_ZMass_stack_10->SetBinContent(11,4.706867);
   VbbHcc_ZMass_stack_10->SetBinContent(12,5.121425);
   VbbHcc_ZMass_stack_10->SetBinContent(13,4.597378);
   VbbHcc_ZMass_stack_10->SetBinContent(14,2.98932);
   VbbHcc_ZMass_stack_10->SetBinContent(15,1.657737);
   VbbHcc_ZMass_stack_10->SetBinContent(16,1.234841);
   VbbHcc_ZMass_stack_10->SetBinContent(17,1.075873);
   VbbHcc_ZMass_stack_10->SetBinContent(18,1.039818);
   VbbHcc_ZMass_stack_10->SetBinContent(19,0.9176967);
   VbbHcc_ZMass_stack_10->SetBinContent(20,0.8811086);
   VbbHcc_ZMass_stack_10->SetBinContent(21,0.8136286);
   VbbHcc_ZMass_stack_10->SetBinContent(22,0.7324463);
   VbbHcc_ZMass_stack_10->SetBinContent(23,0.6576297);
   VbbHcc_ZMass_stack_10->SetBinContent(24,0.5937234);
   VbbHcc_ZMass_stack_10->SetBinContent(25,0.5182459);
   VbbHcc_ZMass_stack_10->SetBinContent(26,0.446115);
   VbbHcc_ZMass_stack_10->SetBinContent(27,0.4220638);
   VbbHcc_ZMass_stack_10->SetBinContent(28,0.3646335);
   VbbHcc_ZMass_stack_10->SetBinContent(29,0.3195177);
   VbbHcc_ZMass_stack_10->SetBinContent(30,0.3029749);
   VbbHcc_ZMass_stack_10->SetBinContent(31,2.553026);
   VbbHcc_ZMass_stack_10->SetBinError(2,0.000625399);
   VbbHcc_ZMass_stack_10->SetBinError(3,0.004209001);
   VbbHcc_ZMass_stack_10->SetBinError(4,0.01081194);
   VbbHcc_ZMass_stack_10->SetBinError(5,0.01550786);
   VbbHcc_ZMass_stack_10->SetBinError(6,0.02164167);
   VbbHcc_ZMass_stack_10->SetBinError(7,0.03038554);
   VbbHcc_ZMass_stack_10->SetBinError(8,0.04245158);
   VbbHcc_ZMass_stack_10->SetBinError(9,0.05253574);
   VbbHcc_ZMass_stack_10->SetBinError(10,0.05550014);
   VbbHcc_ZMass_stack_10->SetBinError(11,0.05509749);
   VbbHcc_ZMass_stack_10->SetBinError(12,0.05750169);
   VbbHcc_ZMass_stack_10->SetBinError(13,0.05450973);
   VbbHcc_ZMass_stack_10->SetBinError(14,0.04399861);
   VbbHcc_ZMass_stack_10->SetBinError(15,0.0327556);
   VbbHcc_ZMass_stack_10->SetBinError(16,0.02826698);
   VbbHcc_ZMass_stack_10->SetBinError(17,0.02631935);
   VbbHcc_ZMass_stack_10->SetBinError(18,0.02589728);
   VbbHcc_ZMass_stack_10->SetBinError(19,0.02432609);
   VbbHcc_ZMass_stack_10->SetBinError(20,0.02389397);
   VbbHcc_ZMass_stack_10->SetBinError(21,0.02289319);
   VbbHcc_ZMass_stack_10->SetBinError(22,0.02175943);
   VbbHcc_ZMass_stack_10->SetBinError(23,0.02061756);
   VbbHcc_ZMass_stack_10->SetBinError(24,0.01960736);
   VbbHcc_ZMass_stack_10->SetBinError(25,0.01829987);
   VbbHcc_ZMass_stack_10->SetBinError(26,0.01698457);
   VbbHcc_ZMass_stack_10->SetBinError(27,0.01649565);
   VbbHcc_ZMass_stack_10->SetBinError(28,0.01532679);
   VbbHcc_ZMass_stack_10->SetBinError(29,0.01437966);
   VbbHcc_ZMass_stack_10->SetBinError(30,0.01398451);
   VbbHcc_ZMass_stack_10->SetBinError(31,0.04052569);
   VbbHcc_ZMass_stack_10->SetEntries(72910);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_ZMass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_10->SetLineColor(ci);
   VbbHcc_ZMass_stack_10->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_10,"");
   
   TH1D *VbbHcc_ZMass_stack_11 = new TH1D("VbbHcc_ZMass_stack_11","",30,0,300);
   VbbHcc_ZMass_stack_11->SetBinContent(2,0.00192394);
   VbbHcc_ZMass_stack_11->SetBinContent(3,0.03544706);
   VbbHcc_ZMass_stack_11->SetBinContent(4,0.1057319);
   VbbHcc_ZMass_stack_11->SetBinContent(5,0.1569189);
   VbbHcc_ZMass_stack_11->SetBinContent(6,0.3159674);
   VbbHcc_ZMass_stack_11->SetBinContent(7,0.5921277);
   VbbHcc_ZMass_stack_11->SetBinContent(8,0.987203);
   VbbHcc_ZMass_stack_11->SetBinContent(9,1.375479);
   VbbHcc_ZMass_stack_11->SetBinContent(10,1.086587);
   VbbHcc_ZMass_stack_11->SetBinContent(11,0.5411763);
   VbbHcc_ZMass_stack_11->SetBinContent(12,0.3144753);
   VbbHcc_ZMass_stack_11->SetBinContent(13,0.2915517);
   VbbHcc_ZMass_stack_11->SetBinContent(14,0.2291957);
   VbbHcc_ZMass_stack_11->SetBinContent(15,0.1433983);
   VbbHcc_ZMass_stack_11->SetBinContent(16,0.1243456);
   VbbHcc_ZMass_stack_11->SetBinContent(17,0.1210508);
   VbbHcc_ZMass_stack_11->SetBinContent(18,0.06469847);
   VbbHcc_ZMass_stack_11->SetBinContent(19,0.09591199);
   VbbHcc_ZMass_stack_11->SetBinContent(20,0.03572265);
   VbbHcc_ZMass_stack_11->SetBinContent(21,0.05201375);
   VbbHcc_ZMass_stack_11->SetBinContent(22,0.04098004);
   VbbHcc_ZMass_stack_11->SetBinContent(23,0.04710021);
   VbbHcc_ZMass_stack_11->SetBinContent(24,0.04543511);
   VbbHcc_ZMass_stack_11->SetBinContent(25,0.03243254);
   VbbHcc_ZMass_stack_11->SetBinContent(26,0.02084635);
   VbbHcc_ZMass_stack_11->SetBinContent(27,0.03936992);
   VbbHcc_ZMass_stack_11->SetBinContent(28,0.01783331);
   VbbHcc_ZMass_stack_11->SetBinContent(29,0.02716277);
   VbbHcc_ZMass_stack_11->SetBinContent(30,0.02313593);
   VbbHcc_ZMass_stack_11->SetBinContent(31,0.2759771);
   VbbHcc_ZMass_stack_11->SetBinError(2,0.00192394);
   VbbHcc_ZMass_stack_11->SetBinError(3,0.009739202);
   VbbHcc_ZMass_stack_11->SetBinError(4,0.01678263);
   VbbHcc_ZMass_stack_11->SetBinError(5,0.020806);
   VbbHcc_ZMass_stack_11->SetBinError(6,0.02911706);
   VbbHcc_ZMass_stack_11->SetBinError(7,0.04009005);
   VbbHcc_ZMass_stack_11->SetBinError(8,0.05100921);
   VbbHcc_ZMass_stack_11->SetBinError(9,0.06055021);
   VbbHcc_ZMass_stack_11->SetBinError(10,0.05366207);
   VbbHcc_ZMass_stack_11->SetBinError(11,0.03750582);
   VbbHcc_ZMass_stack_11->SetBinError(12,0.02866287);
   VbbHcc_ZMass_stack_11->SetBinError(13,0.02867404);
   VbbHcc_ZMass_stack_11->SetBinError(14,0.02484988);
   VbbHcc_ZMass_stack_11->SetBinError(15,0.01922502);
   VbbHcc_ZMass_stack_11->SetBinError(16,0.01780061);
   VbbHcc_ZMass_stack_11->SetBinError(17,0.01787722);
   VbbHcc_ZMass_stack_11->SetBinError(18,0.0128034);
   VbbHcc_ZMass_stack_11->SetBinError(19,0.0155901);
   VbbHcc_ZMass_stack_11->SetBinError(20,0.009167452);
   VbbHcc_ZMass_stack_11->SetBinError(21,0.01144589);
   VbbHcc_ZMass_stack_11->SetBinError(22,0.009896219);
   VbbHcc_ZMass_stack_11->SetBinError(23,0.01078726);
   VbbHcc_ZMass_stack_11->SetBinError(24,0.01085553);
   VbbHcc_ZMass_stack_11->SetBinError(25,0.008898859);
   VbbHcc_ZMass_stack_11->SetBinError(26,0.006951622);
   VbbHcc_ZMass_stack_11->SetBinError(27,0.01049975);
   VbbHcc_ZMass_stack_11->SetBinError(28,0.006620688);
   VbbHcc_ZMass_stack_11->SetBinError(29,0.008096045);
   VbbHcc_ZMass_stack_11->SetBinError(30,0.007299383);
   VbbHcc_ZMass_stack_11->SetBinError(31,0.02672174);
   VbbHcc_ZMass_stack_11->SetEntries(3167);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_ZMass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_11->SetLineColor(ci);
   VbbHcc_ZMass_stack_11->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_11,"");
   
   TH1D *VbbHcc_ZMass_stack_12 = new TH1D("VbbHcc_ZMass_stack_12","",30,0,300);
   VbbHcc_ZMass_stack_12->SetBinContent(3,0.003519396);
   VbbHcc_ZMass_stack_12->SetBinContent(4,0.02296935);
   VbbHcc_ZMass_stack_12->SetBinContent(5,0.03806339);
   VbbHcc_ZMass_stack_12->SetBinContent(6,0.08101982);
   VbbHcc_ZMass_stack_12->SetBinContent(7,0.2016828);
   VbbHcc_ZMass_stack_12->SetBinContent(8,0.3876091);
   VbbHcc_ZMass_stack_12->SetBinContent(9,0.5333929);
   VbbHcc_ZMass_stack_12->SetBinContent(10,0.4610329);
   VbbHcc_ZMass_stack_12->SetBinContent(11,0.2122688);
   VbbHcc_ZMass_stack_12->SetBinContent(12,0.106873);
   VbbHcc_ZMass_stack_12->SetBinContent(13,0.1051119);
   VbbHcc_ZMass_stack_12->SetBinContent(14,0.06996025);
   VbbHcc_ZMass_stack_12->SetBinContent(15,0.04580664);
   VbbHcc_ZMass_stack_12->SetBinContent(16,0.03522797);
   VbbHcc_ZMass_stack_12->SetBinContent(17,0.03970512);
   VbbHcc_ZMass_stack_12->SetBinContent(18,0.03710243);
   VbbHcc_ZMass_stack_12->SetBinContent(19,0.0316377);
   VbbHcc_ZMass_stack_12->SetBinContent(20,0.02873589);
   VbbHcc_ZMass_stack_12->SetBinContent(21,0.02321401);
   VbbHcc_ZMass_stack_12->SetBinContent(22,0.02229555);
   VbbHcc_ZMass_stack_12->SetBinContent(23,0.02076702);
   VbbHcc_ZMass_stack_12->SetBinContent(24,0.0191022);
   VbbHcc_ZMass_stack_12->SetBinContent(25,0.02248683);
   VbbHcc_ZMass_stack_12->SetBinContent(26,0.02165868);
   VbbHcc_ZMass_stack_12->SetBinContent(27,0.01515288);
   VbbHcc_ZMass_stack_12->SetBinContent(28,0.01516556);
   VbbHcc_ZMass_stack_12->SetBinContent(29,0.01312808);
   VbbHcc_ZMass_stack_12->SetBinContent(30,0.01212388);
   VbbHcc_ZMass_stack_12->SetBinContent(31,0.1545351);
   VbbHcc_ZMass_stack_12->SetBinError(3,0.001106075);
   VbbHcc_ZMass_stack_12->SetBinError(4,0.002831973);
   VbbHcc_ZMass_stack_12->SetBinError(5,0.003566291);
   VbbHcc_ZMass_stack_12->SetBinError(6,0.005235143);
   VbbHcc_ZMass_stack_12->SetBinError(7,0.00887616);
   VbbHcc_ZMass_stack_12->SetBinError(8,0.01152145);
   VbbHcc_ZMass_stack_12->SetBinError(9,0.01335595);
   VbbHcc_ZMass_stack_12->SetBinError(10,0.01237998);
   VbbHcc_ZMass_stack_12->SetBinError(11,0.008307128);
   VbbHcc_ZMass_stack_12->SetBinError(12,0.005882543);
   VbbHcc_ZMass_stack_12->SetBinError(13,0.005853667);
   VbbHcc_ZMass_stack_12->SetBinError(14,0.004752453);
   VbbHcc_ZMass_stack_12->SetBinError(15,0.003822246);
   VbbHcc_ZMass_stack_12->SetBinError(16,0.003348947);
   VbbHcc_ZMass_stack_12->SetBinError(17,0.003597733);
   VbbHcc_ZMass_stack_12->SetBinError(18,0.003414072);
   VbbHcc_ZMass_stack_12->SetBinError(19,0.003279493);
   VbbHcc_ZMass_stack_12->SetBinError(20,0.003040026);
   VbbHcc_ZMass_stack_12->SetBinError(21,0.002741264);
   VbbHcc_ZMass_stack_12->SetBinError(22,0.002678214);
   VbbHcc_ZMass_stack_12->SetBinError(23,0.002551514);
   VbbHcc_ZMass_stack_12->SetBinError(24,0.002535747);
   VbbHcc_ZMass_stack_12->SetBinError(25,0.002708615);
   VbbHcc_ZMass_stack_12->SetBinError(26,0.002687814);
   VbbHcc_ZMass_stack_12->SetBinError(27,0.00224905);
   VbbHcc_ZMass_stack_12->SetBinError(28,0.002174254);
   VbbHcc_ZMass_stack_12->SetBinError(29,0.002082166);
   VbbHcc_ZMass_stack_12->SetBinError(30,0.002003176);
   VbbHcc_ZMass_stack_12->SetBinError(31,0.007100442);
   VbbHcc_ZMass_stack_12->SetEntries(9458);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_ZMass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_12->SetLineColor(ci);
   VbbHcc_ZMass_stack_12->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_ZMass__5 = new TH1D("VbbHcc_ZMass__5","",30,0,300);
   VbbHcc_ZMass__5->SetBinContent(2,32);
   VbbHcc_ZMass__5->SetBinContent(3,2365);
   VbbHcc_ZMass__5->SetBinContent(4,11735);
   VbbHcc_ZMass__5->SetBinContent(5,22675);
   VbbHcc_ZMass__5->SetBinContent(6,29681);
   VbbHcc_ZMass__5->SetBinContent(7,32154);
   VbbHcc_ZMass__5->SetBinContent(8,31479);
   VbbHcc_ZMass__5->SetBinContent(9,29988);
   VbbHcc_ZMass__5->SetBinContent(10,27943);
   VbbHcc_ZMass__5->SetBinContent(11,26452);
   VbbHcc_ZMass__5->SetBinContent(12,25391);
   VbbHcc_ZMass__5->SetBinContent(13,24311);
   VbbHcc_ZMass__5->SetBinContent(14,23466);
   VbbHcc_ZMass__5->SetBinContent(15,22759);
   VbbHcc_ZMass__5->SetBinContent(16,21975);
   VbbHcc_ZMass__5->SetBinContent(17,21250);
   VbbHcc_ZMass__5->SetBinContent(18,20389);
   VbbHcc_ZMass__5->SetBinContent(19,19372);
   VbbHcc_ZMass__5->SetBinContent(20,18490);
   VbbHcc_ZMass__5->SetBinContent(21,17610);
   VbbHcc_ZMass__5->SetBinContent(22,16689);
   VbbHcc_ZMass__5->SetBinContent(23,15797);
   VbbHcc_ZMass__5->SetBinContent(24,14816);
   VbbHcc_ZMass__5->SetBinContent(25,13955);
   VbbHcc_ZMass__5->SetBinContent(26,13061);
   VbbHcc_ZMass__5->SetBinContent(27,12150);
   VbbHcc_ZMass__5->SetBinContent(28,11673);
   VbbHcc_ZMass__5->SetBinContent(29,10702);
   VbbHcc_ZMass__5->SetBinContent(30,10003);
   VbbHcc_ZMass__5->SetBinContent(31,145420);
   VbbHcc_ZMass__5->SetBinError(2,5.656854);
   VbbHcc_ZMass__5->SetBinError(3,48.63127);
   VbbHcc_ZMass__5->SetBinError(4,108.3282);
   VbbHcc_ZMass__5->SetBinError(5,150.5822);
   VbbHcc_ZMass__5->SetBinError(6,172.2817);
   VbbHcc_ZMass__5->SetBinError(7,179.3154);
   VbbHcc_ZMass__5->SetBinError(8,177.4232);
   VbbHcc_ZMass__5->SetBinError(9,173.1704);
   VbbHcc_ZMass__5->SetBinError(10,167.1616);
   VbbHcc_ZMass__5->SetBinError(11,162.6407);
   VbbHcc_ZMass__5->SetBinError(12,159.3455);
   VbbHcc_ZMass__5->SetBinError(13,155.9199);
   VbbHcc_ZMass__5->SetBinError(14,153.1862);
   VbbHcc_ZMass__5->SetBinError(15,150.8609);
   VbbHcc_ZMass__5->SetBinError(16,148.2397);
   VbbHcc_ZMass__5->SetBinError(17,145.7738);
   VbbHcc_ZMass__5->SetBinError(18,142.7901);
   VbbHcc_ZMass__5->SetBinError(19,139.1833);
   VbbHcc_ZMass__5->SetBinError(20,135.9779);
   VbbHcc_ZMass__5->SetBinError(21,132.7027);
   VbbHcc_ZMass__5->SetBinError(22,129.1859);
   VbbHcc_ZMass__5->SetBinError(23,125.6861);
   VbbHcc_ZMass__5->SetBinError(24,121.721);
   VbbHcc_ZMass__5->SetBinError(25,118.1313);
   VbbHcc_ZMass__5->SetBinError(26,114.2847);
   VbbHcc_ZMass__5->SetBinError(27,110.227);
   VbbHcc_ZMass__5->SetBinError(28,108.0417);
   VbbHcc_ZMass__5->SetBinError(29,103.4505);
   VbbHcc_ZMass__5->SetBinError(30,100.015);
   VbbHcc_ZMass__5->SetBinError(31,381.3397);
   VbbHcc_ZMass__5->SetEntries(693783);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass__5->SetLineColor(ci);
   VbbHcc_ZMass__5->SetLineWidth(2);
   VbbHcc_ZMass__5->SetMarkerStyle(20);
   VbbHcc_ZMass__5->SetMarkerSize(1.2);
   VbbHcc_ZMass__5->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass__5->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass__5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass__5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass__5->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass__5->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass__5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass__5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass__5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass__5->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass__5->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass__5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass__5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass__5->GetZaxis()->SetTitleFont(42);
   VbbHcc_ZMass__5->Draw("same E");
   
   Double_t Graph_from_VbbHcc_ZMass_fx1005[30] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295};
   Double_t Graph_from_VbbHcc_ZMass_fy1005[30] = {
   0,
   336.4179,
   21916.46,
   77144.09,
   120909.3,
   95551.03,
   96664.14,
   78850.58,
   86184.31,
   74923.32,
   65470.34,
   74234.2,
   68775.31,
   64235.65,
   60512.98,
   56321.33,
   48061.26,
   50580.33,
   47650.12,
   41683.29,
   36522.85,
   35974.42,
   32710.2,
   27966.45,
   31307.82,
   26008.71,
   22060.05,
   20026.61,
   14547.14,
   16616.11};
   Double_t Graph_from_VbbHcc_ZMass_fex1005[30] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_ZMass_fey1005[30] = {
   0,
   201.0844,
   2928.522,
   5175.143,
   8756.287,
   5440.345,
   5434.637,
   5033.196,
   5083.369,
   4489.158,
   4187.981,
   4524.541,
   4629.407,
   4374.08,
   4154.769,
   3921.081,
   3572.666,
   3715.349,
   3720.648,
   3956.744,
   3055.389,
   3043.388,
   3032.617,
   2522.761,
   2970.873,
   4746.272,
   2375.322,
   2208.019,
   1701.829,
   1979.695};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_ZMass_fx1005,Graph_from_VbbHcc_ZMass_fy1005,Graph_from_VbbHcc_ZMass_fex1005,Graph_from_VbbHcc_ZMass_fey1005);
   gre->SetName("Graph_from_VbbHcc_ZMass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_ZMass1005 = new TH1F("Graph_Graph_from_VbbHcc_ZMass1005","",100,0,330);
   Graph_Graph_from_VbbHcc_ZMass1005->SetMinimum(0);
   Graph_Graph_from_VbbHcc_ZMass1005->SetMaximum(142632.2);
   Graph_Graph_from_VbbHcc_ZMass1005->SetDirectory(0);
   Graph_Graph_from_VbbHcc_ZMass1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_ZMass1005->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_ZMass1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZMass1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_ZMass1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZMass1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_ZMass1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_ZMass1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZMass1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_ZMass1005);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_ZMass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_ZMass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_ZMass","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   ZMass_VbbHcc_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
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
   
   TH1D *data_mc_ratio__6 = new TH1D("data_mc_ratio__6","",30,0,300);
   data_mc_ratio__6->SetBinContent(2,0.0951198);
   data_mc_ratio__6->SetBinContent(3,0.1079098);
   data_mc_ratio__6->SetBinContent(4,0.1521179);
   data_mc_ratio__6->SetBinContent(5,0.1875372);
   data_mc_ratio__6->SetBinContent(6,0.3106298);
   data_mc_ratio__6->SetBinContent(7,0.3326363);
   data_mc_ratio__6->SetBinContent(8,0.3992235);
   data_mc_ratio__6->SetBinContent(9,0.347952);
   data_mc_ratio__6->SetBinContent(10,0.3729546);
   data_mc_ratio__6->SetBinContent(11,0.4040303);
   data_mc_ratio__6->SetBinContent(12,0.3420391);
   data_mc_ratio__6->SetBinContent(13,0.3534844);
   data_mc_ratio__6->SetBinContent(14,0.3653112);
   data_mc_ratio__6->SetBinContent(15,0.3761011);
   data_mc_ratio__6->SetBinContent(16,0.3901719);
   data_mc_ratio__6->SetBinContent(17,0.442144);
   data_mc_ratio__6->SetBinContent(18,0.4031013);
   data_mc_ratio__6->SetBinContent(19,0.4065467);
   data_mc_ratio__6->SetBinContent(20,0.4435831);
   data_mc_ratio__6->SetBinContent(21,0.4821639);
   data_mc_ratio__6->SetBinContent(22,0.4639129);
   data_mc_ratio__6->SetBinContent(23,0.482938);
   data_mc_ratio__6->SetBinContent(24,0.5297776);
   data_mc_ratio__6->SetBinContent(25,0.4457353);
   data_mc_ratio__6->SetBinContent(26,0.5021779);
   data_mc_ratio__6->SetBinContent(27,0.5507694);
   data_mc_ratio__6->SetBinContent(28,0.5828744);
   data_mc_ratio__6->SetBinContent(29,0.7356775);
   data_mc_ratio__6->SetBinContent(30,0.6020061);
   data_mc_ratio__6->SetBinContent(31,0.7404291);
   data_mc_ratio__6->SetBinError(2,0.01681496);
   data_mc_ratio__6->SetBinError(3,0.002218938);
   data_mc_ratio__6->SetBinError(4,0.001404232);
   data_mc_ratio__6->SetBinError(5,0.001245414);
   data_mc_ratio__6->SetBinError(6,0.001803034);
   data_mc_ratio__6->SetBinError(7,0.001855035);
   data_mc_ratio__6->SetBinError(8,0.00225012);
   data_mc_ratio__6->SetBinError(9,0.002009304);
   data_mc_ratio__6->SetBinError(10,0.002231102);
   data_mc_ratio__6->SetBinError(11,0.002484189);
   data_mc_ratio__6->SetBinError(12,0.002146525);
   data_mc_ratio__6->SetBinError(13,0.002267091);
   data_mc_ratio__6->SetBinError(14,0.002384753);
   data_mc_ratio__6->SetBinError(15,0.002493033);
   data_mc_ratio__6->SetBinError(16,0.002632034);
   data_mc_ratio__6->SetBinError(17,0.003033083);
   data_mc_ratio__6->SetBinError(18,0.002823035);
   data_mc_ratio__6->SetBinError(19,0.002920944);
   data_mc_ratio__6->SetBinError(20,0.003262169);
   data_mc_ratio__6->SetBinError(21,0.003633415);
   data_mc_ratio__6->SetBinError(22,0.003591049);
   data_mc_ratio__6->SetBinError(23,0.003842413);
   data_mc_ratio__6->SetBinError(24,0.004352393);
   data_mc_ratio__6->SetBinError(25,0.00377322);
   data_mc_ratio__6->SetBinError(26,0.004394095);
   data_mc_ratio__6->SetBinError(27,0.004996681);
   data_mc_ratio__6->SetBinError(28,0.005394905);
   data_mc_ratio__6->SetBinError(29,0.007111398);
   data_mc_ratio__6->SetBinError(30,0.006019158);
   data_mc_ratio__6->SetBinError(31,0.02488084);
   data_mc_ratio__6->SetMinimum(0.4);
   data_mc_ratio__6->SetMaximum(1.6);
   data_mc_ratio__6->SetEntries(2550.734);
   data_mc_ratio__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__6->SetLineColor(ci);
   data_mc_ratio__6->SetLineWidth(2);
   data_mc_ratio__6->SetMarkerStyle(20);
   data_mc_ratio__6->SetMarkerSize(1.2);
   data_mc_ratio__6->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__6->GetXaxis()->SetRange(1,30);
   data_mc_ratio__6->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__6->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__6->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__6->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__6->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__6->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__6->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__6->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__6->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__6->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__6->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__6->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__6->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__6->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1006[30] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295};
   Double_t Graph_from_mc_statistical_error_fy1006[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1006[30] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1006[30] = {
   0,
   0.5977221,
   0.1336221,
   0.06708411,
   0.07242028,
   0.05693654,
   0.05622185,
   0.06383207,
   0.05898253,
   0.05991671,
   0.0639676,
   0.06094954,
   0.06731206,
   0.06809428,
   0.06865914,
   0.06961983,
   0.07433567,
   0.07345441,
   0.07808264,
   0.094924,
   0.0836569,
   0.08459865,
   0.09271166,
   0.0902067,
   0.09489237,
   0.1824878,
   0.1076753,
   0.1102543,
   0.1169873,
   0.1191431};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1006,Graph_from_mc_statistical_error_fy1006,Graph_from_mc_statistical_error_fex1006,Graph_from_mc_statistical_error_fey1006);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1006 = new TH1F("Graph_Graph_from_mc_statistical_error1006","",100,0,330);
   Graph_Graph_from_mc_statistical_error1006->SetMinimum(0.2827335);
   Graph_Graph_from_mc_statistical_error1006->SetMaximum(1.717267);
   Graph_Graph_from_mc_statistical_error1006->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1006->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1006);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   ZMass_VbbHcc_18->cd();
   ZMass_VbbHcc_18->Modified();
   ZMass_VbbHcc_18->cd();
   ZMass_VbbHcc_18->SetSelected(ZMass_VbbHcc_18);
}
