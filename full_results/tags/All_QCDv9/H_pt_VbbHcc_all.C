void H_pt_VbbHcc_all()
{
//=========Macro generated from canvas: H_pt_VbbHcc_all/H_pt_VbbHcc_all
//=========  (Mon Nov 21 13:02:19 2022) by ROOT version 6.14/09
   TCanvas *H_pt_VbbHcc_all = new TCanvas("H_pt_VbbHcc_all", "H_pt_VbbHcc_all",0,0,600,600);
   H_pt_VbbHcc_all->SetHighLightColor(2);
   H_pt_VbbHcc_all->Range(0,0,1,1);
   H_pt_VbbHcc_all->SetFillColor(0);
   H_pt_VbbHcc_all->SetFillStyle(4000);
   H_pt_VbbHcc_all->SetBorderMode(0);
   H_pt_VbbHcc_all->SetBorderSize(2);
   H_pt_VbbHcc_all->SetFrameFillStyle(1000);
   H_pt_VbbHcc_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-70232.5,1562.903,7.016256e+07);
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
   st->SetMaximum(6.013265e+07);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",40,0,2000);
   st_stack_16->SetMinimum(0.3);
   st_stack_16->SetMaximum(6.313928e+07);
   st_stack_16->SetDirectory(0);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->GetXaxis()->SetRange(7,30);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetLabelSize(0.035);
   st_stack_16->GetXaxis()->SetTitleSize(0.035);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Events/50.0");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetLabelSize(0.05);
   st_stack_16->GetYaxis()->SetTitleSize(0.057);
   st_stack_16->GetYaxis()->SetTitleOffset(1.2);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetLabelSize(0.035);
   st_stack_16->GetZaxis()->SetTitleSize(0.035);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VbbHcc_tags_H_pt_all_stack_1 = new TH1D("VbbHcc_tags_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(1,1.503646e+07);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(2,2.374041e+07);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(3,8203811);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(4,619638.4);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(5,36067.51);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(6,5533.763);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(7,1044.857);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(1,142192.5);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(2,178645.8);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(3,104938.1);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(4,28872.83);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(5,6900.134);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(6,2563.368);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(7,1044.857);
   VbbHcc_tags_H_pt_all_stack_1->SetEntries(36691);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_pt_all_stack_2 = new TH1D("VbbHcc_tags_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(1,112324.5);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(2,199828.2);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(3,112388);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(4,46547.64);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(5,21254.37);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(6,10935.82);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(7,6020.934);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(8,3537.781);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(9,2132.796);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(10,1349.908);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(11,846.1959);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(12,577.9228);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(13,381.0908);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(14,256.0852);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(15,193.2904);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(16,116.7154);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(17,95.0714);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(18,71.40175);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(19,53.90669);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(20,32.21851);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(21,21.38001);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(22,20.51358);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(23,11.77);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(24,10.70126);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(25,10.10479);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(26,11.28995);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(27,5.447335);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(28,4.868433);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(29,0.6354914);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(30,2.413119);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(31,0.1537469);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(32,0.8347006);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(33,0.08481878);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(34,0.9664135);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(35,0.345328);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(36,2.081534);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(39,0.06014031);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(40,0.3318568);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(41,0.3906805);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(1,133.4612);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(2,178.1552);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(3,136.2389);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(4,90.19648);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(5,62.33132);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(6,45.86037);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(7,34.71913);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(8,27.14646);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(9,21.45065);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(10,17.37748);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(11,13.85953);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(12,11.62808);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(13,9.467871);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(14,7.812191);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(15,6.999441);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(16,5.452386);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(17,4.91357);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(18,4.254096);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(19,3.759646);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(20,2.936404);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(21,2.288269);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(22,2.334924);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(23,1.870846);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(24,1.709874);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(25,1.657711);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(26,1.761701);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(27,1.232097);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(28,1.118321);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(29,0.3923793);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(30,0.7641997);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(31,0.08951649);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(32,0.4611421);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(33,0.05997593);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(34,0.4397075);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(35,0.2953582);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(36,0.784793);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(39,0.06014031);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(40,0.3318568);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(41,0.2555967);
   VbbHcc_tags_H_pt_all_stack_2->SetEntries(7498678);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_2,"");
   
   TH1D *VbbHcc_tags_H_pt_all_stack_3 = new TH1D("VbbHcc_tags_H_pt_all_stack_3","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(1,1707066);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(2,3020060);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(3,1682606);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(4,618838);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(5,255734.2);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(6,121587.2);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(7,63605.02);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(8,35443.86);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(9,20289.91);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(10,12053.32);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(11,7583.367);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(12,4797.299);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(13,3152.548);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(14,2073.909);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(15,1411.067);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(16,951.0049);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(17,647.3779);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(18,454.4545);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(19,315.3979);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(20,226.6304);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(21,165.1265);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(22,112.83);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(23,85.59371);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(24,58.77541);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(25,46.06633);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(26,32.42455);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(27,23.24317);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(28,21.37809);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(29,15.14157);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(30,10.30109);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(31,8.11025);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(32,4.629088);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(33,3.877784);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(34,2.838934);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(35,2.062756);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(36,1.557107);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(37,1.478953);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(38,1.983952);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(39,1.010628);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(40,0.6679917);
   VbbHcc_tags_H_pt_all_stack_3->SetBinContent(41,1.917537);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(1,343.1222);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(2,456.1259);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(3,340.3204);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(4,205.319);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(5,131.639);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(6,90.749);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(7,65.72097);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(8,49.15746);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(9,37.29167);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(10,28.76478);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(11,22.89597);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(12,18.23776);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(13,14.8172);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(14,12.04868);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(15,9.949599);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(16,8.1787);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(17,6.755456);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(18,5.660561);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(19,4.718006);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(20,4.00818);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(21,3.421283);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(22,2.820424);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(23,2.483746);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(24,2.034123);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(25,1.811486);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(26,1.507775);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(27,1.271562);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(28,1.242311);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(29,1.035313);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(30,0.8688716);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(31,0.7580179);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(32,0.5817629);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(33,0.5270399);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(34,0.463667);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(35,0.3967114);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(36,0.331144);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(37,0.331685);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(38,0.3837861);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(39,0.2519026);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(40,0.2278581);
   VbbHcc_tags_H_pt_all_stack_3->SetBinError(41,0.3676894);
   VbbHcc_tags_H_pt_all_stack_3->SetEntries(1.191464e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_pt_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_3,"");
   
   TH1D *VbbHcc_tags_H_pt_all_stack_4 = new TH1D("VbbHcc_tags_H_pt_all_stack_4","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_4->SetBinContent(1,16472.66);
   VbbHcc_tags_H_pt_all_stack_4->SetBinContent(2,36133.5);
   VbbHcc_tags_H_pt_all_stack_4->SetBinContent(3,35476.1);
   VbbHcc_tags_H_pt_all_stack_4->SetBinContent(4,24585.67);
   VbbHcc_tags_H_pt_all_stack_4->SetBinContent(5,10854.16);
   VbbHcc_tags_H_pt_all_stack_4->SetBinContent(6,2460.551);
   VbbHcc_tags_H_pt_all_stack_4->SetBinContent(7,215.5019);
   VbbHcc_tags_H_pt_all_stack_4->SetBinContent(8,9.800584);
   VbbHcc_tags_H_pt_all_stack_4->SetBinContent(9,3.306269);
   VbbHcc_tags_H_pt_all_stack_4->SetBinContent(11,0.5796614);
   VbbHcc_tags_H_pt_all_stack_4->SetBinError(1,74.43419);
   VbbHcc_tags_H_pt_all_stack_4->SetBinError(2,110.1298);
   VbbHcc_tags_H_pt_all_stack_4->SetBinError(3,109.3407);
   VbbHcc_tags_H_pt_all_stack_4->SetBinError(4,90.97983);
   VbbHcc_tags_H_pt_all_stack_4->SetBinError(5,60.57043);
   VbbHcc_tags_H_pt_all_stack_4->SetBinError(6,28.84817);
   VbbHcc_tags_H_pt_all_stack_4->SetBinError(7,8.517562);
   VbbHcc_tags_H_pt_all_stack_4->SetBinError(8,1.809991);
   VbbHcc_tags_H_pt_all_stack_4->SetBinError(9,1.004302);
   VbbHcc_tags_H_pt_all_stack_4->SetBinError(11,0.4098825);
   VbbHcc_tags_H_pt_all_stack_4->SetEntries(393203);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_pt_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_4,"");
   
   TH1D *VbbHcc_tags_H_pt_all_stack_5 = new TH1D("VbbHcc_tags_H_pt_all_stack_5","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_5->SetBinContent(1,9029.298);
   VbbHcc_tags_H_pt_all_stack_5->SetBinContent(2,20168.39);
   VbbHcc_tags_H_pt_all_stack_5->SetBinContent(3,20536.17);
   VbbHcc_tags_H_pt_all_stack_5->SetBinContent(4,15132.45);
   VbbHcc_tags_H_pt_all_stack_5->SetBinContent(5,7355.976);
   VbbHcc_tags_H_pt_all_stack_5->SetBinContent(6,1815.624);
   VbbHcc_tags_H_pt_all_stack_5->SetBinContent(7,205.9484);
   VbbHcc_tags_H_pt_all_stack_5->SetBinContent(8,21.92747);
   VbbHcc_tags_H_pt_all_stack_5->SetBinContent(9,2.165046);
   VbbHcc_tags_H_pt_all_stack_5->SetBinContent(10,2.241167);
   VbbHcc_tags_H_pt_all_stack_5->SetBinContent(11,3.757581);
   VbbHcc_tags_H_pt_all_stack_5->SetBinContent(16,2.141156);
   VbbHcc_tags_H_pt_all_stack_5->SetBinError(1,103.6401);
   VbbHcc_tags_H_pt_all_stack_5->SetBinError(2,155.2799);
   VbbHcc_tags_H_pt_all_stack_5->SetBinError(3,156.7122);
   VbbHcc_tags_H_pt_all_stack_5->SetBinError(4,134.4035);
   VbbHcc_tags_H_pt_all_stack_5->SetBinError(5,93.82077);
   VbbHcc_tags_H_pt_all_stack_5->SetBinError(6,46.71046);
   VbbHcc_tags_H_pt_all_stack_5->SetBinError(7,15.84367);
   VbbHcc_tags_H_pt_all_stack_5->SetBinError(8,5.042027);
   VbbHcc_tags_H_pt_all_stack_5->SetBinError(9,1.530918);
   VbbHcc_tags_H_pt_all_stack_5->SetBinError(10,1.584745);
   VbbHcc_tags_H_pt_all_stack_5->SetBinError(11,2.181879);
   VbbHcc_tags_H_pt_all_stack_5->SetBinError(16,1.514026);
   VbbHcc_tags_H_pt_all_stack_5->SetEntries(64923);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_pt_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_5,"");
   
   TH1D *VbbHcc_tags_H_pt_all_stack_6 = new TH1D("VbbHcc_tags_H_pt_all_stack_6","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(1,580.5268);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(2,837.9806);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(3,425.8943);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(4,195.2938);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(5,105.9059);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(6,57.53062);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(7,35.95913);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(8,18.93513);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(9,14.71894);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(10,8.920359);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(11,6.376116);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(12,6.058311);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(13,2.797772);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(14,2.558775);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(15,1.490932);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(16,1.650184);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(17,1.448098);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(18,0.599099);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(19,0.1715502);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(20,1.155006);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(21,0.4412923);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(23,0.4592295);
   VbbHcc_tags_H_pt_all_stack_6->SetBinContent(24,0.139483);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(1,9.643061);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(2,11.47374);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(3,8.140328);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(4,5.541391);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(5,3.967831);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(6,2.960686);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(7,2.283343);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(8,1.726652);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(9,1.464541);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(10,1.113721);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(11,0.9285531);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(12,1.018673);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(13,0.6525739);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(14,0.593027);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(15,0.4662315);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(16,0.4732945);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(17,0.4884649);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(18,0.2977665);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(19,0.1213043);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(20,0.3941094);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(21,0.1975528);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(23,0.2936885);
   VbbHcc_tags_H_pt_all_stack_6->SetBinError(24,0.0986294);
   VbbHcc_tags_H_pt_all_stack_6->SetEntries(18694);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_pt_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_6,"");
   
   TH1D *VbbHcc_tags_H_pt_all_stack_7 = new TH1D("VbbHcc_tags_H_pt_all_stack_7","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(1,1049.155);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(2,1541.734);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(3,825.2698);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(4,419.2269);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(5,213.6885);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(6,126.6316);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(7,75.21022);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(8,43.87981);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(9,21.85752);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(10,13.83784);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(11,9.336076);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(12,4.385557);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(13,2.357653);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(14,3.082621);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(15,1.669592);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(16,1.305043);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(17,0.5348552);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(18,0.2727529);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(19,0.9286817);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(20,0.5762398);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(21,0.3108407);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(22,0.1236251);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(23,0.07749366);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(25,0.1336818);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(27,0.1326785);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(28,0.1396395);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(29,0.1866113);
   VbbHcc_tags_H_pt_all_stack_7->SetBinContent(35,0.1161003);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(1,10.98508);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(2,13.20633);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(3,9.528554);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(4,6.808179);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(5,4.87046);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(6,3.749173);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(7,2.908703);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(8,2.170285);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(9,1.539868);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(10,1.245412);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(11,1.052442);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(12,0.6539769);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(13,0.4869985);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(14,0.6451072);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(15,0.4084613);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(16,0.4536377);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(17,0.2269393);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(18,0.1364218);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(19,0.3263122);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(20,0.2738648);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(21,0.2024674);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(22,0.1236251);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(23,0.05479629);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(25,0.1336818);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(27,0.09381786);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(28,0.09874003);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(29,0.102345);
   VbbHcc_tags_H_pt_all_stack_7->SetBinError(35,0.08209531);
   VbbHcc_tags_H_pt_all_stack_7->SetEntries(48302);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_pt_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_7,"");
   
   TH1D *VbbHcc_tags_H_pt_all_stack_8 = new TH1D("VbbHcc_tags_H_pt_all_stack_8","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(1,1187.452);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(2,1525.989);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(3,701.2138);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(4,342.9711);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(5,174.1326);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(6,94.41854);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(7,45.47882);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(8,24.24657);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(9,15.53492);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(10,10.59564);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(11,6.174268);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(12,1.939535);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(13,1.070396);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(14,0.9765919);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(15,0.9716018);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(16,0.6497093);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(17,0.3763938);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(18,0.4330299);
   VbbHcc_tags_H_pt_all_stack_8->SetBinContent(22,0.6672425);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(1,15.59518);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(2,17.60358);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(3,11.92925);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(4,8.325638);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(5,5.98363);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(6,4.365233);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(7,3.037054);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(8,2.198548);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(9,1.733554);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(10,1.449962);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(11,1.130177);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(12,0.6155634);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(13,0.485285);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(14,0.4391654);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(15,0.4361144);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(16,0.3755278);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(17,0.2661506);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(18,0.3157467);
   VbbHcc_tags_H_pt_all_stack_8->SetBinError(22,0.3854907);
   VbbHcc_tags_H_pt_all_stack_8->SetEntries(21018);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_pt_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_8,"");
   
   TH1D *VbbHcc_tags_H_pt_all_stack_9 = new TH1D("VbbHcc_tags_H_pt_all_stack_9","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(1,318.3917);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(2,514.6975);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(3,292.3165);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(4,143.4869);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(5,76.89311);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(6,42.72145);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(7,25.02203);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(8,14.98553);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(9,8.896737);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(10,4.784381);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(11,2.780116);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(12,1.671955);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(13,0.9344299);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(14,0.7173689);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(15,0.3745206);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(16,0.2631271);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(17,0.1734993);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(18,0.1513726);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(19,0.07986301);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(20,0.05775868);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(21,0.05788203);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(22,0.03665062);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(23,0.01805124);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(24,0.006287495);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(25,0.007724131);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(26,0.01937808);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(27,0.005048566);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(28,0.002068506);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(30,0.004340334);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(32,0.001992314);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(33,0.001676022);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(34,0.005170637);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(35,0.003179898);
   VbbHcc_tags_H_pt_all_stack_9->SetBinContent(36,0.001772933);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(1,0.7337858);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(2,0.9314318);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(3,0.7003364);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(4,0.4902909);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(5,0.3589617);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(6,0.2677774);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(7,0.2042831);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(8,0.1587716);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(9,0.1218966);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(10,0.08878244);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(11,0.06764837);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(12,0.05187841);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(13,0.03918631);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(14,0.03416742);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(15,0.02434831);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(16,0.02084479);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(17,0.01687353);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(18,0.01561326);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(19,0.01165252);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(20,0.00999086);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(21,0.009744997);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(22,0.007807223);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(23,0.005525537);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(24,0.003178396);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(25,0.003484399);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(26,0.00553054);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(27,0.002915833);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(28,0.002068506);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(30,0.003098179);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(32,0.001992314);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(33,0.001676022);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(34,0.002994123);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(35,0.002248527);
   VbbHcc_tags_H_pt_all_stack_9->SetBinError(36,0.001772933);
   VbbHcc_tags_H_pt_all_stack_9->SetEntries(942593);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_pt_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_9,"");
   
   TH1D *VbbHcc_tags_H_pt_all_stack_10 = new TH1D("VbbHcc_tags_H_pt_all_stack_10","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(1,55.38195);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(2,116.3368);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(3,103.8986);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(4,65.01176);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(5,36.22933);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(6,20.53687);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(7,11.95478);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(8,7.558575);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(9,4.602477);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(10,2.955027);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(11,1.918303);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(12,1.354527);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(13,0.9291789);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(14,0.6734484);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(15,0.4783239);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(16,0.3220655);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(17,0.2565188);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(18,0.191638);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(19,0.1503686);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(20,0.1052226);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(21,0.06724624);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(22,0.06434611);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(23,0.03977357);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(24,0.04389451);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(25,0.03147194);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(26,0.02979294);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(27,0.01369799);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(28,0.0165633);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(29,0.01146971);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(30,0.01205189);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(31,0.004959454);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(32,0.004943498);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(33,0.006126258);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(34,0.003610968);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(35,0.002415342);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(37,0.001226685);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(38,0.001154968);
   VbbHcc_tags_H_pt_all_stack_10->SetBinContent(41,0.003583078);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(1,0.1498847);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(2,0.2172054);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(3,0.2052428);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(4,0.1622587);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(5,0.121009);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(6,0.09104716);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(7,0.06946811);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(8,0.05520371);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(9,0.04306767);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(10,0.03451378);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(11,0.0277756);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(12,0.02343292);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(13,0.01940693);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(14,0.01655028);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(15,0.01389737);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(16,0.01143222);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(17,0.01018208);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(18,0.008780417);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(19,0.007806158);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(20,0.006571408);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(21,0.005227921);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(22,0.005103377);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(23,0.0040119);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(24,0.00422583);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(25,0.003558051);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(26,0.003465678);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(27,0.002325173);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(28,0.002664031);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(29,0.002127497);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(30,0.002206735);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(31,0.001435597);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(32,0.001431307);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(33,0.00158835);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(34,0.001206917);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(35,0.0009886506);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(37,0.0007099981);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(38,0.0006684888);
   VbbHcc_tags_H_pt_all_stack_10->SetBinError(41,0.00119737);
   VbbHcc_tags_H_pt_all_stack_10->SetEntries(1089495);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_pt_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_10,"");
   
   TH1D *VbbHcc_tags_H_pt_all_stack_11 = new TH1D("VbbHcc_tags_H_pt_all_stack_11","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(1,4.540667);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(2,7.767912);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(3,4.709596);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(4,2.410004);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(5,1.016713);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(6,0.6376574);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(7,0.3129687);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(8,0.2531627);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(9,0.1349246);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(10,0.06038159);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(11,0.03857987);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(12,0.02691644);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(13,0.01231221);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(14,0.006836083);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(15,0.007314843);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(16,0.001727301);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(17,0.00305224);
   VbbHcc_tags_H_pt_all_stack_11->SetBinContent(21,0.00305224);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(1,0.08794375);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(2,0.1141858);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(3,0.08888626);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(4,0.06333181);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(5,0.04098524);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(6,0.03232816);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(7,0.02253414);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(8,0.02026235);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(9,0.01498117);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(10,0.009685978);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(11,0.007889962);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(12,0.006433374);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(13,0.004353381);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(14,0.003350471);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(15,0.00327831);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(16,0.001727301);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(17,0.00215826);
   VbbHcc_tags_H_pt_all_stack_11->SetBinError(21,0.00215826);
   VbbHcc_tags_H_pt_all_stack_11->SetEntries(15438);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_pt_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_11,"");
   
   TH1D *VbbHcc_tags_H_pt_all_stack_12 = new TH1D("VbbHcc_tags_H_pt_all_stack_12","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(1,17366.26);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(2,38551.29);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(3,40124.23);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(4,26612.18);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(5,13845.41);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(6,6803.407);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(7,4263.899);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(8,2637.826);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(9,1538.128);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(10,846.8348);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(11,542.3758);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(12,410.659);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(13,309.4868);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(14,134.0047);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(15,138.4799);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(16,37.22323);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(17,24.60347);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(18,87.24055);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(19,38.05256);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(20,24.98813);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(21,16.29977);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(22,13.74073);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(23,19.43127);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(24,7.39988);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(25,16.88838);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(27,8.763785);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(38,8.058298);
   VbbHcc_tags_H_pt_all_stack_12->SetBinContent(39,5.431438);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(1,278.5663);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(2,415.6743);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(3,424.5943);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(4,344.8916);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(5,247.7166);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(6,172.972);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(7,135.3665);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(8,106.1263);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(9,80.37393);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(10,59.56731);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(11,47.52907);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(12,41.40678);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(13,35.83703);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(14,23.56342);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(15,23.91482);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(16,12.43596);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(17,9.723284);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(18,18.70506);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(19,12.41565);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(20,10.22116);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(21,8.149909);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(22,7.210279);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(23,8.469657);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(24,5.232506);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(25,8.445111);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(27,6.196932);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(38,5.698077);
   VbbHcc_tags_H_pt_all_stack_12->SetBinError(39,3.840606);
   VbbHcc_tags_H_pt_all_stack_12->SetEntries(38867);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_pt_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_pt_all__31 = new TH1D("VbbHcc_tags_H_pt_all__31","",40,0,2000);
   VbbHcc_tags_H_pt_all__31->SetBinContent(1,2520449);
   VbbHcc_tags_H_pt_all__31->SetBinContent(2,4983823);
   VbbHcc_tags_H_pt_all__31->SetBinContent(3,4089260);
   VbbHcc_tags_H_pt_all__31->SetBinContent(4,2598914);
   VbbHcc_tags_H_pt_all__31->SetBinContent(5,1582581);
   VbbHcc_tags_H_pt_all__31->SetBinContent(6,1046690);
   VbbHcc_tags_H_pt_all__31->SetBinContent(7,744668);
   VbbHcc_tags_H_pt_all__31->SetBinContent(8,515680);
   VbbHcc_tags_H_pt_all__31->SetBinContent(9,336397);
   VbbHcc_tags_H_pt_all__31->SetBinContent(10,209513);
   VbbHcc_tags_H_pt_all__31->SetBinContent(11,130464);
   VbbHcc_tags_H_pt_all__31->SetBinContent(12,81660);
   VbbHcc_tags_H_pt_all__31->SetBinContent(13,51771);
   VbbHcc_tags_H_pt_all__31->SetBinContent(14,33585);
   VbbHcc_tags_H_pt_all__31->SetBinContent(15,22313);
   VbbHcc_tags_H_pt_all__31->SetBinContent(16,15166);
   VbbHcc_tags_H_pt_all__31->SetBinContent(17,10286);
   VbbHcc_tags_H_pt_all__31->SetBinContent(18,6937);
   VbbHcc_tags_H_pt_all__31->SetBinContent(19,4942);
   VbbHcc_tags_H_pt_all__31->SetBinContent(20,3570);
   VbbHcc_tags_H_pt_all__31->SetBinContent(21,2583);
   VbbHcc_tags_H_pt_all__31->SetBinContent(22,1726);
   VbbHcc_tags_H_pt_all__31->SetBinContent(23,1311);
   VbbHcc_tags_H_pt_all__31->SetBinContent(24,937);
   VbbHcc_tags_H_pt_all__31->SetBinContent(25,701);
   VbbHcc_tags_H_pt_all__31->SetBinContent(26,562);
   VbbHcc_tags_H_pt_all__31->SetBinContent(27,375);
   VbbHcc_tags_H_pt_all__31->SetBinContent(28,283);
   VbbHcc_tags_H_pt_all__31->SetBinContent(29,227);
   VbbHcc_tags_H_pt_all__31->SetBinContent(30,123);
   VbbHcc_tags_H_pt_all__31->SetBinContent(31,126);
   VbbHcc_tags_H_pt_all__31->SetBinContent(32,100);
   VbbHcc_tags_H_pt_all__31->SetBinContent(33,75);
   VbbHcc_tags_H_pt_all__31->SetBinContent(34,40);
   VbbHcc_tags_H_pt_all__31->SetBinContent(35,46);
   VbbHcc_tags_H_pt_all__31->SetBinContent(36,32);
   VbbHcc_tags_H_pt_all__31->SetBinContent(37,15);
   VbbHcc_tags_H_pt_all__31->SetBinContent(38,12);
   VbbHcc_tags_H_pt_all__31->SetBinContent(39,21);
   VbbHcc_tags_H_pt_all__31->SetBinContent(40,6);
   VbbHcc_tags_H_pt_all__31->SetBinContent(41,44);
   VbbHcc_tags_H_pt_all__31->SetEntries(1.899801e+07);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all__31->SetLineColor(ci);
   VbbHcc_tags_H_pt_all__31->SetLineWidth(2);
   VbbHcc_tags_H_pt_all__31->SetMarkerStyle(20);
   VbbHcc_tags_H_pt_all__31->SetMarkerSize(1.2);
   VbbHcc_tags_H_pt_all__31->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all__31->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all__31->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all__31->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all__31->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all__31->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all__31->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all__31->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all__31->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_all__31->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all__31->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all__31->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_all__31->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_all__31->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all__31->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_pt_all_fx1031[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_tags_H_pt_all_fy1031[40] = {
   1.690191e+07,
   2.705969e+07,
   1.00973e+07,
   1352523,
   345719.5,
   149478.9,
   75550.1,
   41761.06,
   24032.05,
   14293.46,
   9002.9,
   5801.318,
   3851.227,
   2472.014,
   1747.83,
   1111.277,
   769.8452,
   614.7447,
   408.6876,
   285.7312,
   203.6866,
   147.9762,
   117.3895,
   77.06621,
   73.23237,
   43.76367,
   37.60572,
   26.40479,
   15.97515,
   12.7306,
   8.268956,
   5.470725,
   3.970405,
   3.814129,
   2.529779,
   3.640414,
   1.48018,
   10.0434,
   6.502206,
   0.9998484};
   Double_t Graph_from_VbbHcc_tags_H_pt_all_fex1031[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_tags_H_pt_all_fey1031[40] = {
   142193.3,
   178647,
   104939.7,
   28876.22,
   6907.024,
   2571.803,
   1056.372,
   120.2391,
   91.22312,
   68.44756,
   54.62148,
   46.7354,
   39.92973,
   27.61156,
   26.84177,
   15.94165,
   12.83288,
   20.00564,
   13.80812,
   11.375,
   9.134688,
   8.096837,
   9.027373,
   5.869429,
   8.795867,
   2.31884,
   6.445596,
   1.674437,
   1.111897,
   1.157132,
   0.7632866,
   0.7423652,
   0.5304465,
   0.6390151,
   0.5013602,
   0.8517979,
   0.3316858,
   5.710987,
   3.849328,
   0.4025521};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_H_pt_all_fx1031,Graph_from_VbbHcc_tags_H_pt_all_fy1031,Graph_from_VbbHcc_tags_H_pt_all_fex1031,Graph_from_VbbHcc_tags_H_pt_all_fey1031);
   gre->SetName("Graph_from_VbbHcc_tags_H_pt_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_pt_all1031 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_pt_all1031","",100,0,2200);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->SetMinimum(0.5375667);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->SetMaximum(2.996217e+07);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt_all1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_pt_all1031);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_pt_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_pt_all","MC unc. (stat.)","fl");

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
   H_pt_VbbHcc_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__32 = new TH1D("data_mc_ratio__32","",40,0,2000);
   data_mc_ratio__32->SetBinContent(1,0.1491221);
   data_mc_ratio__32->SetBinContent(2,0.1841788);
   data_mc_ratio__32->SetBinContent(3,0.4049857);
   data_mc_ratio__32->SetBinContent(4,1.921531);
   data_mc_ratio__32->SetBinContent(5,4.577645);
   data_mc_ratio__32->SetBinContent(6,7.002261);
   data_mc_ratio__32->SetBinContent(7,9.856611);
   data_mc_ratio__32->SetBinContent(8,12.34835);
   data_mc_ratio__32->SetBinContent(9,13.99785);
   data_mc_ratio__32->SetBinContent(10,14.65797);
   data_mc_ratio__32->SetBinContent(11,14.49133);
   data_mc_ratio__32->SetBinContent(12,14.07611);
   data_mc_ratio__32->SetBinContent(13,13.44273);
   data_mc_ratio__32->SetBinContent(14,13.58609);
   data_mc_ratio__32->SetBinContent(15,12.76612);
   data_mc_ratio__32->SetBinContent(16,13.64737);
   data_mc_ratio__32->SetBinContent(17,13.36113);
   data_mc_ratio__32->SetBinContent(18,11.28436);
   data_mc_ratio__32->SetBinContent(19,12.09237);
   data_mc_ratio__32->SetBinContent(20,12.49426);
   data_mc_ratio__32->SetBinContent(21,12.68125);
   data_mc_ratio__32->SetBinContent(22,11.66404);
   data_mc_ratio__32->SetBinContent(23,11.16795);
   data_mc_ratio__32->SetBinContent(24,12.15838);
   data_mc_ratio__32->SetBinContent(25,9.57227);
   data_mc_ratio__32->SetBinContent(26,12.8417);
   data_mc_ratio__32->SetBinContent(27,9.971888);
   data_mc_ratio__32->SetBinContent(28,10.71775);
   data_mc_ratio__32->SetBinContent(29,14.20957);
   data_mc_ratio__32->SetBinContent(30,9.661757);
   data_mc_ratio__32->SetBinContent(31,15.23772);
   data_mc_ratio__32->SetBinContent(32,18.27911);
   data_mc_ratio__32->SetBinContent(33,18.88976);
   data_mc_ratio__32->SetBinContent(34,10.48732);
   data_mc_ratio__32->SetBinContent(35,18.1834);
   data_mc_ratio__32->SetBinContent(36,8.790209);
   data_mc_ratio__32->SetBinContent(37,10.1339);
   data_mc_ratio__32->SetBinContent(38,1.194814);
   data_mc_ratio__32->SetBinContent(39,3.229673);
   data_mc_ratio__32->SetBinContent(40,6.00091);
   data_mc_ratio__32->SetBinContent(41,19.03278);
   data_mc_ratio__32->SetBinError(1,9.392973e-05);
   data_mc_ratio__32->SetBinError(2,8.250085e-05);
   data_mc_ratio__32->SetBinError(3,0.0002002707);
   data_mc_ratio__32->SetBinError(4,0.001191932);
   data_mc_ratio__32->SetBinError(5,0.003638808);
   data_mc_ratio__32->SetBinError(6,0.006844304);
   data_mc_ratio__32->SetBinError(7,0.01142211);
   data_mc_ratio__32->SetBinError(8,0.01719565);
   data_mc_ratio__32->SetBinError(9,0.02413433);
   data_mc_ratio__32->SetBinError(10,0.03202346);
   data_mc_ratio__32->SetBinError(11,0.04012019);
   data_mc_ratio__32->SetBinError(12,0.04925814);
   data_mc_ratio__32->SetBinError(13,0.05908049);
   data_mc_ratio__32->SetBinError(14,0.07413473);
   data_mc_ratio__32->SetBinError(15,0.08546334);
   data_mc_ratio__32->SetBinError(16,0.1108188);
   data_mc_ratio__32->SetBinError(17,0.1317407);
   data_mc_ratio__32->SetBinError(18,0.135485);
   data_mc_ratio__32->SetBinError(19,0.1720125);
   data_mc_ratio__32->SetBinError(20,0.2091108);
   data_mc_ratio__32->SetBinError(21,0.2495168);
   data_mc_ratio__32->SetBinError(22,0.2807557);
   data_mc_ratio__32->SetBinError(23,0.3084409);
   data_mc_ratio__32->SetBinError(24,0.3971968);
   data_mc_ratio__32->SetBinError(25,0.3615396);
   data_mc_ratio__32->SetBinError(26,0.5416945);
   data_mc_ratio__32->SetBinError(27,0.5149461);
   data_mc_ratio__32->SetBinError(28,0.6371042);
   data_mc_ratio__32->SetBinError(29,0.9431225);
   data_mc_ratio__32->SetBinError(30,0.8711713);
   data_mc_ratio__32->SetBinError(31,1.357484);
   data_mc_ratio__32->SetBinError(32,1.827911);
   data_mc_ratio__32->SetBinError(33,2.181202);
   data_mc_ratio__32->SetBinError(34,1.658191);
   data_mc_ratio__32->SetBinError(35,2.680997);
   data_mc_ratio__32->SetBinError(36,1.553904);
   data_mc_ratio__32->SetBinError(37,2.616562);
   data_mc_ratio__32->SetBinError(38,0.3449131);
   data_mc_ratio__32->SetBinError(39,0.7047725);
   data_mc_ratio__32->SetBinError(40,2.449861);
   data_mc_ratio__32->SetBinError(41,4.671685);
   data_mc_ratio__32->SetMinimum(0.4);
   data_mc_ratio__32->SetMaximum(1.6);
   data_mc_ratio__32->SetEntries(1794.065);
   data_mc_ratio__32->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__32->SetLineColor(ci);
   data_mc_ratio__32->SetLineWidth(2);
   data_mc_ratio__32->SetMarkerStyle(20);
   data_mc_ratio__32->SetMarkerSize(1.2);
   data_mc_ratio__32->GetXaxis()->SetTitle("H p_{T} [GeV]");
   data_mc_ratio__32->GetXaxis()->SetRange(7,30);
   data_mc_ratio__32->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__32->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__32->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__32->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__32->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__32->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__32->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__32->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__32->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__32->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__32->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__32->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__32->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__32->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1032[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1032[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1032[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1032[40] = {
   0.00841285,
   0.00660196,
   0.01039286,
   0.0213499,
   0.0199787,
   0.01720513,
   0.0139824,
   0.002879216,
   0.003795894,
   0.004788734,
   0.006067098,
   0.008055997,
   0.01036805,
   0.01116966,
   0.0153572,
   0.01434535,
   0.01666943,
   0.03254301,
   0.0337865,
   0.03981014,
   0.04484678,
   0.05471717,
   0.076901,
   0.07616086,
   0.120109,
   0.05298549,
   0.1713994,
   0.06341413,
   0.06960166,
   0.09089369,
   0.09230749,
   0.1356978,
   0.1336001,
   0.1675389,
   0.1981834,
   0.2339838,
   0.2240848,
   0.5686306,
   0.5920035,
   0.4026132};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1032,Graph_from_mc_statistical_error_fy1032,Graph_from_mc_statistical_error_fex1032,Graph_from_mc_statistical_error_fey1032);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1032 = new TH1F("Graph_Graph_from_mc_statistical_error1032","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1032->SetMinimum(0.2895958);
   Graph_Graph_from_mc_statistical_error1032->SetMaximum(1.710404);
   Graph_Graph_from_mc_statistical_error1032->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1032->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1032);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   H_pt_VbbHcc_all->cd();
   H_pt_VbbHcc_all->Modified();
   H_pt_VbbHcc_all->cd();
   H_pt_VbbHcc_all->SetSelected(H_pt_VbbHcc_all);
}
