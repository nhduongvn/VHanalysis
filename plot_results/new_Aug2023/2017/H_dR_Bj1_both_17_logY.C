void H_dR_Bj1_both_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_both_17/H_dR_Bj1_both_17
//=========  (Tue Aug 22 09:18:37 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_17 = new TCanvas("H_dR_Bj1_both_17", "H_dR_Bj1_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_17->SetHighLightColor(2);
   H_dR_Bj1_both_17->Range(0,0,1,1);
   H_dR_Bj1_both_17->SetFillColor(0);
   H_dR_Bj1_both_17->SetFillStyle(4000);
   H_dR_Bj1_both_17->SetBorderMode(0);
   H_dR_Bj1_both_17->SetBorderSize(2);
   H_dR_Bj1_both_17->SetFrameFillStyle(1000);
   H_dR_Bj1_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.882383,6.314516,12.83378);
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
   st->SetMaximum(5.162282e+10);
   
   TH1F *st_stack_238 = new TH1F("st_stack_238","",30,0,6);
   st_stack_238->SetMinimum(0.001359357);
   st_stack_238->SetMaximum(1.828774e+11);
   st_stack_238->SetDirectory(0);
   st_stack_238->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_238->SetLineColor(ci);
   st_stack_238->GetXaxis()->SetRange(1,30);
   st_stack_238->GetXaxis()->SetLabelFont(42);
   st_stack_238->GetXaxis()->SetLabelSize(0.035);
   st_stack_238->GetXaxis()->SetTitleSize(0.035);
   st_stack_238->GetXaxis()->SetTitleFont(42);
   st_stack_238->GetYaxis()->SetTitle("Events/0.2");
   st_stack_238->GetYaxis()->SetLabelFont(42);
   st_stack_238->GetYaxis()->SetLabelSize(0.05);
   st_stack_238->GetYaxis()->SetTitleSize(0.057);
   st_stack_238->GetYaxis()->SetTitleOffset(1.2);
   st_stack_238->GetYaxis()->SetTitleFont(42);
   st_stack_238->GetZaxis()->SetLabelFont(42);
   st_stack_238->GetZaxis()->SetLabelSize(0.035);
   st_stack_238->GetZaxis()->SetTitleSize(0.035);
   st_stack_238->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_238);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,9246.086);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,62911.04);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,26025.16);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,21573.23);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,15128.98);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,10954.79);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,8174.941);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,9699.669);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,6377.894);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,7399.998);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,5147.132);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,5772.439);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,4221.056);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,4778.548);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,4533.111);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,3711.821);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,2468.11);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,2439.446);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,1291.176);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,896.4004);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,1100.744);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,171.2755);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,672.7671);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,309.6566);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,69.13128);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,54.66131);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,4.657333);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(28,7.801854);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(29,7.234983);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(31,25.28543);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,937.6452);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,24170.56);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,2021.188);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,2159.438);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,1533.701);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,1318.677);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,1103.656);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,1309.738);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,991.6802);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,1548.592);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,873.9907);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,986.6841);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,780.7937);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,831.0857);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,864.5709);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,731.4972);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,615.8159);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,667.5772);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,473.2433);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,387.4898);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,469.5075);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,50.26342);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,381.9627);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,268.8693);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,37.41828);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,35.99218);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,4.129555);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(28,7.257157);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(29,7.234983);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(31,25.28543);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(9795);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,56.4797);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,134.9695);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,148.953);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,124.0305);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,92.02905);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,75.05132);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,61.4704);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,55.2992);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,44.65992);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,42.85665);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,32.64298);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,30.21902);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,31.82068);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,27.90292);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,24.278);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,17.80412);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,13.97721);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,10.46025);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,6.120383);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,4.082954);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,3.454212);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,1.899147);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,1.588432);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,1.298361);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.6150639);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.04825304);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,0.1102316);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(28,0.1447591);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(31,0.04825304);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,3.046684);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,4.47453);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,4.831974);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,4.481192);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,3.697681);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,3.369239);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,3.0701);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,2.982395);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,2.626399);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,2.673168);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,2.159688);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,2.184644);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,2.26392);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,2.117875);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,1.935402);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,1.656662);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,1.487655);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,1.346462);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.9912763);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.7362942);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.7523583);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.5137917);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.5498728);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.4830144);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.2952709);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.04825304);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,0.07794548);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(28,0.08357672);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(31,0.04825304);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(12402);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(1,878.0196);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(2,2683.207);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(3,3049.646);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(4,2607.201);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(5,2109.761);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(6,1626.441);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(7,1308.617);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(8,1062.571);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(9,875.1157);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(10,744.989);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(11,649.4461);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(12,572.6786);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(13,501.2142);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(14,458.1294);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(15,426.3668);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(16,377.3383);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(17,227.1178);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(18,147.9705);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(19,93.62103);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(20,67.90451);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(21,45.49179);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(22,28.24886);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(23,19.71198);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(24,12.76085);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(25,7.379161);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(26,4.350799);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(27,2.813384);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(28,2.263953);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(29,1.030887);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(30,0.5131157);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(31,1.165092);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(1,7.545379);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(2,13.18066);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(3,14.0673);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(4,13.01124);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(5,11.69074);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(6,10.25564);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(7,9.196721);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(8,8.261792);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(9,7.497569);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(10,6.928061);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(11,6.468179);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(12,6.068126);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(13,5.694185);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(14,5.430445);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(15,5.240694);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(16,4.925973);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(17,3.837369);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(18,3.080784);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(19,2.457917);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(20,2.088167);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(21,1.715914);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(22,1.344773);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(23,1.128424);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(24,0.907582);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(25,0.6886419);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(26,0.5299036);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(27,0.4281307);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(28,0.3850894);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(29,0.2620681);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(30,0.1762368);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(31,0.279803);
   VbbHcc_both_H_dR_Bj1_stack_3->SetEntries(333238);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(1,163.8604);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(2,393.8932);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(3,378.7874);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(4,285.3291);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(5,209.4055);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(6,171.2959);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(7,118.2055);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(8,107.8798);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(9,91.4458);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(10,83.70842);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(11,75.19654);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(12,65.4275);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(13,60.54586);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(14,55.77523);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(15,56.6934);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(16,49.65414);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(17,26.32909);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(18,27.20796);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(19,12.09605);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(20,8.735436);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(21,6.335995);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(22,2.440524);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(23,1.731559);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(24,2.718059);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(25,1.397849);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(26,0.4881971);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(27,0.066742);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(29,0.3186177);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(1,6.210827);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(2,12.2748);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(3,12.09293);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(4,11.73165);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(5,10.68905);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(6,10.70376);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(7,5.768677);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(8,8.149065);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(9,7.330061);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(10,5.928689);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(11,4.897073);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(12,5.488067);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(13,3.481792);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(14,4.367879);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(15,4.414208);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(16,5.178219);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(17,2.233029);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(18,6.352104);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(19,1.539686);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(20,1.362838);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(21,1.135121);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(22,0.6526203);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(23,0.6061846);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(24,0.8187459);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(25,0.5875264);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(26,0.3413902);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(27,0.066742);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(29,0.3186177);
   VbbHcc_both_H_dR_Bj1_stack_4->SetEntries(18334);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(1,23.33211);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(2,40.51204);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(3,44.02125);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(4,27.10142);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(5,26.62506);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(6,18.9978);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(7,9.601277);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(8,9.731755);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(9,13.59384);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(10,9.019556);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(11,8.1276);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(12,6.844398);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(13,3.993839);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(14,4.112562);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(15,5.694092);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(16,6.488318);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(17,2.868839);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(18,0.9465577);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(19,0.8292435);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(20,1.376973);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(21,1.539954);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(22,0.2764268);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(23,0.5664891);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(24,0.1070354);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(29,0.09122051);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(1,1.897079);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(2,3.711294);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(3,8.594122);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(4,7.745126);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(5,4.18465);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(6,3.276668);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(7,1.942254);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(8,2.024866);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(9,2.678898);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(10,1.915443);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(11,1.951841);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(12,1.864877);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(13,0.7503009);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(14,0.6814586);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(15,1.389384);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(16,1.802879);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(17,1.242529);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(18,0.3179972);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(19,0.3325166);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(20,0.4094801);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(21,1.18915);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(22,0.1931879);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(23,0.2759894);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(24,0.1070354);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(29,0.09122051);
   VbbHcc_both_H_dR_Bj1_stack_5->SetEntries(2217);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(1,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(3,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(14,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(1,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(2,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(3,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(14,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(2,1.856306);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(3,0.7955596);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(4,0.5303731);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(5,1.591119);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(6,0.2651865);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(8,0.5303731);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(9,0.5303731);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(10,0.2651865);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(12,0.2651865);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(14,0.2651865);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(2,0.7016176);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(3,0.4593166);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(4,0.3750304);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(5,0.6495717);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(6,0.2651865);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(8,0.3750304);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(9,0.3750304);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(10,0.2651865);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(12,0.2651865);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(14,0.2651865);
   VbbHcc_both_H_dR_Bj1_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(1,3.291933);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(2,9.622573);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(3,11.9016);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(4,4.811287);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(5,2.785482);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(6,1.772579);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(7,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(8,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(9,0.5064512);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(10,1.266128);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(11,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(12,1.012902);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(13,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(14,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(15,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(16,1.012902);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(17,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(18,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(19,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(1,0.9130179);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(2,1.560987);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(3,1.736027);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(4,1.103785);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(5,0.8398543);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(6,0.669972);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(7,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(8,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(9,0.3581151);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(10,0.5662297);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(11,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(12,0.5064512);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(13,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(14,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(15,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(16,0.5064512);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(17,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(18,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(19,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(1,2.627795);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(2,8.997816);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(3,8.678023);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(4,5.967857);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(5,3.974803);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(6,2.706936);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(7,2.088346);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(8,1.760477);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(9,1.464911);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(10,1.368004);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(11,1.235564);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(12,1.149963);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(13,1.119276);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(14,1.145118);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(15,0.9286922);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(16,0.9190015);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(17,0.5265281);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(18,0.303642);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(19,0.1598966);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(20,0.1098279);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(21,0.05006862);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(22,0.02745699);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(23,0.0290721);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(24,0.01292094);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(25,0.004845351);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(26,0.004845351);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(27,0.003230234);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(28,0.001615117);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(31,0.003230234);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(1,0.0651475);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(2,0.1205509);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(3,0.1183893);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(4,0.09817732);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(5,0.08012347);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(6,0.06612124);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(7,0.05807687);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(8,0.05332332);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(9,0.04864157);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(10,0.04700517);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(11,0.04467193);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(12,0.04309669);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(13,0.04251778);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(14,0.0430058);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(15,0.03872914);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(16,0.03852655);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(17,0.02916169);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(18,0.02214537);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(19,0.01607021);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(20,0.01331859);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(21,0.00899259);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(22,0.006659297);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(23,0.006852361);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(24,0.00456824);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(25,0.002797464);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(26,0.002797464);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(27,0.00228412);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(28,0.001615117);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(31,0.00228412);
   VbbHcc_both_H_dR_Bj1_stack_9->SetEntries(29329);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(1,1.024762);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(2,3.470129);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(3,3.900883);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(4,2.898248);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(5,1.974782);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(6,1.295213);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(7,0.9834572);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(8,0.8192198);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(9,0.7189072);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(10,0.5817149);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(11,0.5463104);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(12,0.492712);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(13,0.4017422);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(14,0.3909242);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(15,0.3535528);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(16,0.3324085);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(17,0.1740719);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(18,0.09932917);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(19,0.05359841);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(20,0.0309789);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(21,0.02556989);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(22,0.01130976);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(23,0.0068842);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(24,0.005900743);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(25,0.001475186);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(26,0.0009834572);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(27,0.002458643);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(28,0.0004917286);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(31,0.0009834572);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(1,0.02244783);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(2,0.04130813);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(3,0.04379698);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(4,0.03775118);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(5,0.03116178);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(6,0.02523674);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(7,0.02199077);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(8,0.02007072);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(9,0.01880179);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(10,0.01691289);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(11,0.01639013);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(12,0.01556536);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(13,0.01405518);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(14,0.01386465);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(15,0.0131853);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(16,0.01278494);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(17,0.009251818);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(18,0.006988776);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(19,0.005133797);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(20,0.003902975);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(21,0.003545905);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(22,0.002358247);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(23,0.00183988);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(24,0.001703398);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(25,0.0008516989);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(26,0.0006954092);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(27,0.001099539);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(28,0.0004917286);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(31,0.0006954092);
   VbbHcc_both_H_dR_Bj1_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(1,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(2,0.03002477);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(3,0.02686427);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(4,0.03002477);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(5,0.01580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(6,0.01106176);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(7,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(8,0.003160502);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(9,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(10,0.003160502);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(11,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(12,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(16,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(1,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(2,0.006888155);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(3,0.006515542);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(4,0.006888155);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(5,0.004997193);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(6,0.004180952);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(7,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(8,0.002234813);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(9,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(10,0.002234813);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(11,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(12,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(14,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(16,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(17,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(21,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(1,0.002283662);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(2,0.01058789);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(3,0.01038028);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(4,0.009342254);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(5,0.007473804);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(6,0.004359719);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(7,0.002491268);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(8,0.00332169);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(9,0.003114085);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(10,0.002283662);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(11,0.00145324);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(12,0.002283662);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(13,0.0008304226);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(14,0.001038028);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(15,0.0008304226);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(16,0.001038028);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(17,0.0004152113);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(18,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(1,0.0006885501);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(2,0.001482601);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(3,0.001467994);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(4,0.001392661);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(5,0.001245634);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(6,0.0009513686);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(7,0.0007191671);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(8,0.0008304226);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(9,0.0008040532);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(10,0.0006885501);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(11,0.0005492729);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(12,0.0006885501);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(13,0.0004152113);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(14,0.0004642204);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(15,0.0004152113);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(16,0.0004642204);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(17,0.0002935987);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(18,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj1__653 = new TH1D("VbbHcc_both_H_dR_Bj1__653","",30,0,6);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(1,4487);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(2,10568);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(3,9623);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(4,7483);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(5,5694);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(6,4756);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(7,3700);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(8,3094);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(9,2644);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(10,2297);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(11,2087);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(12,1840);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(13,1795);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(14,1683);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(15,1513);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(16,1346);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(17,775);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(18,551);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(19,333);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(20,239);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(21,182);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(22,120);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(23,83);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(24,66);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(25,38);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(26,8);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(27,10);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(28,5);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(29,6);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(30,5);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(31,5);
   VbbHcc_both_H_dR_Bj1__653->SetEntries(67065);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1__653->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1__653->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj1__653->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj1__653->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj1__653->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1__653->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__653->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__653->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__653->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1__653->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__653->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__653->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__653->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fx1475[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fy1475[30] = {
   10375.04,
   66187.92,
   29672.19,
   24631.14,
   17577.15,
   12852.63,
   9677.434,
   10939.79,
   7405.938,
   8284.058,
   5915.852,
   6450.533,
   4821.672,
   5328.107,
   5047.68,
   4165.691,
   2739.359,
   2626.687,
   1404.309,
   978.6411,
   1157.643,
   204.1794,
   696.4015,
   326.5597,
   78.52967,
   59.55439,
   7.65338,
   10.21267,
   8.675708,
   0.5131157};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fex1475[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fey1475[30] = {
   937.7035,
   24170.57,
   2021.298,
   2159.528,
   1533.794,
   1318.769,
   1103.715,
   1309.794,
   991.7428,
   1548.623,
   874.0334,
   986.7224,
   780.8262,
   831.1182,
   864.6014,
   731.5365,
   615.8351,
   667.6161,
   473.2534,
   387.4987,
   469.5141,
   50.28864,
   381.9654,
   268.8726,
   37.43039,
   35.99774,
   4.152958,
   7.267847,
   7.24731,
   0.1762368};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj1_fx1475,Graph_from_VbbHcc_both_H_dR_Bj1_fy1475,Graph_from_VbbHcc_both_H_dR_Bj1_fex1475,Graph_from_VbbHcc_both_H_dR_Bj1_fey1475);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj11475 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj11475","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetMinimum(0.3031911);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetMaximum(99394.31);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj11475);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__654 = new TH1D("data_mc_ratio__654","",30,0,6);
   data_mc_ratio__654->SetBinContent(1,0.4324801);
   data_mc_ratio__654->SetBinContent(2,0.1596666);
   data_mc_ratio__654->SetBinContent(3,0.3243104);
   data_mc_ratio__654->SetBinContent(4,0.3038025);
   data_mc_ratio__654->SetBinContent(5,0.3239433);
   data_mc_ratio__654->SetBinContent(6,0.370041);
   data_mc_ratio__654->SetBinContent(7,0.3823328);
   data_mc_ratio__654->SetBinContent(8,0.2828209);
   data_mc_ratio__654->SetBinContent(9,0.3570108);
   data_mc_ratio__654->SetBinContent(10,0.2772796);
   data_mc_ratio__654->SetBinContent(11,0.3527809);
   data_mc_ratio__654->SetBinContent(12,0.2852477);
   data_mc_ratio__654->SetBinContent(13,0.3722775);
   data_mc_ratio__654->SetBinContent(14,0.315872);
   data_mc_ratio__654->SetBinContent(15,0.2997417);
   data_mc_ratio__654->SetBinContent(16,0.3231156);
   data_mc_ratio__654->SetBinContent(17,0.2829129);
   data_mc_ratio__654->SetBinContent(18,0.2097699);
   data_mc_ratio__654->SetBinContent(19,0.2371273);
   data_mc_ratio__654->SetBinContent(20,0.2442162);
   data_mc_ratio__654->SetBinContent(21,0.157216);
   data_mc_ratio__654->SetBinContent(22,0.5877185);
   data_mc_ratio__654->SetBinContent(23,0.1191841);
   data_mc_ratio__654->SetBinContent(24,0.202107);
   data_mc_ratio__654->SetBinContent(25,0.4838935);
   data_mc_ratio__654->SetBinContent(26,0.134331);
   data_mc_ratio__654->SetBinContent(27,1.306612);
   data_mc_ratio__654->SetBinContent(28,0.4895878);
   data_mc_ratio__654->SetBinContent(29,0.6915862);
   data_mc_ratio__654->SetBinContent(30,9.74439);
   data_mc_ratio__654->SetBinContent(31,0.188658);
   data_mc_ratio__654->SetBinError(1,0.006456365);
   data_mc_ratio__654->SetBinError(2,0.001553165);
   data_mc_ratio__654->SetBinError(3,0.003306021);
   data_mc_ratio__654->SetBinError(4,0.003511991);
   data_mc_ratio__654->SetBinError(5,0.004292994);
   data_mc_ratio__654->SetBinError(6,0.005365731);
   data_mc_ratio__654->SetBinError(7,0.006285512);
   data_mc_ratio__654->SetBinError(8,0.005084536);
   data_mc_ratio__654->SetBinError(9,0.006943056);
   data_mc_ratio__654->SetBinError(10,0.005785453);
   data_mc_ratio__654->SetBinError(11,0.007722251);
   data_mc_ratio__654->SetBinError(12,0.006649872);
   data_mc_ratio__654->SetBinError(13,0.008786877);
   data_mc_ratio__654->SetBinError(14,0.007699617);
   data_mc_ratio__654->SetBinError(15,0.007705976);
   data_mc_ratio__654->SetBinError(16,0.008807151);
   data_mc_ratio__654->SetBinError(17,0.01016253);
   data_mc_ratio__654->SetBinError(18,0.008936499);
   data_mc_ratio__654->SetBinError(19,0.01299449);
   data_mc_ratio__654->SetBinError(20,0.01579703);
   data_mc_ratio__654->SetBinError(21,0.01165362);
   data_mc_ratio__654->SetBinError(22,0.05365111);
   data_mc_ratio__654->SetBinError(23,0.01308216);
   data_mc_ratio__654->SetBinError(24,0.02487765);
   data_mc_ratio__654->SetBinError(25,0.07849789);
   data_mc_ratio__654->SetBinError(26,0.04749317);
   data_mc_ratio__654->SetBinError(27,0.4131871);
   data_mc_ratio__654->SetBinError(28,0.2189503);
   data_mc_ratio__654->SetBinError(29,0.2823389);
   data_mc_ratio__654->SetBinError(30,4.357824);
   data_mc_ratio__654->SetBinError(31,0.1987944);
   data_mc_ratio__654->SetMinimum(0.4);
   data_mc_ratio__654->SetMaximum(1.6);
   data_mc_ratio__654->SetEntries(12.7122);
   data_mc_ratio__654->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__654->SetLineColor(ci);
   data_mc_ratio__654->SetLineWidth(2);
   data_mc_ratio__654->SetMarkerStyle(20);
   data_mc_ratio__654->SetMarkerSize(1.2);
   data_mc_ratio__654->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__654->GetXaxis()->SetRange(1,30);
   data_mc_ratio__654->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__654->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__654->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__654->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__654->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__654->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__654->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__654->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__654->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__654->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__654->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__654->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__654->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__654->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__654->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__654->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__654->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1476[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1476[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1476[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1476[30] = {
   0.09038067,
   0.3651809,
   0.06812096,
   0.08767474,
   0.08726067,
   0.1026069,
   0.1140504,
   0.1197276,
   0.1339118,
   0.1869401,
   0.1477443,
   0.1529676,
   0.161941,
   0.1559875,
   0.1712869,
   0.1756099,
   0.2248099,
   0.2541665,
   0.3370009,
   0.3959559,
   0.4055776,
   0.2462964,
   0.5484844,
   0.8233489,
   0.47664,
   0.6044514,
   0.5426306,
   0.7116499,
   0.8353566,
   0.343464};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1476,Graph_from_mc_statistical_error_fy1476,Graph_from_mc_statistical_error_fex1476,Graph_from_mc_statistical_error_fey1476);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1476 = new TH1F("Graph_Graph_from_mc_statistical_error1476","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1476->SetMinimum(0.1481791);
   Graph_Graph_from_mc_statistical_error1476->SetMaximum(2.002428);
   Graph_Graph_from_mc_statistical_error1476->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1476->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1476->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1476);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_both_17->cd();
   H_dR_Bj1_both_17->Modified();
   H_dR_Bj1_both_17->cd();
   H_dR_Bj1_both_17->SetSelected(H_dR_Bj1_both_17);
}
