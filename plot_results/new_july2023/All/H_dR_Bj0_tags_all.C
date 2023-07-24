void H_dR_Bj0_tags_all()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_all/H_dR_Bj0_tags_all
//=========  (Mon Jul 24 10:11:23 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_all = new TCanvas("H_dR_Bj0_tags_all", "H_dR_Bj0_tags_all",0,0,600,600);
   H_dR_Bj0_tags_all->SetHighLightColor(2);
   H_dR_Bj0_tags_all->Range(0,0,1,1);
   H_dR_Bj0_tags_all->SetFillColor(0);
   H_dR_Bj0_tags_all->SetFillStyle(4000);
   H_dR_Bj0_tags_all->SetBorderMode(0);
   H_dR_Bj0_tags_all->SetBorderSize(2);
   H_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2243.225,6.314516,2241282);
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
   st->SetMinimum(0.3);
   st->SetMaximum(1920885);
   
   TH1F *st_stack_44 = new TH1F("st_stack_44","",30,0,6);
   st_stack_44->SetMinimum(0.3);
   st_stack_44->SetMaximum(2016929);
   st_stack_44->SetDirectory(0);
   st_stack_44->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_44->SetLineColor(ci);
   st_stack_44->GetXaxis()->SetRange(1,30);
   st_stack_44->GetXaxis()->SetLabelFont(42);
   st_stack_44->GetXaxis()->SetLabelSize(0.035);
   st_stack_44->GetXaxis()->SetTitleSize(0.035);
   st_stack_44->GetXaxis()->SetTitleFont(42);
   st_stack_44->GetYaxis()->SetTitle("Events/0.2");
   st_stack_44->GetYaxis()->SetLabelFont(42);
   st_stack_44->GetYaxis()->SetLabelSize(0.05);
   st_stack_44->GetYaxis()->SetTitleSize(0.057);
   st_stack_44->GetYaxis()->SetTitleOffset(1.2);
   st_stack_44->GetYaxis()->SetTitleFont(42);
   st_stack_44->GetZaxis()->SetLabelFont(42);
   st_stack_44->GetZaxis()->SetLabelSize(0.035);
   st_stack_44->GetZaxis()->SetTitleSize(0.035);
   st_stack_44->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_44);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(1,213519.1);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(2,700867.1);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(3,702742);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(4,575925.8);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(5,464735.1);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(6,377708.1);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(7,330559.6);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(8,280178.1);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(9,265985.9);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(10,222065);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(11,193232.9);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(12,198187.8);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(13,197077.2);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(14,164213.1);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(15,148810.5);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(16,146570.5);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(17,104072.1);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(18,93711.89);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(19,91983.14);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(20,65345.13);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(21,50542.48);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(22,53878.7);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(23,38015.57);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(24,29817.12);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(25,23403.58);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(26,15368.71);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(27,13766.58);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(28,9171.452);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(29,25963.23);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(30,3954.29);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(31,7743.584);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(1,4260.065);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(2,10794.88);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(3,23659.48);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(4,18654.34);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(5,22683.73);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(6,9353.289);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(7,8993.18);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(8,7966.588);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(9,15887.96);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(10,6490.378);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(11,6125.365);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(12,6136.211);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(13,7052.599);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(14,6128.47);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(15,5560.919);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(16,15368.58);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(17,4290.538);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(18,4838.186);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(19,14999.03);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(20,3329.515);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(21,3074.518);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(22,4201.707);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(23,2561.382);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(24,2994.805);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(25,1656.423);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(26,1237.81);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(27,1395.704);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(28,1043.141);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(29,20486.5);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(30,603.3892);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(31,1039.665);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetEntries(488683);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(1,1968.699);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(2,7635.227);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(3,8636.783);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(4,7025.249);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(5,5595.953);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(6,4580.887);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(7,3906.384);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(8,3360.138);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(9,2991.179);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(10,2721.123);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(11,2492.314);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(12,2303.507);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(13,2145.272);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(14,1965.586);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(15,1765.774);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(16,1565.671);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(17,1293.52);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(18,1076.915);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(19,883.0721);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(20,741.2139);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(21,595.2546);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(22,496.8651);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(23,415.6825);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(24,309.6742);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(25,237.454);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(26,181.429);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(27,142.4187);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(28,85.35178);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(29,60.39723);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(30,37.35153);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(31,68.9896);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(1,18.95355);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(2,36.30363);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(3,37.95718);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(4,33.70772);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(5,29.85804);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(6,26.79794);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(7,24.65342);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(8,22.69136);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(9,21.35596);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(10,20.31632);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(11,19.3635);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(12,18.56216);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(13,17.80597);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(14,16.99656);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(15,15.95551);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(16,14.86357);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(17,13.55663);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(18,12.25386);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(19,11.01876);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(20,10.17919);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(21,8.845538);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(22,8.212373);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(23,7.568644);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(24,6.436486);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(25,5.675299);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(26,4.851846);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(27,4.421333);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(28,3.156794);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(29,2.725712);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(30,1.941702);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(31,2.676793);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetEntries(822483);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(1,21413.2);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(2,108531.3);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(3,143903.5);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(4,128938.3);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(5,102463.9);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(6,81749.42);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(7,66986.21);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(8,57220.41);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(9,50704.26);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(10,46179.38);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(11,42564.34);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(12,39460.59);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(13,35991.7);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(14,32217.33);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(15,28360.7);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(16,24592.91);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(17,19935.64);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(18,16407.86);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(19,13433.39);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(20,10893.31);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(21,8687.045);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(22,6886.15);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(23,5358.333);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(24,4093.352);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(25,3067.539);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(26,2235.648);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(27,1572.438);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(28,1065.574);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(29,704.8727);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(30,467.59);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinContent(31,857.4116);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(1,36.57795);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(2,82.59448);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(3,95.44774);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(4,90.53849);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(5,80.77336);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(6,72.14771);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(7,65.27224);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(8,60.32364);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(9,56.79754);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(10,54.22458);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(11,52.0782);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(12,50.15765);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(13,47.89267);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(14,45.29084);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(15,42.44983);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(16,39.47548);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(17,35.52055);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(18,32.21236);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(19,29.10865);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(20,26.18392);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(21,23.34982);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(22,20.77478);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(23,18.30233);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(24,15.98344);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(25,13.82104);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(26,11.79403);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(27,9.885949);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(28,8.12411);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(29,6.602315);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(30,5.367203);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetBinError(31,7.264386);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetEntries(1.800198e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(1,1672.372);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(2,5284.641);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(3,5571.288);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(4,4567.657);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(5,3719.882);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(6,3044.567);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(7,2564.834);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(8,2182.114);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(9,1937.832);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(10,1797.204);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(11,1698.862);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(12,1566.216);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(13,1389.869);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(14,1273.995);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(15,1176.558);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(16,1031.396);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(17,809.1872);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(18,720.1032);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(19,587.6577);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(20,515.6578);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(21,420.9857);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(22,342.5702);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(23,268.1389);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(24,208.716);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(25,169.2903);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(26,126.1667);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(27,91.60268);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(28,67.74456);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(29,40.82152);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(30,28.47005);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinContent(31,39.09652);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(1,18.33561);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(2,46.04605);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(3,53.11266);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(4,51.50554);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(5,46.72137);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(6,41.53148);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(7,37.65061);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(8,32.20867);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(9,29.76988);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(10,30.098);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(11,29.4786);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(12,27.85911);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(13,24.12822);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(14,22.22994);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(15,24.57928);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(16,21.51507);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(17,18.30168);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(18,18.9976);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(19,15.70246);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(20,16.16235);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(21,13.87255);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(22,14.20656);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(23,10.2085);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(24,8.900374);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(25,8.089033);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(26,6.515924);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(27,6.705834);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(28,5.726241);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(29,2.668636);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(30,3.417018);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetBinError(31,3.691964);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetEntries(340933);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(1,1132.346);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(2,3257.831);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(3,3377.637);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(4,2600.014);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(5,2165.186);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(6,1666.175);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(7,1361.07);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(8,1275.981);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(9,1071.458);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(10,952.9839);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(11,862.6629);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(12,818.2754);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(13,703.7613);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(14,700.1781);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(15,587.7446);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(16,532.4155);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(17,483.8293);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(18,360.0643);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(19,317.5117);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(20,282.1713);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(21,220.305);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(22,177.648);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(23,154.4432);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(24,121.4594);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(25,107.931);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(26,78.33754);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(27,51.41267);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(28,41.15122);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(29,22.0221);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(30,13.36263);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinContent(31,26.39596);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(1,20.12443);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(2,54.62188);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(3,66.42779);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(4,63.04687);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(5,62.79766);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(6,47.98765);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(7,42.10319);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(8,45.20281);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(9,39.57927);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(10,32.57595);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(11,34.83461);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(12,35.87645);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(13,27.147);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(14,30.5415);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(15,24.24164);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(16,23.6819);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(17,26.06136);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(18,17.99152);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(19,18.28318);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(20,20.1665);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(21,13.23392);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(22,13.93109);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(23,15.04664);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(24,11.21935);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(25,9.206782);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(26,6.09008);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(27,4.959184);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(28,7.384309);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(29,2.655664);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(30,2.247248);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetBinError(31,3.828388);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetEntries(194636);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(1,7.19214);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(2,21.62423);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(3,18.14442);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(4,15.68808);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(5,11.55561);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(6,6.239076);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(7,9.202604);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(8,7.763799);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(9,6.938923);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(10,7.426559);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(11,5.638772);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(12,3.709304);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(13,4.720025);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(14,2.642058);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(15,3.648237);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(16,2.157832);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(17,1.784378);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(18,2.617205);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(19,2.279583);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(20,0.5468065);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(21,1.206281);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(22,1.724825);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(23,0.3734539);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(24,0.8358548);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(25,0.8626035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(26,0.4593733);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(28,0.2890483);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinContent(29,0.08591938);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(1,1.144052);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(2,1.931839);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(3,1.768893);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(4,1.561076);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(5,1.380781);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(6,1.025098);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(7,1.269284);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(8,1.155269);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(9,1.180366);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(10,1.202674);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(11,1.017563);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(12,0.796743);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(13,0.9538576);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(14,0.6156477);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(15,0.7399409);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(16,0.62939);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(17,0.5837113);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(18,0.6774414);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(19,0.7559569);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(20,0.3251082);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(21,0.4166785);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(22,0.5375408);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(23,0.2353995);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(24,0.4350222);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(25,0.3795951);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(26,0.2505895);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(28,0.2890483);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetBinError(29,0.08591938);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetEntries(1108);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(1,13.23527);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(2,37.12392);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(3,33.84976);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(4,23.1936);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(5,18.13734);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(6,11.73098);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(7,12.80718);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(8,10.23023);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(9,11.07643);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(10,10.3728);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(11,7.947872);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(12,6.600537);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(13,7.417214);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(14,4.918355);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(15,5.090448);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(16,4.251692);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(17,3.731506);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(18,3.87988);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(19,3.911042);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(20,1.372188);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(21,2.006556);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(22,1.799137);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(23,1.539611);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(24,1.342666);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(25,1.178272);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(26,0.8387561);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(27,0.3185705);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(28,0.4801906);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(29,0.1274282);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinContent(31,0.0637141);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(1,1.277825);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(2,2.121805);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(3,1.985134);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(4,1.649992);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(5,1.481948);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(6,1.158272);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(7,1.321118);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(8,1.188936);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(9,1.267784);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(10,1.257267);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(11,1.062608);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(12,0.8847386);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(13,1.019667);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(14,0.6997948);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(15,0.7704628);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(16,0.7157998);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(17,0.6718804);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(18,0.7186673);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(19,0.817182);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(20,0.3905896);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(21,0.4596245);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(22,0.5222053);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(23,0.3548209);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(24,0.4645554);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(25,0.3980972);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(26,0.2850325);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(27,0.142469);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(28,0.3093985);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(29,0.09010534);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetBinError(31,0.0637141);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetEntries(2838);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(1,16.06589);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(2,49.95642);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(3,50.98601);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(4,37.75063);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(5,27.80308);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(6,21.93986);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(7,17.0132);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(8,14.39518);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(9,12.64434);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(10,10.8579);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(11,12.02322);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(12,8.772149);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(13,7.301299);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(14,8.86973);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(15,8.336117);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(16,7.322135);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(17,3.304652);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(18,4.429827);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(19,2.80043);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(20,2.880546);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(21,2.034021);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(22,2.635825);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(23,1.476554);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(24,1.697422);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(25,1.289781);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(26,1.316486);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(27,0.572246);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(28,0.572246);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinContent(31,0.572246);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(1,1.745615);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(2,3.080357);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(3,3.102232);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(4,2.667329);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(5,2.297365);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(6,2.040963);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(7,1.786323);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(8,1.654221);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(9,1.547528);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(10,1.440751);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(11,1.505621);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(12,1.29598);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(13,1.186376);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(14,1.295844);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(15,1.25891);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(16,1.174542);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(17,0.8031777);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(18,0.9255143);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(19,0.724143);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(20,0.7451617);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(21,0.6142132);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(22,0.705419);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(23,0.5226219);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(24,0.5665843);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(25,0.4881081);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(26,0.4985417);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(27,0.3309614);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(28,0.3309614);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetBinError(31,0.3309614);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetEntries(1788);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(1,9.845935);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(2,37.0531);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(3,36.4903);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(4,24.91476);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(5,17.31879);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(6,13.11971);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(7,10.89559);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(8,9.303124);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(9,8.508027);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(10,7.531373);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(11,7.552523);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(12,7.010715);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(13,6.26876);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(14,5.559839);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(15,4.557221);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(16,3.869215);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(17,3.192119);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(18,2.361777);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(19,1.967541);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(20,1.600343);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(21,1.391391);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(22,1.056105);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(23,0.9617028);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(24,0.7934698);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(25,0.6400236);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(26,0.4721644);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(27,0.3147292);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(28,0.1623536);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(29,0.1380372);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(30,0.06340607);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinContent(31,0.1286203);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(1,0.1316729);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(2,0.2549122);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(3,0.2520246);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(4,0.2073236);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(5,0.1731635);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(6,0.1504446);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(7,0.1372974);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(8,0.1271055);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(9,0.1215173);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(10,0.1144808);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(11,0.114862);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(12,0.110938);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(13,0.104859);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(14,0.09826543);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(15,0.0889281);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(16,0.08221282);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(17,0.07451865);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(18,0.06413287);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(19,0.05865512);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(20,0.05241284);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(21,0.0491248);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(22,0.04268939);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(23,0.0408424);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(24,0.03704486);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(25,0.03327541);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(26,0.02875013);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(27,0.02341233);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(28,0.0168897);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(29,0.01560234);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(30,0.01024744);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetBinError(31,0.01500526);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetEntries(135628);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(1,6.319825);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(2,25.3231);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(3,26.13892);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(4,19.39065);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(5,13.6033);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(6,10.40711);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(7,8.348411);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(8,7.558604);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(9,6.729101);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(10,6.031005);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(11,5.587508);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(12,5.328802);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(13,4.770325);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(14,4.291239);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(15,3.812154);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(16,3.354969);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(17,2.684249);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(18,2.253072);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(19,1.858853);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(20,1.552238);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(21,1.319539);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(22,1.056726);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(23,0.9102629);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(24,0.6501878);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(25,0.5256255);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(26,0.4284395);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(27,0.2573375);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(28,0.1820526);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(29,0.1053989);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(30,0.05201502);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinContent(31,0.1136118);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(1,0.05501312);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(2,0.1101215);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(3,0.1118813);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(4,0.09636291);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(5,0.08071157);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(6,0.07059579);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(7,0.0632289);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(8,0.06016369);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(9,0.05676652);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(10,0.05374135);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(11,0.05172766);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(12,0.05051595);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(13,0.04779558);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(14,0.04533202);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(15,0.04272666);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(16,0.04008279);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(17,0.03585297);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(18,0.03284742);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(19,0.0298357);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(20,0.0272642);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(21,0.02513766);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(22,0.02249546);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(23,0.0208784);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(24,0.01764546);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(25,0.01586543);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(26,0.01432381);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(27,0.01110108);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(28,0.009337102);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(29,0.00710447);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(30,0.004990891);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetBinError(31,0.007376075);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetEntries(374655);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(1,0.1822861);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(2,0.912121);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(3,1.089133);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(4,0.9704879);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(5,0.6596227);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(6,0.4328738);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(7,0.2526875);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(8,0.2288355);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(9,0.1819895);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(10,0.1578807);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(11,0.1508305);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(12,0.1099946);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(13,0.1449217);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(14,0.1308886);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(15,0.1057131);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(16,0.1150524);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(17,0.09077482);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(18,0.05072242);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(19,0.03523086);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(20,0.04090339);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(21,0.03198958);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(22,0.03769586);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(23,0.02928832);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(24,0.01950305);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(25,0.01136552);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(26,0.005436264);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(27,0.01591705);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(28,0.002275762);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinContent(29,0.00659102);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(1,0.02043684);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(2,0.04492547);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(3,0.04925446);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(4,0.04702738);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(5,0.03877896);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(6,0.031449);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(7,0.02403915);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(8,0.02286513);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(9,0.02038569);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(10,0.01880964);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(11,0.0183397);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(12,0.01595001);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(13,0.01803912);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(14,0.01732248);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(15,0.01578646);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(16,0.01644109);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(17,0.01475564);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(18,0.01101095);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(19,0.00899788);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(20,0.009566402);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(21,0.008242153);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(22,0.009125477);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(23,0.00807712);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(24,0.006348376);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(25,0.005237861);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(26,0.003189589);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(27,0.006147631);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(28,0.002275762);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetBinError(29,0.003893142);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetEntries(2879);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(1,0.06844941);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(2,0.4093369);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(3,0.5009176);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(4,0.4292739);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(5,0.3095981);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(6,0.2153103);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(7,0.1483575);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(8,0.1167855);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(9,0.08882091);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(10,0.09179196);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(11,0.07157242);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(12,0.06815138);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(13,0.06856396);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(14,0.0551811);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(15,0.04654811);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(16,0.04351682);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(17,0.03189516);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(18,0.02953403);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(19,0.02936087);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(20,0.02212013);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(21,0.02561566);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(22,0.01698165);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(23,0.0172674);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(24,0.009152882);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(25,0.01183852);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(26,0.004911353);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(27,0.003584606);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(28,0.002351874);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(29,0.001637005);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(30,0.0009565794);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinContent(31,0.0005648715);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(1,0.004493435);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(2,0.01098737);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(3,0.0121216);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(4,0.01123949);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(5,0.00962206);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(6,0.0079596);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(7,0.006616782);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(8,0.005863178);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(9,0.005094114);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(10,0.00523201);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(11,0.004623018);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(12,0.004464594);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(13,0.004519427);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(14,0.004071804);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(15,0.003703547);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(16,0.003558216);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(17,0.003110035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(18,0.002926841);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(19,0.002920984);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(20,0.002593358);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(21,0.002700147);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(22,0.002159934);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(23,0.002276328);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(24,0.001630627);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(25,0.001867414);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(26,0.001159238);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(27,0.0010477);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(28,0.0008064532);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(29,0.0006887469);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(30,0.0005542809);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetBinError(31,0.0004132058);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetEntries(10461);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all__87 = new TH1D("VbbHcc_tags_H_dR_Bj0_all__87","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(1,179548);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(2,590676);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(3,593506);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(4,485929);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(5,403230);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(6,337305);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(7,287561);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(8,250123);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(9,222063);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(10,201463);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(11,185137);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(12,171682);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(13,159061);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(14,145299);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(15,133452);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(16,119428);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(17,96471);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(18,81084);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(19,68411);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(20,58317);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(21,48032);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(22,40054);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(23,32502);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(24,26126);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(25,20485);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(26,15683);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(27,11614);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(28,8189);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(29,5545);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(30,3617);
   VbbHcc_tags_H_dR_Bj0_all__87->SetBinContent(31,6358);
   VbbHcc_tags_H_dR_Bj0_all__87->SetEntries(4987980);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all__87->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all__87->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj0_all__87->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj0_all__87->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj0_all__87->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all__87->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all__87->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__87->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__87->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all__87->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all__87->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__87->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__87->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_all__87->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all__87->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all__87->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__87->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_all__87->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all__87->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_all_fx1087[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_all_fy1087[30] = {
   239758.6,
   825748.5,
   864398.3,
   719179.3,
   578769.4,
   468813.2,
   405436.8,
   344266.4,
   322736.8,
   273758.1,
   240890,
   242367.9,
   237338.5,
   200396.7,
   180726.9,
   174314,
   126609.1,
   112292.5,
   107217.6,
   77785.5,
   60474.09,
   61790.26,
   44217.48,
   34555.67,
   26990.32,
   17993.82,
   15625.93,
   10432.96,
   26791.81,
   4501.181};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_all_fex1087[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_all_fey1087[30] = {
   4260.352,
   10795.49,
   23659.86,
   18654.77,
   22684.03,
   9353.821,
   8993.628,
   7967.042,
   15888.16,
   6490.789,
   6125.787,
   6136.613,
   7052.878,
   6128.778,
   5561.211,
   15368.67,
   4290.824,
   4838.38,
   14999.08,
   3329.734,
   3074.679,
   4201.814,
   2561.523,
   2994.889,
   1656.536,
   1237.908,
   1395.771,
   1043.22,
   20486.5,
   603.4301};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj0_all_fx1087,Graph_from_VbbHcc_tags_H_dR_Bj0_all_fy1087,Graph_from_VbbHcc_tags_H_dR_Bj0_all_fex1087,Graph_from_VbbHcc_tags_H_dR_Bj0_all_fey1087);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetMinimum(3507.976);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetMaximum(976474.2);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj0_all1087);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj0_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__88 = new TH1D("data_mc_ratio__88","",30,0,6);
   data_mc_ratio__88->SetBinContent(1,0.7488699);
   data_mc_ratio__88->SetBinContent(2,0.7153219);
   data_mc_ratio__88->SetBinContent(3,0.6866117);
   data_mc_ratio__88->SetBinContent(4,0.6756715);
   data_mc_ratio__88->SetBinContent(5,0.6967023);
   data_mc_ratio__88->SetBinContent(6,0.7194869);
   data_mc_ratio__88->SetBinContent(7,0.7092623);
   data_mc_ratio__88->SetBinContent(8,0.7265391);
   data_mc_ratio__88->SetBinContent(9,0.6880623);
   data_mc_ratio__88->SetBinContent(10,0.735916);
   data_mc_ratio__88->SetBinContent(11,0.768554);
   data_mc_ratio__88->SetBinContent(12,0.7083528);
   data_mc_ratio__88->SetBinContent(13,0.6701862);
   data_mc_ratio__88->SetBinContent(14,0.7250569);
   data_mc_ratio__88->SetBinContent(15,0.7384182);
   data_mc_ratio__88->SetBinContent(16,0.6851315);
   data_mc_ratio__88->SetBinContent(17,0.7619596);
   data_mc_ratio__88->SetBinContent(18,0.7220788);
   data_mc_ratio__88->SetBinContent(19,0.6380573);
   data_mc_ratio__88->SetBinContent(20,0.7497156);
   data_mc_ratio__88->SetBinContent(21,0.7942576);
   data_mc_ratio__88->SetBinContent(22,0.6482251);
   data_mc_ratio__88->SetBinContent(23,0.7350487);
   data_mc_ratio__88->SetBinContent(24,0.7560553);
   data_mc_ratio__88->SetBinContent(25,0.7589759);
   data_mc_ratio__88->SetBinContent(26,0.8715772);
   data_mc_ratio__88->SetBinContent(27,0.7432516);
   data_mc_ratio__88->SetBinContent(28,0.7849159);
   data_mc_ratio__88->SetBinContent(29,0.2069662);
   data_mc_ratio__88->SetBinContent(30,0.8035669);
   data_mc_ratio__88->SetBinContent(31,0.7277634);
   data_mc_ratio__88->SetBinError(1,0.001767324);
   data_mc_ratio__88->SetBinError(2,0.0009307368);
   data_mc_ratio__88->SetBinError(3,0.0008912481);
   data_mc_ratio__88->SetBinError(4,0.0009692799);
   data_mc_ratio__88->SetBinError(5,0.001097162);
   data_mc_ratio__88->SetBinError(6,0.001238829);
   data_mc_ratio__88->SetBinError(7,0.001322641);
   data_mc_ratio__88->SetBinError(8,0.001452721);
   data_mc_ratio__88->SetBinError(9,0.001460124);
   data_mc_ratio__88->SetBinError(10,0.001639572);
   data_mc_ratio__88->SetBinError(11,0.001786191);
   data_mc_ratio__88->SetBinError(12,0.001709571);
   data_mc_ratio__88->SetBinError(13,0.001680404);
   data_mc_ratio__88->SetBinError(14,0.001902133);
   data_mc_ratio__88->SetBinError(15,0.002021342);
   data_mc_ratio__88->SetBinError(16,0.001982535);
   data_mc_ratio__88->SetBinError(17,0.002453203);
   data_mc_ratio__88->SetBinError(18,0.002535812);
   data_mc_ratio__88->SetBinError(19,0.002439477);
   data_mc_ratio__88->SetBinError(20,0.003104552);
   data_mc_ratio__88->SetBinError(21,0.003624065);
   data_mc_ratio__88->SetBinError(22,0.00323894);
   data_mc_ratio__88->SetBinError(23,0.004077191);
   data_mc_ratio__88->SetBinError(24,0.004677536);
   data_mc_ratio__88->SetBinError(25,0.005302858);
   data_mc_ratio__88->SetBinError(26,0.006959712);
   data_mc_ratio__88->SetBinError(27,0.006896758);
   data_mc_ratio__88->SetBinError(28,0.008673766);
   data_mc_ratio__88->SetBinError(29,0.002779385);
   data_mc_ratio__88->SetBinError(30,0.01336127);
   data_mc_ratio__88->SetBinError(31,0.08709016);
   data_mc_ratio__88->SetMinimum(0.4);
   data_mc_ratio__88->SetMaximum(1.6);
   data_mc_ratio__88->SetEntries(5475.496);
   data_mc_ratio__88->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__88->SetLineColor(ci);
   data_mc_ratio__88->SetLineWidth(2);
   data_mc_ratio__88->SetMarkerStyle(20);
   data_mc_ratio__88->SetMarkerSize(1.2);
   data_mc_ratio__88->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__88->GetXaxis()->SetRange(1,30);
   data_mc_ratio__88->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__88->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__88->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__88->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__88->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__88->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__88->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__88->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__88->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__88->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__88->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__88->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__88->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__88->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__88->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__88->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__88->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1088[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1088[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1088[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1088[30] = {
   0.01776934,
   0.01307358,
   0.02737148,
   0.02593897,
   0.03919354,
   0.01995213,
   0.02218257,
   0.02314209,
   0.04922946,
   0.02370994,
   0.02542981,
   0.02531941,
   0.02971653,
   0.03058323,
   0.03077136,
   0.08816659,
   0.03389034,
   0.04308731,
   0.1398938,
   0.04280661,
   0.05084292,
   0.06800123,
   0.0579301,
   0.08666853,
   0.06137519,
   0.06879632,
   0.08932401,
   0.09999265,
   0.7646554,
   0.1340604};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1088,Graph_from_mc_statistical_error_fy1088,Graph_from_mc_statistical_error_fex1088,Graph_from_mc_statistical_error_fey1088);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1088 = new TH1F("Graph_Graph_from_mc_statistical_error1088","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1088->SetMinimum(0.08241356);
   Graph_Graph_from_mc_statistical_error1088->SetMaximum(1.917586);
   Graph_Graph_from_mc_statistical_error1088->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1088->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1088->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1088);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_tags_all->cd();
   H_dR_Bj0_tags_all->Modified();
   H_dR_Bj0_tags_all->cd();
   H_dR_Bj0_tags_all->SetSelected(H_dR_Bj0_tags_all);
}
