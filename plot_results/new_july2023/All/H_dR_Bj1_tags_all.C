void H_dR_Bj1_tags_all()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_all/H_dR_Bj1_tags_all
//=========  (Mon Jul 24 10:11:23 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_all = new TCanvas("H_dR_Bj1_tags_all", "H_dR_Bj1_tags_all",0,0,600,600);
   H_dR_Bj1_tags_all->SetHighLightColor(2);
   H_dR_Bj1_tags_all->Range(0,0,1,1);
   H_dR_Bj1_tags_all->SetFillColor(0);
   H_dR_Bj1_tags_all->SetFillStyle(4000);
   H_dR_Bj1_tags_all->SetBorderMode(0);
   H_dR_Bj1_tags_all->SetBorderSize(2);
   H_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2180.442,6.314516,2178562);
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
   st->SetMaximum(1867131);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",30,0,6);
   st_stack_48->SetMinimum(0.3);
   st_stack_48->SetMaximum(1960487);
   st_stack_48->SetDirectory(0);
   st_stack_48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_48->SetLineColor(ci);
   st_stack_48->GetXaxis()->SetRange(1,30);
   st_stack_48->GetXaxis()->SetLabelFont(42);
   st_stack_48->GetXaxis()->SetLabelSize(0.035);
   st_stack_48->GetXaxis()->SetTitleSize(0.035);
   st_stack_48->GetXaxis()->SetTitleFont(42);
   st_stack_48->GetYaxis()->SetTitle("Events/0.2");
   st_stack_48->GetYaxis()->SetLabelFont(42);
   st_stack_48->GetYaxis()->SetLabelSize(0.05);
   st_stack_48->GetYaxis()->SetTitleSize(0.057);
   st_stack_48->GetYaxis()->SetTitleOffset(1.2);
   st_stack_48->GetYaxis()->SetTitleFont(42);
   st_stack_48->GetZaxis()->SetLabelFont(42);
   st_stack_48->GetZaxis()->SetLabelSize(0.035);
   st_stack_48->GetZaxis()->SetTitleSize(0.035);
   st_stack_48->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_48);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(1,215963);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(2,709281.1);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(3,675292.1);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(4,552725.1);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(5,457859.3);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(6,390638.9);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(7,349514.6);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(8,285824.5);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(9,286497.6);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(10,217460.5);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(11,228393.1);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(12,191755.8);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(13,187759.1);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(14,169342.6);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(15,150396.1);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(16,139873.7);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(17,102767.5);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(18,80751.45);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(19,71758.92);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(20,69964.52);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(21,51869.01);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(22,43041.7);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(23,51667.6);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(24,30899.62);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(25,26798.73);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(26,19012);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(27,14739.14);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(28,12133.42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(29,10889.15);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(30,3939.407);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(31,10305.79);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(1,4287.561);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(2,10594.75);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(3,11308.56);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(4,11121.09);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(5,10620.86);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(6,16899.45);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(7,22234.84);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(8,8070.039);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(9,29895.58);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(10,6184.072);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(11,21597.48);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(12,6641.73);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(13,6862.758);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(14,6142.843);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(15,5362.994);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(16,6149.099);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(17,4248.144);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(18,3448.134);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(19,3940.938);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(20,4214.229);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(21,2977.114);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(22,2991.985);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(23,14606.33);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(24,2269.637);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(25,3305.955);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(26,1517.987);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(27,1418.589);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(28,1341.632);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(29,2305.972);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(30,558.4305);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(31,2375.423);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetEntries(488683);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(1,2292.908);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(2,7863.079);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(3,8899.526);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(4,7310.367);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(5,5710.069);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(6,4609.063);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(7,3888.664);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(8,3289.191);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(9,2936.246);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(10,2639.547);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(11,2448.127);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(12,2245.365);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(13,2044.732);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(14,1843.298);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(15,1659.977);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(16,1444.644);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(17,1172.821);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(18,994.5654);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(19,813.7064);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(20,704.2679);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(21,577.7763);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(22,455.3647);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(23,371.212);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(24,284.8838);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(25,227.9666);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(26,171.7863);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(27,130.8499);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(28,86.96406);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(29,54.78003);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(30,39.67397);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(31,73.91285);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(1,20.64896);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(2,36.34383);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(3,37.84248);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(4,33.91838);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(5,29.99606);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(6,26.87645);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(7,24.74121);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(8,22.57436);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(9,21.25029);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(10,20.09954);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(11,19.37129);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(12,18.49083);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(13,17.6081);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(14,16.64334);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(15,15.62495);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(16,14.5042);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(17,13.01815);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(18,11.97919);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(19,10.79837);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(20,10.14347);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(21,9.123607);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(22,8.023441);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(23,7.2278);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(24,6.241709);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(25,5.602224);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(26,4.903207);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(27,4.231304);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(28,3.349991);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(29,2.522774);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(30,2.175668);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(31,2.901298);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetEntries(822483);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(1,24851.65);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(2,111292.2);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(3,146722.6);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(4,131222.4);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(5,103837.9);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(6,82289.58);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(7,67062.96);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(8,56755.37);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(9,49909.58);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(10,45140.51);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(11,41522.45);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(12,38313.02);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(13,34704.92);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(14,31119.8);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(15,27258.16);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(16,23513.05);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(17,19125.79);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(18,15678.21);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(19,12823.41);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(20,10354.28);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(21,8327.831);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(22,6568.691);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(23,5163.834);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(24,3925.754);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(25,2933.198);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(26,2096.759);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(27,1480.357);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(28,1003.625);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(29,670.426);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(30,451.1876);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(31,824.0334);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(1,39.38842);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(2,83.55992);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(3,96.30149);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(4,91.29487);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(5,81.30226);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(6,72.38443);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(7,65.32621);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(8,60.09527);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(9,56.3673);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(10,53.62711);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(11,51.467);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(12,49.45338);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(13,47.05109);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(14,44.54859);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(15,41.66823);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(16,38.65719);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(17,34.84501);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(18,31.52493);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(19,28.47252);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(20,25.56562);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(21,22.893);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(22,20.31656);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(23,18.00324);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(24,15.67313);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(25,13.53536);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(26,11.42196);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(27,9.594205);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(28,7.878462);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(29,6.437684);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(30,5.276754);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(31,7.124272);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetEntries(1.800198e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(1,2057.611);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(2,5559.426);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(3,5720.147);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(4,4584.936);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(5,3699.168);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(6,3034.758);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(7,2551.096);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(8,2176.549);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(9,1919.8);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(10,1767.791);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(11,1584.824);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(12,1505.784);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(13,1333.917);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(14,1194.596);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(15,1097.428);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(16,946.3598);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(17,765.6575);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(18,679.6467);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(19,568.072);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(20,455.3745);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(21,388.6862);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(22,311.6387);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(23,248.0793);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(24,201.9062);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(25,163.7848);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(26,136.7441);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(27,94.3361);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(28,63.21075);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(29,40.72251);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(30,22.93543);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(31,40.51002);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(1,19.29116);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(2,45.49762);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(3,53.11553);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(4,49.79233);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(5,46.69411);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(6,41.83382);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(7,37.63276);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(8,34.44639);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(9,30.6507);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(10,30.57982);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(11,27.89696);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(12,27.93906);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(13,24.15617);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(14,23.37607);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(15,22.6714);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(16,21.05696);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(17,19.17441);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(18,19.14969);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(19,17.48025);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(20,14.64523);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(21,14.44701);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(22,12.26813);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(23,9.710266);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(24,9.736033);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(25,8.948185);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(26,9.030635);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(27,6.68888);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(28,5.21473);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(29,4.583654);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(30,2.035018);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(31,3.858754);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetEntries(340933);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(1,1377.469);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(2,3530.819);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(3,3398.095);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(4,2601.04);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(5,2025.609);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(6,1682.338);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(7,1358.226);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(8,1178.114);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(9,999.9644);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(10,941.148);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(11,824.3394);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(12,797.6826);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(13,698.0964);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(14,666.0535);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(15,611.5182);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(16,531.9164);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(17,379.8979);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(18,357.8522);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(19,311.428);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(20,217.3199);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(21,235.7214);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(22,186.3614);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(23,184.6984);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(24,131.954);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(25,85.64286);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(26,67.7394);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(27,46.83542);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(28,32.23933);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(29,22.86842);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(30,18.83557);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(31,21.94226);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(1,20.49858);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(2,57.4239);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(3,69.44472);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(4,62.25994);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(5,57.28797);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(6,49.91159);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(7,45.70993);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(8,41.00382);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(9,33.31138);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(10,38.12551);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(11,30.50076);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(12,32.95941);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(13,29.22525);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(14,28.03418);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(15,28.18584);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(16,26.19989);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(17,17.52322);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(18,22.2813);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(19,18.27393);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(20,14.31796);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(21,22.07256);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(22,15.82227);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(23,18.87422);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(24,14.58704);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(25,6.364778);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(26,8.239648);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(27,3.734984);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(28,3.417737);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(29,3.210988);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(30,3.744037);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(31,3.091418);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetEntries(194636);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(1,7.656055);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(2,18.86004);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(3,20.61805);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(4,17.26681);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(5,13.55107);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(6,9.427558);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(7,6.64041);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(8,7.792062);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(9,5.22759);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(10,4.546673);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(11,4.832311);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(12,3.909405);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(13,5.067113);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(14,3.618461);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(15,2.759267);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(16,2.847083);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(17,1.807717);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(18,2.587429);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(19,1.434263);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(20,1.495329);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(21,1.670196);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(22,0.834341);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(23,0.4891497);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(24,0.9515506);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(25,0.2890483);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(26,0.08591938);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(27,0.4608871);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(28,0.3734539);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(29,0.08591938);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(30,0.08591938);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(31,0.08591938);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(1,1.215814);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(2,1.782809);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(3,1.887727);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(4,1.810076);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(5,1.581223);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(6,1.239479);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(7,1.047555);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(8,1.151092);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(9,0.8816528);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(10,0.9271256);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(11,0.934259);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(12,0.7999562);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(13,1.00481);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(14,0.7222383);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(15,0.6691837);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(16,0.6999584);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(17,0.4746535);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(18,0.6580596);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(19,0.4121687);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(20,0.5071192);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(21,0.5856368);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(22,0.3920793);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(23,0.297791);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(24,0.4717105);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(25,0.2890483);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(26,0.08591938);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(27,0.3135494);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(28,0.2353995);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(29,0.08591938);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(30,0.08591938);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(31,0.08591938);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetEntries(1108);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(1,13.63547);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(2,35.36565);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(3,36.3784);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(4,28.1753);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(5,19.71191);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(6,13.83241);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(7,9.577946);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(8,12.06469);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(9,8.270349);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(10,7.457209);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(11,6.95027);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(12,6.905861);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(13,7.639775);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(14,5.525973);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(15,4.442834);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(16,5.087674);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(17,2.261412);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(18,3.869407);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(19,2.123511);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(20,2.104462);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(21,2.215614);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(22,0.8729481);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(23,1.422656);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(24,1.671709);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(25,1.053617);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(26,0.5097128);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(27,0.8624752);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(28,0.4564715);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(29,0.1274282);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(1,1.340942);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(2,2.006941);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(3,2.088449);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(4,1.957094);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(5,1.664541);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(6,1.306986);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(7,1.10179);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(8,1.233258);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(9,0.9479871);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(10,1.002466);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(11,0.9769153);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(12,0.8903309);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(13,1.066447);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(14,0.7704279);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(15,0.7242568);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(16,0.7821206);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(17,0.4769619);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(18,0.6985789);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(19,0.436925);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(20,0.531625);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(21,0.6036276);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(22,0.3854277);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(23,0.3824253);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(24,0.5143728);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(25,0.3636795);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(26,0.1802107);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(27,0.3465318);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(28,0.2385091);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(29,0.09010534);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetEntries(2838);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(1,18.86178);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(2,52.58771);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(3,54.92271);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(4,38.8889);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(5,27.90973);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(6,16.2525);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(7,15.48172);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(8,13.12169);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(9,10.78232);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(10,11.08499);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(11,9.337006);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(12,10.46487);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(13,11.5237);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(14,6.822616);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(15,7.428957);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(16,4.483073);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(17,5.918308);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(18,4.162938);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(19,3.590692);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(20,1.876806);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(21,1.915438);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(22,2.269668);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(23,2.3083);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(24,1.518038);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(25,0.9310134);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(26,0.5648566);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(27,0.9457922);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(28,0.5648566);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(29,0.1867731);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(30,0.1793837);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(31,0.7323135);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(1,1.88928);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(2,3.159753);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(3,3.231108);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(4,2.707377);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(5,2.298236);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(6,1.744959);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(7,1.712528);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(8,1.571013);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(9,1.430754);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(10,1.458586);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(11,1.336561);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(12,1.400439);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(13,1.478356);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(14,1.139382);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(15,1.191943);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(16,0.9165095);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(17,1.065173);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(18,0.8892749);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(19,0.8253934);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(20,0.5943032);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(21,0.6069378);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(22,0.6561656);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(23,0.6676305);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(24,0.5374377);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(25,0.4170042);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(26,0.3268483);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(27,0.4234428);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(28,0.3268483);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(29,0.1867731);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(30,0.1793837);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(31,0.3662313);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetEntries(1788);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(1,11.73539);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(2,37.7694);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(3,36.31084);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(4,25.35371);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(5,17.70858);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(6,13.34571);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(7,10.77389);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(8,9.253458);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(9,8.223868);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(10,7.52382);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(11,7.169192);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(12,6.603497);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(13,5.86017);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(14,4.959087);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(15,4.37202);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(16,3.640655);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(17,2.837033);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(18,2.287028);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(19,1.860905);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(20,1.502764);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(21,1.224671);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(22,1.101836);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(23,0.8879781);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(24,0.8083401);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(25,0.6299434);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(26,0.4890243);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(27,0.3275025);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(28,0.176219);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(29,0.1106944);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(30,0.07100866);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(31,0.1245233);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(1,0.1443855);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(2,0.2580853);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(3,0.2509356);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(4,0.2087678);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(5,0.1746055);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(6,0.1520545);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(7,0.1365909);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(8,0.1269004);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(9,0.1195138);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(10,0.1144563);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(11,0.1118336);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(12,0.1073634);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(13,0.1009931);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(14,0.09299909);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(15,0.08730858);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(16,0.07963576);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(17,0.07023283);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(18,0.06291459);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(19,0.0565907);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(20,0.05089994);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(21,0.04590658);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(22,0.04357256);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(23,0.03915355);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(24,0.03764382);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(25,0.03327228);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(26,0.02918806);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(27,0.02395477);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(28,0.01749638);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(29,0.01375129);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(30,0.01093034);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(31,0.01450716);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetEntries(135628);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(1,7.488794);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(2,25.44903);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(3,26.67139);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(4,20.09286);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(5,14.09607);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(6,10.37837);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(7,8.579741);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(8,7.395715);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(9,6.463551);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(10,5.757242);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(11,5.432832);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(12,4.953746);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(13,4.547208);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(14,4.062647);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(15,3.516489);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(16,3.070255);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(17,2.443337);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(18,2.077863);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(19,1.683644);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(20,1.438626);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(21,1.21414);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(22,0.9513274);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(23,0.9157382);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(24,0.6310244);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(25,0.5338384);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(26,0.3914815);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(27,0.2641816);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(28,0.1396193);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(29,0.119087);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(30,0.06980964);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(31,0.1149806);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(1,0.05988522);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(2,0.110395);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(3,0.1130151);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(4,0.09809221);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(5,0.08216044);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(6,0.07049823);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(7,0.06409893);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(8,0.0595119);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(9,0.05563515);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(10,0.05250745);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(11,0.05100666);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(12,0.04870579);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(13,0.04666445);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(14,0.04410809);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(15,0.04103631);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(16,0.03834431);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(17,0.03420625);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(18,0.03154439);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(19,0.0283948);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(20,0.02624748);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(21,0.02411283);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(22,0.02134414);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(23,0.02094109);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(24,0.01738348);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(25,0.0159889);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(26,0.01369208);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(27,0.01124773);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(28,0.008176857);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(29,0.007551721);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(30,0.005781911);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(31,0.007420377);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetEntries(374655);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(1,0.2279374);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(2,1.019407);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(3,1.049743);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(4,0.9389106);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(5,0.5970755);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(6,0.4159165);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(7,0.2578128);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(8,0.259704);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(9,0.1702118);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(10,0.1479676);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(11,0.1442394);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(12,0.1363586);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(13,0.1352714);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(14,0.1300509);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(15,0.1001888);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(16,0.06405994);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(17,0.0600147);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(18,0.06270267);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(19,0.04841291);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(20,0.04207862);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(21,0.03638562);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(22,0.03067934);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(23,0.04158562);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(24,0.0222718);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(25,0.02223805);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(26,0.01773356);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(27,0.01318204);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(28,0.003160502);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(29,0.002275762);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(31,0.005436264);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(1,0.02216777);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(2,0.04790897);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(3,0.04858537);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(4,0.04593002);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(5,0.03678085);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(6,0.03096909);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(7,0.02456342);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(8,0.02430126);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(9,0.0197253);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(10,0.01782085);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(11,0.01792172);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(12,0.01774905);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(13,0.01787792);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(14,0.01742126);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(15,0.0149378);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(16,0.01199586);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(17,0.01179368);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(18,0.01197179);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(19,0.01054869);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(20,0.01014031);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(21,0.009270648);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(22,0.008402599);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(23,0.009784563);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(24,0.007250462);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(25,0.006912463);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(26,0.006377404);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(27,0.005505734);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(28,0.002234813);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(29,0.002275762);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(31,0.003189589);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetEntries(2879);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(1,0.08143159);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(2,0.4212274);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(3,0.4940107);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(4,0.4388853);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(5,0.3128874);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(6,0.2030237);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(7,0.1426628);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(8,0.1200565);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(9,0.08477308);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(10,0.07843434);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(11,0.0706629);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(12,0.06054121);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(13,0.06613131);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(14,0.05223059);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(15,0.04387307);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(16,0.04087751);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(17,0.0366688);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(18,0.03361361);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(19,0.03286363);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(20,0.02666295);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(21,0.02566003);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(22,0.01605716);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(23,0.01642671);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(24,0.01334836);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(25,0.008322459);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(26,0.006477848);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(27,0.006408628);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(28,0.00217871);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(29,0.0014294);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(30,0.0009565794);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(31,0.001164185);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(1,0.004857275);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(2,0.01110744);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(3,0.01203531);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(4,0.01138485);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(5,0.009632709);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(6,0.007720388);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(7,0.006493458);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(8,0.006003261);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(9,0.005010444);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(10,0.004780559);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(11,0.00455375);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(12,0.004219077);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(13,0.00443937);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(14,0.003948553);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(15,0.003609209);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(16,0.003448274);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(17,0.003279161);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(18,0.003170956);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(19,0.00316681);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(20,0.002821675);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(21,0.002756198);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(22,0.00221854);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(23,0.002188964);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(24,0.002016093);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(25,0.001576877);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(26,0.001403236);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(27,0.00142501);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(28,0.0007849306);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(29,0.0006567132);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(30,0.0005542809);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(31,0.0005918846);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetEntries(10461);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all__95 = new TH1D("VbbHcc_tags_H_dR_Bj1_all__95","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(1,196654);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(2,599084);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(3,596171);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(4,489539);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(5,403739);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(6,338216);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(7,287274);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(8,249726);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(9,221712);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(10,200001);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(11,183427);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(12,168725);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(13,155544);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(14,142382);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(15,129542);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(16,115792);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(17,93933);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(18,78840);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(19,66559);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(20,56311);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(21,47329);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(22,39222);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(23,31913);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(24,25743);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(25,20170);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(26,15541);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(27,11391);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(28,7936);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(29,5528);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(30,3727);
   VbbHcc_tags_H_dR_Bj1_all__95->SetBinContent(31,6280);
   VbbHcc_tags_H_dR_Bj1_all__95->SetEntries(4987980);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all__95->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all__95->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj1_all__95->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj1_all__95->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj1_all__95->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all__95->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all__95->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__95->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__95->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all__95->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all__95->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__95->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__95->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all__95->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all__95->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all__95->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__95->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__95->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all__95->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_all_fx1095[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_all_fy1095[30] = {
   246602.3,
   837698.1,
   840208.9,
   698575,
   573226,
   482318.5,
   424427,
   349273.7,
   342302.5,
   267986.1,
   274806.8,
   234650.6,
   226575.6,
   204191.5,
   181045.9,
   166328.9,
   124227,
   98476.81,
   86286.31,
   81704.25,
   61407.33,
   50569.83,
   57641.51,
   35449.74,
   30212.79,
   21487.09,
   16494.4,
   13321.17,
   11678.58,
   4472.446};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_all_fex1095[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_all_fey1095[30] = {
   4287.885,
   10595.4,
   11309.38,
   11121.8,
   10621.48,
   16899.75,
   22235.03,
   8070.473,
   29895.67,
   6184.531,
   21597.59,
   6642.08,
   6863.047,
   6143.136,
   5363.301,
   6149.33,
   4248.386,
   3448.424,
   3941.137,
   4214.369,
   2977.333,
   2992.132,
   14606.36,
   2269.768,
   3306.006,
   1518.087,
   1418.649,
   1341.674,
   2305.989,
   558.476};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj1_all_fx1095,Graph_from_VbbHcc_tags_H_dR_Bj1_all_fy1095,Graph_from_VbbHcc_tags_H_dR_Bj1_all_fex1095,Graph_from_VbbHcc_tags_H_dR_Bj1_all_fey1095);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetMinimum(3522.573);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetMaximum(936278.7);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj1_all","MC unc. (stat.)","fl");

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
   H_dR_Bj1_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__96 = new TH1D("data_mc_ratio__96","",30,0,6);
   data_mc_ratio__96->SetBinContent(1,0.797454);
   data_mc_ratio__96->SetBinContent(2,0.715155);
   data_mc_ratio__96->SetBinContent(3,0.7095509);
   data_mc_ratio__96->SetBinContent(4,0.700768);
   data_mc_ratio__96->SetBinContent(5,0.7043278);
   data_mc_ratio__96->SetBinContent(6,0.7012295);
   data_mc_ratio__96->SetBinContent(7,0.6768514);
   data_mc_ratio__96->SetBinContent(8,0.7149865);
   data_mc_ratio__96->SetBinContent(9,0.6477079);
   data_mc_ratio__96->SetBinContent(10,0.746311);
   data_mc_ratio__96->SetBinContent(11,0.6674762);
   data_mc_ratio__96->SetBinContent(12,0.7190477);
   data_mc_ratio__96->SetBinContent(13,0.6864992);
   data_mc_ratio__96->SetBinContent(14,0.6972963);
   data_mc_ratio__96->SetBinContent(15,0.7155203);
   data_mc_ratio__96->SetBinContent(16,0.6961627);
   data_mc_ratio__96->SetBinContent(17,0.75614);
   data_mc_ratio__96->SetBinContent(18,0.8005946);
   data_mc_ratio__96->SetBinContent(19,0.7713738);
   data_mc_ratio__96->SetBinContent(20,0.6892053);
   data_mc_ratio__96->SetBinContent(21,0.7707387);
   data_mc_ratio__96->SetBinContent(22,0.7756008);
   data_mc_ratio__96->SetBinContent(23,0.5536462);
   data_mc_ratio__96->SetBinContent(24,0.7261831);
   data_mc_ratio__96->SetBinContent(25,0.6675981);
   data_mc_ratio__96->SetBinContent(26,0.7232715);
   data_mc_ratio__96->SetBinContent(27,0.6905982);
   data_mc_ratio__96->SetBinContent(28,0.5957434);
   data_mc_ratio__96->SetBinContent(29,0.4733454);
   data_mc_ratio__96->SetBinContent(30,0.8333247);
   data_mc_ratio__96->SetBinContent(31,0.5573674);
   data_mc_ratio__96->SetBinError(1,0.001798267);
   data_mc_ratio__96->SetBinError(2,0.0009239667);
   data_mc_ratio__96->SetBinError(3,0.0009189632);
   data_mc_ratio__96->SetBinError(4,0.001001568);
   data_mc_ratio__96->SetBinError(5,0.001108471);
   data_mc_ratio__96->SetBinError(6,0.001205766);
   data_mc_ratio__96->SetBinError(7,0.001262831);
   data_mc_ratio__96->SetBinError(8,0.001430757);
   data_mc_ratio__96->SetBinError(9,0.001375576);
   data_mc_ratio__96->SetBinError(10,0.001668798);
   data_mc_ratio__96->SetBinError(11,0.001558491);
   data_mc_ratio__96->SetBinError(12,0.001750524);
   data_mc_ratio__96->SetBinError(13,0.001740658);
   data_mc_ratio__96->SetBinError(14,0.001847948);
   data_mc_ratio__96->SetBinError(15,0.001988001);
   data_mc_ratio__96->SetBinError(16,0.002045839);
   data_mc_ratio__96->SetBinError(17,0.002467136);
   data_mc_ratio__96->SetBinError(18,0.002851277);
   data_mc_ratio__96->SetBinError(19,0.002989933);
   data_mc_ratio__96->SetBinError(20,0.00290437);
   data_mc_ratio__96->SetBinError(21,0.003542774);
   data_mc_ratio__96->SetBinError(22,0.003916277);
   data_mc_ratio__96->SetBinError(23,0.003099192);
   data_mc_ratio__96->SetBinError(24,0.004526021);
   data_mc_ratio__96->SetBinError(25,0.004700695);
   data_mc_ratio__96->SetBinError(26,0.005801788);
   data_mc_ratio__96->SetBinError(27,0.006470599);
   data_mc_ratio__96->SetBinError(28,0.006687417);
   data_mc_ratio__96->SetBinError(29,0.006366403);
   data_mc_ratio__96->SetBinError(30,0.01365006);
   data_mc_ratio__96->SetBinError(31,0.1177184);
   data_mc_ratio__96->SetMinimum(0.4);
   data_mc_ratio__96->SetMaximum(1.6);
   data_mc_ratio__96->SetEntries(5880.267);
   data_mc_ratio__96->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__96->SetLineColor(ci);
   data_mc_ratio__96->SetLineWidth(2);
   data_mc_ratio__96->SetMarkerStyle(20);
   data_mc_ratio__96->SetMarkerSize(1.2);
   data_mc_ratio__96->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__96->GetXaxis()->SetRange(1,30);
   data_mc_ratio__96->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__96->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__96->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__96->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__96->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__96->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__96->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__96->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__96->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__96->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__96->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__96->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__96->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__96->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1096[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1096[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1096[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1096[30] = {
   0.01738785,
   0.01264823,
   0.01346019,
   0.01592069,
   0.0185293,
   0.03503857,
   0.05238835,
   0.02310644,
   0.08733701,
   0.0230778,
   0.07859192,
   0.02830625,
   0.03029031,
   0.03008517,
   0.02962399,
   0.0369709,
   0.03419857,
   0.03501763,
   0.04567511,
   0.05158078,
   0.04848498,
   0.05916832,
   0.2534001,
   0.06402778,
   0.109424,
   0.07065111,
   0.08600793,
   0.1007174,
   0.1974546,
   0.1248704};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1096,Graph_from_mc_statistical_error_fy1096,Graph_from_mc_statistical_error_fex1096,Graph_from_mc_statistical_error_fey1096);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1096 = new TH1F("Graph_Graph_from_mc_statistical_error1096","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1096->SetMinimum(0.6959199);
   Graph_Graph_from_mc_statistical_error1096->SetMaximum(1.30408);
   Graph_Graph_from_mc_statistical_error1096->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1096->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1096->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1096);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_tags_all->cd();
   H_dR_Bj1_tags_all->Modified();
   H_dR_Bj1_tags_all->cd();
   H_dR_Bj1_tags_all->SetSelected(H_dR_Bj1_tags_all);
}
