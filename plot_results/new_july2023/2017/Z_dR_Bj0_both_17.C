void Z_dR_Bj0_both_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_17/Z_dR_Bj0_both_17
//=========  (Fri Jul 14 13:38:53 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_17 = new TCanvas("Z_dR_Bj0_both_17", "Z_dR_Bj0_both_17",0,0,600,600);
   Z_dR_Bj0_both_17->SetHighLightColor(2);
   Z_dR_Bj0_both_17->Range(0,0,1,1);
   Z_dR_Bj0_both_17->SetFillColor(0);
   Z_dR_Bj0_both_17->SetFillStyle(4000);
   Z_dR_Bj0_both_17->SetBorderMode(0);
   Z_dR_Bj0_both_17->SetBorderSize(2);
   Z_dR_Bj0_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-772.6458,6.314516,771883.1);
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
   st->SetMaximum(661540.5);
   
   TH1F *st_stack_242 = new TH1F("st_stack_242","",30,0,6);
   st_stack_242->SetMinimum(0.01);
   st_stack_242->SetMaximum(694617.6);
   st_stack_242->SetDirectory(0);
   st_stack_242->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_242->SetLineColor(ci);
   st_stack_242->GetXaxis()->SetRange(1,30);
   st_stack_242->GetXaxis()->SetLabelFont(42);
   st_stack_242->GetXaxis()->SetLabelSize(0.035);
   st_stack_242->GetXaxis()->SetTitleSize(0.035);
   st_stack_242->GetXaxis()->SetTitleFont(42);
   st_stack_242->GetYaxis()->SetTitle("Events/0.2");
   st_stack_242->GetYaxis()->SetLabelFont(42);
   st_stack_242->GetYaxis()->SetLabelSize(0.05);
   st_stack_242->GetYaxis()->SetTitleSize(0.057);
   st_stack_242->GetYaxis()->SetTitleOffset(1.2);
   st_stack_242->GetYaxis()->SetTitleFont(42);
   st_stack_242->GetZaxis()->SetLabelFont(42);
   st_stack_242->GetZaxis()->SetLabelSize(0.035);
   st_stack_242->GetZaxis()->SetTitleSize(0.035);
   st_stack_242->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_242);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,69196.68);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,269611.6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,247225.1);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,183288.5);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,118339.3);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,89540.76);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,85160.24);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,59907.61);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,50880.78);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,46459.4);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,41549.62);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,36098.93);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,31647.28);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,30162);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,24274.21);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,22810.13);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,19113.57);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,16003.43);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,11220.79);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,12198.48);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,11237.87);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,10317.4);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(23,6251.969);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,7149.973);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,3891.428);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(26,2816.174);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(27,1705.557);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(28,1252.101);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,779.5692);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(30,296.2592);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(31,816.0887);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,1828.287);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,5698.351);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,15738.87);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,20898.49);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,4356.396);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,4317.91);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,14721.79);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,3091.472);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,2678.108);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,3018.375);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,2909.36);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,2256.902);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,2148.687);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,2144.776);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,1596.174);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,2183.798);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,1795.639);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,1317.334);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,984.0409);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,1156.046);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,1172.397);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,1587.411);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(23,743.0046);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,955.4451);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,529.6894);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(26,456.172);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(27,136.3433);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(28,269.5789);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,259.5091);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(30,57.30313);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(31,357.3718);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(166831);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,316.8737);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,1656.071);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,2234.695);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,2056.439);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,1774.43);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,1441.85);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,1214.468);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,1015.294);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,901.4943);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,782.3649);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,702.1437);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,633.6434);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,574.3141);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,502.3772);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,424.5789);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,378.3584);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,314.8223);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,253.56);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,202.929);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,169.2899);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,142.9141);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,105.7597);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,82.23845);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,62.22221);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,44.05035);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,30.71102);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,23.00295);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(28,14.50857);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(29,8.697282);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(30,6.275085);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(31,10.41466);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,7.411057);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,16.19828);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,18.70345);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,17.94058);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,16.79628);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,15.05329);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,13.83294);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,12.5168);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,11.88171);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,10.97169);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,10.437);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,9.948225);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,9.508576);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,8.878464);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,8.129321);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,7.841071);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,7.144396);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,6.37873);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,5.695085);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,5.234336);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,4.879927);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,4.18874);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,3.700764);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,3.164313);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,2.696269);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,2.307713);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,2.039115);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(28,1.635936);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(29,1.150367);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(30,1.072663);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(31,1.362692);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(217888);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(1,3272.147);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(2,22874.03);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(3,36290.87);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(4,37036.45);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(5,31868.37);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(6,25760.59);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(7,20939.53);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(8,17648.38);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(9,15526.86);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(10,14069.89);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(11,12890.63);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(12,11858.4);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(13,10582.7);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(14,9163.916);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(15,7750.316);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(16,6515.999);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(17,5250.892);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(18,4208.762);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(19,3331.437);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(20,2600.104);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(21,1955.945);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(22,1483.364);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(23,1072.279);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(24,776.7302);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(25,563.7926);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(26,380.1775);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(27,261.4789);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(28,164.9159);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(29,110.2813);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(30,68.14615);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinContent(31,117.4863);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(1,14.65819);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(2,38.75727);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(3,48.90826);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(4,49.47626);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(5,45.90948);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(6,41.26098);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(7,37.19779);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(8,34.14551);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(9,32.04197);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(10,30.50567);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(11,29.22086);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(12,28.04364);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(13,26.4991);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(14,24.6431);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(15,22.65424);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(16,20.77523);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(17,18.64304);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(18,16.67667);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(19,14.83936);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(20,13.09721);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(21,11.34815);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(22,9.895174);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(23,8.398596);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(24,7.132866);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(25,6.079998);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(26,5.000095);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(27,4.132575);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(28,3.284552);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(29,2.675629);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(30,2.104316);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetBinError(31,2.762814);
   VbbHcc_both_Z_dR_Bj0_stack_3->SetEntries(4843140);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(1,622.2645);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(2,2206.653);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(3,2234.947);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(4,1498.183);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(5,942.4348);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(6,696.9586);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(7,528.8735);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(8,409.5999);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(9,372.4118);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(10,322.9391);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(11,285.6028);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(12,288.8227);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(13,248.8433);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(14,208.4858);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(15,189.5764);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(16,172.6661);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(17,145.2967);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(18,123.079);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(19,105.452);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(20,95.75003);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(21,71.88458);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(22,73.65614);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(23,56.48437);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(24,42.0817);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(25,35.1956);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(26,20.55387);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(27,20.06181);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(28,12.36237);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(29,4.570723);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(30,2.616822);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinContent(31,5.095566);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(1,8.614671);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(2,26.02874);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(3,29.20685);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(4,26.42813);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(5,22.18505);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(6,20.13465);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(7,15.68332);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(8,12.54877);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(9,13.6447);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(10,10.97216);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(11,10.84808);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(12,13.41742);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(13,10.48274);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(14,9.02629);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(15,7.953369);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(16,8.135409);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(17,7.42964);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(18,7.142949);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(19,5.232628);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(20,6.789478);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(21,5.125215);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(22,6.444672);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(23,4.983543);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(24,3.789017);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(25,2.508602);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(26,1.686472);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(27,1.791085);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(28,2.927174);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(29,0.8000713);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(30,0.5434327);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetBinError(31,0.9931861);
   VbbHcc_both_Z_dR_Bj0_stack_4->SetEntries(99118);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(1,371.7117);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(2,1278.246);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(3,1081.738);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(4,673.6237);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(5,517.6146);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(6,427.7444);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(7,301.2489);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(8,267.6056);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(9,229.3882);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(10,199.2071);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(11,159.2026);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(12,171.3672);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(13,146.8682);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(14,140.232);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(15,123.3108);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(16,111.7384);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(17,101.3698);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(18,77.94491);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(19,60.77343);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(20,72.7894);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(21,76.11785);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(22,30.08969);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(23,37.4558);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(24,22.32853);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(25,23.30418);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(26,16.53545);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(27,10.47315);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(28,5.390306);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(29,3.076094);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(30,3.068444);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinContent(31,2.758591);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(1,12.41552);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(2,35.87533);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(3,35.52369);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(4,30.17928);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(5,26.03068);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(6,24.49668);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(7,17.7399);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(8,19.56895);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(9,14.47757);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(10,13.87517);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(11,10.78598);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(12,14.44273);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(13,10.77079);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(14,12.39877);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(15,10.39908);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(16,13.15575);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(17,14.44575);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(18,10.75663);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(19,5.873043);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(20,12.57709);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(21,14.27132);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(22,3.505891);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(23,4.632807);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(24,2.79993);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(25,3.257174);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(26,2.431876);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(27,1.897913);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(28,0.8053696);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(29,0.5388918);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(30,1.277914);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetBinError(31,1.248456);
   VbbHcc_both_Z_dR_Bj0_stack_5->SetEntries(45557);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(1,1.814536);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(2,5.443609);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(3,5.241994);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(4,4.637148);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(5,3.225842);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(6,3.024227);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(7,2.217767);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(8,1.008076);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(9,2.419382);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(10,1.209691);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(11,0.8064606);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(12,1.209691);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(13,1.612921);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(14,1.411306);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(15,1.612921);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(16,1.008076);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(17,0.2016151);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(18,1.209691);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(19,0.4032303);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(20,0.6048454);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(22,0.2016151);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(23,0.2016151);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(25,0.2016151);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinContent(26,0.2016151);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(1,0.6048454);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(2,1.047623);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(3,1.02804);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(4,0.9669122);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(5,0.8064606);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(6,0.7808521);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(7,0.6686818);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(8,0.4508252);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(9,0.6984153);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(10,0.4938542);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(11,0.4032303);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(12,0.4938542);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(13,0.5702537);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(14,0.5334235);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(15,0.5702537);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(16,0.4508252);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(17,0.2016151);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(18,0.4938542);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(19,0.2851269);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(20,0.3492077);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(22,0.2016151);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(23,0.2016151);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(25,0.2016151);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetBinError(26,0.2016151);
   VbbHcc_both_Z_dR_Bj0_stack_6->SetEntries(204);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(1,6.530987);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(2,23.65669);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(3,19.88323);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(4,9.288514);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(5,5.515055);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(6,3.628326);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(7,2.176996);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(8,1.306197);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(9,2.176996);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(10,2.176996);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(11,2.176996);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(12,2.467262);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(13,1.161064);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(14,0.8707982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(15,1.015931);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(16,0.5805321);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(17,1.015931);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(18,0.8707982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(19,0.2902661);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(20,1.015931);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(21,0.8707982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(22,0.2902661);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(23,0.145133);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(24,0.145133);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(25,0.145133);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(26,0.145133);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(27,0.145133);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(28,0.2902661);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(1,0.973582);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(2,1.852935);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(3,1.698739);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(4,1.161064);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(5,0.8946601);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(6,0.7256652);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(7,0.5620978);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(8,0.4353991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(9,0.5620978);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(10,0.5620978);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(11,0.5620978);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(12,0.5983988);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(13,0.4104982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(14,0.3555019);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(15,0.3839859);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(16,0.2902661);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(17,0.3839859);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(18,0.3555019);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(19,0.2052491);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(20,0.3839859);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(21,0.3555019);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(22,0.2052491);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(23,0.145133);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(24,0.145133);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(25,0.145133);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(26,0.145133);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(27,0.145133);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(28,0.2052491);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetEntries(620);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(1,5.603192);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(2,17.93021);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(3,17.18312);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(4,13.07411);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(5,5.229646);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(6,4.8561);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(7,2.42805);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(8,3.922234);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(9,2.801596);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(10,1.494185);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(11,3.175142);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(12,1.867731);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(13,1.307411);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(14,2.054504);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(15,1.307411);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(16,0.9338654);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(17,0.1867731);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(18,0.3735461);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(19,0.5603192);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(20,0.9338654);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(21,0.5603192);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(22,0.5603192);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(23,0.1867731);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(24,0.7470923);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(25,0.1867731);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(26,0.1867731);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinContent(27,0.1867731);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(1,1.022998);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(2,1.829995);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(3,1.791464);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(4,1.562656);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(5,0.9883102);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(6,0.9523595);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(7,0.6734199);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(8,0.8559017);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(9,0.723369);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(10,0.528274);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(11,0.7700851);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(12,0.5906283);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(13,0.4941551);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(14,0.6194562);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(15,0.4941551);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(16,0.4176373);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(17,0.1867731);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(18,0.264137);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(19,0.3235004);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(20,0.4176373);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(21,0.3235004);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(22,0.3235004);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(23,0.1867731);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(24,0.3735461);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(25,0.1867731);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(26,0.1867731);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetBinError(27,0.1867731);
   VbbHcc_both_Z_dR_Bj0_stack_8->SetEntries(481);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(1,1.963982);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(2,9.926508);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(3,12.23128);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(4,9.706852);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(5,6.512151);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(6,3.961882);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(7,2.857142);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(8,2.230476);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(9,1.876766);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(10,1.699103);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(11,1.616732);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(12,1.574739);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(13,1.372849);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(14,1.140273);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(15,0.885084);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(16,0.7994829);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(17,0.6621979);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(18,0.5168374);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(19,0.4409269);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(20,0.3537106);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(21,0.3504804);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(22,0.3214083);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(23,0.2341919);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(24,0.1905838);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(25,0.1485908);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(26,0.1065977);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(27,0.05491397);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(28,0.01776629);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(29,0.009690701);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(30,0.001615117);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinContent(31,0.003230234);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(1,0.05632105);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(2,0.1266194);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(3,0.1405523);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(4,0.1252106);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(5,0.1025567);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(6,0.07999314);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(7,0.06793098);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(8,0.06002066);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(9,0.0550563);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(10,0.05238559);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(11,0.05110001);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(12,0.05043201);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(13,0.04708834);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(14,0.04291472);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(15,0.03780892);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(16,0.03593408);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(17,0.03270362);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(18,0.02889209);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(19,0.02668611);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(20,0.02390155);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(21,0.02379216);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(22,0.02278403);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(23,0.01944858);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(24,0.01754466);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(25,0.01549166);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(26,0.01312127);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(27,0.009417669);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(28,0.005356737);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(29,0.003956212);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(30,0.001615117);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetBinError(31,0.00228412);
   VbbHcc_both_Z_dR_Bj0_stack_9->SetEntries(39482);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(1,2.146516);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(2,9.020179);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(3,10.84495);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(4,8.69138);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(5,5.842074);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(6,3.779726);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(7,2.497704);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(8,1.923033);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(9,1.622844);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(10,1.384435);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(11,1.294461);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(12,1.145196);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(13,0.9955159);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(14,0.9374683);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(15,0.7678865);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(16,0.6675471);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(17,0.5817196);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(18,0.5025261);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(19,0.4399177);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(20,0.3715045);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(21,0.3399929);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(22,0.2707505);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(23,0.2549947);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(24,0.1857522);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(25,0.1463628);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(26,0.1011686);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(27,0.0601207);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(28,0.03068229);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(29,0.01575577);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(30,0.008707136);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinContent(31,0.005390132);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(1,0.02983288);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(2,0.06115551);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(3,0.06705663);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(4,0.06003056);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(5,0.04921659);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(6,0.03958751);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(7,0.03218093);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(8,0.02823719);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(9,0.02593979);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(10,0.02395876);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(11,0.02316714);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(12,0.02179053);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(13,0.02031665);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(14,0.01971543);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(15,0.01784336);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(16,0.01663677);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(17,0.01553048);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(18,0.01443469);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(19,0.0135056);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(20,0.01241109);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(21,0.01187307);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(22,0.01059528);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(23,0.01028238);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(24,0.008775968);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(25,0.007790107);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(26,0.006476658);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(27,0.004992753);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(28,0.003566744);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(29,0.002555923);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(30,0.001900053);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetBinError(31,0.001494954);
   VbbHcc_both_Z_dR_Bj0_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(1,0.1011361);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(2,0.4661741);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(3,0.3697788);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(4,0.2370377);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(5,0.1185188);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(6,0.06004954);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(7,0.05846929);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(8,0.04582728);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(9,0.03792603);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(10,0.03318527);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(11,0.04108653);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(12,0.02528402);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(13,0.02686427);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(14,0.02686427);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(15,0.03002477);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(16,0.01422226);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(17,0.009481507);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(18,0.009481507);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(20,0.01738276);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(21,0.01264201);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(22,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(23,0.007901256);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(24,0.003160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(25,0.007901256);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(26,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(1,0.01264201);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(2,0.0271417);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(3,0.02417319);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(4,0.01935404);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(5,0.01368538);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(6,0.009741322);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(7,0.009612292);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(8,0.008509913);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(9,0.007741618);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(10,0.00724162);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(11,0.008057731);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(12,0.006321005);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(13,0.006515542);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(14,0.006515542);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(15,0.006888155);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(16,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(17,0.003870809);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(18,0.003870809);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(19,0.002234813);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(20,0.0052411);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(21,0.004469625);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(22,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(23,0.003533549);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(24,0.002234813);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(25,0.003533549);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(26,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetEntries(1123);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(1,0.05044817);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(2,0.2078133);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(3,0.214249);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(4,0.1210341);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(5,0.05356226);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(6,0.03550057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(7,0.02387465);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(8,0.0220062);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(9,0.01723127);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(10,0.01536282);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(11,0.01681606);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(12,0.01266394);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(13,0.01058789);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(14,0.00954986);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(15,0.009965071);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(16,0.008304226);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(17,0.006850987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(18,0.007681409);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(19,0.005605353);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(20,0.004359719);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(21,0.004982536);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(22,0.003114085);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(23,0.003944507);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(24,0.004359719);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(25,0.00332169);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(26,0.001868451);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(27,0.0008304226);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(28,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(29,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinContent(31,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(1,0.003236252);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(2,0.006568349);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(3,0.006669281);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(4,0.00501272);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(5,0.003334641);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(6,0.002714796);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(7,0.002226323);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(8,0.002137431);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(9,0.001891378);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(10,0.001785891);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(11,0.001868451);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(12,0.001621452);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(13,0.001482601);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(14,0.00140805);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(15,0.001438334);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(16,0.001313013);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(17,0.001192604);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(18,0.001262816);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(19,0.001078751);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(20,0.0009513686);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(21,0.001017056);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(22,0.0008040532);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(23,0.0009049321);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(24,0.0009513686);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(25,0.0008304226);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(26,0.000622817);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(27,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(28,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(29,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetBinError(31,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_12->SetEntries(4223);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj0__483 = new TH1D("VbbHcc_both_Z_dR_Bj0__483","",30,0,6);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(1,25564);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(2,91392);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(3,82774);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(4,61003);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(5,46999);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(6,37063);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(7,30056);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(8,24997);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(9,21525);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(10,19168);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(11,17090);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(12,15363);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(13,13919);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(14,12527);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(15,10937);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(16,9649);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(17,7981);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(18,6618);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(19,5435);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(20,4828);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(21,3996);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(22,3226);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(23,2634);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(24,2169);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(25,1626);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(26,1174);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(27,866);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(28,549);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(29,360);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(30,197);
   VbbHcc_both_Z_dR_Bj0__483->SetBinContent(31,331);
   VbbHcc_both_Z_dR_Bj0__483->SetEntries(562016);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0__483->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0__483->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj0__483->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj0__483->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj0__483->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0__483->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__483->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__483->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__483->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__483->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__483->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__483->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__483->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0__483->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__483->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__483->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0__483->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0__483->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__483->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fx1483[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fy1483[30] = {
   73797.89,
   297693.2,
   289133.3,
   224598.9,
   153468.6,
   117887.3,
   108156.6,
   79258.95,
   67921.88,
   61841.81,
   55596.32,
   49059.47,
   43206.5,
   40183.46,
   32767.62,
   29992.9,
   24928.61,
   20670.26,
   14923.52,
   15139.71,
   13486.87,
   12011.93,
   7501.461,
   8054.611,
   4558.61,
   3264.9,
   2021.021,
   1449.617,
   906.2202,
   376.376};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fex1483[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_fey1483[30] = {
   1828.424,
   5698.679,
   15739.03,
   20898.59,
   4356.805,
   4318.25,
   14721.86,
   3091.774,
   2678.4,
   3018.601,
   2909.566,
   2257.185,
   2148.924,
   2144.991,
   1596.41,
   2183.965,
   1795.823,
   1317.518,
   984.2008,
   1156.22,
   1172.56,
   1587.465,
   743.0925,
   955.4886,
   529.7472,
   456.215,
   136.4463,
   269.6211,
   259.5273,
   57.36859};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj0_fx1483,Graph_from_VbbHcc_both_Z_dR_Bj0_fy1483,Graph_from_VbbHcc_both_Z_dR_Bj0_fex1483,Graph_from_VbbHcc_both_Z_dR_Bj0_fey1483);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetMinimum(287.1067);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetMaximum(335327.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj01483);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__484 = new TH1D("data_mc_ratio__484","",30,0,6);
   data_mc_ratio__484->SetBinContent(1,0.3464056);
   data_mc_ratio__484->SetBinContent(2,0.3070006);
   data_mc_ratio__484->SetBinContent(3,0.2862832);
   data_mc_ratio__484->SetBinContent(4,0.2716086);
   data_mc_ratio__484->SetBinContent(5,0.3062451);
   data_mc_ratio__484->SetBinContent(6,0.3143936);
   data_mc_ratio__484->SetBinContent(7,0.2778933);
   data_mc_ratio__484->SetBinContent(8,0.315384);
   data_mc_ratio__484->SetBinContent(9,0.3169082);
   data_mc_ratio__484->SetBinContent(10,0.3099521);
   data_mc_ratio__484->SetBinContent(11,0.3073944);
   data_mc_ratio__484->SetBinContent(12,0.3131506);
   data_mc_ratio__484->SetBinContent(13,0.3221506);
   data_mc_ratio__484->SetBinContent(14,0.3117451);
   data_mc_ratio__484->SetBinContent(15,0.3337746);
   data_mc_ratio__484->SetBinContent(16,0.3217095);
   data_mc_ratio__484->SetBinContent(17,0.3201542);
   data_mc_ratio__484->SetBinContent(18,0.3201701);
   data_mc_ratio__484->SetBinContent(19,0.3641902);
   data_mc_ratio__484->SetBinContent(20,0.3188964);
   data_mc_ratio__484->SetBinContent(21,0.2962882);
   data_mc_ratio__484->SetBinContent(22,0.2685664);
   data_mc_ratio__484->SetBinContent(23,0.3511316);
   data_mc_ratio__484->SetBinContent(24,0.2692867);
   data_mc_ratio__484->SetBinContent(25,0.3566877);
   data_mc_ratio__484->SetBinContent(26,0.3595822);
   data_mc_ratio__484->SetBinContent(27,0.4284962);
   data_mc_ratio__484->SetBinContent(28,0.3787206);
   data_mc_ratio__484->SetBinContent(29,0.3972544);
   data_mc_ratio__484->SetBinContent(30,0.5234127);
   data_mc_ratio__484->SetBinContent(31,0.3477423);
   data_mc_ratio__484->SetBinError(1,0.002166559);
   data_mc_ratio__484->SetBinError(2,0.001015512);
   data_mc_ratio__484->SetBinError(3,0.0009950591);
   data_mc_ratio__484->SetBinError(4,0.001099684);
   data_mc_ratio__484->SetBinError(5,0.001412618);
   data_mc_ratio__484->SetBinError(6,0.001633065);
   data_mc_ratio__484->SetBinError(7,0.001602922);
   data_mc_ratio__484->SetBinError(8,0.001994783);
   data_mc_ratio__484->SetBinError(9,0.00216004);
   data_mc_ratio__484->SetBinError(10,0.002238753);
   data_mc_ratio__484->SetBinError(11,0.002351392);
   data_mc_ratio__484->SetBinError(12,0.002526476);
   data_mc_ratio__484->SetBinError(13,0.00273058);
   data_mc_ratio__484->SetBinError(14,0.002785327);
   data_mc_ratio__484->SetBinError(15,0.003191569);
   data_mc_ratio__484->SetBinError(16,0.003275086);
   data_mc_ratio__484->SetBinError(17,0.003583691);
   data_mc_ratio__484->SetBinError(18,0.003935658);
   data_mc_ratio__484->SetBinError(19,0.004940017);
   data_mc_ratio__484->SetBinError(20,0.004589506);
   data_mc_ratio__484->SetBinError(21,0.004687072);
   data_mc_ratio__484->SetBinError(22,0.004728458);
   data_mc_ratio__484->SetBinError(23,0.006841668);
   data_mc_ratio__484->SetBinError(24,0.005782095);
   data_mc_ratio__484->SetBinError(25,0.00884561);
   data_mc_ratio__484->SetBinError(26,0.01049456);
   data_mc_ratio__484->SetBinError(27,0.0145609);
   data_mc_ratio__484->SetBinError(28,0.0161634);
   data_mc_ratio__484->SetBinError(29,0.02093715);
   data_mc_ratio__484->SetBinError(30,0.03729161);
   data_mc_ratio__484->SetBinError(31,0.131957);
   data_mc_ratio__484->SetMinimum(0.4);
   data_mc_ratio__484->SetMaximum(1.6);
   data_mc_ratio__484->SetEntries(2266.862);
   data_mc_ratio__484->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__484->SetLineColor(ci);
   data_mc_ratio__484->SetLineWidth(2);
   data_mc_ratio__484->SetMarkerStyle(20);
   data_mc_ratio__484->SetMarkerSize(1.2);
   data_mc_ratio__484->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__484->GetXaxis()->SetRange(1,30);
   data_mc_ratio__484->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__484->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__484->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__484->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__484->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__484->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__484->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__484->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__484->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__484->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__484->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__484->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__484->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__484->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__484->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__484->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__484->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1484[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1484[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1484[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1484[30] = {
   0.0247761,
   0.01914279,
   0.0544352,
   0.09304851,
   0.0283889,
   0.03663034,
   0.1361162,
   0.03900852,
   0.03943354,
   0.04881165,
   0.05233378,
   0.04600916,
   0.04973613,
   0.05337995,
   0.04871913,
   0.07281608,
   0.07203863,
   0.06373977,
   0.06594963,
   0.07637001,
   0.08694085,
   0.1321574,
   0.0990597,
   0.1186263,
   0.116208,
   0.1397332,
   0.06751353,
   0.1859946,
   0.2863843,
   0.1524236};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1484,Graph_from_mc_statistical_error_fy1484,Graph_from_mc_statistical_error_fex1484,Graph_from_mc_statistical_error_fey1484);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1484 = new TH1F("Graph_Graph_from_mc_statistical_error1484","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1484->SetMinimum(0.6563388);
   Graph_Graph_from_mc_statistical_error1484->SetMaximum(1.343661);
   Graph_Graph_from_mc_statistical_error1484->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1484->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1484->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1484);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_both_17->cd();
   Z_dR_Bj0_both_17->Modified();
   Z_dR_Bj0_both_17->cd();
   Z_dR_Bj0_both_17->SetSelected(Z_dR_Bj0_both_17);
}
