void H_dR_Bj1_both_all()
{
//=========Macro generated from canvas: H_dR_Bj1_both_all/H_dR_Bj1_both_all
//=========  (Tue Aug 22 09:23:07 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_all = new TCanvas("H_dR_Bj1_both_all", "H_dR_Bj1_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_all->SetHighLightColor(2);
   H_dR_Bj1_both_all->Range(0,0,1,1);
   H_dR_Bj1_both_all->SetFillColor(0);
   H_dR_Bj1_both_all->SetFillStyle(4000);
   H_dR_Bj1_both_all->SetBorderMode(0);
   H_dR_Bj1_both_all->SetBorderSize(2);
   H_dR_Bj1_both_all->SetFrameFillStyle(1000);
   H_dR_Bj1_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-357.0804,6.314516,357023.3);
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
   st->SetMaximum(305986);
   
   TH1F *st_stack_240 = new TH1F("st_stack_240","",30,0,6);
   st_stack_240->SetMinimum(0.3);
   st_stack_240->SetMaximum(321285.3);
   st_stack_240->SetDirectory(0);
   st_stack_240->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_240->SetLineColor(ci);
   st_stack_240->GetXaxis()->SetRange(1,30);
   st_stack_240->GetXaxis()->SetLabelFont(42);
   st_stack_240->GetXaxis()->SetLabelSize(0.035);
   st_stack_240->GetXaxis()->SetTitleSize(0.035);
   st_stack_240->GetXaxis()->SetTitleFont(42);
   st_stack_240->GetYaxis()->SetTitle("Events/0.2");
   st_stack_240->GetYaxis()->SetLabelFont(42);
   st_stack_240->GetYaxis()->SetLabelSize(0.05);
   st_stack_240->GetYaxis()->SetTitleSize(0.057);
   st_stack_240->GetYaxis()->SetTitleOffset(1.2);
   st_stack_240->GetYaxis()->SetTitleFont(42);
   st_stack_240->GetZaxis()->SetLabelFont(42);
   st_stack_240->GetZaxis()->SetLabelSize(0.035);
   st_stack_240->GetZaxis()->SetTitleSize(0.035);
   st_stack_240->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_240);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(1,29830.93);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(2,127633.9);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(3,79052.25);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(4,62153);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(5,46145.78);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(6,41013.59);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(7,33801.24);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(8,24552.56);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(9,22463.86);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(10,24921.54);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(11,21587.59);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(12,17046.58);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(13,14664.48);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(14,16802.46);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(15,15887.53);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(16,12913.6);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(17,5851.455);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(18,6358.302);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(19,2733.896);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(20,1913.604);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(21,3813.414);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(22,871.0268);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(23,923.5168);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(24,441.1395);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(25,211.7667);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(26,64.07482);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(27,438.1567);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(28,25.75651);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(29,23.88508);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(31,25.28543);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(1,1809.036);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(2,24523.35);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(3,4369.911);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(4,3901.731);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(5,2895.303);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(6,3801.237);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(7,3213.834);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(8,2029.997);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(9,2045.901);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(10,3158.345);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(11,2491.034);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(12,1772.148);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(13,1555.16);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(14,2796.45);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(15,2210.139);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(16,1494.554);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(17,798.1894);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(18,1146.893);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(19,657.2293);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(20,549.1301);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(21,1652.226);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(22,323.7272);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(23,389.9087);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(24,274.6507);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(25,71.20251);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(26,36.64019);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(27,372.5407);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(28,14.17088);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(29,14.12758);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(31,25.28543);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetEntries(28873);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(1,180.1978);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(2,421.5311);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(3,447.4123);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(4,381.4668);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(5,287.3609);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(6,242.4016);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(7,196.6261);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(8,162.6569);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(9,139.2899);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(10,124.1237);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(11,105.358);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(12,93.27572);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(13,94.04499);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(14,89.81783);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(15,75.10627);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(16,59.17353);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(17,39.26766);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(18,28.3542);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(19,17.13002);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(20,12.2251);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(21,10.79178);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(22,5.619902);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(23,3.567486);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(24,2.558188);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(25,1.706811);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(26,0.7626558);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(27,0.5413568);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(28,0.5220157);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(29,0.6578729);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(30,0.05162389);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(31,0.1618132);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(1,5.643086);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(2,8.127925);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(3,8.442507);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(4,7.921924);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(5,6.688738);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(6,6.234965);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(7,5.617497);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(8,5.120684);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(9,4.763861);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(10,4.520398);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(11,4.069445);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(12,3.932051);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(13,3.926234);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(14,3.895833);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(15,3.492157);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(16,2.996072);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(17,2.483144);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(18,2.099803);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(19,1.624795);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(20,1.295529);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(21,1.337149);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(22,0.9073705);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(23,0.7288395);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(24,0.5968783);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(25,0.519176);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(26,0.3159413);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(27,0.3006437);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(28,0.2940434);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(29,0.3938159);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(30,0.05162389);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(31,0.0939653);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetEntries(36867);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(1,2733.924);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(2,8206.631);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(3,9207.657);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(4,7851.15);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(5,6375.325);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(6,4977.523);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(7,3991.194);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(8,3238.495);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(9,2683.206);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(10,2298.543);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(11,1987.556);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(12,1758.036);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(13,1571.427);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(14,1422.242);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(15,1312.405);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(16,1170.405);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(17,685.2074);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(18,443.1303);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(19,299.2028);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(20,199.2169);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(21,138.6533);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(22,86.10755);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(23,59.50353);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(24,37.42225);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(25,22.09041);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(26,11.35177);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(27,8.878873);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(28,4.697316);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(29,3.384134);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(30,1.53116);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(31,3.483924);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(1,13.49643);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(2,23.3563);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(3,24.76915);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(4,22.87202);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(5,20.59244);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(6,18.17046);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(7,16.26901);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(8,14.62653);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(9,13.31204);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(10,12.3353);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(11,11.46407);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(12,10.7804);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(13,10.21007);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(14,9.697921);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(15,9.318648);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(16,8.799353);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(17,6.739808);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(18,5.409597);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(19,4.444457);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(20,3.621443);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(21,3.030413);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(22,2.369475);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(23,1.976009);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(24,1.571693);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(25,1.199933);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(26,0.8521524);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(27,0.7646212);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(28,0.5540394);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(29,0.4733017);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(30,0.3249671);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(31,0.4870375);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetEntries(982703);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(1,506.332);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(2,1228.584);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(3,1180.673);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(4,917.3168);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(5,674.0239);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(6,528.9608);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(7,439.2965);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(8,333.0779);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(9,303.3179);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(10,280.1878);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(11,242.6599);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(12,217.3129);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(13,211.6652);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(14,186.5782);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(15,191.5415);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(16,159.2384);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(17,94.44163);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(18,75.69236);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(19,33.29282);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(20,24.94677);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(21,19.44666);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(22,11.80463);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(23,6.573833);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(24,5.277897);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(25,2.17488);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(26,2.006389);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(27,0.3033885);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(28,0.2109987);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(29,0.3967976);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(30,0.09298663);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(31,0.3039854);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(1,10.28633);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(2,21.22584);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(3,21.3343);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(4,22.90127);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(5,19.62773);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(6,18.35261);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(7,17.10477);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(8,13.66275);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(9,13.3224);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(10,14.0763);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(11,9.942697);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(12,9.757646);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(13,10.45035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(14,9.506235);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(15,8.86339);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(16,9.376316);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(17,6.818819);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(18,9.78715);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(19,3.524674);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(20,2.509368);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(21,3.596104);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(22,2.713401);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(23,1.32999);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(24,1.127274);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(25,0.6454734);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(26,0.7282085);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(27,0.1836823);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(28,0.158659);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(29,0.3280691);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(30,0.09298663);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(31,0.1839);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetEntries(51772);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(1,76.51485);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(2,128.0074);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(3,130.3867);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(4,93.72251);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(5,75.48161);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(6,44.6023);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(7,42.26365);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(8,22.63765);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(9,35.4765);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(10,29.24473);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(11,22.78086);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(12,18.36673);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(13,14.40819);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(14,17.35293);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(15,24.01935);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(16,15.7242);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(17,7.240991);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(18,4.010618);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(19,3.319175);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(20,2.919768);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(21,5.177413);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(22,1.073253);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(23,0.6527821);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(24,1.419077);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(25,0.07741479);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(26,0.008878203);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(27,0.1265664);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(28,0.07717802);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(29,0.09122051);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(1,4.486101);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(2,7.143234);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(3,13.54042);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(4,14.559);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(5,7.641996);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(6,5.032459);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(7,5.153152);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(8,3.242394);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(9,5.378373);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(10,7.738627);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(11,2.980597);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(12,2.720883);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(13,1.792921);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(14,2.359002);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(15,4.607691);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(16,2.215788);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(17,1.763509);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(18,0.7294393);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(19,0.7166595);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(20,0.6571657);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(21,2.512847);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(22,0.4742339);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(23,0.286715);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(24,1.056237);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(25,0.07717839);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(26,0.008878203);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(27,0.1265664);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(28,0.07717802);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(29,0.09122051);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetEntries(7913);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(1,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(2,0.4664177);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(3,1.759398);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(5,0.3022236);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(8,0.1511118);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(10,0.3022236);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(14,0.4664177);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(15,0.1511118);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(1,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(2,0.3496464);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(3,0.8927592);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(5,0.2137044);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(8,0.1511118);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(10,0.2137044);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(14,0.3496464);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(15,0.1511118);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetEntries(17);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(1,0.7642063);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(2,1.549782);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(3,1.79385);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(4,0.5611256);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(5,0.4489005);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(6,0.6733507);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(7,0.2244502);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(8,0.2244502);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(9,0.1122251);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(10,0.1122251);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(12,0.4489005);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(13,0.2244502);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(14,0.427531);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(15,0.2244502);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(23,0.1122251);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(1,0.3870345);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(2,0.4878084);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(3,0.8883315);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(4,0.250943);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(5,0.2244502);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(6,0.2748943);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(7,0.1587103);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(8,0.1587103);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(9,0.1122251);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(10,0.1122251);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(12,0.2244502);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(13,0.1587103);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(14,0.3346824);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(15,0.1587103);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(23,0.1122251);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetEntries(56);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(1,12.93792);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(2,32.91883);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(3,26.19082);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(4,17.65002);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(5,8.812431);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(6,8.863778);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(7,6.162583);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(8,5.071629);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(9,3.819368);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(10,3.434684);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(11,4.818918);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(12,4.591882);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(13,3.714613);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(14,4.233386);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(15,2.129015);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(16,4.591882);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(17,1.91636);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(18,0.5192881);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(19,0.53264);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(20,0.2660625);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(1,1.869038);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(2,2.970725);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(3,2.634855);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(4,2.174285);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(5,1.535383);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(6,1.544041);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(7,1.285965);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(8,1.164466);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(9,1.021404);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(10,0.9532992);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(11,1.136871);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(12,1.114586);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(13,0.9937147);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(14,1.059134);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(15,0.7529483);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(16,1.114586);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(17,0.7247581);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(18,0.3673043);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(19,0.3770883);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(20,0.2660625);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetEntries(574);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(1,8.560549);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(2,28.54185);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(3,27.14416);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(4,18.99925);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(5,12.42661);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(6,8.626082);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(7,6.664041);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(8,5.546069);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(9,4.849717);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(10,4.400764);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(11,3.931798);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(12,3.782501);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(13,3.580759);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(14,3.461245);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(15,3.209414);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(16,2.863548);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(17,1.571656);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(18,0.90127);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(19,0.5544282);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(20,0.3353478);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(21,0.2127042);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(22,0.101861);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(23,0.07383085);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(24,0.03405841);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(25,0.02598283);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(26,0.01884897);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(27,0.008814073);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(28,0.001615117);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(29,0.004209888);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(30,0.004209888);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(31,0.008902108);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(1,0.1349844);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(2,0.2449511);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(3,0.2365665);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(4,0.1967559);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(5,0.1586821);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(6,0.1320235);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(7,0.116737);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(8,0.1065902);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(9,0.09982203);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(10,0.09513457);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(11,0.08974998);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(12,0.08871725);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(13,0.08616535);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(14,0.08456005);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(15,0.0818685);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(16,0.07695613);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(17,0.05688423);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(18,0.04349693);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(19,0.03461711);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(20,0.02627541);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(21,0.02139453);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(22,0.01487291);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(23,0.01207336);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(24,0.008647964);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(25,0.007857752);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(26,0.006285252);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(27,0.004127375);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(28,0.001615117);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(29,0.003151235);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(30,0.003151235);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(31,0.00461544);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetEntries(80589);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(1,3.38308);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(2,11.45605);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(3,12.87811);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(4,9.568078);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(5,6.51941);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(6,4.275928);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(7,3.246718);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(8,2.704516);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(9,2.373351);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(10,1.920434);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(11,1.803552);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(12,1.626606);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(13,1.326284);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(14,1.29057);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(15,1.167195);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(16,1.097391);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(17,0.5746691);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(18,0.3279185);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(19,0.1769461);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(20,0.1022716);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(21,0.08441467);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(22,0.03733726);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(23,0.02272703);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(24,0.01948031);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(25,0.004870077);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(26,0.003246718);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(27,0.008116795);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(28,0.001623359);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(31,0.003246718);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(1,0.04383334);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(2,0.0806614);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(3,0.08552133);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(4,0.07371583);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(5,0.06084888);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(6,0.04927919);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(7,0.04294086);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(8,0.03919162);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(9,0.0367138);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(10,0.0330254);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(11,0.03200462);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(12,0.03039412);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(13,0.02744522);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(14,0.02707318);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(15,0.02574662);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(16,0.02496486);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(17,0.01806581);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(18,0.01364682);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(19,0.01002464);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(20,0.007621246);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(21,0.006924005);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(22,0.004604894);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(23,0.00359269);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(24,0.003326184);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(25,0.001663092);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(26,0.001357909);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(27,0.002147043);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(28,0.0009601867);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(31,0.001357909);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetEntries(125673);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(1,0.01703805);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(2,0.1005939);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(3,0.09198381);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(4,0.06372242);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(5,0.03538634);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(6,0.03519711);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(7,0.01657881);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(8,0.005436264);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(9,0.009751523);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(10,0.0127228);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(11,0.009751523);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(12,0.00659102);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(13,0.005010769);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(14,0.00659102);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(15,0.005470015);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(16,0.009751523);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(17,0.003856013);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(21,0.004315259);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(1,0.006163553);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(2,0.01463985);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(3,0.01416676);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(4,0.0113648);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(5,0.008562021);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(6,0.008727818);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(7,0.005973961);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(8,0.003189589);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(9,0.00448898);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(10,0.00529263);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(11,0.00448898);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(12,0.003893142);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(13,0.003557999);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(14,0.003893142);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(15,0.003867885);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(16,0.00448898);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(17,0.002770611);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(21,0.003158712);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetEntries(215);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(1,0.006893732);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(2,0.03839791);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(3,0.03746416);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(4,0.03261143);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(5,0.02193771);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(6,0.01746379);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(7,0.009060494);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(8,0.006905961);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(9,0.008438687);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(10,0.005453057);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(11,0.004565026);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(12,0.006467246);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(13,0.001844611);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(14,0.002835969);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(15,0.004414693);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(16,0.002593921);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(17,0.001314182);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(18,0.0008069192);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(20,0.0008989704);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(23,0.0002996568);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(1,0.001377209);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(2,0.003323569);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(3,0.003293503);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(4,0.003050135);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(5,0.002497139);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(6,0.00223988);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(7,0.001640589);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(8,0.001366222);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(9,0.001524592);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(10,0.001218843);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(11,0.001129306);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(12,0.001353015);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(13,0.0007193555);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(14,0.0008684847);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(15,0.00116162);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(16,0.0008380431);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(17,0.0005963076);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(18,0.0004718988);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(20,0.0005190208);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(23,0.0002996568);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all__659 = new TH1D("VbbHcc_both_H_dR_Bj1_all__659","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(1,28470);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(2,74171);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(3,69028);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(4,53782);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(5,42204);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(6,34046);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(7,27497);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(8,22859);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(9,19663);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(10,17445);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(11,15545);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(12,14219);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(13,13032);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(14,12276);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(15,11620);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(16,10698);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(17,6174);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(18,4207);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(19,2901);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(20,2016);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(21,1426);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(22,966);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(23,644);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(24,440);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(25,260);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(26,156);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(27,77);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(28,43);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(29,22);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(30,27);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(31,35);
   VbbHcc_both_H_dR_Bj1_all__659->SetEntries(485978);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all__659->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all__659->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj1_all__659->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj1_all__659->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj1_all__659->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all__659->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all__659->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_all_fx1479[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_all_fy1479[30] = {
   33353.88,
   137693.7,
   90088.27,
   71443.54,
   53586.54,
   46829.57,
   38486.94,
   28323.14,
   25636.33,
   27663.83,
   23956.52,
   19144.04,
   16564.88,
   18528.34,
   17497.49,
   14327.33,
   6681.68,
   6911.238,
   3088.106,
   2153.618,
   3987.785,
   975.7715,
   994.3029,
   487.8705,
   237.8471,
   78.22661,
   448.0238,
   31.26725,
   28.41931,
   1.67998};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_all_fex1479[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_all_fey1479[30] = {
   1809.131,
   24523.37,
   4370.063,
   3901.901,
   2895.461,
   3801.333,
   3213.93,
   2030.105,
   2046.001,
   3158.414,
   2491.085,
   1772.215,
   1555.235,
   2796.487,
   2210.184,
   1494.615,
   798.2531,
   1146.95,
   657.2563,
   549.1497,
   1652.235,
   323.7488,
   389.9169,
   274.6602,
   71.21748,
   36.65869,
   372.5416,
   14.18585,
   14.14509,
   0.3419431};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj1_all_fx1479,Graph_from_VbbHcc_both_H_dR_Bj1_all_fy1479,Graph_from_VbbHcc_both_H_dR_Bj1_all_fex1479,Graph_from_VbbHcc_both_H_dR_Bj1_all_fey1479);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetMinimum(1.204233);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetMaximum(178438.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj1_all","MC unc. (stat.)","fl");

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
   H_dR_Bj1_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__660 = new TH1D("data_mc_ratio__660","",30,0,6);
   data_mc_ratio__660->SetBinContent(1,0.8535739);
   data_mc_ratio__660->SetBinContent(2,0.5386667);
   data_mc_ratio__660->SetBinContent(3,0.7662263);
   data_mc_ratio__660->SetBinContent(4,0.7527903);
   data_mc_ratio__660->SetBinContent(5,0.7875858);
   data_mc_ratio__660->SetBinContent(6,0.7270193);
   data_mc_ratio__660->SetBinContent(7,0.7144502);
   data_mc_ratio__660->SetBinContent(8,0.8070786);
   data_mc_ratio__660->SetBinContent(9,0.7669975);
   data_mc_ratio__660->SetBinContent(10,0.6306069);
   data_mc_ratio__660->SetBinContent(11,0.648884);
   data_mc_ratio__660->SetBinContent(12,0.7427378);
   data_mc_ratio__660->SetBinContent(13,0.7867247);
   data_mc_ratio__660->SetBinContent(14,0.6625525);
   data_mc_ratio__660->SetBinContent(15,0.6640951);
   data_mc_ratio__660->SetBinContent(16,0.7466847);
   data_mc_ratio__660->SetBinContent(17,0.9240191);
   data_mc_ratio__660->SetBinContent(18,0.6087187);
   data_mc_ratio__660->SetBinContent(19,0.9394109);
   data_mc_ratio__660->SetBinContent(20,0.9360993);
   data_mc_ratio__660->SetBinContent(21,0.357592);
   data_mc_ratio__660->SetBinContent(22,0.9899859);
   data_mc_ratio__660->SetBinContent(23,0.64769);
   data_mc_ratio__660->SetBinContent(24,0.9018787);
   data_mc_ratio__660->SetBinContent(25,1.093139);
   data_mc_ratio__660->SetBinContent(26,1.994206);
   data_mc_ratio__660->SetBinContent(27,0.1718659);
   data_mc_ratio__660->SetBinContent(28,1.375241);
   data_mc_ratio__660->SetBinContent(29,0.7741214);
   data_mc_ratio__660->SetBinContent(30,16.07162);
   data_mc_ratio__660->SetBinContent(31,1.196692);
   data_mc_ratio__660->SetBinError(1,0.005058798);
   data_mc_ratio__660->SetBinError(2,0.001977894);
   data_mc_ratio__660->SetBinError(3,0.002916382);
   data_mc_ratio__660->SetBinError(4,0.003246052);
   data_mc_ratio__660->SetBinError(5,0.003833726);
   data_mc_ratio__660->SetBinError(6,0.003940151);
   data_mc_ratio__660->SetBinError(7,0.004308532);
   data_mc_ratio__660->SetBinError(8,0.005338106);
   data_mc_ratio__660->SetBinError(9,0.00546977);
   data_mc_ratio__660->SetBinError(10,0.004774449);
   data_mc_ratio__660->SetBinError(11,0.005204412);
   data_mc_ratio__660->SetBinError(12,0.006228752);
   data_mc_ratio__660->SetBinError(13,0.006891556);
   data_mc_ratio__660->SetBinError(14,0.005979871);
   data_mc_ratio__660->SetBinError(15,0.006160659);
   data_mc_ratio__660->SetBinError(16,0.007219148);
   data_mc_ratio__660->SetBinError(17,0.01175974);
   data_mc_ratio__660->SetBinError(18,0.009384916);
   data_mc_ratio__660->SetBinError(19,0.01744142);
   data_mc_ratio__660->SetBinError(20,0.02084859);
   data_mc_ratio__660->SetBinError(21,0.009469521);
   data_mc_ratio__660->SetBinError(22,0.03185227);
   data_mc_ratio__660->SetBinError(23,0.02552256);
   data_mc_ratio__660->SetBinError(24,0.04299538);
   data_mc_ratio__660->SetBinError(25,0.06779363);
   data_mc_ratio__660->SetBinError(26,0.1596643);
   data_mc_ratio__660->SetBinError(27,0.01958593);
   data_mc_ratio__660->SetBinError(28,0.2097222);
   data_mc_ratio__660->SetBinError(29,0.1650432);
   data_mc_ratio__660->SetBinError(30,3.092985);
   data_mc_ratio__660->SetBinError(31,1.054398);
   data_mc_ratio__660->SetMinimum(0.4);
   data_mc_ratio__660->SetMaximum(1.6);
   data_mc_ratio__660->SetEntries(68.75552);
   data_mc_ratio__660->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__660->SetLineColor(ci);
   data_mc_ratio__660->SetLineWidth(2);
   data_mc_ratio__660->SetMarkerStyle(20);
   data_mc_ratio__660->SetMarkerSize(1.2);
   data_mc_ratio__660->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__660->GetXaxis()->SetRange(1,30);
   data_mc_ratio__660->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__660->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__660->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__660->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__660->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__660->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__660->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__660->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__660->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__660->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__660->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__660->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__660->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__660->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__660->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__660->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__660->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1480[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1480[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1480[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1480[30] = {
   0.05424048,
   0.1781009,
   0.04850868,
   0.05461517,
   0.05403336,
   0.08117379,
   0.08350702,
   0.07167655,
   0.07980865,
   0.1141713,
   0.1039836,
   0.09257267,
   0.09388752,
   0.1509302,
   0.1263143,
   0.1043191,
   0.1194689,
   0.1659543,
   0.2128348,
   0.2549894,
   0.414324,
   0.3317876,
   0.392151,
   0.5629778,
   0.2994255,
   0.4686217,
   0.8315219,
   0.4536967,
   0.4977281,
   0.20354};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1480,Graph_from_mc_statistical_error_fy1480,Graph_from_mc_statistical_error_fex1480,Graph_from_mc_statistical_error_fey1480);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1480 = new TH1F("Graph_Graph_from_mc_statistical_error1480","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1480->SetMinimum(0.00217372);
   Graph_Graph_from_mc_statistical_error1480->SetMaximum(1.997826);
   Graph_Graph_from_mc_statistical_error1480->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1480->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1480->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1480);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_both_all->cd();
   H_dR_Bj1_both_all->Modified();
   H_dR_Bj1_both_all->cd();
   H_dR_Bj1_both_all->SetSelected(H_dR_Bj1_both_all);
}
