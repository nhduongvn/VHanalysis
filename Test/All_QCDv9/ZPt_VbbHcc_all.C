void ZPt_VbbHcc_all()
{
//=========Macro generated from canvas: ZPt_VbbHcc_all/ZPt_VbbHcc_all
//=========  (Tue Sep 20 12:29:20 2022) by ROOT version 6.14/09
   TCanvas *ZPt_VbbHcc_all = new TCanvas("ZPt_VbbHcc_all", "ZPt_VbbHcc_all",0,0,600,600);
   ZPt_VbbHcc_all->SetHighLightColor(2);
   ZPt_VbbHcc_all->Range(0,0,1,1);
   ZPt_VbbHcc_all->SetFillColor(0);
   ZPt_VbbHcc_all->SetFillStyle(4000);
   ZPt_VbbHcc_all->SetBorderMode(0);
   ZPt_VbbHcc_all->SetBorderSize(2);
   ZPt_VbbHcc_all->SetFrameFillStyle(1000);
   ZPt_VbbHcc_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-2246.512,1562.903,2244566);
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
   st->SetMaximum(1923699);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",40,0,2000);
   st_stack_12->SetMinimum(0.3);
   st_stack_12->SetMaximum(2019884);
   st_stack_12->SetDirectory(0);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->GetXaxis()->SetRange(7,30);
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetLabelSize(0.035);
   st_stack_12->GetXaxis()->SetTitleSize(0.035);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Events/50.0");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetLabelSize(0.05);
   st_stack_12->GetYaxis()->SetTitleSize(0.057);
   st_stack_12->GetYaxis()->SetTitleOffset(1.2);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetLabelSize(0.035);
   st_stack_12->GetZaxis()->SetTitleSize(0.035);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *VbbHcc_ZPt_all_stack_1 = new TH1D("VbbHcc_ZPt_all_stack_1","",40,0,2000);
   VbbHcc_ZPt_all_stack_1->SetBinContent(2,615796.1);
   VbbHcc_ZPt_all_stack_1->SetBinContent(3,749749.7);
   VbbHcc_ZPt_all_stack_1->SetBinContent(4,475570.6);
   VbbHcc_ZPt_all_stack_1->SetBinContent(5,175087.7);
   VbbHcc_ZPt_all_stack_1->SetBinContent(6,66410.28);
   VbbHcc_ZPt_all_stack_1->SetBinContent(7,27417.54);
   VbbHcc_ZPt_all_stack_1->SetBinContent(8,13225.69);
   VbbHcc_ZPt_all_stack_1->SetBinContent(9,6328.264);
   VbbHcc_ZPt_all_stack_1->SetBinContent(10,3685.021);
   VbbHcc_ZPt_all_stack_1->SetBinContent(11,1788.484);
   VbbHcc_ZPt_all_stack_1->SetBinContent(12,1070.288);
   VbbHcc_ZPt_all_stack_1->SetBinContent(13,829.9173);
   VbbHcc_ZPt_all_stack_1->SetBinContent(14,451.424);
   VbbHcc_ZPt_all_stack_1->SetBinContent(15,239.1022);
   VbbHcc_ZPt_all_stack_1->SetBinContent(16,176.1147);
   VbbHcc_ZPt_all_stack_1->SetBinContent(17,131.3675);
   VbbHcc_ZPt_all_stack_1->SetBinContent(18,69.2406);
   VbbHcc_ZPt_all_stack_1->SetBinContent(19,74.9459);
   VbbHcc_ZPt_all_stack_1->SetBinContent(20,30.28162);
   VbbHcc_ZPt_all_stack_1->SetBinContent(21,25.90915);
   VbbHcc_ZPt_all_stack_1->SetBinContent(22,17.07747);
   VbbHcc_ZPt_all_stack_1->SetBinContent(23,14.6488);
   VbbHcc_ZPt_all_stack_1->SetBinContent(24,7.197353);
   VbbHcc_ZPt_all_stack_1->SetBinContent(25,7.527732);
   VbbHcc_ZPt_all_stack_1->SetBinContent(26,4.761884);
   VbbHcc_ZPt_all_stack_1->SetBinContent(27,1.969197);
   VbbHcc_ZPt_all_stack_1->SetBinContent(28,2.042748);
   VbbHcc_ZPt_all_stack_1->SetBinContent(29,3.081565);
   VbbHcc_ZPt_all_stack_1->SetBinContent(30,2.422308);
   VbbHcc_ZPt_all_stack_1->SetBinContent(32,1.175744);
   VbbHcc_ZPt_all_stack_1->SetBinContent(33,0.7519398);
   VbbHcc_ZPt_all_stack_1->SetBinContent(37,0.6479314);
   VbbHcc_ZPt_all_stack_1->SetBinError(2,12602.63);
   VbbHcc_ZPt_all_stack_1->SetBinError(3,13706.7);
   VbbHcc_ZPt_all_stack_1->SetBinError(4,10293.81);
   VbbHcc_ZPt_all_stack_1->SetBinError(5,4792.219);
   VbbHcc_ZPt_all_stack_1->SetBinError(6,1613.485);
   VbbHcc_ZPt_all_stack_1->SetBinError(7,605.2678);
   VbbHcc_ZPt_all_stack_1->SetBinError(8,317.6813);
   VbbHcc_ZPt_all_stack_1->SetBinError(9,187.9596);
   VbbHcc_ZPt_all_stack_1->SetBinError(10,132.2724);
   VbbHcc_ZPt_all_stack_1->SetBinError(11,82.00703);
   VbbHcc_ZPt_all_stack_1->SetBinError(12,56.52313);
   VbbHcc_ZPt_all_stack_1->SetBinError(13,46.68451);
   VbbHcc_ZPt_all_stack_1->SetBinError(14,30.28268);
   VbbHcc_ZPt_all_stack_1->SetBinError(15,15.84116);
   VbbHcc_ZPt_all_stack_1->SetBinError(16,9.909225);
   VbbHcc_ZPt_all_stack_1->SetBinError(17,11.07124);
   VbbHcc_ZPt_all_stack_1->SetBinError(18,5.143592);
   VbbHcc_ZPt_all_stack_1->SetBinError(19,5.085327);
   VbbHcc_ZPt_all_stack_1->SetBinError(20,2.752141);
   VbbHcc_ZPt_all_stack_1->SetBinError(21,2.336682);
   VbbHcc_ZPt_all_stack_1->SetBinError(22,1.834242);
   VbbHcc_ZPt_all_stack_1->SetBinError(23,1.697994);
   VbbHcc_ZPt_all_stack_1->SetBinError(24,1.169119);
   VbbHcc_ZPt_all_stack_1->SetBinError(25,1.207937);
   VbbHcc_ZPt_all_stack_1->SetBinError(26,0.9501453);
   VbbHcc_ZPt_all_stack_1->SetBinError(27,0.5875606);
   VbbHcc_ZPt_all_stack_1->SetBinError(28,0.6182096);
   VbbHcc_ZPt_all_stack_1->SetBinError(29,0.7970864);
   VbbHcc_ZPt_all_stack_1->SetBinError(30,0.7006358);
   VbbHcc_ZPt_all_stack_1->SetBinError(32,0.4804599);
   VbbHcc_ZPt_all_stack_1->SetBinError(33,0.350754);
   VbbHcc_ZPt_all_stack_1->SetBinError(37,0.3743084);
   VbbHcc_ZPt_all_stack_1->SetEntries(51654);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_ZPt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_all_stack_1->SetLineColor(ci);
   VbbHcc_ZPt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_all_stack_1,"");
   
   TH1D *VbbHcc_ZPt_all_stack_2 = new TH1D("VbbHcc_ZPt_all_stack_2","",40,0,2000);
   VbbHcc_ZPt_all_stack_2->SetBinContent(2,6671.055);
   VbbHcc_ZPt_all_stack_2->SetBinContent(3,5479.086);
   VbbHcc_ZPt_all_stack_2->SetBinContent(4,2743.494);
   VbbHcc_ZPt_all_stack_2->SetBinContent(5,1390.566);
   VbbHcc_ZPt_all_stack_2->SetBinContent(6,772.7129);
   VbbHcc_ZPt_all_stack_2->SetBinContent(7,443.5885);
   VbbHcc_ZPt_all_stack_2->SetBinContent(8,260.9021);
   VbbHcc_ZPt_all_stack_2->SetBinContent(9,155.1381);
   VbbHcc_ZPt_all_stack_2->SetBinContent(10,88.4807);
   VbbHcc_ZPt_all_stack_2->SetBinContent(11,61.06651);
   VbbHcc_ZPt_all_stack_2->SetBinContent(12,39.12932);
   VbbHcc_ZPt_all_stack_2->SetBinContent(13,28.38826);
   VbbHcc_ZPt_all_stack_2->SetBinContent(14,16.03548);
   VbbHcc_ZPt_all_stack_2->SetBinContent(15,13.22919);
   VbbHcc_ZPt_all_stack_2->SetBinContent(16,8.099699);
   VbbHcc_ZPt_all_stack_2->SetBinContent(17,4.553687);
   VbbHcc_ZPt_all_stack_2->SetBinContent(18,2.330264);
   VbbHcc_ZPt_all_stack_2->SetBinContent(19,3.910423);
   VbbHcc_ZPt_all_stack_2->SetBinContent(20,1.796118);
   VbbHcc_ZPt_all_stack_2->SetBinContent(21,0.9933621);
   VbbHcc_ZPt_all_stack_2->SetBinContent(22,0.6065823);
   VbbHcc_ZPt_all_stack_2->SetBinContent(23,1.311262);
   VbbHcc_ZPt_all_stack_2->SetBinContent(24,0.0546883);
   VbbHcc_ZPt_all_stack_2->SetBinContent(26,-0.0521999);
   VbbHcc_ZPt_all_stack_2->SetBinContent(28,0.6717701);
   VbbHcc_ZPt_all_stack_2->SetBinContent(39,0.05215773);
   VbbHcc_ZPt_all_stack_2->SetBinError(2,33.32471);
   VbbHcc_ZPt_all_stack_2->SetBinError(3,31.5442);
   VbbHcc_ZPt_all_stack_2->SetBinError(4,23.13679);
   VbbHcc_ZPt_all_stack_2->SetBinError(5,17.06749);
   VbbHcc_ZPt_all_stack_2->SetBinError(6,13.05303);
   VbbHcc_ZPt_all_stack_2->SetBinError(7,9.959652);
   VbbHcc_ZPt_all_stack_2->SetBinError(8,7.719732);
   VbbHcc_ZPt_all_stack_2->SetBinError(9,6.134963);
   VbbHcc_ZPt_all_stack_2->SetBinError(10,4.631558);
   VbbHcc_ZPt_all_stack_2->SetBinError(11,3.884574);
   VbbHcc_ZPt_all_stack_2->SetBinError(12,3.130826);
   VbbHcc_ZPt_all_stack_2->SetBinError(13,2.732805);
   VbbHcc_ZPt_all_stack_2->SetBinError(14,2.023215);
   VbbHcc_ZPt_all_stack_2->SetBinError(15,1.93165);
   VbbHcc_ZPt_all_stack_2->SetBinError(16,1.411787);
   VbbHcc_ZPt_all_stack_2->SetBinError(17,1.126874);
   VbbHcc_ZPt_all_stack_2->SetBinError(18,0.9544178);
   VbbHcc_ZPt_all_stack_2->SetBinError(19,1.056728);
   VbbHcc_ZPt_all_stack_2->SetBinError(20,0.6845774);
   VbbHcc_ZPt_all_stack_2->SetBinError(21,0.5252614);
   VbbHcc_ZPt_all_stack_2->SetBinError(22,0.3959204);
   VbbHcc_ZPt_all_stack_2->SetBinError(23,0.6524079);
   VbbHcc_ZPt_all_stack_2->SetBinError(24,0.0546883);
   VbbHcc_ZPt_all_stack_2->SetBinError(26,0.0521999);
   VbbHcc_ZPt_all_stack_2->SetBinError(28,0.4770711);
   VbbHcc_ZPt_all_stack_2->SetBinError(39,0.05215773);
   VbbHcc_ZPt_all_stack_2->SetEntries(236928);

   ci = TColor::GetColor("#660066");
   VbbHcc_ZPt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_all_stack_2->SetLineColor(ci);
   VbbHcc_ZPt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_all_stack_2,"");
   
   TH1D *VbbHcc_ZPt_all_stack_3 = new TH1D("VbbHcc_ZPt_all_stack_3","",40,0,2000);
   VbbHcc_ZPt_all_stack_3->SetBinContent(2,127567.7);
   VbbHcc_ZPt_all_stack_3->SetBinContent(3,105176.1);
   VbbHcc_ZPt_all_stack_3->SetBinContent(4,37370.85);
   VbbHcc_ZPt_all_stack_3->SetBinContent(5,14838.53);
   VbbHcc_ZPt_all_stack_3->SetBinContent(6,6873.324);
   VbbHcc_ZPt_all_stack_3->SetBinContent(7,3511.983);
   VbbHcc_ZPt_all_stack_3->SetBinContent(8,1935.714);
   VbbHcc_ZPt_all_stack_3->SetBinContent(9,1116.102);
   VbbHcc_ZPt_all_stack_3->SetBinContent(10,680.613);
   VbbHcc_ZPt_all_stack_3->SetBinContent(11,431.4329);
   VbbHcc_ZPt_all_stack_3->SetBinContent(12,285.215);
   VbbHcc_ZPt_all_stack_3->SetBinContent(13,182.2135);
   VbbHcc_ZPt_all_stack_3->SetBinContent(14,121.0669);
   VbbHcc_ZPt_all_stack_3->SetBinContent(15,76.48677);
   VbbHcc_ZPt_all_stack_3->SetBinContent(16,51.61862);
   VbbHcc_ZPt_all_stack_3->SetBinContent(17,38.40791);
   VbbHcc_ZPt_all_stack_3->SetBinContent(18,20.11404);
   VbbHcc_ZPt_all_stack_3->SetBinContent(19,14.70057);
   VbbHcc_ZPt_all_stack_3->SetBinContent(20,10.70914);
   VbbHcc_ZPt_all_stack_3->SetBinContent(21,8.403679);
   VbbHcc_ZPt_all_stack_3->SetBinContent(22,5.985944);
   VbbHcc_ZPt_all_stack_3->SetBinContent(23,3.484124);
   VbbHcc_ZPt_all_stack_3->SetBinContent(24,3.83038);
   VbbHcc_ZPt_all_stack_3->SetBinContent(25,1.837719);
   VbbHcc_ZPt_all_stack_3->SetBinContent(26,1.297948);
   VbbHcc_ZPt_all_stack_3->SetBinContent(27,0.5875389);
   VbbHcc_ZPt_all_stack_3->SetBinContent(28,0.4312669);
   VbbHcc_ZPt_all_stack_3->SetBinContent(29,0.4609712);
   VbbHcc_ZPt_all_stack_3->SetBinContent(30,0.2277933);
   VbbHcc_ZPt_all_stack_3->SetBinContent(31,0.1705729);
   VbbHcc_ZPt_all_stack_3->SetBinContent(32,0.3073678);
   VbbHcc_ZPt_all_stack_3->SetBinContent(33,0.2306284);
   VbbHcc_ZPt_all_stack_3->SetBinContent(34,0.1566266);
   VbbHcc_ZPt_all_stack_3->SetBinContent(35,0.08592689);
   VbbHcc_ZPt_all_stack_3->SetBinContent(36,0.1421755);
   VbbHcc_ZPt_all_stack_3->SetBinContent(39,0.05285421);
   VbbHcc_ZPt_all_stack_3->SetBinError(2,95.68833);
   VbbHcc_ZPt_all_stack_3->SetBinError(3,86.67789);
   VbbHcc_ZPt_all_stack_3->SetBinError(4,51.20963);
   VbbHcc_ZPt_all_stack_3->SetBinError(5,32.17116);
   VbbHcc_ZPt_all_stack_3->SetBinError(6,21.89327);
   VbbHcc_ZPt_all_stack_3->SetBinError(7,15.68439);
   VbbHcc_ZPt_all_stack_3->SetBinError(8,11.67272);
   VbbHcc_ZPt_all_stack_3->SetBinError(9,8.898547);
   VbbHcc_ZPt_all_stack_3->SetBinError(10,6.973302);
   VbbHcc_ZPt_all_stack_3->SetBinError(11,5.572394);
   VbbHcc_ZPt_all_stack_3->SetBinError(12,4.554386);
   VbbHcc_ZPt_all_stack_3->SetBinError(13,3.636099);
   VbbHcc_ZPt_all_stack_3->SetBinError(14,2.979136);
   VbbHcc_ZPt_all_stack_3->SetBinError(15,2.35845);
   VbbHcc_ZPt_all_stack_3->SetBinError(16,1.945034);
   VbbHcc_ZPt_all_stack_3->SetBinError(17,1.681006);
   VbbHcc_ZPt_all_stack_3->SetBinError(18,1.210037);
   VbbHcc_ZPt_all_stack_3->SetBinError(19,1.034649);
   VbbHcc_ZPt_all_stack_3->SetBinError(20,0.9004397);
   VbbHcc_ZPt_all_stack_3->SetBinError(21,0.7908954);
   VbbHcc_ZPt_all_stack_3->SetBinError(22,0.6621005);
   VbbHcc_ZPt_all_stack_3->SetBinError(23,0.4988415);
   VbbHcc_ZPt_all_stack_3->SetBinError(24,0.5358074);
   VbbHcc_ZPt_all_stack_3->SetBinError(25,0.3759863);
   VbbHcc_ZPt_all_stack_3->SetBinError(26,0.3259655);
   VbbHcc_ZPt_all_stack_3->SetBinError(27,0.1986894);
   VbbHcc_ZPt_all_stack_3->SetBinError(28,0.1710822);
   VbbHcc_ZPt_all_stack_3->SetBinError(29,0.2068681);
   VbbHcc_ZPt_all_stack_3->SetBinError(30,0.1321962);
   VbbHcc_ZPt_all_stack_3->SetBinError(31,0.120614);
   VbbHcc_ZPt_all_stack_3->SetBinError(32,0.1413762);
   VbbHcc_ZPt_all_stack_3->SetBinError(33,0.1340692);
   VbbHcc_ZPt_all_stack_3->SetBinError(34,0.1107517);
   VbbHcc_ZPt_all_stack_3->SetBinError(35,0.08592689);
   VbbHcc_ZPt_all_stack_3->SetBinError(36,0.1005333);
   VbbHcc_ZPt_all_stack_3->SetBinError(39,0.05285421);
   VbbHcc_ZPt_all_stack_3->SetEntries(4563270);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_ZPt_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_all_stack_3->SetLineColor(ci);
   VbbHcc_ZPt_all_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_all_stack_3,"");
   
   TH1D *VbbHcc_ZPt_all_stack_4 = new TH1D("VbbHcc_ZPt_all_stack_4","",40,0,2000);
   VbbHcc_ZPt_all_stack_4->SetBinContent(2,3020.202);
   VbbHcc_ZPt_all_stack_4->SetBinContent(3,4071.275);
   VbbHcc_ZPt_all_stack_4->SetBinContent(4,3473.84);
   VbbHcc_ZPt_all_stack_4->SetBinContent(5,2072.826);
   VbbHcc_ZPt_all_stack_4->SetBinContent(6,1073.425);
   VbbHcc_ZPt_all_stack_4->SetBinContent(7,614.5201);
   VbbHcc_ZPt_all_stack_4->SetBinContent(8,352.7542);
   VbbHcc_ZPt_all_stack_4->SetBinContent(9,197.898);
   VbbHcc_ZPt_all_stack_4->SetBinContent(10,109.6222);
   VbbHcc_ZPt_all_stack_4->SetBinContent(11,62.44335);
   VbbHcc_ZPt_all_stack_4->SetBinContent(12,39.12127);
   VbbHcc_ZPt_all_stack_4->SetBinContent(13,27.38271);
   VbbHcc_ZPt_all_stack_4->SetBinContent(14,15.59522);
   VbbHcc_ZPt_all_stack_4->SetBinContent(15,13.53017);
   VbbHcc_ZPt_all_stack_4->SetBinContent(16,7.890608);
   VbbHcc_ZPt_all_stack_4->SetBinContent(17,5.979137);
   VbbHcc_ZPt_all_stack_4->SetBinContent(18,5.374619);
   VbbHcc_ZPt_all_stack_4->SetBinContent(19,2.659308);
   VbbHcc_ZPt_all_stack_4->SetBinContent(20,2.337706);
   VbbHcc_ZPt_all_stack_4->SetBinContent(21,1.623643);
   VbbHcc_ZPt_all_stack_4->SetBinContent(22,1.016628);
   VbbHcc_ZPt_all_stack_4->SetBinContent(23,1.392665);
   VbbHcc_ZPt_all_stack_4->SetBinContent(24,0.5035858);
   VbbHcc_ZPt_all_stack_4->SetBinContent(25,0.5883207);
   VbbHcc_ZPt_all_stack_4->SetBinContent(26,0.3291487);
   VbbHcc_ZPt_all_stack_4->SetBinContent(27,0.05227043);
   VbbHcc_ZPt_all_stack_4->SetBinContent(30,0.1786268);
   VbbHcc_ZPt_all_stack_4->SetBinContent(32,0.142495);
   VbbHcc_ZPt_all_stack_4->SetBinContent(37,0.08397603);
   VbbHcc_ZPt_all_stack_4->SetBinError(2,30.05077);
   VbbHcc_ZPt_all_stack_4->SetBinError(3,34.59344);
   VbbHcc_ZPt_all_stack_4->SetBinError(4,30.99617);
   VbbHcc_ZPt_all_stack_4->SetBinError(5,21.45913);
   VbbHcc_ZPt_all_stack_4->SetBinError(6,12.505);
   VbbHcc_ZPt_all_stack_4->SetBinError(7,7.726821);
   VbbHcc_ZPt_all_stack_4->SetBinError(8,5.365081);
   VbbHcc_ZPt_all_stack_4->SetBinError(9,3.849646);
   VbbHcc_ZPt_all_stack_4->SetBinError(10,2.847427);
   VbbHcc_ZPt_all_stack_4->SetBinError(11,2.149735);
   VbbHcc_ZPt_all_stack_4->SetBinError(12,1.691347);
   VbbHcc_ZPt_all_stack_4->SetBinError(13,1.415563);
   VbbHcc_ZPt_all_stack_4->SetBinError(14,1.093428);
   VbbHcc_ZPt_all_stack_4->SetBinError(15,1.003793);
   VbbHcc_ZPt_all_stack_4->SetBinError(16,0.7674569);
   VbbHcc_ZPt_all_stack_4->SetBinError(17,0.6671165);
   VbbHcc_ZPt_all_stack_4->SetBinError(18,0.6344236);
   VbbHcc_ZPt_all_stack_4->SetBinError(19,0.4536276);
   VbbHcc_ZPt_all_stack_4->SetBinError(20,0.4163823);
   VbbHcc_ZPt_all_stack_4->SetBinError(21,0.3430333);
   VbbHcc_ZPt_all_stack_4->SetBinError(22,0.275458);
   VbbHcc_ZPt_all_stack_4->SetBinError(23,0.3302619);
   VbbHcc_ZPt_all_stack_4->SetBinError(24,0.191815);
   VbbHcc_ZPt_all_stack_4->SetBinError(25,0.2097568);
   VbbHcc_ZPt_all_stack_4->SetBinError(26,0.1653562);
   VbbHcc_ZPt_all_stack_4->SetBinError(27,0.05227043);
   VbbHcc_ZPt_all_stack_4->SetBinError(30,0.1269319);
   VbbHcc_ZPt_all_stack_4->SetBinError(32,0.1007592);
   VbbHcc_ZPt_all_stack_4->SetBinError(37,0.08397603);
   VbbHcc_ZPt_all_stack_4->SetEntries(95489);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_ZPt_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_all_stack_4->SetLineColor(ci);
   VbbHcc_ZPt_all_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_all_stack_4,"");
   
   TH1D *VbbHcc_ZPt_all_stack_5 = new TH1D("VbbHcc_ZPt_all_stack_5","",40,0,2000);
   VbbHcc_ZPt_all_stack_5->SetBinContent(2,631.704);
   VbbHcc_ZPt_all_stack_5->SetBinContent(3,872.2756);
   VbbHcc_ZPt_all_stack_5->SetBinContent(4,829.9029);
   VbbHcc_ZPt_all_stack_5->SetBinContent(5,574.5504);
   VbbHcc_ZPt_all_stack_5->SetBinContent(6,378.1313);
   VbbHcc_ZPt_all_stack_5->SetBinContent(7,211.8622);
   VbbHcc_ZPt_all_stack_5->SetBinContent(8,151.6455);
   VbbHcc_ZPt_all_stack_5->SetBinContent(9,88.56817);
   VbbHcc_ZPt_all_stack_5->SetBinContent(10,53.29747);
   VbbHcc_ZPt_all_stack_5->SetBinContent(11,36.86461);
   VbbHcc_ZPt_all_stack_5->SetBinContent(12,27.50165);
   VbbHcc_ZPt_all_stack_5->SetBinContent(13,19.84908);
   VbbHcc_ZPt_all_stack_5->SetBinContent(14,13.73344);
   VbbHcc_ZPt_all_stack_5->SetBinContent(15,9.630006);
   VbbHcc_ZPt_all_stack_5->SetBinContent(16,6.24587);
   VbbHcc_ZPt_all_stack_5->SetBinContent(17,4.06244);
   VbbHcc_ZPt_all_stack_5->SetBinContent(18,3.72933);
   VbbHcc_ZPt_all_stack_5->SetBinContent(19,2.240284);
   VbbHcc_ZPt_all_stack_5->SetBinContent(20,1.546031);
   VbbHcc_ZPt_all_stack_5->SetBinContent(21,1.343164);
   VbbHcc_ZPt_all_stack_5->SetBinContent(22,1.11126);
   VbbHcc_ZPt_all_stack_5->SetBinContent(23,0.4665289);
   VbbHcc_ZPt_all_stack_5->SetBinContent(24,0.3532598);
   VbbHcc_ZPt_all_stack_5->SetBinContent(25,0.3286912);
   VbbHcc_ZPt_all_stack_5->SetBinContent(26,0.1759031);
   VbbHcc_ZPt_all_stack_5->SetBinContent(27,0.3575725);
   VbbHcc_ZPt_all_stack_5->SetBinContent(28,0.005844376);
   VbbHcc_ZPt_all_stack_5->SetBinContent(29,0.2589051);
   VbbHcc_ZPt_all_stack_5->SetBinContent(30,0.2753138);
   VbbHcc_ZPt_all_stack_5->SetBinContent(31,0.003027706);
   VbbHcc_ZPt_all_stack_5->SetBinContent(32,0.003623419);
   VbbHcc_ZPt_all_stack_5->SetBinContent(33,0.002264771);
   VbbHcc_ZPt_all_stack_5->SetBinContent(34,0.001732912);
   VbbHcc_ZPt_all_stack_5->SetBinContent(35,0.00157739);
   VbbHcc_ZPt_all_stack_5->SetBinContent(36,0.1754653);
   VbbHcc_ZPt_all_stack_5->SetBinContent(37,0.0001339259);
   VbbHcc_ZPt_all_stack_5->SetBinContent(38,0.0002820718);
   VbbHcc_ZPt_all_stack_5->SetBinContent(39,0.0007577301);
   VbbHcc_ZPt_all_stack_5->SetBinContent(40,0.0002584708);
   VbbHcc_ZPt_all_stack_5->SetBinContent(41,0.0004345807);
   VbbHcc_ZPt_all_stack_5->SetBinError(2,23.48356);
   VbbHcc_ZPt_all_stack_5->SetBinError(3,27.68521);
   VbbHcc_ZPt_all_stack_5->SetBinError(4,26.64711);
   VbbHcc_ZPt_all_stack_5->SetBinError(5,18.76762);
   VbbHcc_ZPt_all_stack_5->SetBinError(6,11.95802);
   VbbHcc_ZPt_all_stack_5->SetBinError(7,5.285806);
   VbbHcc_ZPt_all_stack_5->SetBinError(8,4.411591);
   VbbHcc_ZPt_all_stack_5->SetBinError(9,2.791215);
   VbbHcc_ZPt_all_stack_5->SetBinError(10,2.049996);
   VbbHcc_ZPt_all_stack_5->SetBinError(11,1.706618);
   VbbHcc_ZPt_all_stack_5->SetBinError(12,1.462467);
   VbbHcc_ZPt_all_stack_5->SetBinError(13,1.233606);
   VbbHcc_ZPt_all_stack_5->SetBinError(14,1.021234);
   VbbHcc_ZPt_all_stack_5->SetBinError(15,0.857937);
   VbbHcc_ZPt_all_stack_5->SetBinError(16,0.6884593);
   VbbHcc_ZPt_all_stack_5->SetBinError(17,0.5427502);
   VbbHcc_ZPt_all_stack_5->SetBinError(18,0.5397802);
   VbbHcc_ZPt_all_stack_5->SetBinError(19,0.386683);
   VbbHcc_ZPt_all_stack_5->SetBinError(20,0.3283069);
   VbbHcc_ZPt_all_stack_5->SetBinError(21,0.303865);
   VbbHcc_ZPt_all_stack_5->SetBinError(22,0.2887234);
   VbbHcc_ZPt_all_stack_5->SetBinError(23,0.1921105);
   VbbHcc_ZPt_all_stack_5->SetBinError(24,0.1614864);
   VbbHcc_ZPt_all_stack_5->SetBinError(25,0.1600262);
   VbbHcc_ZPt_all_stack_5->SetBinError(26,0.1053463);
   VbbHcc_ZPt_all_stack_5->SetBinError(27,0.1767618);
   VbbHcc_ZPt_all_stack_5->SetBinError(28,0.001177284);
   VbbHcc_ZPt_all_stack_5->SetBinError(29,0.1485376);
   VbbHcc_ZPt_all_stack_5->SetBinError(30,0.1464449);
   VbbHcc_ZPt_all_stack_5->SetBinError(31,0.0009322739);
   VbbHcc_ZPt_all_stack_5->SetBinError(32,0.001044089);
   VbbHcc_ZPt_all_stack_5->SetBinError(33,0.0007873461);
   VbbHcc_ZPt_all_stack_5->SetBinError(34,0.0007115021);
   VbbHcc_ZPt_all_stack_5->SetBinError(35,0.0006731055);
   VbbHcc_ZPt_all_stack_5->SetBinError(36,0.1056429);
   VbbHcc_ZPt_all_stack_5->SetBinError(37,9.46999e-05);
   VbbHcc_ZPt_all_stack_5->SetBinError(38,0.0001411963);
   VbbHcc_ZPt_all_stack_5->SetBinError(39,0.0005383644);
   VbbHcc_ZPt_all_stack_5->SetBinError(40,0.0001292539);
   VbbHcc_ZPt_all_stack_5->SetBinError(41,0.0001775295);
   VbbHcc_ZPt_all_stack_5->SetEntries(24313);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_ZPt_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_all_stack_5->SetLineColor(ci);
   VbbHcc_ZPt_all_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_all_stack_5,"");
   
   TH1D *VbbHcc_ZPt_all_stack_6 = new TH1D("VbbHcc_ZPt_all_stack_6","",40,0,2000);
   VbbHcc_ZPt_all_stack_6->SetBinContent(2,20.19664);
   VbbHcc_ZPt_all_stack_6->SetBinContent(3,13.7079);
   VbbHcc_ZPt_all_stack_6->SetBinContent(4,7.49174);
   VbbHcc_ZPt_all_stack_6->SetBinContent(5,4.641733);
   VbbHcc_ZPt_all_stack_6->SetBinContent(6,2.11352);
   VbbHcc_ZPt_all_stack_6->SetBinContent(7,2.577034);
   VbbHcc_ZPt_all_stack_6->SetBinContent(8,0.1747485);
   VbbHcc_ZPt_all_stack_6->SetBinContent(9,1.155592);
   VbbHcc_ZPt_all_stack_6->SetBinContent(10,0.4783402);
   VbbHcc_ZPt_all_stack_6->SetBinContent(11,0.1881884);
   VbbHcc_ZPt_all_stack_6->SetBinContent(13,0.2064923);
   VbbHcc_ZPt_all_stack_6->SetBinError(2,1.906811);
   VbbHcc_ZPt_all_stack_6->SetBinError(3,1.614841);
   VbbHcc_ZPt_all_stack_6->SetBinError(4,1.047245);
   VbbHcc_ZPt_all_stack_6->SetBinError(5,0.941484);
   VbbHcc_ZPt_all_stack_6->SetBinError(6,0.6272179);
   VbbHcc_ZPt_all_stack_6->SetBinError(7,0.6927846);
   VbbHcc_ZPt_all_stack_6->SetBinError(8,0.1235659);
   VbbHcc_ZPt_all_stack_6->SetBinError(9,0.4942593);
   VbbHcc_ZPt_all_stack_6->SetBinError(10,0.33827);
   VbbHcc_ZPt_all_stack_6->SetBinError(11,0.1330693);
   VbbHcc_ZPt_all_stack_6->SetBinError(13,0.1460121);
   VbbHcc_ZPt_all_stack_6->SetEntries(365);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_ZPt_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_all_stack_6->SetLineColor(ci);
   VbbHcc_ZPt_all_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_all_stack_6,"");
   
   TH1D *VbbHcc_ZPt_all_stack_7 = new TH1D("VbbHcc_ZPt_all_stack_7","",40,0,2000);
   VbbHcc_ZPt_all_stack_7->SetBinContent(2,53.61039);
   VbbHcc_ZPt_all_stack_7->SetBinContent(3,34.76145);
   VbbHcc_ZPt_all_stack_7->SetBinContent(4,21.52091);
   VbbHcc_ZPt_all_stack_7->SetBinContent(5,11.01608);
   VbbHcc_ZPt_all_stack_7->SetBinContent(6,6.574325);
   VbbHcc_ZPt_all_stack_7->SetBinContent(7,3.761342);
   VbbHcc_ZPt_all_stack_7->SetBinContent(8,2.298021);
   VbbHcc_ZPt_all_stack_7->SetBinContent(9,1.35062);
   VbbHcc_ZPt_all_stack_7->SetBinContent(10,0.2946071);
   VbbHcc_ZPt_all_stack_7->SetBinContent(11,0.2335327);
   VbbHcc_ZPt_all_stack_7->SetBinContent(12,0.1701205);
   VbbHcc_ZPt_all_stack_7->SetBinContent(14,0.1844377);
   VbbHcc_ZPt_all_stack_7->SetBinContent(15,0.1247279);
   VbbHcc_ZPt_all_stack_7->SetBinContent(16,0.1355451);
   VbbHcc_ZPt_all_stack_7->SetBinError(2,2.658435);
   VbbHcc_ZPt_all_stack_7->SetBinError(3,2.074224);
   VbbHcc_ZPt_all_stack_7->SetBinError(4,1.62495);
   VbbHcc_ZPt_all_stack_7->SetBinError(5,1.174529);
   VbbHcc_ZPt_all_stack_7->SetBinError(6,0.9124033);
   VbbHcc_ZPt_all_stack_7->SetBinError(7,0.6475643);
   VbbHcc_ZPt_all_stack_7->SetBinError(8,0.5220559);
   VbbHcc_ZPt_all_stack_7->SetBinError(9,0.418759);
   VbbHcc_ZPt_all_stack_7->SetBinError(10,0.1778774);
   VbbHcc_ZPt_all_stack_7->SetBinError(11,0.1402673);
   VbbHcc_ZPt_all_stack_7->SetBinError(12,0.1701205);
   VbbHcc_ZPt_all_stack_7->SetBinError(14,0.1844377);
   VbbHcc_ZPt_all_stack_7->SetBinError(15,0.1247279);
   VbbHcc_ZPt_all_stack_7->SetBinError(16,0.09584485);
   VbbHcc_ZPt_all_stack_7->SetEntries(1328);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_ZPt_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_all_stack_7->SetLineColor(ci);
   VbbHcc_ZPt_all_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_all_stack_7,"");
   
   TH1D *VbbHcc_ZPt_all_stack_8 = new TH1D("VbbHcc_ZPt_all_stack_8","",40,0,2000);
   VbbHcc_ZPt_all_stack_8->SetBinContent(2,323.1104);
   VbbHcc_ZPt_all_stack_8->SetBinContent(3,134.0202);
   VbbHcc_ZPt_all_stack_8->SetBinContent(4,64.60603);
   VbbHcc_ZPt_all_stack_8->SetBinContent(5,27.72047);
   VbbHcc_ZPt_all_stack_8->SetBinContent(6,15.50427);
   VbbHcc_ZPt_all_stack_8->SetBinContent(7,9.757963);
   VbbHcc_ZPt_all_stack_8->SetBinContent(8,3.481057);
   VbbHcc_ZPt_all_stack_8->SetBinContent(9,1.363804);
   VbbHcc_ZPt_all_stack_8->SetBinContent(10,1.270445);
   VbbHcc_ZPt_all_stack_8->SetBinContent(12,0.4150588);
   VbbHcc_ZPt_all_stack_8->SetBinContent(13,0.4311133);
   VbbHcc_ZPt_all_stack_8->SetBinContent(14,0.2310328);
   VbbHcc_ZPt_all_stack_8->SetBinError(2,8.169887);
   VbbHcc_ZPt_all_stack_8->SetBinError(3,5.3033);
   VbbHcc_ZPt_all_stack_8->SetBinError(4,3.664318);
   VbbHcc_ZPt_all_stack_8->SetBinError(5,2.418386);
   VbbHcc_ZPt_all_stack_8->SetBinError(6,1.804307);
   VbbHcc_ZPt_all_stack_8->SetBinError(7,1.410191);
   VbbHcc_ZPt_all_stack_8->SetBinError(8,0.8460472);
   VbbHcc_ZPt_all_stack_8->SetBinError(9,0.5179917);
   VbbHcc_ZPt_all_stack_8->SetBinError(10,0.4819897);
   VbbHcc_ZPt_all_stack_8->SetBinError(12,0.2935213);
   VbbHcc_ZPt_all_stack_8->SetBinError(13,0.3048431);
   VbbHcc_ZPt_all_stack_8->SetBinError(14,0.2310328);
   VbbHcc_ZPt_all_stack_8->SetEntries(2883);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_ZPt_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_all_stack_8->SetLineColor(ci);
   VbbHcc_ZPt_all_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_all_stack_8,"");
   
   TH1D *VbbHcc_ZPt_all_stack_9 = new TH1D("VbbHcc_ZPt_all_stack_9","",40,0,2000);
   VbbHcc_ZPt_all_stack_9->SetBinContent(2,187.4875);
   VbbHcc_ZPt_all_stack_9->SetBinContent(3,101.6183);
   VbbHcc_ZPt_all_stack_9->SetBinContent(4,47.43901);
   VbbHcc_ZPt_all_stack_9->SetBinContent(5,25.47216);
   VbbHcc_ZPt_all_stack_9->SetBinContent(6,13.64114);
   VbbHcc_ZPt_all_stack_9->SetBinContent(7,7.68696);
   VbbHcc_ZPt_all_stack_9->SetBinContent(8,4.195574);
   VbbHcc_ZPt_all_stack_9->SetBinContent(9,2.113773);
   VbbHcc_ZPt_all_stack_9->SetBinContent(10,0.9750953);
   VbbHcc_ZPt_all_stack_9->SetBinContent(11,0.3537588);
   VbbHcc_ZPt_all_stack_9->SetBinContent(12,0.2013772);
   VbbHcc_ZPt_all_stack_9->SetBinContent(13,0.07675859);
   VbbHcc_ZPt_all_stack_9->SetBinContent(14,0.04854189);
   VbbHcc_ZPt_all_stack_9->SetBinContent(15,0.01948954);
   VbbHcc_ZPt_all_stack_9->SetBinContent(16,0.01797425);
   VbbHcc_ZPt_all_stack_9->SetBinContent(17,0.0177834);
   VbbHcc_ZPt_all_stack_9->SetBinContent(18,0.006764765);
   VbbHcc_ZPt_all_stack_9->SetBinContent(19,0.006916369);
   VbbHcc_ZPt_all_stack_9->SetBinError(2,0.5776519);
   VbbHcc_ZPt_all_stack_9->SetBinError(3,0.4233863);
   VbbHcc_ZPt_all_stack_9->SetBinError(4,0.2886401);
   VbbHcc_ZPt_all_stack_9->SetBinError(5,0.2112183);
   VbbHcc_ZPt_all_stack_9->SetBinError(6,0.1547186);
   VbbHcc_ZPt_all_stack_9->SetBinError(7,0.1154383);
   VbbHcc_ZPt_all_stack_9->SetBinError(8,0.08515029);
   VbbHcc_ZPt_all_stack_9->SetBinError(9,0.06109838);
   VbbHcc_ZPt_all_stack_9->SetBinError(10,0.04068019);
   VbbHcc_ZPt_all_stack_9->SetBinError(11,0.02462412);
   VbbHcc_ZPt_all_stack_9->SetBinError(12,0.01848326);
   VbbHcc_ZPt_all_stack_9->SetBinError(13,0.01155056);
   VbbHcc_ZPt_all_stack_9->SetBinError(14,0.008705046);
   VbbHcc_ZPt_all_stack_9->SetBinError(15,0.005965906);
   VbbHcc_ZPt_all_stack_9->SetBinError(16,0.005513785);
   VbbHcc_ZPt_all_stack_9->SetBinError(17,0.005420068);
   VbbHcc_ZPt_all_stack_9->SetBinError(18,0.003407754);
   VbbHcc_ZPt_all_stack_9->SetBinError(19,0.003497522);
   VbbHcc_ZPt_all_stack_9->SetEntries(249013);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_ZPt_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_all_stack_9->SetLineColor(ci);
   VbbHcc_ZPt_all_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_all_stack_9,"");
   
   TH1D *VbbHcc_ZPt_all_stack_10 = new TH1D("VbbHcc_ZPt_all_stack_10","",40,0,2000);
   VbbHcc_ZPt_all_stack_10->SetBinContent(2,29.19589);
   VbbHcc_ZPt_all_stack_10->SetBinContent(3,26.11744);
   VbbHcc_ZPt_all_stack_10->SetBinContent(4,15.83268);
   VbbHcc_ZPt_all_stack_10->SetBinContent(5,8.320092);
   VbbHcc_ZPt_all_stack_10->SetBinContent(6,4.185866);
   VbbHcc_ZPt_all_stack_10->SetBinContent(7,2.063087);
   VbbHcc_ZPt_all_stack_10->SetBinContent(8,1.12533);
   VbbHcc_ZPt_all_stack_10->SetBinContent(9,0.5550505);
   VbbHcc_ZPt_all_stack_10->SetBinContent(10,0.2873763);
   VbbHcc_ZPt_all_stack_10->SetBinContent(11,0.1942911);
   VbbHcc_ZPt_all_stack_10->SetBinContent(12,0.1003704);
   VbbHcc_ZPt_all_stack_10->SetBinContent(13,0.08199072);
   VbbHcc_ZPt_all_stack_10->SetBinContent(14,0.04514055);
   VbbHcc_ZPt_all_stack_10->SetBinContent(15,0.03148901);
   VbbHcc_ZPt_all_stack_10->SetBinContent(16,0.01443944);
   VbbHcc_ZPt_all_stack_10->SetBinContent(17,0.006035246);
   VbbHcc_ZPt_all_stack_10->SetBinContent(18,0.008712271);
   VbbHcc_ZPt_all_stack_10->SetBinContent(19,0.008693981);
   VbbHcc_ZPt_all_stack_10->SetBinContent(20,0.003701712);
   VbbHcc_ZPt_all_stack_10->SetBinContent(21,0.003761128);
   VbbHcc_ZPt_all_stack_10->SetBinContent(22,0.003815183);
   VbbHcc_ZPt_all_stack_10->SetBinContent(23,0.006216416);
   VbbHcc_ZPt_all_stack_10->SetBinContent(24,0.003756558);
   VbbHcc_ZPt_all_stack_10->SetBinContent(25,0.001226685);
   VbbHcc_ZPt_all_stack_10->SetBinContent(26,0.001187214);
   VbbHcc_ZPt_all_stack_10->SetBinContent(27,0.001236682);
   VbbHcc_ZPt_all_stack_10->SetBinError(2,0.109585);
   VbbHcc_ZPt_all_stack_10->SetBinError(3,0.1036082);
   VbbHcc_ZPt_all_stack_10->SetBinError(4,0.0805696);
   VbbHcc_ZPt_all_stack_10->SetBinError(5,0.05834102);
   VbbHcc_ZPt_all_stack_10->SetBinError(6,0.04137123);
   VbbHcc_ZPt_all_stack_10->SetBinError(7,0.02902056);
   VbbHcc_ZPt_all_stack_10->SetBinError(8,0.02141306);
   VbbHcc_ZPt_all_stack_10->SetBinError(9,0.0149732);
   VbbHcc_ZPt_all_stack_10->SetBinError(10,0.0107778);
   VbbHcc_ZPt_all_stack_10->SetBinError(11,0.008911421);
   VbbHcc_ZPt_all_stack_10->SetBinError(12,0.006405797);
   VbbHcc_ZPt_all_stack_10->SetBinError(13,0.005810555);
   VbbHcc_ZPt_all_stack_10->SetBinError(14,0.004302029);
   VbbHcc_ZPt_all_stack_10->SetBinError(15,0.003582506);
   VbbHcc_ZPt_all_stack_10->SetBinError(16,0.002373557);
   VbbHcc_ZPt_all_stack_10->SetBinError(17,0.001564612);
   VbbHcc_ZPt_all_stack_10->SetBinError(18,0.001907995);
   VbbHcc_ZPt_all_stack_10->SetBinError(19,0.001905949);
   VbbHcc_ZPt_all_stack_10->SetBinError(20,0.001237003);
   VbbHcc_ZPt_all_stack_10->SetBinError(21,0.001258989);
   VbbHcc_ZPt_all_stack_10->SetBinError(22,0.001276442);
   VbbHcc_ZPt_all_stack_10->SetBinError(23,0.001611619);
   VbbHcc_ZPt_all_stack_10->SetBinError(24,0.001257475);
   VbbHcc_ZPt_all_stack_10->SetBinError(25,0.0007099981);
   VbbHcc_ZPt_all_stack_10->SetBinError(26,0.0006871526);
   VbbHcc_ZPt_all_stack_10->SetBinError(27,0.0007157839);
   VbbHcc_ZPt_all_stack_10->SetEntries(218730);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_ZPt_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_all_stack_10->SetLineColor(ci);
   VbbHcc_ZPt_all_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_all_stack_10,"");
   
   TH1D *VbbHcc_ZPt_all_stack_11 = new TH1D("VbbHcc_ZPt_all_stack_11","",40,0,2000);
   VbbHcc_ZPt_all_stack_11->SetBinContent(2,5.889113);
   VbbHcc_ZPt_all_stack_11->SetBinContent(3,4.558334);
   VbbHcc_ZPt_all_stack_11->SetBinContent(4,2.383026);
   VbbHcc_ZPt_all_stack_11->SetBinContent(5,1.26551);
   VbbHcc_ZPt_all_stack_11->SetBinContent(6,0.7184073);
   VbbHcc_ZPt_all_stack_11->SetBinContent(7,0.4493853);
   VbbHcc_ZPt_all_stack_11->SetBinContent(8,0.2577076);
   VbbHcc_ZPt_all_stack_11->SetBinContent(9,0.1317298);
   VbbHcc_ZPt_all_stack_11->SetBinContent(10,0.07617916);
   VbbHcc_ZPt_all_stack_11->SetBinContent(11,0.04540191);
   VbbHcc_ZPt_all_stack_11->SetBinContent(12,0.01868578);
   VbbHcc_ZPt_all_stack_11->SetBinContent(13,0.01788778);
   VbbHcc_ZPt_all_stack_11->SetBinContent(14,0.007729033);
   VbbHcc_ZPt_all_stack_11->SetBinContent(15,0.001759743);
   VbbHcc_ZPt_all_stack_11->SetBinContent(16,0.0003127168);
   VbbHcc_ZPt_all_stack_11->SetBinContent(17,0.003090375);
   VbbHcc_ZPt_all_stack_11->SetBinContent(18,2.430881e-05);
   VbbHcc_ZPt_all_stack_11->SetBinContent(21,0.003028333);
   VbbHcc_ZPt_all_stack_11->SetBinContent(26,0.006068105);
   VbbHcc_ZPt_all_stack_11->SetBinContent(30,0.003126434);
   VbbHcc_ZPt_all_stack_11->SetBinError(2,0.1094115);
   VbbHcc_ZPt_all_stack_11->SetBinError(3,0.09494026);
   VbbHcc_ZPt_all_stack_11->SetBinError(4,0.06792925);
   VbbHcc_ZPt_all_stack_11->SetBinError(5,0.05037106);
   VbbHcc_ZPt_all_stack_11->SetBinError(6,0.0382446);
   VbbHcc_ZPt_all_stack_11->SetBinError(7,0.02936321);
   VbbHcc_ZPt_all_stack_11->SetBinError(8,0.02275887);
   VbbHcc_ZPt_all_stack_11->SetBinError(9,0.01598976);
   VbbHcc_ZPt_all_stack_11->SetBinError(10,0.01224521);
   VbbHcc_ZPt_all_stack_11->SetBinError(11,0.009073354);
   VbbHcc_ZPt_all_stack_11->SetBinError(12,0.005394935);
   VbbHcc_ZPt_all_stack_11->SetBinError(13,0.005546233);
   VbbHcc_ZPt_all_stack_11->SetBinError(14,0.0036281);
   VbbHcc_ZPt_all_stack_11->SetBinError(15,0.001244326);
   VbbHcc_ZPt_all_stack_11->SetBinError(16,0.0002211241);
   VbbHcc_ZPt_all_stack_11->SetBinError(17,0.002185225);
   VbbHcc_ZPt_all_stack_11->SetBinError(18,2.430881e-05);
   VbbHcc_ZPt_all_stack_11->SetBinError(21,0.002141355);
   VbbHcc_ZPt_all_stack_11->SetBinError(26,0.003034107);
   VbbHcc_ZPt_all_stack_11->SetBinError(30,0.002210723);
   VbbHcc_ZPt_all_stack_11->SetEntries(9805);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_ZPt_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_all_stack_11->SetLineColor(ci);
   VbbHcc_ZPt_all_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_all_stack_11,"");
   
   TH1D *VbbHcc_ZPt_all_stack_12 = new TH1D("VbbHcc_ZPt_all_stack_12","",40,0,2000);
   VbbHcc_ZPt_all_stack_12->SetBinContent(2,1.035485);
   VbbHcc_ZPt_all_stack_12->SetBinContent(3,1.465021);
   VbbHcc_ZPt_all_stack_12->SetBinContent(4,1.125475);
   VbbHcc_ZPt_all_stack_12->SetBinContent(5,0.66267);
   VbbHcc_ZPt_all_stack_12->SetBinContent(6,0.3665892);
   VbbHcc_ZPt_all_stack_12->SetBinContent(7,0.1974805);
   VbbHcc_ZPt_all_stack_12->SetBinContent(8,0.1035765);
   VbbHcc_ZPt_all_stack_12->SetBinContent(9,0.04848309);
   VbbHcc_ZPt_all_stack_12->SetBinContent(10,0.02423235);
   VbbHcc_ZPt_all_stack_12->SetBinContent(11,0.01564237);
   VbbHcc_ZPt_all_stack_12->SetBinContent(12,0.011442);
   VbbHcc_ZPt_all_stack_12->SetBinContent(13,0.009092511);
   VbbHcc_ZPt_all_stack_12->SetBinContent(14,0.007413573);
   VbbHcc_ZPt_all_stack_12->SetBinContent(15,0.003893092);
   VbbHcc_ZPt_all_stack_12->SetBinContent(16,0.001896401);
   VbbHcc_ZPt_all_stack_12->SetBinContent(17,0.002736982);
   VbbHcc_ZPt_all_stack_12->SetBinContent(18,0.002268366);
   VbbHcc_ZPt_all_stack_12->SetBinContent(19,0.0003894441);
   VbbHcc_ZPt_all_stack_12->SetBinContent(20,0.0003784474);
   VbbHcc_ZPt_all_stack_12->SetBinContent(21,0.0003830077);
   VbbHcc_ZPt_all_stack_12->SetBinContent(22,0.0007568948);
   VbbHcc_ZPt_all_stack_12->SetBinContent(23,0.0008757315);
   VbbHcc_ZPt_all_stack_12->SetBinContent(26,0.0004254022);
   VbbHcc_ZPt_all_stack_12->SetBinContent(27,0.0004236625);
   VbbHcc_ZPt_all_stack_12->SetBinContent(34,0.0004115797);
   VbbHcc_ZPt_all_stack_12->SetBinContent(35,0.0003784376);
   VbbHcc_ZPt_all_stack_12->SetBinContent(39,0.0003862007);
   VbbHcc_ZPt_all_stack_12->SetBinError(2,0.01607865);
   VbbHcc_ZPt_all_stack_12->SetBinError(3,0.01911135);
   VbbHcc_ZPt_all_stack_12->SetBinError(4,0.01675141);
   VbbHcc_ZPt_all_stack_12->SetBinError(5,0.01270305);
   VbbHcc_ZPt_all_stack_12->SetBinError(6,0.009363237);
   VbbHcc_ZPt_all_stack_12->SetBinError(7,0.006912978);
   VbbHcc_ZPt_all_stack_12->SetBinError(8,0.00489792);
   VbbHcc_ZPt_all_stack_12->SetBinError(9,0.00322297);
   VbbHcc_ZPt_all_stack_12->SetBinError(10,0.002355866);
   VbbHcc_ZPt_all_stack_12->SetBinError(11,0.001857046);
   VbbHcc_ZPt_all_stack_12->SetBinError(12,0.001501482);
   VbbHcc_ZPt_all_stack_12->SetBinError(13,0.001358054);
   VbbHcc_ZPt_all_stack_12->SetBinError(14,0.001211722);
   VbbHcc_ZPt_all_stack_12->SetBinError(15,0.0008915534);
   VbbHcc_ZPt_all_stack_12->SetBinError(16,0.0006120126);
   VbbHcc_ZPt_all_stack_12->SetBinError(17,0.0007097559);
   VbbHcc_ZPt_all_stack_12->SetBinError(18,0.0006578613);
   VbbHcc_ZPt_all_stack_12->SetBinError(19,0.0002753786);
   VbbHcc_ZPt_all_stack_12->SetBinError(20,0.0002676027);
   VbbHcc_ZPt_all_stack_12->SetBinError(21,0.0002708273);
   VbbHcc_ZPt_all_stack_12->SetBinError(22,0.0003784474);
   VbbHcc_ZPt_all_stack_12->SetBinError(23,0.0004033287);
   VbbHcc_ZPt_all_stack_12->SetBinError(26,0.0003008048);
   VbbHcc_ZPt_all_stack_12->SetBinError(27,0.0002995746);
   VbbHcc_ZPt_all_stack_12->SetBinError(34,0.0002910308);
   VbbHcc_ZPt_all_stack_12->SetBinError(35,0.0002675958);
   VbbHcc_ZPt_all_stack_12->SetBinError(39,0.0002730851);
   VbbHcc_ZPt_all_stack_12->SetEntries(24305);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_ZPt_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_all_stack_12->SetLineColor(ci);
   VbbHcc_ZPt_all_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZPt_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_ZPt_all__23 = new TH1D("VbbHcc_ZPt_all__23","",40,0,2000);
   VbbHcc_ZPt_all__23->SetBinContent(2,115292);
   VbbHcc_ZPt_all__23->SetBinContent(3,143772);
   VbbHcc_ZPt_all__23->SetBinContent(4,112062);
   VbbHcc_ZPt_all__23->SetBinContent(5,71299);
   VbbHcc_ZPt_all__23->SetBinContent(6,45488);
   VbbHcc_ZPt_all__23->SetBinContent(7,30388);
   VbbHcc_ZPt_all__23->SetBinContent(8,19844);
   VbbHcc_ZPt_all__23->SetBinContent(9,12369);
   VbbHcc_ZPt_all__23->SetBinContent(10,7530);
   VbbHcc_ZPt_all__23->SetBinContent(11,4467);
   VbbHcc_ZPt_all__23->SetBinContent(12,2742);
   VbbHcc_ZPt_all__23->SetBinContent(13,1625);
   VbbHcc_ZPt_all__23->SetBinContent(14,1061);
   VbbHcc_ZPt_all__23->SetBinContent(15,706);
   VbbHcc_ZPt_all__23->SetBinContent(16,444);
   VbbHcc_ZPt_all__23->SetBinContent(17,312);
   VbbHcc_ZPt_all__23->SetBinContent(18,194);
   VbbHcc_ZPt_all__23->SetBinContent(19,135);
   VbbHcc_ZPt_all__23->SetBinContent(20,77);
   VbbHcc_ZPt_all__23->SetBinContent(21,70);
   VbbHcc_ZPt_all__23->SetBinContent(22,43);
   VbbHcc_ZPt_all__23->SetBinContent(23,32);
   VbbHcc_ZPt_all__23->SetBinContent(24,23);
   VbbHcc_ZPt_all__23->SetBinContent(25,10);
   VbbHcc_ZPt_all__23->SetBinContent(26,23);
   VbbHcc_ZPt_all__23->SetBinContent(27,5);
   VbbHcc_ZPt_all__23->SetBinContent(28,4);
   VbbHcc_ZPt_all__23->SetBinContent(29,5);
   VbbHcc_ZPt_all__23->SetBinContent(30,1);
   VbbHcc_ZPt_all__23->SetBinContent(31,1);
   VbbHcc_ZPt_all__23->SetBinContent(32,1);
   VbbHcc_ZPt_all__23->SetEntries(570025);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZPt_all__23->SetLineColor(ci);
   VbbHcc_ZPt_all__23->SetLineWidth(2);
   VbbHcc_ZPt_all__23->SetMarkerStyle(20);
   VbbHcc_ZPt_all__23->SetMarkerSize(1.2);
   VbbHcc_ZPt_all__23->GetXaxis()->SetRange(1,2000);
   VbbHcc_ZPt_all__23->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all__23->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all__23->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all__23->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all__23->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all__23->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all__23->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all__23->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZPt_all__23->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all__23->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZPt_all__23->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZPt_all__23->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZPt_all__23->GetZaxis()->SetTitleFont(42);
   VbbHcc_ZPt_all__23->Draw("same E");
   
   Double_t Graph_from_VbbHcc_ZPt_all_fx1023[40] = {
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
   Double_t Graph_from_VbbHcc_ZPt_all_fy1023[40] = {
   0,
   754307.3,
   865664.7,
   520149.1,
   194043.3,
   75550.97,
   32225.98,
   15938.34,
   7892.688,
   4620.441,
   2381.322,
   1462.172,
   1088.574,
   618.3794,
   352.1597,
   250.1397,
   184.4004,
   100.8066,
   98.47249,
   46.67469,
   38.28017,
   25.80245,
   21.31047,
   11.94302,
   10.28369,
   6.520365,
   2.968239,
   3.15163,
   3.801441,
   3.107169,
   0.1736006,
   1.62923,
   0.984833,
   0.1587711,
   0.08788271,
   0.3176408,
   0.7320413,
   0.0002820718,
   0.1061559,
   0.0002584708};
   Double_t Graph_from_VbbHcc_ZPt_all_fex1023[40] = {
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
   Double_t Graph_from_VbbHcc_ZPt_all_fey1023[40] = {
   0,
   12603.1,
   13707.08,
   10294.04,
   4792.443,
   1613.781,
   605.6277,
   318.0668,
   188.332,
   132.5849,
   82.33388,
   56.8377,
   46.94436,
   30.53417,
   16.18627,
   10.24896,
   11.28749,
   5.433739,
   5.32945,
   3.022396,
   2.563495,
   2.029486,
   1.924485,
   1.311409,
   1.292317,
   1.024795,
   0.6470568,
   0.7994063,
   0.8367822,
   0.7388701,
   0.1206176,
   0.5108644,
   0.3755044,
   0.1107544,
   0.08592994,
   0.1458334,
   0.3836128,
   0.0001411963,
   0.07425874,
   0.0001292539};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_ZPt_all_fx1023,Graph_from_VbbHcc_ZPt_all_fy1023,Graph_from_VbbHcc_ZPt_all_fex1023,Graph_from_VbbHcc_ZPt_all_fey1023);
   gre->SetName("Graph_from_VbbHcc_ZPt_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_ZPt_all1023 = new TH1F("Graph_Graph_from_VbbHcc_ZPt_all1023","",100,0,2200);
   Graph_Graph_from_VbbHcc_ZPt_all1023->SetMinimum(0);
   Graph_Graph_from_VbbHcc_ZPt_all1023->SetMaximum(967309);
   Graph_Graph_from_VbbHcc_ZPt_all1023->SetDirectory(0);
   Graph_Graph_from_VbbHcc_ZPt_all1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_ZPt_all1023->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_ZPt_all1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZPt_all1023->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt_all1023->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt_all1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_ZPt_all1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZPt_all1023->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt_all1023->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt_all1023->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_ZPt_all1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_ZPt_all1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZPt_all1023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt_all1023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZPt_all1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_ZPt_all1023);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_ZPt_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_ZPt_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_ZPt_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_ZPt_all","MC unc. (stat.)","fl");

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
   ZPt_VbbHcc_all->cd();
  
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
   
   TH1D *data_mc_ratio__24 = new TH1D("data_mc_ratio__24","",40,0,2000);
   data_mc_ratio__24->SetBinContent(2,0.1528449);
   data_mc_ratio__24->SetBinContent(3,0.1660828);
   data_mc_ratio__24->SetBinContent(4,0.2154421);
   data_mc_ratio__24->SetBinContent(5,0.3674387);
   data_mc_ratio__24->SetBinContent(6,0.6020836);
   data_mc_ratio__24->SetBinContent(7,0.9429658);
   data_mc_ratio__24->SetBinContent(8,1.245048);
   data_mc_ratio__24->SetBinContent(9,1.567147);
   data_mc_ratio__24->SetBinContent(10,1.629715);
   data_mc_ratio__24->SetBinContent(11,1.875849);
   data_mc_ratio__24->SetBinContent(12,1.875293);
   data_mc_ratio__24->SetBinContent(13,1.492778);
   data_mc_ratio__24->SetBinContent(14,1.715775);
   data_mc_ratio__24->SetBinContent(15,2.004772);
   data_mc_ratio__24->SetBinContent(16,1.775008);
   data_mc_ratio__24->SetBinContent(17,1.691971);
   data_mc_ratio__24->SetBinContent(18,1.924477);
   data_mc_ratio__24->SetBinContent(19,1.370941);
   data_mc_ratio__24->SetBinContent(20,1.649716);
   data_mc_ratio__24->SetBinContent(21,1.828623);
   data_mc_ratio__24->SetBinContent(22,1.666508);
   data_mc_ratio__24->SetBinContent(23,1.501609);
   data_mc_ratio__24->SetBinContent(24,1.925811);
   data_mc_ratio__24->SetBinContent(25,0.9724136);
   data_mc_ratio__24->SetBinContent(26,3.52741);
   data_mc_ratio__24->SetBinContent(27,1.6845);
   data_mc_ratio__24->SetBinContent(28,1.269185);
   data_mc_ratio__24->SetBinContent(29,1.315291);
   data_mc_ratio__24->SetBinContent(30,0.3218364);
   data_mc_ratio__24->SetBinContent(31,5.760349);
   data_mc_ratio__24->SetBinContent(32,0.6137869);
   data_mc_ratio__24->SetBinError(2,0.0004501438);
   data_mc_ratio__24->SetBinError(3,0.0004380134);
   data_mc_ratio__24->SetBinError(4,0.0006435782);
   data_mc_ratio__24->SetBinError(5,0.001376078);
   data_mc_ratio__24->SetBinError(6,0.002822984);
   data_mc_ratio__24->SetBinError(7,0.005409348);
   data_mc_ratio__24->SetBinError(8,0.008838354);
   data_mc_ratio__24->SetBinError(9,0.01409102);
   data_mc_ratio__24->SetBinError(10,0.0187808);
   data_mc_ratio__24->SetBinError(11,0.0280666);
   data_mc_ratio__24->SetBinError(12,0.03581256);
   data_mc_ratio__24->SetBinError(13,0.03703127);
   data_mc_ratio__24->SetBinError(14,0.05267477);
   data_mc_ratio__24->SetBinError(15,0.07545061);
   data_mc_ratio__24->SetBinError(16,0.08423816);
   data_mc_ratio__24->SetBinError(17,0.09578897);
   data_mc_ratio__24->SetBinError(18,0.1381694);
   data_mc_ratio__24->SetBinError(19,0.1179918);
   data_mc_ratio__24->SetBinError(20,0.1880026);
   data_mc_ratio__24->SetBinError(21,0.2185623);
   data_mc_ratio__24->SetBinError(22,0.2541401);
   data_mc_ratio__24->SetBinError(23,0.2654495);
   data_mc_ratio__24->SetBinError(24,0.4015593);
   data_mc_ratio__24->SetBinError(25,0.3075042);
   data_mc_ratio__24->SetBinError(26,0.7355158);
   data_mc_ratio__24->SetBinError(27,0.7533315);
   data_mc_ratio__24->SetBinError(28,0.6345923);
   data_mc_ratio__24->SetBinError(29,0.5882159);
   data_mc_ratio__24->SetBinError(30,0.3218364);
   data_mc_ratio__24->SetBinError(31,5.760349);
   data_mc_ratio__24->SetBinError(32,0.6137869);
   data_mc_ratio__24->SetMinimum(0.4);
   data_mc_ratio__24->SetMaximum(1.6);
   data_mc_ratio__24->SetEntries(41.1168);
   data_mc_ratio__24->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__24->SetLineColor(ci);
   data_mc_ratio__24->SetLineWidth(2);
   data_mc_ratio__24->SetMarkerStyle(20);
   data_mc_ratio__24->SetMarkerSize(1.2);
   data_mc_ratio__24->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   data_mc_ratio__24->GetXaxis()->SetRange(7,30);
   data_mc_ratio__24->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__24->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__24->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__24->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__24->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__24->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__24->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__24->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__24->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__24->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__24->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__24->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__24->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__24->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1024[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1024[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1024[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1024[40] = {
   0,
   0.01670817,
   0.01583417,
   0.01979056,
   0.02469781,
   0.02136016,
   0.01879315,
   0.01995608,
   0.02386158,
   0.0286953,
   0.03457486,
   0.03887211,
   0.04312463,
   0.04937772,
   0.04596286,
   0.04097295,
   0.06121189,
   0.05390259,
   0.05412121,
   0.0647545,
   0.06696667,
   0.07865479,
   0.09030703,
   0.1098054,
   0.1256667,
   0.1571683,
   0.2179935,
   0.2536486,
   0.2201224,
   0.2377953,
   0.6947993,
   0.3135619,
   0.3812874,
   0.6975728,
   0.9777798,
   0.4591141,
   0.5240316,
   0.5005687,
   0.6995255,
   0.5000716};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1024,Graph_from_mc_statistical_error_fy1024,Graph_from_mc_statistical_error_fex1024,Graph_from_mc_statistical_error_fey1024);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1024 = new TH1F("Graph_Graph_from_mc_statistical_error1024","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1024->SetMinimum(0.01999821);
   Graph_Graph_from_mc_statistical_error1024->SetMaximum(2.173336);
   Graph_Graph_from_mc_statistical_error1024->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1024->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1024);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   ZPt_VbbHcc_all->cd();
   ZPt_VbbHcc_all->Modified();
   ZPt_VbbHcc_all->cd();
   ZPt_VbbHcc_all->SetSelected(ZPt_VbbHcc_all);
}
