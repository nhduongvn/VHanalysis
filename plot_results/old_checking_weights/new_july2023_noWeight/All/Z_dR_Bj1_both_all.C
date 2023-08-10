void Z_dR_Bj1_both_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_all/Z_dR_Bj1_both_all
//=========  (Thu Aug  3 12:26:17 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_all = new TCanvas("Z_dR_Bj1_both_all", "Z_dR_Bj1_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_all->SetHighLightColor(2);
   Z_dR_Bj1_both_all->Range(0,0,1,1);
   Z_dR_Bj1_both_all->SetFillColor(0);
   Z_dR_Bj1_both_all->SetFillStyle(4000);
   Z_dR_Bj1_both_all->SetBorderMode(0);
   Z_dR_Bj1_both_all->SetBorderSize(2);
   Z_dR_Bj1_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-283.718,6.314516,283734.3);
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
   st->SetMaximum(243173.8);
   
   TH1F *st_stack_248 = new TH1F("st_stack_248","",30,0,6);
   st_stack_248->SetMinimum(0.3);
   st_stack_248->SetMaximum(255332.5);
   st_stack_248->SetDirectory(0);
   st_stack_248->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_248->SetLineColor(ci);
   st_stack_248->GetXaxis()->SetRange(1,30);
   st_stack_248->GetXaxis()->SetLabelFont(42);
   st_stack_248->GetXaxis()->SetLabelSize(0.035);
   st_stack_248->GetXaxis()->SetTitleSize(0.035);
   st_stack_248->GetXaxis()->SetTitleFont(42);
   st_stack_248->GetYaxis()->SetTitle("Events/0.2");
   st_stack_248->GetYaxis()->SetLabelFont(42);
   st_stack_248->GetYaxis()->SetLabelSize(0.05);
   st_stack_248->GetYaxis()->SetTitleSize(0.057);
   st_stack_248->GetYaxis()->SetTitleOffset(1.2);
   st_stack_248->GetYaxis()->SetTitleFont(42);
   st_stack_248->GetZaxis()->SetLabelFont(42);
   st_stack_248->GetZaxis()->SetLabelSize(0.035);
   st_stack_248->GetZaxis()->SetTitleSize(0.035);
   st_stack_248->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_248);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(1,20938.29);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(2,93456.24);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(3,98661.33);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(4,64030.02);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(5,39495.89);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(6,39601.19);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(7,30948.13);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(8,27353.26);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(9,36517.63);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(10,21215.36);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(11,22493.21);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(12,17535.81);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(13,16527.71);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(14,14192.56);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(15,13405.45);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(16,9312.971);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(17,7327.446);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(18,6812.351);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(19,3928.115);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(20,5413.8);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(21,4463.221);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(22,4409.595);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(23,3340.707);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(24,1467.715);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(25,1540.148);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(26,1189.548);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(27,491.1027);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(28,728.1975);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(29,132.9579);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(30,118.9801);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(31,139.2428);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(1,1483.159);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(2,4489.688);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(3,15438.98);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(4,3681.544);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(5,2452.049);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(6,3847.345);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(7,3098.928);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(8,2596.422);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(9,14935.04);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(10,2623.661);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(11,2886.88);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(12,2246.391);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(13,2165.702);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(14,1628.067);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(15,1623.676);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(16,1329.362);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(17,1035.201);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(18,1149.664);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(19,583.1277);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(20,1598.641);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(21,903.9596);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(22,970.9179);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(23,768.3644);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(24,311.559);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(25,541.3684);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(26,395.8783);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(27,101.203);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(28,384.0356);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(29,44.04292);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(30,48.4335);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(31,55.19765);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetEntries(31751);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(1,105.2354);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(2,391.4965);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(3,428.8784);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(4,368.9426);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(5,308.5177);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(6,249.626);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(7,198.5224);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(8,169.0521);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(9,144.7734);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(10,122.6062);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(11,103.8273);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(12,95.33683);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(13,82.3267);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(14,74.70848);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(15,64.1526);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(16,56.91866);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(17,49.57514);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(18,40.45571);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(19,36.46645);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(20,29.42426);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(21,25.19255);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(22,21.22355);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(23,16.60879);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(24,13.70774);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(25,10.23373);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(26,6.602103);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(27,3.5598);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(28,3.512325);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(29,1.393944);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(30,0.926703);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(31,1.053313);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(1,4.362885);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(2,7.992676);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(3,8.264835);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(4,7.653394);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(5,7.018152);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(6,6.397594);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(7,5.622825);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(8,5.231589);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(9,4.833446);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(10,4.458225);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(11,4.118037);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(12,3.910931);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(13,3.617195);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(14,3.465861);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(15,3.214709);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(16,3.082805);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(17,2.774134);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(18,2.547432);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(19,2.432538);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(20,2.218588);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(21,2.088698);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(22,1.954463);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(23,1.594885);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(24,1.511642);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(25,1.356606);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(26,1.094636);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(27,0.6805986);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(28,0.7867403);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(29,0.4281236);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(30,0.4010737);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(31,0.3304937);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetEntries(38814);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(1,1525.703);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(2,7046.118);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(3,8872.319);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(4,7889.68);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(5,6403.63);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(6,5022.393);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(7,3952.813);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(8,3210.291);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(9,2676.864);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(10,2273.281);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(11,1990.81);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(12,1793.398);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(13,1589.033);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(14,1415.315);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(15,1243.53);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(16,1109.375);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(17,923.5756);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(18,789.4187);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(19,674.3813);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(20,571.9951);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(21,459.6394);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(22,370.0062);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(23,287.8415);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(24,221.9931);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(25,161.5188);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(26,117.0937);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(27,75.94365);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(28,44.4449);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(29,28.35855);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(30,15.57659);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinContent(31,24.59385);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(1,9.766458);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(2,20.94712);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(3,23.56662);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(4,22.21613);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(5,19.99309);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(6,17.68999);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(7,15.68393);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(8,14.12112);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(9,12.90158);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(10,11.88847);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(11,11.12441);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(12,10.57317);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(13,9.957444);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(14,9.3878);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(15,8.806018);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(16,8.315639);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(17,7.580563);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(18,7.004482);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(19,6.480222);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(20,5.973707);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(21,5.336526);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(22,4.793646);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(23,4.222861);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(24,3.706432);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(25,3.159054);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(26,2.692167);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(27,2.163793);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(28,1.648084);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(29,1.315596);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(30,0.9708859);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetBinError(31,1.228078);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetEntries(1047064);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(1,337.1158);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(2,1193.138);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(3,1285.059);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(4,963.2053);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(5,660.3606);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(6,537.9469);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(7,383.9881);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(8,332.6044);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(9,312.3912);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(10,251.7559);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(11,237.9836);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(12,204.0155);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(13,176.2443);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(14,170.1141);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(15,137.5275);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(16,121.9615);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(17,112.0345);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(18,94.21366);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(19,77.13746);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(20,80.90018);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(21,53.75864);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(22,45.78532);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(23,37.1746);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(24,22.23583);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(25,23.43298);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(26,14.66846);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(27,10.28804);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(28,6.953563);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(29,4.952135);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(30,1.120091);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinContent(31,2.829131);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(1,7.142171);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(2,21.88019);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(3,24.02514);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(4,23.82076);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(5,19.48483);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(6,18.9208);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(7,12.90336);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(8,12.16338);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(9,14.72315);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(10,12.00512);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(11,12.55287);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(12,10.91652);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(13,7.462921);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(14,9.587118);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(15,7.201254);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(16,9.364217);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(17,8.321573);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(18,7.530924);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(19,6.354992);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(20,8.73888);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(21,3.733424);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(22,4.97625);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(23,4.69643);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(24,2.235694);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(25,3.373741);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(26,1.822335);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(27,1.374521);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(28,1.044269);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(29,1.163357);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(30,0.4300808);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetBinError(31,0.8128569);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetEntries(52623);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(1,61.82018);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(2,150.556);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(3,112.7957);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(4,86.52888);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(5,85.07205);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(6,47.95805);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(7,32.21631);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(8,32.07661);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(9,27.32417);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(10,22.8295);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(11,26.64099);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(12,17.8114);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(13,13.04367);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(14,17.19554);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(15,7.139913);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(16,12.89846);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(17,8.266731);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(18,6.523623);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(19,9.59553);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(20,4.68078);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(21,4.018536);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(22,10.59787);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(23,2.75134);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(24,1.829597);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(25,1.751533);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(26,1.547559);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(27,1.142181);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(28,0.6948401);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(29,1.718225);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(30,0.09281656);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinContent(31,0.09136942);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(1,4.18335);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(2,10.00234);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(3,7.428548);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(4,12.43669);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(5,10.48931);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(6,4.686804);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(7,3.7621);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(8,4.29035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(9,4.252235);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(10,3.472406);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(11,6.59203);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(12,3.180218);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(13,1.780878);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(14,3.652444);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(15,1.025579);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(16,2.896181);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(17,1.613329);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(18,1.325849);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(19,2.554218);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(20,0.9122111);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(21,0.7815343);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(22,6.684413);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(23,0.5779367);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(24,0.6088176);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(25,0.4228508);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(26,0.5198029);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(27,0.481725);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(28,0.3157706);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(29,0.6765304);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(30,0.08202873);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetBinError(31,0.09025005);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetEntries(8810);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(3,1.172824);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(4,1.351393);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(5,0.2687386);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(6,0.7207813);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(10,0.4520427);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(12,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(17,0.1343693);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(2,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(3,0.6669298);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(4,0.6627884);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(5,0.1900269);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(6,0.4903599);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(7,0.1343693);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(10,0.4520427);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(11,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(12,0.3153059);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(17,0.1343693);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetBinError(21,0.1343693);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetEntries(21);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(1,0.5452932);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(2,1.62401);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(3,1.122203);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(4,1.846065);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(5,0.8724691);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(6,0.5611013);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(7,0.2181173);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(8,0.3271759);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(9,0.2181173);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(10,0.6701599);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(11,0.4243645);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(12,0.4243645);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(15,0.2181173);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(16,0.1090586);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(19,0.1090586);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinContent(24,0.1090586);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(1,0.2438625);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(2,0.4920805);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(3,0.6576266);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(4,0.6974487);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(5,0.3084644);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(6,0.4650122);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(7,0.1542322);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(8,0.1888951);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(9,0.1542322);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(10,0.4776297);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(11,0.3336339);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(12,0.3336339);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(14,0.1090586);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(15,0.1542322);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(16,0.1090586);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(19,0.1090586);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetBinError(24,0.1090586);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetEntries(62);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(1,6.811831);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(2,27.52423);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(3,25.75622);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(4,19.88282);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(5,14.21461);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(6,6.429947);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(7,6.962587);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(8,6.005929);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(9,6.532417);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(10,6.003644);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(11,3.754668);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(12,3.615991);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(13,3.09337);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(14,2.389937);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(15,2.596937);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(16,2.653181);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(17,2.126693);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(18,1.851145);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(19,1.841127);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(20,1.06528);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(21,0.5226215);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(22,0.8120543);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(24,0.4864143);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinContent(25,0.7658287);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(1,1.338209);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(2,2.677671);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(3,2.593669);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(4,2.28479);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(5,1.920252);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(6,1.288396);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(7,1.342446);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(8,1.254806);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(9,1.308713);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(10,1.253598);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(11,1.004648);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(12,0.9683129);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(13,0.8946551);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(14,0.798065);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(15,0.822882);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(16,0.8402407);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(17,0.7535324);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(18,0.7005069);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(19,0.696948);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(20,0.5332834);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(21,0.370435);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(22,0.4693271);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(24,0.3439469);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetBinError(25,0.4431386);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetEntries(591);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(1,5.832058);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(2,25.8113);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(3,27.0304);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(4,19.16667);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(5,12.89179);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(6,8.877222);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(7,7.098409);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(8,5.54108);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(9,5.01389);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(10,4.99269);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(11,4.438299);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(12,4.226733);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(13,3.675905);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(14,3.295005);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(15,2.816908);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(16,2.199423);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(17,1.696378);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(18,1.245943);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(19,0.9731813);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(20,0.7501986);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(21,0.685968);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(22,0.5652193);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(23,0.4915953);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(24,0.4078843);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(25,0.3050293);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(26,0.201994);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(27,0.1360458);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(28,0.06649576);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(29,0.02219954);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(30,0.002285779);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinContent(31,0.006648797);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(1,0.1040613);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(2,0.2185963);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(3,0.2223281);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(4,0.1863841);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(5,0.1533555);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(6,0.1271348);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(7,0.1138536);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(8,0.1008227);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(9,0.09604031);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(10,0.09592065);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(11,0.09040567);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(12,0.08832926);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(13,0.08216914);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(14,0.0779388);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(15,0.07195379);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(16,0.06365953);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(17,0.05575173);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(18,0.04759661);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(19,0.04238767);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(20,0.03732598);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(21,0.03521333);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(22,0.03207869);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(23,0.02974721);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(24,0.02793917);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(25,0.02367463);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(26,0.01946023);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(27,0.01575556);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(28,0.01118997);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(29,0.006587565);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(30,0.002285779);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetBinError(31,0.003407179);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetEntries(85972);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(1,2.26676);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(2,10.4208);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(3,12.61501);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(4,9.728178);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(5,6.537467);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(6,4.534889);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(7,3.279684);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(8,2.645922);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(9,2.273604);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(10,1.960145);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(11,1.886229);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(12,1.689119);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(13,1.46874);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(14,1.363341);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(15,1.122429);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(16,0.8815178);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(17,0.8076017);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(18,0.6104921);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(19,0.5721652);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(20,0.4749793);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(21,0.3996944);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(22,0.3230407);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(23,0.2723945);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(24,0.2258547);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(25,0.1368816);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(26,0.1300376);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(27,0.05475266);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(28,0.01916343);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(29,0.01095053);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(30,0.001368816);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinContent(31,0.001368816);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(1,0.03294704);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(2,0.0706422);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(3,0.07772443);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(4,0.06825421);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(5,0.05595237);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(6,0.04660119);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(7,0.03963051);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(8,0.03559608);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(9,0.03299675);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(10,0.03063782);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(11,0.0300546);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(12,0.02844094);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(13,0.02652077);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(14,0.02555147);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(15,0.02318426);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(16,0.02054609);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(17,0.01966583);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(18,0.01709833);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(19,0.01655291);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(20,0.01508173);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(21,0.01383495);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(22,0.01243776);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(23,0.01142123);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(24,0.01039988);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(25,0.008096295);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(26,0.007891292);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(27,0.005120546);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(28,0.003029356);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(29,0.002289978);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(30,0.0008096295);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetBinError(31,0.0008096295);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetEntries(150600);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(1,0.04132889);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(2,0.1139989);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(3,0.08870877);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(4,0.05882619);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(5,0.0210833);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(6,0.02135331);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(7,0.01703805);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(8,0.01523482);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(9,0.005436264);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(10,0.005436264);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(11,0.006827286);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(12,0.004740753);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(13,0.003160502);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(14,0.00589551);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(15,0.004315259);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(18,0.004315259);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(20,0.003856013);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(23,0.002275762);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(24,0.002735007);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(26,0.004315259);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(1,0.00943558);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(2,0.01570219);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(3,0.01352336);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(4,0.01137193);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(5,0.0065421);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(6,0.00692581);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(7,0.006163553);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(8,0.005794113);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(9,0.003189589);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(10,0.003189589);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(11,0.003941735);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(12,0.002737075);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(13,0.002234813);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(14,0.003531947);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(15,0.003158712);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(17,0.002275762);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(18,0.003158712);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(20,0.002770611);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(23,0.002275762);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(24,0.002735007);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(26,0.003158712);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetBinError(27,0.002275762);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetEntries(215);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(1,0.009244933);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(2,0.04696472);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(3,0.04726376);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(4,0.02974068);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(5,0.01596517);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(6,0.007148008);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(7,0.006294419);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(8,0.007965866);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(9,0.006800672);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(10,0.004265369);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(11,0.004979901);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(12,0.004230927);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(13,0.002294265);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(14,0.001337349);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(15,0.003019735);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(16,0.002236319);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(17,0.001129743);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(18,0.001106576);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(19,0.002835296);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(20,0.002063155);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(21,0.001487345);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(22,0.0005993136);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(23,0.001371791);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(24,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(27,0.0005648715);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(1,0.001644882);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(2,0.003641081);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(3,0.003643896);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(4,0.002935897);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(5,0.002155777);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(6,0.001385103);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(7,0.001310387);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(8,0.001483353);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(9,0.001444943);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(10,0.001088824);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(11,0.00120034);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(12,0.001084753);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(13,0.0007826379);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(14,0.0006201436);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(15,0.0009627758);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(16,0.0008086784);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(17,0.0005843612);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(18,0.0005590015);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(19,0.0009554226);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(20,0.0007872166);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(21,0.0006243665);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(22,0.0004237787);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(23,0.000627238);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(24,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(27,0.0004132058);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all__681 = new TH1D("VbbHcc_both_Z_dR_Bj1_all__681","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(1,21183);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(2,78154);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(3,72835);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(4,55023);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(5,43943);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(6,34287);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(7,27719);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(8,23089);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(9,19494);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(10,16832);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(11,14952);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(12,13509);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(13,12165);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(14,10779);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(15,9557);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(16,8550);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(17,7211);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(18,6169);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(19,5261);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(20,4463);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(21,3677);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(22,3055);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(23,2586);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(24,2061);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(25,1532);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(26,1129);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(27,799);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(28,498);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(29,272);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(30,146);
   VbbHcc_both_Z_dR_Bj1_all__681->SetBinContent(31,235);
   VbbHcc_both_Z_dR_Bj1_all__681->SetEntries(501194);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all__681->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all__681->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj1_all__681->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj1_all__681->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj1_all__681->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all__681->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_all__681->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_all__681->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all__681->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_all_fx1495[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_all_fy1495[30] = {
   22983.67,
   102303.4,
   109428.2,
   73390.44,
   46988.29,
   45480.27,
   35533.39,
   31111.82,
   39693.03,
   23899.92,
   24863.31,
   19656.65,
   18396.6,
   15877.06,
   14864.56,
   10619.97,
   8425.666,
   7746.676,
   4729.196,
   6103.097,
   5007.574,
   4858.909,
   3686.131,
   1728.713,
   1738.296,
   1329.796,
   582.23,
   783.889,
   169.4142,
   136.6999};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_all_fex1495[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_all_fey1495[30] = {
   1483.222,
   4489.809,
   15439.02,
   3681.718,
   2452.241,
   3847.44,
   3099.002,
   2596.498,
   14935.05,
   2623.722,
   2886.939,
   2246.448,
   2165.742,
   1628.13,
   1623.72,
   1329.428,
   1035.267,
   1149.713,
   583.2095,
   1598.678,
   903.9859,
   970.9675,
   768.3922,
   311.5936,
   541.3902,
   395.8935,
   101.2389,
   384.0415,
   44.08519,
   48.44687};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj1_all_fx1495,Graph_from_VbbHcc_both_Z_dR_Bj1_all_fy1495,Graph_from_VbbHcc_both_Z_dR_Bj1_all_fex1495,Graph_from_VbbHcc_both_Z_dR_Bj1_all_fey1495);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetMinimum(79.42775);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetMaximum(137345.1);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj1_all1495);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj1_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__682 = new TH1D("data_mc_ratio__682","",30,0,6);
   data_mc_ratio__682->SetBinContent(1,0.9216542);
   data_mc_ratio__682->SetBinContent(2,0.7639433);
   data_mc_ratio__682->SetBinContent(3,0.6655961);
   data_mc_ratio__682->SetBinContent(4,0.7497298);
   data_mc_ratio__682->SetBinContent(5,0.9351905);
   data_mc_ratio__682->SetBinContent(6,0.7538874);
   data_mc_ratio__682->SetBinContent(7,0.7800832);
   data_mc_ratio__682->SetBinContent(8,0.7421295);
   data_mc_ratio__682->SetBinContent(9,0.491119);
   data_mc_ratio__682->SetBinContent(10,0.70427);
   data_mc_ratio__682->SetBinContent(11,0.6013681);
   data_mc_ratio__682->SetBinContent(12,0.6872482);
   data_mc_ratio__682->SetBinContent(13,0.6612635);
   data_mc_ratio__682->SetBinContent(14,0.678904);
   data_mc_ratio__682->SetBinContent(15,0.6429385);
   data_mc_ratio__682->SetBinContent(16,0.805087);
   data_mc_ratio__682->SetBinContent(17,0.8558374);
   data_mc_ratio__682->SetBinContent(18,0.7963415);
   data_mc_ratio__682->SetBinContent(19,1.112451);
   data_mc_ratio__682->SetBinContent(20,0.7312681);
   data_mc_ratio__682->SetBinContent(21,0.7342877);
   data_mc_ratio__682->SetBinContent(22,0.628742);
   data_mc_ratio__682->SetBinContent(23,0.7015487);
   data_mc_ratio__682->SetBinContent(24,1.192216);
   data_mc_ratio__682->SetBinContent(25,0.8813229);
   data_mc_ratio__682->SetBinContent(26,0.8490023);
   data_mc_ratio__682->SetBinContent(27,1.37231);
   data_mc_ratio__682->SetBinContent(28,0.635294);
   data_mc_ratio__682->SetBinContent(29,1.605532);
   data_mc_ratio__682->SetBinContent(30,1.068033);
   data_mc_ratio__682->SetBinContent(31,1.400323);
   data_mc_ratio__682->SetBinError(1,0.006332487);
   data_mc_ratio__682->SetBinError(2,0.002732659);
   data_mc_ratio__682->SetBinError(3,0.002466271);
   data_mc_ratio__682->SetBinError(4,0.00319619);
   data_mc_ratio__682->SetBinError(5,0.004461236);
   data_mc_ratio__682->SetBinError(6,0.004071381);
   data_mc_ratio__682->SetBinError(7,0.004685459);
   data_mc_ratio__682->SetBinError(8,0.004884016);
   data_mc_ratio__682->SetBinError(9,0.003517517);
   data_mc_ratio__682->SetBinError(10,0.005428394);
   data_mc_ratio__682->SetBinError(11,0.004918025);
   data_mc_ratio__682->SetBinError(12,0.005912921);
   data_mc_ratio__682->SetBinError(13,0.005995405);
   data_mc_ratio__682->SetBinError(14,0.006539117);
   data_mc_ratio__682->SetBinError(15,0.006576709);
   data_mc_ratio__682->SetBinError(16,0.008706824);
   data_mc_ratio__682->SetBinError(17,0.01007844);
   data_mc_ratio__682->SetBinError(18,0.01013893);
   data_mc_ratio__682->SetBinError(19,0.01533723);
   data_mc_ratio__682->SetBinError(20,0.01094619);
   data_mc_ratio__682->SetBinError(21,0.01210931);
   data_mc_ratio__682->SetBinError(22,0.01137541);
   data_mc_ratio__682->SetBinError(23,0.01379569);
   data_mc_ratio__682->SetBinError(24,0.02626129);
   data_mc_ratio__682->SetBinError(25,0.02251675);
   data_mc_ratio__682->SetBinError(26,0.02526748);
   data_mc_ratio__682->SetBinError(27,0.04854884);
   data_mc_ratio__682->SetBinError(28,0.02846821);
   data_mc_ratio__682->SetBinError(29,0.09734968);
   data_mc_ratio__682->SetBinError(30,0.08839102);
   data_mc_ratio__682->SetBinError(31,0.4697246);
   data_mc_ratio__682->SetMinimum(0.4);
   data_mc_ratio__682->SetMaximum(1.6);
   data_mc_ratio__682->SetEntries(663.5435);
   data_mc_ratio__682->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__682->SetLineColor(ci);
   data_mc_ratio__682->SetLineWidth(2);
   data_mc_ratio__682->SetMarkerStyle(20);
   data_mc_ratio__682->SetMarkerSize(1.2);
   data_mc_ratio__682->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__682->GetXaxis()->SetRange(1,30);
   data_mc_ratio__682->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__682->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__682->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__682->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__682->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__682->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__682->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__682->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__682->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__682->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__682->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__682->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__682->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__682->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__682->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__682->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__682->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1496[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1496[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1496[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1496[30] = {
   0.06453371,
   0.04388719,
   0.1410881,
   0.05016618,
   0.05218834,
   0.08459582,
   0.0872138,
   0.08345694,
   0.3762638,
   0.1097795,
   0.1161124,
   0.1142844,
   0.1177251,
   0.1025461,
   0.1092343,
   0.1251819,
   0.1228707,
   0.1484138,
   0.1233211,
   0.2619453,
   0.1805237,
   0.1998324,
   0.208455,
   0.180246,
   0.3114488,
   0.2977099,
   0.1738812,
   0.4899183,
   0.2602213,
   0.354403};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1496,Graph_from_mc_statistical_error_fy1496,Graph_from_mc_statistical_error_fex1496,Graph_from_mc_statistical_error_fey1496);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1496 = new TH1F("Graph_Graph_from_mc_statistical_error1496","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1496->SetMinimum(0.4120981);
   Graph_Graph_from_mc_statistical_error1496->SetMaximum(1.587902);
   Graph_Graph_from_mc_statistical_error1496->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1496->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1496->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1496->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1496->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1496->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1496->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1496);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_both_all->cd();
   Z_dR_Bj1_both_all->Modified();
   Z_dR_Bj1_both_all->cd();
   Z_dR_Bj1_both_all->SetSelected(Z_dR_Bj1_both_all);
}
