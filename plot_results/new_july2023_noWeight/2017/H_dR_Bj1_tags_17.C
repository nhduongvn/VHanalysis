void H_dR_Bj1_tags_17()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_17/H_dR_Bj1_tags_17
//=========  (Thu Aug  3 12:23:26 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_17 = new TCanvas("H_dR_Bj1_tags_17", "H_dR_Bj1_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tags_17->SetHighLightColor(2);
   H_dR_Bj1_tags_17->Range(0,0,1,1);
   H_dR_Bj1_tags_17->SetFillColor(0);
   H_dR_Bj1_tags_17->SetFillStyle(4000);
   H_dR_Bj1_tags_17->SetBorderMode(0);
   H_dR_Bj1_tags_17->SetBorderSize(2);
   H_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-73.07684,6.314516,73013.76);
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
   st->SetMaximum(62576.27);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",30,0,6);
   st_stack_46->SetMinimum(0.01);
   st_stack_46->SetMaximum(65705.08);
   st_stack_46->SetDirectory(0);
   st_stack_46->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_46->SetLineColor(ci);
   st_stack_46->GetXaxis()->SetRange(1,30);
   st_stack_46->GetXaxis()->SetLabelFont(42);
   st_stack_46->GetXaxis()->SetLabelSize(0.035);
   st_stack_46->GetXaxis()->SetTitleSize(0.035);
   st_stack_46->GetXaxis()->SetTitleFont(42);
   st_stack_46->GetYaxis()->SetTitle("Events/0.2");
   st_stack_46->GetYaxis()->SetLabelFont(42);
   st_stack_46->GetYaxis()->SetLabelSize(0.05);
   st_stack_46->GetYaxis()->SetTitleSize(0.057);
   st_stack_46->GetYaxis()->SetTitleOffset(1.2);
   st_stack_46->GetYaxis()->SetTitleFont(42);
   st_stack_46->GetZaxis()->SetLabelFont(42);
   st_stack_46->GetZaxis()->SetLabelSize(0.035);
   st_stack_46->GetZaxis()->SetTitleSize(0.035);
   st_stack_46->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_46);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,5491.894);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,24427.8);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,23109.52);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,16859.29);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,13775.68);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,26476.05);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,12230.66);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,11572.7);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,5571.882);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,7298.552);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,21062.67);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,5315.408);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,6933.149);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,4238.312);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,4673.241);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,5120.943);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,3319.617);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,2487.129);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,1409.125);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,1677.744);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,486.3271);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,719.0769);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,728.3945);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,495.8954);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,757.7655);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,505.2332);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,659.0932);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(28,65.78972);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(29,74.57041);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(30,4.836803);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(31,52.32569);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,589.5189);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,2165.561);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,1922.242);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,1585.127);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,1501.553);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,14875.55);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,1471.237);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,1467.3);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,796.7444);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,1095.821);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,14843.1);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,872.4942);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,1540.521);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,781.3034);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,868.6453);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,946.3793);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,771.3489);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,616.6437);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,397.2217);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,480.7525);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,86.90767);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,281.7222);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,282.8887);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,275.4166);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,383.9595);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,275.4539);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,381.3314);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(28,27.44277);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(29,28.78825);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(30,4.130403);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(31,31.74656);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(10314);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,36.84);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,114.5961);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,124.6818);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,106.0616);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,84.69048);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,69.63884);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,59.28406);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,52.87987);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,43.98722);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,40.41162);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,30.13459);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,26.7122);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,23.9718);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,22.94248);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,22.69565);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,20.43197);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,19.42662);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,13.60087);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,8.881247);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,8.899951);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,7.523538);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,6.873205);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,4.635956);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,3.65658);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,3.433394);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,3.340839);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,1.75158);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,1.163532);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(29,0.8999651);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(30,0.723984);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,1.569746);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,2.418519);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,4.221786);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,4.330513);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,4.047917);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,3.579116);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,3.265274);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,2.998037);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,2.97234);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,2.64497);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,2.511909);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,2.042384);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,1.958939);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,1.788648);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,1.868174);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,1.834452);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,1.739336);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,1.865967);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,1.399905);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,1.02553);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,1.131962);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,1.074933);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,1.061746);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.7504761);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.7180833);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.6716884);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.748024);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.605223);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,0.4125032);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(29,0.3173189);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(30,0.3849018);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,0.4949019);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(11980);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(1,547.0662);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(2,2060.953);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(3,2517.805);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(4,2225.495);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(5,1809.862);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(6,1429.145);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(7,1163.319);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(8,958.6975);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(9,837.2068);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(10,730.9876);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(11,661.9463);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(12,615.366);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(13,551.0782);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(14,487.4206);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(15,431.5909);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(16,371.6591);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(17,297.951);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(18,247.4616);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(19,210.3689);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(20,169.0215);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(21,134.5983);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(22,104.3588);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(23,84.05083);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(24,65.04809);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(25,47.43489);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(26,34.33165);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(27,25.38223);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(28,17.19784);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(29,10.57003);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(30,7.279721);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(31,12.99245);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(1,5.826805);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(2,11.30855);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(3,12.53877);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(4,11.80726);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(5,10.64693);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(6,9.460675);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(7,8.526336);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(8,7.736445);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(9,7.238717);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(10,6.752427);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(11,6.438518);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(12,6.214433);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(13,5.873811);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(14,5.52788);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(15,5.198424);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(16,4.818879);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(17,4.30406);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(18,3.92339);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(19,3.619276);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(20,3.238485);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(21,2.886721);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(22,2.536355);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(23,2.277664);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(24,2.012652);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(25,1.705294);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(26,1.446025);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(27,1.238267);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(28,1.033265);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(29,0.8046054);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(30,0.6636153);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(31,0.8839679);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetEntries(317372);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(1,99.64865);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(2,314.9184);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(3,317.4987);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(4,265.0979);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(5,206.111);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(6,165.1794);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(7,139.919);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(8,119.0552);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(9,97.43121);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(10,93.39992);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(11,83.45968);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(12,87.53559);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(13,69.66269);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(14,55.3388);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(15,55.60516);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(16,43.90007);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(17,35.13103);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(18,35.54856);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(19,19.2681);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(20,17.04296);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(21,20.50009);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(22,10.36574);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(23,9.211528);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(24,8.637996);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(25,5.053574);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(26,3.299064);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(27,3.007752);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(28,1.82082);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(29,0.6564532);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(30,0.3735406);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(31,0.7446357);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(1,3.576002);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(2,10.47409);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(3,11.06566);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(4,10.67842);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(5,10.04509);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(6,8.775185);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(7,9.230596);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(8,7.761101);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(9,6.977513);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(10,6.876005);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(11,6.761583);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(12,8.169806);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(13,5.965118);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(14,3.507094);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(15,4.368842);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(16,3.99158);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(17,3.820586);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(18,4.68635);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(19,1.999091);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(20,1.891094);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(21,3.453588);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(22,1.427198);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(23,1.458396);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(24,1.257589);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(25,1.001525);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(26,0.8102351);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(27,0.6658201);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(28,0.5924255);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(29,0.2391078);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(30,0.1712225);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(31,0.4055755);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetEntries(17051);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(1,17.32769);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(2,36.88425);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(3,36.61965);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(4,22.0548);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(5,23.50331);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(6,13.50243);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(7,12.75943);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(8,10.5851);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(9,8.262636);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(10,10.87868);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(11,5.658579);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(12,6.382703);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(13,10.01211);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(14,5.609737);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(15,5.189876);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(16,5.323845);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(17,3.003013);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(18,2.528788);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(19,1.782678);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(20,2.183187);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(21,2.577974);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(22,1.78768);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(23,1.000001);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(24,0.8254145);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(25,0.6406146);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(26,0.1856331);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(27,0.2986698);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(28,0.08120236);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(30,0.2189146);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(1,1.696049);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(2,3.955191);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(3,7.523937);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(4,3.045147);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(5,7.217389);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(6,2.149521);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(7,2.576584);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(8,2.27995);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(9,1.530866);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(10,2.288725);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(11,1.431678);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(12,0.9369335);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(13,2.567387);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(14,1.767413);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(15,1.464188);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(16,1.773026);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(17,0.5790083);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(18,1.231039);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(19,0.5595609);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(20,1.202711);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(21,1.301738);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(22,1.19133);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(23,0.3117322);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(24,0.3144497);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(25,0.4192812);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(26,0.1160061);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(27,0.1528016);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(28,0.08120236);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(30,0.1238473);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetEntries(2254);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(1,0.6306118);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(2,0.6306118);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(1,0.4459099);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(2,0.4459099);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(4,0.3153059);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(1,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(2,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(3,0.9917687);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(4,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(5,0.9917687);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(6,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(7,0.4958844);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(8,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(9,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(11,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(13,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(14,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(15,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(17,0.4958844);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(18,0.4958844);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(1,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(2,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(3,0.4958844);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(4,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(5,0.4958844);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(6,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(7,0.3506432);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(8,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(9,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(11,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(13,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(14,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(15,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(17,0.3506432);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(18,0.3506432);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(1,1.519354);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(2,6.077415);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(3,9.875799);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(4,4.811287);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(5,2.785482);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(6,1.012902);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(7,3.038707);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(8,1.266128);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(9,2.025805);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(10,2.025805);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(11,1.012902);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(12,2.27903);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(13,2.025805);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(14,1.772579);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(15,0.7596768);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(16,0.5064512);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(17,0.7596768);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(18,0.2532256);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(24,0.5064512);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(26,0.2532256);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(1,0.6202735);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(2,1.240547);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(3,1.581393);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(4,1.103785);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(5,0.8398543);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(6,0.5064512);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(7,0.8771992);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(8,0.5662297);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(9,0.7162302);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(10,0.7162302);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(11,0.5064512);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(12,0.7596768);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(13,0.7162302);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(14,0.669972);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(15,0.4385996);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(16,0.3581151);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(17,0.4385996);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(18,0.2532256);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(19,0.3581151);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(24,0.3581151);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(26,0.2532256);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(1,1.579584);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(2,6.181052);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(3,7.006377);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(4,5.778888);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(5,4.095936);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(6,3.097794);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(7,2.501816);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(8,2.104497);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(9,1.954291);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(10,1.921989);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(11,1.831543);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(12,1.804086);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(13,1.574739);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(14,1.251716);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(15,1.012678);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(16,0.8059433);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(17,0.5232979);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(18,0.3714769);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(19,0.276185);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(20,0.2115803);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(21,0.1566663);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(22,0.1485908);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(23,0.09367678);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(24,0.08398608);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(25,0.05975932);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(26,0.04522327);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(27,0.03876281);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(28,0.01776629);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(29,0.003230234);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(30,0.004845351);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(31,0.008075584);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(1,0.05050954);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(2,0.09991557);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(3,0.1063772);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(4,0.09661045);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(5,0.08133521);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(6,0.07073401);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(7,0.0635667);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(8,0.05830102);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(9,0.05618193);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(10,0.05571568);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(11,0.05438893);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(12,0.05397971);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(13,0.05043201);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(14,0.04496295);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(15,0.04044248);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(16,0.03607898);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(17,0.0290721);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(18,0.02449446);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(19,0.02112039);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(20,0.01848586);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(21,0.01590706);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(22,0.01549166);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(23,0.01230036);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(24,0.01164677);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(25,0.009824372);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(26,0.008546395);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(27,0.007912424);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(28,0.005356737);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(29,0.00228412);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(30,0.002797464);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(31,0.003611511);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetEntries(28819);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(1,0.6148897);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(2,2.427218);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(3,3.081082);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(4,2.651945);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(5,1.993105);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(6,1.436263);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(7,1.134001);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(8,0.9316636);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(9,0.8342266);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(10,0.7985688);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(11,0.7521307);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(12,0.6882784);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(13,0.614475);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(14,0.5282329);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(15,0.4171133);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(16,0.3238225);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(17,0.2769699);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(18,0.1952886);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(19,0.1500944);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(20,0.1218999);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(21,0.1015833);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(22,0.07546185);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(23,0.07255947);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(24,0.04602343);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(25,0.02985304);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(26,0.03109692);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(27,0.01243877);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(28,0.009121762);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(29,0.002487753);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(30,0.0004146255);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(31,0.001658502);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(1,0.01596712);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(2,0.0317236);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(3,0.03574207);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(4,0.03315968);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(5,0.02874704);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(6,0.0244031);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(7,0.02168377);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(8,0.0196543);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(9,0.01859816);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(10,0.01819635);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(11,0.01765935);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(12,0.01689313);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(13,0.01596174);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(14,0.01479929);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(15,0.01315089);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(16,0.01158728);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(17,0.01071629);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(18,0.008998425);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(19,0.007888789);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(20,0.007109347);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(21,0.006489916);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(22,0.005593604);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(23,0.00548498);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(24,0.004368351);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(25,0.003518214);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(26,0.003590762);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(27,0.002270998);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(28,0.001944766);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(29,0.001015621);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(30,0.0004146255);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(31,0.0008292511);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(1,0.007901256);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(2,0.02370377);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(3,0.02528402);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(4,0.01896301);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(5,0.01264201);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(6,0.009481507);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(8,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(9,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(10,0.004740753);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(11,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(12,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(18,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(20,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(23,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(1,0.003533549);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(2,0.006120286);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(3,0.006321005);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(4,0.005474151);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(5,0.004469625);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(6,0.003870809);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(7,0.003533549);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(8,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(9,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(10,0.002737075);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(11,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(12,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(13,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(14,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(18,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(19,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(20,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(23,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(25,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(1,0.001660845);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(2,0.006643381);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(3,0.008927043);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(4,0.009134649);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(5,0.007058592);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(6,0.002906479);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(7,0.003944507);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(8,0.002283662);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(9,0.001868451);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(10,0.00145324);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(11,0.00145324);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(12,0.001038028);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(13,0.001245634);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(14,0.001038028);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(15,0.0008304226);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(16,0.001038028);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(17,0.001038028);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(18,0.0008304226);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(19,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(20,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(21,0.000622817);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(22,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(23,0.000622817);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(25,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(1,0.0005871975);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(2,0.001174395);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(3,0.001361361);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(4,0.0013771);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(5,0.001210539);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(6,0.0007767892);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(7,0.0009049321);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(8,0.0006885501);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(9,0.000622817);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(10,0.0005492729);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(11,0.0005492729);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(12,0.0004642204);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(13,0.0005085279);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(14,0.0004642204);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(15,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(16,0.0004642204);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(17,0.0004642204);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(18,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(19,0.0002935987);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(20,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(21,0.0003595835);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(22,0.0002935987);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(23,0.0003595835);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(24,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(25,0.0002935987);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj1__125 = new TH1D("VbbHcc_tags_H_dR_Bj1__125","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(1,3292);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(2,9189);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(3,8906);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(4,7066);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(5,5784);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(6,4774);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(7,3919);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(8,3299);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(9,2835);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(10,2585);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(11,2371);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(12,2190);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(13,1866);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(14,1767);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(15,1514);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(16,1336);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(17,1065);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(18,937);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(19,795);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(20,626);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(21,542);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(22,471);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(23,383);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(24,268);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(25,242);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(26,169);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(27,123);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(28,81);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(29,51);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(30,31);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(31,54);
   VbbHcc_tags_H_dR_Bj1__125->SetEntries(68560);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1__125->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1__125->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj1__125->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj1__125->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj1__125->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1__125->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__125->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__125->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__125->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1__125->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__125->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__125->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__125->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fx1091[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fy1091[30] = {
   6197.378,
   26970.74,
   26127.11,
   19491.83,
   15909.74,
   28159.32,
   13613.12,
   12718.47,
   6563.837,
   8178.982,
   21847.72,
   6056.178,
   7592.339,
   4813.428,
   5190.761,
   5563.895,
   3677.186,
   2787.587,
   1650.362,
   1875.229,
   651.7858,
   842.6868,
   827.4612,
   574.7002,
   814.4195,
   546.7199,
   689.5848,
   86.08001,
   86.70258,
   13.43822};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fex1091[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fey1091[30] = {
   589.5665,
   2165.624,
   1922.335,
   1585.215,
   1501.646,
   14875.56,
   1471.297,
   1467.346,
   796.814,
   1095.869,
   14843.1,
   872.5576,
   1540.547,
   781.3354,
   868.6751,
   946.4033,
   771.3731,
   616.6769,
   397.2451,
   480.7699,
   87.04053,
   281.7418,
   282.9028,
   275.4282,
   383.9654,
   275.46,
   381.3345,
   27.47182,
   28.80224,
   4.206355};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj1_fx1091,Graph_from_VbbHcc_tags_H_dR_Bj1_fy1091,Graph_from_VbbHcc_tags_H_dR_Bj1_fex1091,Graph_from_VbbHcc_tags_H_dR_Bj1_fey1091);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetMinimum(8.308681);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetMaximum(47337.44);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__126 = new TH1D("data_mc_ratio__126","",30,0,6);
   data_mc_ratio__126->SetBinContent(1,0.5311924);
   data_mc_ratio__126->SetBinContent(2,0.3407025);
   data_mc_ratio__126->SetBinContent(3,0.340872);
   data_mc_ratio__126->SetBinContent(4,0.3625108);
   data_mc_ratio__126->SetBinContent(5,0.363551);
   data_mc_ratio__126->SetBinContent(6,0.1695353);
   data_mc_ratio__126->SetBinContent(7,0.287884);
   data_mc_ratio__126->SetBinContent(8,0.2593865);
   data_mc_ratio__126->SetBinContent(9,0.431912);
   data_mc_ratio__126->SetBinContent(10,0.316054);
   data_mc_ratio__126->SetBinContent(11,0.1085239);
   data_mc_ratio__126->SetBinContent(12,0.3616142);
   data_mc_ratio__126->SetBinContent(13,0.2457741);
   data_mc_ratio__126->SetBinContent(14,0.367098);
   data_mc_ratio__126->SetBinContent(15,0.2916721);
   data_mc_ratio__126->SetBinContent(16,0.2401195);
   data_mc_ratio__126->SetBinContent(17,0.2896237);
   data_mc_ratio__126->SetBinContent(18,0.336133);
   data_mc_ratio__126->SetBinContent(19,0.4817124);
   data_mc_ratio__126->SetBinContent(20,0.3338259);
   data_mc_ratio__126->SetBinContent(21,0.8315615);
   data_mc_ratio__126->SetBinContent(22,0.5589265);
   data_mc_ratio__126->SetBinContent(23,0.4628616);
   data_mc_ratio__126->SetBinContent(24,0.4663301);
   data_mc_ratio__126->SetBinContent(25,0.2971441);
   data_mc_ratio__126->SetBinContent(26,0.3091162);
   data_mc_ratio__126->SetBinContent(27,0.1783682);
   data_mc_ratio__126->SetBinContent(28,0.940985);
   data_mc_ratio__126->SetBinContent(29,0.5882178);
   data_mc_ratio__126->SetBinContent(30,2.306853);
   data_mc_ratio__126->SetBinContent(31,0.7983175);
   data_mc_ratio__126->SetBinError(1,0.009258101);
   data_mc_ratio__126->SetBinError(2,0.003554194);
   data_mc_ratio__126->SetBinError(3,0.003612018);
   data_mc_ratio__126->SetBinError(4,0.00431255);
   data_mc_ratio__126->SetBinError(5,0.004780256);
   data_mc_ratio__126->SetBinError(6,0.002453686);
   data_mc_ratio__126->SetBinError(7,0.004598645);
   data_mc_ratio__126->SetBinError(8,0.004516023);
   data_mc_ratio__126->SetBinError(9,0.008111828);
   data_mc_ratio__126->SetBinError(10,0.006216286);
   data_mc_ratio__126->SetBinError(11,0.002228741);
   data_mc_ratio__126->SetBinError(12,0.007727222);
   data_mc_ratio__126->SetBinError(13,0.00568958);
   data_mc_ratio__126->SetBinError(14,0.008733007);
   data_mc_ratio__126->SetBinError(15,0.00749604);
   data_mc_ratio__126->SetBinError(16,0.006569378);
   data_mc_ratio__126->SetBinError(17,0.008874813);
   data_mc_ratio__126->SetBinError(18,0.01098099);
   data_mc_ratio__126->SetBinError(19,0.01708458);
   data_mc_ratio__126->SetBinError(20,0.01334237);
   data_mc_ratio__126->SetBinError(21,0.03571863);
   data_mc_ratio__126->SetBinError(22,0.02575397);
   data_mc_ratio__126->SetBinError(23,0.02365112);
   data_mc_ratio__126->SetBinError(24,0.02848565);
   data_mc_ratio__126->SetBinError(25,0.01910115);
   data_mc_ratio__126->SetBinError(26,0.02377817);
   data_mc_ratio__126->SetBinError(27,0.01608292);
   data_mc_ratio__126->SetBinError(28,0.1045539);
   data_mc_ratio__126->SetBinError(29,0.08236697);
   data_mc_ratio__126->SetBinError(30,0.414323);
   data_mc_ratio__126->SetBinError(31,0.3903191);
   data_mc_ratio__126->SetMinimum(0.4);
   data_mc_ratio__126->SetMaximum(1.6);
   data_mc_ratio__126->SetEntries(164.8297);
   data_mc_ratio__126->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__126->SetLineColor(ci);
   data_mc_ratio__126->SetLineWidth(2);
   data_mc_ratio__126->SetMarkerStyle(20);
   data_mc_ratio__126->SetMarkerSize(1.2);
   data_mc_ratio__126->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__126->GetXaxis()->SetRange(1,30);
   data_mc_ratio__126->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__126->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__126->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__126->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__126->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__126->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__126->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__126->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__126->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__126->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__126->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__126->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__126->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__126->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__126->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__126->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__126->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1092[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1092[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1092[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1092[30] = {
   0.0951316,
   0.08029528,
   0.07357627,
   0.08132715,
   0.09438538,
   0.528264,
   0.1080793,
   0.1153712,
   0.1213945,
   0.133986,
   0.6793891,
   0.1440773,
   0.2029081,
   0.1623241,
   0.1673503,
   0.1700973,
   0.2097727,
   0.2212225,
   0.2407017,
   0.2563793,
   0.1335416,
   0.3343375,
   0.3418926,
   0.4792555,
   0.471459,
   0.5038412,
   0.5529915,
   0.3191429,
   0.3321959,
   0.3130143};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1092,Graph_from_mc_statistical_error_fy1092,Graph_from_mc_statistical_error_fex1092,Graph_from_mc_statistical_error_fey1092);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1092 = new TH1F("Graph_Graph_from_mc_statistical_error1092","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1092->SetMinimum(0.184733);
   Graph_Graph_from_mc_statistical_error1092->SetMaximum(1.815267);
   Graph_Graph_from_mc_statistical_error1092->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1092->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1092->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1092);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_tags_17->cd();
   H_dR_Bj1_tags_17->Modified();
   H_dR_Bj1_tags_17->cd();
   H_dR_Bj1_tags_17->SetSelected(H_dR_Bj1_tags_17);
}
