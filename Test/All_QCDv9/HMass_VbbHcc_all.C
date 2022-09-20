void HMass_VbbHcc_all()
{
//=========Macro generated from canvas: HMass_VbbHcc_all/HMass_VbbHcc_all
//=========  (Tue Sep 20 12:29:20 2022) by ROOT version 6.14/09
   TCanvas *HMass_VbbHcc_all = new TCanvas("HMass_VbbHcc_all", "HMass_VbbHcc_all",0,0,600,600);
   HMass_VbbHcc_all->SetHighLightColor(2);
   HMass_VbbHcc_all->Range(0,0,1,1);
   HMass_VbbHcc_all->SetFillColor(0);
   HMass_VbbHcc_all->SetFillStyle(4000);
   HMass_VbbHcc_all->SetBorderMode(0);
   HMass_VbbHcc_all->SetBorderSize(2);
   HMass_VbbHcc_all->SetFrameFillStyle(1000);
   HMass_VbbHcc_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-329.7667,315.7258,329736.9);
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
   st->SetMaximum(282600.3);
   
   TH1F *st_stack_8 = new TH1F("st_stack_8","",30,0,300);
   st_stack_8->SetMinimum(0.3);
   st_stack_8->SetMaximum(296730.3);
   st_stack_8->SetDirectory(0);
   st_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_8->SetLineColor(ci);
   st_stack_8->GetXaxis()->SetRange(1,30);
   st_stack_8->GetXaxis()->SetLabelFont(42);
   st_stack_8->GetXaxis()->SetLabelSize(0.035);
   st_stack_8->GetXaxis()->SetTitleSize(0.035);
   st_stack_8->GetXaxis()->SetTitleFont(42);
   st_stack_8->GetYaxis()->SetTitle("Events/10.0");
   st_stack_8->GetYaxis()->SetLabelFont(42);
   st_stack_8->GetYaxis()->SetLabelSize(0.05);
   st_stack_8->GetYaxis()->SetTitleSize(0.057);
   st_stack_8->GetYaxis()->SetTitleOffset(1.2);
   st_stack_8->GetYaxis()->SetTitleFont(42);
   st_stack_8->GetZaxis()->SetLabelFont(42);
   st_stack_8->GetZaxis()->SetLabelSize(0.035);
   st_stack_8->GetZaxis()->SetTitleSize(0.035);
   st_stack_8->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_8);
   
   
   TH1D *VbbHcc_HMass_all_stack_1 = new TH1D("VbbHcc_HMass_all_stack_1","",30,0,300);
   VbbHcc_HMass_all_stack_1->SetBinContent(2,687.8645);
   VbbHcc_HMass_all_stack_1->SetBinContent(3,25587.7);
   VbbHcc_HMass_all_stack_1->SetBinContent(4,91965.36);
   VbbHcc_HMass_all_stack_1->SetBinContent(5,118542.4);
   VbbHcc_HMass_all_stack_1->SetBinContent(6,115729.3);
   VbbHcc_HMass_all_stack_1->SetBinContent(7,104169.8);
   VbbHcc_HMass_all_stack_1->SetBinContent(8,101994.5);
   VbbHcc_HMass_all_stack_1->SetBinContent(9,91220.74);
   VbbHcc_HMass_all_stack_1->SetBinContent(10,83143.37);
   VbbHcc_HMass_all_stack_1->SetBinContent(11,81854.54);
   VbbHcc_HMass_all_stack_1->SetBinContent(12,94416.89);
   VbbHcc_HMass_all_stack_1->SetBinContent(13,79946.3);
   VbbHcc_HMass_all_stack_1->SetBinContent(14,80913);
   VbbHcc_HMass_all_stack_1->SetBinContent(15,75575.06);
   VbbHcc_HMass_all_stack_1->SetBinContent(16,69854.01);
   VbbHcc_HMass_all_stack_1->SetBinContent(17,73939.79);
   VbbHcc_HMass_all_stack_1->SetBinContent(18,75997.96);
   VbbHcc_HMass_all_stack_1->SetBinContent(19,62223.43);
   VbbHcc_HMass_all_stack_1->SetBinContent(20,60146.24);
   VbbHcc_HMass_all_stack_1->SetBinContent(21,54988.01);
   VbbHcc_HMass_all_stack_1->SetBinContent(22,48095.53);
   VbbHcc_HMass_all_stack_1->SetBinContent(23,45835.44);
   VbbHcc_HMass_all_stack_1->SetBinContent(24,35968.07);
   VbbHcc_HMass_all_stack_1->SetBinContent(25,36308.22);
   VbbHcc_HMass_all_stack_1->SetBinContent(26,32208.25);
   VbbHcc_HMass_all_stack_1->SetBinContent(27,28966.49);
   VbbHcc_HMass_all_stack_1->SetBinContent(28,24602.29);
   VbbHcc_HMass_all_stack_1->SetBinContent(29,28442.11);
   VbbHcc_HMass_all_stack_1->SetBinContent(30,19883.71);
   VbbHcc_HMass_all_stack_1->SetBinContent(31,295015);
   VbbHcc_HMass_all_stack_1->SetBinError(2,434.705);
   VbbHcc_HMass_all_stack_1->SetBinError(3,2615.837);
   VbbHcc_HMass_all_stack_1->SetBinError(4,4932.41);
   VbbHcc_HMass_all_stack_1->SetBinError(5,5491.89);
   VbbHcc_HMass_all_stack_1->SetBinError(6,5326.847);
   VbbHcc_HMass_all_stack_1->SetBinError(7,4921.481);
   VbbHcc_HMass_all_stack_1->SetBinError(8,4925.122);
   VbbHcc_HMass_all_stack_1->SetBinError(9,4614.515);
   VbbHcc_HMass_all_stack_1->SetBinError(10,4372.396);
   VbbHcc_HMass_all_stack_1->SetBinError(11,4398.699);
   VbbHcc_HMass_all_stack_1->SetBinError(12,4805.933);
   VbbHcc_HMass_all_stack_1->SetBinError(13,4338.374);
   VbbHcc_HMass_all_stack_1->SetBinError(14,4397.592);
   VbbHcc_HMass_all_stack_1->SetBinError(15,4215.4);
   VbbHcc_HMass_all_stack_1->SetBinError(16,4024.042);
   VbbHcc_HMass_all_stack_1->SetBinError(17,4178.641);
   VbbHcc_HMass_all_stack_1->SetBinError(18,4289.271);
   VbbHcc_HMass_all_stack_1->SetBinError(19,3778.842);
   VbbHcc_HMass_all_stack_1->SetBinError(20,3705.406);
   VbbHcc_HMass_all_stack_1->SetBinError(21,3596.417);
   VbbHcc_HMass_all_stack_1->SetBinError(22,3282.392);
   VbbHcc_HMass_all_stack_1->SetBinError(23,3157.6);
   VbbHcc_HMass_all_stack_1->SetBinError(24,2685.057);
   VbbHcc_HMass_all_stack_1->SetBinError(25,2743.954);
   VbbHcc_HMass_all_stack_1->SetBinError(26,2548.368);
   VbbHcc_HMass_all_stack_1->SetBinError(27,2443.074);
   VbbHcc_HMass_all_stack_1->SetBinError(28,2203.144);
   VbbHcc_HMass_all_stack_1->SetBinError(29,2403.702);
   VbbHcc_HMass_all_stack_1->SetBinError(30,1813.329);
   VbbHcc_HMass_all_stack_1->SetBinError(31,6836.796);
   VbbHcc_HMass_all_stack_1->SetEntries(51654);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_HMass_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_all_stack_1->SetLineColor(ci);
   VbbHcc_HMass_all_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_all_stack_1,"");
   
   TH1D *VbbHcc_HMass_all_stack_2 = new TH1D("VbbHcc_HMass_all_stack_2","",30,0,300);
   VbbHcc_HMass_all_stack_2->SetBinContent(2,3.875208);
   VbbHcc_HMass_all_stack_2->SetBinContent(3,98.30877);
   VbbHcc_HMass_all_stack_2->SetBinContent(4,255.3689);
   VbbHcc_HMass_all_stack_2->SetBinContent(5,394.2276);
   VbbHcc_HMass_all_stack_2->SetBinContent(6,529.2883);
   VbbHcc_HMass_all_stack_2->SetBinContent(7,786.4182);
   VbbHcc_HMass_all_stack_2->SetBinContent(8,1175.98);
   VbbHcc_HMass_all_stack_2->SetBinContent(9,1332.407);
   VbbHcc_HMass_all_stack_2->SetBinContent(10,1060.55);
   VbbHcc_HMass_all_stack_2->SetBinContent(11,888.2527);
   VbbHcc_HMass_all_stack_2->SetBinContent(12,858.0449);
   VbbHcc_HMass_all_stack_2->SetBinContent(13,838.2971);
   VbbHcc_HMass_all_stack_2->SetBinContent(14,765.513);
   VbbHcc_HMass_all_stack_2->SetBinContent(15,711.9511);
   VbbHcc_HMass_all_stack_2->SetBinContent(16,644.0407);
   VbbHcc_HMass_all_stack_2->SetBinContent(17,578.8321);
   VbbHcc_HMass_all_stack_2->SetBinContent(18,537.5418);
   VbbHcc_HMass_all_stack_2->SetBinContent(19,509.8962);
   VbbHcc_HMass_all_stack_2->SetBinContent(20,453.3103);
   VbbHcc_HMass_all_stack_2->SetBinContent(21,409.8788);
   VbbHcc_HMass_all_stack_2->SetBinContent(22,383.853);
   VbbHcc_HMass_all_stack_2->SetBinContent(23,350.2016);
   VbbHcc_HMass_all_stack_2->SetBinContent(24,339.4823);
   VbbHcc_HMass_all_stack_2->SetBinContent(25,310.0509);
   VbbHcc_HMass_all_stack_2->SetBinContent(26,287.3262);
   VbbHcc_HMass_all_stack_2->SetBinContent(27,278.7256);
   VbbHcc_HMass_all_stack_2->SetBinContent(28,237.4677);
   VbbHcc_HMass_all_stack_2->SetBinContent(29,213.7281);
   VbbHcc_HMass_all_stack_2->SetBinContent(30,190.4104);
   VbbHcc_HMass_all_stack_2->SetBinContent(31,2763.973);
   VbbHcc_HMass_all_stack_2->SetBinError(2,0.8792038);
   VbbHcc_HMass_all_stack_2->SetBinError(3,4.23715);
   VbbHcc_HMass_all_stack_2->SetBinError(4,6.771306);
   VbbHcc_HMass_all_stack_2->SetBinError(5,8.660676);
   VbbHcc_HMass_all_stack_2->SetBinError(6,9.984042);
   VbbHcc_HMass_all_stack_2->SetBinError(7,12.0411);
   VbbHcc_HMass_all_stack_2->SetBinError(8,14.71953);
   VbbHcc_HMass_all_stack_2->SetBinError(9,16.01692);
   VbbHcc_HMass_all_stack_2->SetBinError(10,14.27266);
   VbbHcc_HMass_all_stack_2->SetBinError(11,13.00126);
   VbbHcc_HMass_all_stack_2->SetBinError(12,12.82317);
   VbbHcc_HMass_all_stack_2->SetBinError(13,12.60871);
   VbbHcc_HMass_all_stack_2->SetBinError(14,11.89806);
   VbbHcc_HMass_all_stack_2->SetBinError(15,11.6669);
   VbbHcc_HMass_all_stack_2->SetBinError(16,11.09923);
   VbbHcc_HMass_all_stack_2->SetBinError(17,10.44271);
   VbbHcc_HMass_all_stack_2->SetBinError(18,10.11156);
   VbbHcc_HMass_all_stack_2->SetBinError(19,9.783389);
   VbbHcc_HMass_all_stack_2->SetBinError(20,9.182898);
   VbbHcc_HMass_all_stack_2->SetBinError(21,8.583713);
   VbbHcc_HMass_all_stack_2->SetBinError(22,8.45959);
   VbbHcc_HMass_all_stack_2->SetBinError(23,8.122963);
   VbbHcc_HMass_all_stack_2->SetBinError(24,7.959056);
   VbbHcc_HMass_all_stack_2->SetBinError(25,7.544332);
   VbbHcc_HMass_all_stack_2->SetBinError(26,7.231362);
   VbbHcc_HMass_all_stack_2->SetBinError(27,7.18765);
   VbbHcc_HMass_all_stack_2->SetBinError(28,6.498964);
   VbbHcc_HMass_all_stack_2->SetBinError(29,6.126347);
   VbbHcc_HMass_all_stack_2->SetBinError(30,5.615953);
   VbbHcc_HMass_all_stack_2->SetBinError(31,21.79233);
   VbbHcc_HMass_all_stack_2->SetEntries(236928);

   ci = TColor::GetColor("#660066");
   VbbHcc_HMass_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_all_stack_2->SetLineColor(ci);
   VbbHcc_HMass_all_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_all_stack_2,"");
   
   TH1D *VbbHcc_HMass_all_stack_3 = new TH1D("VbbHcc_HMass_all_stack_3","",30,0,300);
   VbbHcc_HMass_all_stack_3->SetBinContent(2,60.73556);
   VbbHcc_HMass_all_stack_3->SetBinContent(3,1732.534);
   VbbHcc_HMass_all_stack_3->SetBinContent(4,5223.007);
   VbbHcc_HMass_all_stack_3->SetBinContent(5,7817.569);
   VbbHcc_HMass_all_stack_3->SetBinContent(6,10239.46);
   VbbHcc_HMass_all_stack_3->SetBinContent(7,13906.03);
   VbbHcc_HMass_all_stack_3->SetBinContent(8,19229.97);
   VbbHcc_HMass_all_stack_3->SetBinContent(9,21764.2);
   VbbHcc_HMass_all_stack_3->SetBinContent(10,20006.08);
   VbbHcc_HMass_all_stack_3->SetBinContent(11,18862.22);
   VbbHcc_HMass_all_stack_3->SetBinContent(12,18265.51);
   VbbHcc_HMass_all_stack_3->SetBinContent(13,17245.86);
   VbbHcc_HMass_all_stack_3->SetBinContent(14,15522.42);
   VbbHcc_HMass_all_stack_3->SetBinContent(15,13611.57);
   VbbHcc_HMass_all_stack_3->SetBinContent(16,11779.83);
   VbbHcc_HMass_all_stack_3->SetBinContent(17,10220.82);
   VbbHcc_HMass_all_stack_3->SetBinContent(18,9123.871);
   VbbHcc_HMass_all_stack_3->SetBinContent(19,8084.974);
   VbbHcc_HMass_all_stack_3->SetBinContent(20,7152.951);
   VbbHcc_HMass_all_stack_3->SetBinContent(21,6459.419);
   VbbHcc_HMass_all_stack_3->SetBinContent(22,5746.093);
   VbbHcc_HMass_all_stack_3->SetBinContent(23,5200.947);
   VbbHcc_HMass_all_stack_3->SetBinContent(24,4680.086);
   VbbHcc_HMass_all_stack_3->SetBinContent(25,4192.611);
   VbbHcc_HMass_all_stack_3->SetBinContent(26,3757.312);
   VbbHcc_HMass_all_stack_3->SetBinContent(27,3418.234);
   VbbHcc_HMass_all_stack_3->SetBinContent(28,3054.396);
   VbbHcc_HMass_all_stack_3->SetBinContent(29,2762.49);
   VbbHcc_HMass_all_stack_3->SetBinContent(30,2496.243);
   VbbHcc_HMass_all_stack_3->SetBinContent(31,28713.1);
   VbbHcc_HMass_all_stack_3->SetBinError(2,2.024284);
   VbbHcc_HMass_all_stack_3->SetBinError(3,10.985);
   VbbHcc_HMass_all_stack_3->SetBinError(4,19.21974);
   VbbHcc_HMass_all_stack_3->SetBinError(5,23.54234);
   VbbHcc_HMass_all_stack_3->SetBinError(6,26.93356);
   VbbHcc_HMass_all_stack_3->SetBinError(7,31.36871);
   VbbHcc_HMass_all_stack_3->SetBinError(8,36.8889);
   VbbHcc_HMass_all_stack_3->SetBinError(9,39.31867);
   VbbHcc_HMass_all_stack_3->SetBinError(10,37.74442);
   VbbHcc_HMass_all_stack_3->SetBinError(11,36.71851);
   VbbHcc_HMass_all_stack_3->SetBinError(12,36.15627);
   VbbHcc_HMass_all_stack_3->SetBinError(13,35.17124);
   VbbHcc_HMass_all_stack_3->SetBinError(14,33.36963);
   VbbHcc_HMass_all_stack_3->SetBinError(15,31.24579);
   VbbHcc_HMass_all_stack_3->SetBinError(16,29.06294);
   VbbHcc_HMass_all_stack_3->SetBinError(17,27.07365);
   VbbHcc_HMass_all_stack_3->SetBinError(18,25.59652);
   VbbHcc_HMass_all_stack_3->SetBinError(19,24.0755);
   VbbHcc_HMass_all_stack_3->SetBinError(20,22.62163);
   VbbHcc_HMass_all_stack_3->SetBinError(21,21.50911);
   VbbHcc_HMass_all_stack_3->SetBinError(22,20.27071);
   VbbHcc_HMass_all_stack_3->SetBinError(23,19.27769);
   VbbHcc_HMass_all_stack_3->SetBinError(24,18.30318);
   VbbHcc_HMass_all_stack_3->SetBinError(25,17.30447);
   VbbHcc_HMass_all_stack_3->SetBinError(26,16.36687);
   VbbHcc_HMass_all_stack_3->SetBinError(27,15.63084);
   VbbHcc_HMass_all_stack_3->SetBinError(28,14.76781);
   VbbHcc_HMass_all_stack_3->SetBinError(29,14.03661);
   VbbHcc_HMass_all_stack_3->SetBinError(30,13.32752);
   VbbHcc_HMass_all_stack_3->SetBinError(31,45.0249);
   VbbHcc_HMass_all_stack_3->SetEntries(4563270);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_HMass_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_all_stack_3->SetLineColor(ci);
   VbbHcc_HMass_all_stack_3->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_all_stack_3,"");
   
   TH1D *VbbHcc_HMass_all_stack_4 = new TH1D("VbbHcc_HMass_all_stack_4","",30,0,300);
   VbbHcc_HMass_all_stack_4->SetBinContent(2,2.774213);
   VbbHcc_HMass_all_stack_4->SetBinContent(3,48.11738);
   VbbHcc_HMass_all_stack_4->SetBinContent(4,173.1078);
   VbbHcc_HMass_all_stack_4->SetBinContent(5,304.4541);
   VbbHcc_HMass_all_stack_4->SetBinContent(6,427.6448);
   VbbHcc_HMass_all_stack_4->SetBinContent(7,608.6079);
   VbbHcc_HMass_all_stack_4->SetBinContent(8,795.3864);
   VbbHcc_HMass_all_stack_4->SetBinContent(9,1083.829);
   VbbHcc_HMass_all_stack_4->SetBinContent(10,1045.722);
   VbbHcc_HMass_all_stack_4->SetBinContent(11,717.8623);
   VbbHcc_HMass_all_stack_4->SetBinContent(12,530.6583);
   VbbHcc_HMass_all_stack_4->SetBinContent(13,470.3159);
   VbbHcc_HMass_all_stack_4->SetBinContent(14,451.6466);
   VbbHcc_HMass_all_stack_4->SetBinContent(15,472.4849);
   VbbHcc_HMass_all_stack_4->SetBinContent(16,485.7909);
   VbbHcc_HMass_all_stack_4->SetBinContent(17,436.9908);
   VbbHcc_HMass_all_stack_4->SetBinContent(18,442.6422);
   VbbHcc_HMass_all_stack_4->SetBinContent(19,418.8823);
   VbbHcc_HMass_all_stack_4->SetBinContent(20,378.6213);
   VbbHcc_HMass_all_stack_4->SetBinContent(21,360.4491);
   VbbHcc_HMass_all_stack_4->SetBinContent(22,348.0415);
   VbbHcc_HMass_all_stack_4->SetBinContent(23,325.5104);
   VbbHcc_HMass_all_stack_4->SetBinContent(24,324.3136);
   VbbHcc_HMass_all_stack_4->SetBinContent(25,287.0366);
   VbbHcc_HMass_all_stack_4->SetBinContent(26,262.0422);
   VbbHcc_HMass_all_stack_4->SetBinContent(27,254.058);
   VbbHcc_HMass_all_stack_4->SetBinContent(28,230.5394);
   VbbHcc_HMass_all_stack_4->SetBinContent(29,212.8197);
   VbbHcc_HMass_all_stack_4->SetBinContent(30,220.018);
   VbbHcc_HMass_all_stack_4->SetBinContent(31,3054.221);
   VbbHcc_HMass_all_stack_4->SetBinError(2,0.8614868);
   VbbHcc_HMass_all_stack_4->SetBinError(3,3.747194);
   VbbHcc_HMass_all_stack_4->SetBinError(4,7.095326);
   VbbHcc_HMass_all_stack_4->SetBinError(5,9.55622);
   VbbHcc_HMass_all_stack_4->SetBinError(6,11.097);
   VbbHcc_HMass_all_stack_4->SetBinError(7,13.13441);
   VbbHcc_HMass_all_stack_4->SetBinError(8,14.58839);
   VbbHcc_HMass_all_stack_4->SetBinError(9,16.9898);
   VbbHcc_HMass_all_stack_4->SetBinError(10,16.38189);
   VbbHcc_HMass_all_stack_4->SetBinError(11,13.82607);
   VbbHcc_HMass_all_stack_4->SetBinError(12,11.97881);
   VbbHcc_HMass_all_stack_4->SetBinError(13,11.37099);
   VbbHcc_HMass_all_stack_4->SetBinError(14,11.12558);
   VbbHcc_HMass_all_stack_4->SetBinError(15,11.45943);
   VbbHcc_HMass_all_stack_4->SetBinError(16,11.55498);
   VbbHcc_HMass_all_stack_4->SetBinError(17,10.95054);
   VbbHcc_HMass_all_stack_4->SetBinError(18,11.0671);
   VbbHcc_HMass_all_stack_4->SetBinError(19,10.67055);
   VbbHcc_HMass_all_stack_4->SetBinError(20,9.878957);
   VbbHcc_HMass_all_stack_4->SetBinError(21,9.644991);
   VbbHcc_HMass_all_stack_4->SetBinError(22,9.536575);
   VbbHcc_HMass_all_stack_4->SetBinError(23,9.143891);
   VbbHcc_HMass_all_stack_4->SetBinError(24,9.184277);
   VbbHcc_HMass_all_stack_4->SetBinError(25,8.49858);
   VbbHcc_HMass_all_stack_4->SetBinError(26,8.020749);
   VbbHcc_HMass_all_stack_4->SetBinError(27,7.92904);
   VbbHcc_HMass_all_stack_4->SetBinError(28,7.49401);
   VbbHcc_HMass_all_stack_4->SetBinError(29,7.034249);
   VbbHcc_HMass_all_stack_4->SetBinError(30,7.32687);
   VbbHcc_HMass_all_stack_4->SetBinError(31,23.74252);
   VbbHcc_HMass_all_stack_4->SetEntries(95489);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_HMass_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_all_stack_4->SetLineColor(ci);
   VbbHcc_HMass_all_stack_4->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_all_stack_4,"");
   
   TH1D *VbbHcc_HMass_all_stack_5 = new TH1D("VbbHcc_HMass_all_stack_5","",30,0,300);
   VbbHcc_HMass_all_stack_5->SetBinContent(2,0.3543217);
   VbbHcc_HMass_all_stack_5->SetBinContent(3,9.645087);
   VbbHcc_HMass_all_stack_5->SetBinContent(4,33.98169);
   VbbHcc_HMass_all_stack_5->SetBinContent(5,73.76302);
   VbbHcc_HMass_all_stack_5->SetBinContent(6,93.72565);
   VbbHcc_HMass_all_stack_5->SetBinContent(7,123.2057);
   VbbHcc_HMass_all_stack_5->SetBinContent(8,213.7348);
   VbbHcc_HMass_all_stack_5->SetBinContent(9,227.1785);
   VbbHcc_HMass_all_stack_5->SetBinContent(10,155.3493);
   VbbHcc_HMass_all_stack_5->SetBinContent(11,144.2913);
   VbbHcc_HMass_all_stack_5->SetBinContent(12,122.244);
   VbbHcc_HMass_all_stack_5->SetBinContent(13,132.021);
   VbbHcc_HMass_all_stack_5->SetBinContent(14,118.4986);
   VbbHcc_HMass_all_stack_5->SetBinContent(15,121.126);
   VbbHcc_HMass_all_stack_5->SetBinContent(16,130.2487);
   VbbHcc_HMass_all_stack_5->SetBinContent(17,129.4896);
   VbbHcc_HMass_all_stack_5->SetBinContent(18,105.4787);
   VbbHcc_HMass_all_stack_5->SetBinContent(19,107.8151);
   VbbHcc_HMass_all_stack_5->SetBinContent(20,103.2118);
   VbbHcc_HMass_all_stack_5->SetBinContent(21,98.24831);
   VbbHcc_HMass_all_stack_5->SetBinContent(22,100.4072);
   VbbHcc_HMass_all_stack_5->SetBinContent(23,90.38782);
   VbbHcc_HMass_all_stack_5->SetBinContent(24,87.33535);
   VbbHcc_HMass_all_stack_5->SetBinContent(25,86.43954);
   VbbHcc_HMass_all_stack_5->SetBinContent(26,70.62385);
   VbbHcc_HMass_all_stack_5->SetBinContent(27,61.7231);
   VbbHcc_HMass_all_stack_5->SetBinContent(28,71.07986);
   VbbHcc_HMass_all_stack_5->SetBinContent(29,67.443);
   VbbHcc_HMass_all_stack_5->SetBinContent(30,65.62417);
   VbbHcc_HMass_all_stack_5->SetBinContent(31,977.5315);
   VbbHcc_HMass_all_stack_5->SetBinError(2,0.1784752);
   VbbHcc_HMass_all_stack_5->SetBinError(3,2.477761);
   VbbHcc_HMass_all_stack_5->SetBinError(4,5.29689);
   VbbHcc_HMass_all_stack_5->SetBinError(5,7.902693);
   VbbHcc_HMass_all_stack_5->SetBinError(6,8.757526);
   VbbHcc_HMass_all_stack_5->SetBinError(7,9.924625);
   VbbHcc_HMass_all_stack_5->SetBinError(8,13.38674);
   VbbHcc_HMass_all_stack_5->SetBinError(9,13.3704);
   VbbHcc_HMass_all_stack_5->SetBinError(10,10.45408);
   VbbHcc_HMass_all_stack_5->SetBinError(11,11.07394);
   VbbHcc_HMass_all_stack_5->SetBinError(12,9.297101);
   VbbHcc_HMass_all_stack_5->SetBinError(13,9.950982);
   VbbHcc_HMass_all_stack_5->SetBinError(14,9.349302);
   VbbHcc_HMass_all_stack_5->SetBinError(15,9.595846);
   VbbHcc_HMass_all_stack_5->SetBinError(16,10.14179);
   VbbHcc_HMass_all_stack_5->SetBinError(17,9.897894);
   VbbHcc_HMass_all_stack_5->SetBinError(18,8.718752);
   VbbHcc_HMass_all_stack_5->SetBinError(19,8.875452);
   VbbHcc_HMass_all_stack_5->SetBinError(20,8.575401);
   VbbHcc_HMass_all_stack_5->SetBinError(21,7.650966);
   VbbHcc_HMass_all_stack_5->SetBinError(22,7.789115);
   VbbHcc_HMass_all_stack_5->SetBinError(23,7.828104);
   VbbHcc_HMass_all_stack_5->SetBinError(24,7.696455);
   VbbHcc_HMass_all_stack_5->SetBinError(25,7.737544);
   VbbHcc_HMass_all_stack_5->SetBinError(26,6.382414);
   VbbHcc_HMass_all_stack_5->SetBinError(27,5.987677);
   VbbHcc_HMass_all_stack_5->SetBinError(28,6.524546);
   VbbHcc_HMass_all_stack_5->SetBinError(29,6.44124);
   VbbHcc_HMass_all_stack_5->SetBinError(30,6.654624);
   VbbHcc_HMass_all_stack_5->SetBinError(31,20.79118);
   VbbHcc_HMass_all_stack_5->SetEntries(24313);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_HMass_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_all_stack_5->SetLineColor(ci);
   VbbHcc_HMass_all_stack_5->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_all_stack_5,"");
   
   TH1D *VbbHcc_HMass_all_stack_6 = new TH1D("VbbHcc_HMass_all_stack_6","",30,0,300);
   VbbHcc_HMass_all_stack_6->SetBinContent(3,0.2569566);
   VbbHcc_HMass_all_stack_6->SetBinContent(4,2.567596);
   VbbHcc_HMass_all_stack_6->SetBinContent(5,1.963011);
   VbbHcc_HMass_all_stack_6->SetBinContent(6,1.859906);
   VbbHcc_HMass_all_stack_6->SetBinContent(7,2.472289);
   VbbHcc_HMass_all_stack_6->SetBinContent(8,4.074629);
   VbbHcc_HMass_all_stack_6->SetBinContent(9,4.606273);
   VbbHcc_HMass_all_stack_6->SetBinContent(10,3.879179);
   VbbHcc_HMass_all_stack_6->SetBinContent(11,1.570289);
   VbbHcc_HMass_all_stack_6->SetBinContent(12,2.484846);
   VbbHcc_HMass_all_stack_6->SetBinContent(13,2.175343);
   VbbHcc_HMass_all_stack_6->SetBinContent(14,2.020436);
   VbbHcc_HMass_all_stack_6->SetBinContent(15,2.242578);
   VbbHcc_HMass_all_stack_6->SetBinContent(16,0.8612512);
   VbbHcc_HMass_all_stack_6->SetBinContent(17,1.705354);
   VbbHcc_HMass_all_stack_6->SetBinContent(18,1.648919);
   VbbHcc_HMass_all_stack_6->SetBinContent(19,1.248351);
   VbbHcc_HMass_all_stack_6->SetBinContent(20,1.042337);
   VbbHcc_HMass_all_stack_6->SetBinContent(21,1.492104);
   VbbHcc_HMass_all_stack_6->SetBinContent(22,0.1926201);
   VbbHcc_HMass_all_stack_6->SetBinContent(23,0.702267);
   VbbHcc_HMass_all_stack_6->SetBinContent(24,0.9525871);
   VbbHcc_HMass_all_stack_6->SetBinContent(25,1.262046);
   VbbHcc_HMass_all_stack_6->SetBinContent(26,0.6201606);
   VbbHcc_HMass_all_stack_6->SetBinContent(27,0.7310369);
   VbbHcc_HMass_all_stack_6->SetBinContent(28,0.5649712);
   VbbHcc_HMass_all_stack_6->SetBinContent(29,0.6539321);
   VbbHcc_HMass_all_stack_6->SetBinContent(31,7.080663);
   VbbHcc_HMass_all_stack_6->SetBinError(3,0.2569566);
   VbbHcc_HMass_all_stack_6->SetBinError(4,0.7035109);
   VbbHcc_HMass_all_stack_6->SetBinError(5,0.6041678);
   VbbHcc_HMass_all_stack_6->SetBinError(6,0.5401499);
   VbbHcc_HMass_all_stack_6->SetBinError(7,0.6402997);
   VbbHcc_HMass_all_stack_6->SetBinError(8,0.8306546);
   VbbHcc_HMass_all_stack_6->SetBinError(9,0.9390737);
   VbbHcc_HMass_all_stack_6->SetBinError(10,0.8612356);
   VbbHcc_HMass_all_stack_6->SetBinError(11,0.5334852);
   VbbHcc_HMass_all_stack_6->SetBinError(12,0.6893266);
   VbbHcc_HMass_all_stack_6->SetBinError(13,0.5997385);
   VbbHcc_HMass_all_stack_6->SetBinError(14,0.5693264);
   VbbHcc_HMass_all_stack_6->SetBinError(15,0.5974625);
   VbbHcc_HMass_all_stack_6->SetBinError(16,0.309762);
   VbbHcc_HMass_all_stack_6->SetBinError(17,0.4999724);
   VbbHcc_HMass_all_stack_6->SetBinError(18,0.5352348);
   VbbHcc_HMass_all_stack_6->SetBinError(19,0.4555499);
   VbbHcc_HMass_all_stack_6->SetBinError(20,0.4314559);
   VbbHcc_HMass_all_stack_6->SetBinError(21,0.52381);
   VbbHcc_HMass_all_stack_6->SetBinError(22,0.136203);
   VbbHcc_HMass_all_stack_6->SetBinError(23,0.3406819);
   VbbHcc_HMass_all_stack_6->SetBinError(24,0.4626674);
   VbbHcc_HMass_all_stack_6->SetBinError(25,0.4992417);
   VbbHcc_HMass_all_stack_6->SetBinError(26,0.3112534);
   VbbHcc_HMass_all_stack_6->SetBinError(27,0.4091986);
   VbbHcc_HMass_all_stack_6->SetBinError(28,0.2562788);
   VbbHcc_HMass_all_stack_6->SetBinError(29,0.3567477);
   VbbHcc_HMass_all_stack_6->SetBinError(31,1.189801);
   VbbHcc_HMass_all_stack_6->SetEntries(365);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_HMass_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_all_stack_6->SetLineColor(ci);
   VbbHcc_HMass_all_stack_6->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_all_stack_6,"");
   
   TH1D *VbbHcc_HMass_all_stack_7 = new TH1D("VbbHcc_HMass_all_stack_7","",30,0,300);
   VbbHcc_HMass_all_stack_7->SetBinContent(3,0.8927659);
   VbbHcc_HMass_all_stack_7->SetBinContent(4,2.51737);
   VbbHcc_HMass_all_stack_7->SetBinContent(5,3.266105);
   VbbHcc_HMass_all_stack_7->SetBinContent(6,5.027516);
   VbbHcc_HMass_all_stack_7->SetBinContent(7,7.721174);
   VbbHcc_HMass_all_stack_7->SetBinContent(8,12.4307);
   VbbHcc_HMass_all_stack_7->SetBinContent(9,15.95831);
   VbbHcc_HMass_all_stack_7->SetBinContent(10,11.37865);
   VbbHcc_HMass_all_stack_7->SetBinContent(11,9.041647);
   VbbHcc_HMass_all_stack_7->SetBinContent(12,5.258797);
   VbbHcc_HMass_all_stack_7->SetBinContent(13,4.146242);
   VbbHcc_HMass_all_stack_7->SetBinContent(14,5.768853);
   VbbHcc_HMass_all_stack_7->SetBinContent(15,3.493396);
   VbbHcc_HMass_all_stack_7->SetBinContent(16,4.52815);
   VbbHcc_HMass_all_stack_7->SetBinContent(17,3.691758);
   VbbHcc_HMass_all_stack_7->SetBinContent(18,2.975717);
   VbbHcc_HMass_all_stack_7->SetBinContent(19,2.78949);
   VbbHcc_HMass_all_stack_7->SetBinContent(20,2.57846);
   VbbHcc_HMass_all_stack_7->SetBinContent(21,2.299288);
   VbbHcc_HMass_all_stack_7->SetBinContent(22,2.402083);
   VbbHcc_HMass_all_stack_7->SetBinContent(23,2.469001);
   VbbHcc_HMass_all_stack_7->SetBinContent(24,1.621475);
   VbbHcc_HMass_all_stack_7->SetBinContent(25,1.64669);
   VbbHcc_HMass_all_stack_7->SetBinContent(26,1.351794);
   VbbHcc_HMass_all_stack_7->SetBinContent(27,1.345851);
   VbbHcc_HMass_all_stack_7->SetBinContent(28,1.395647);
   VbbHcc_HMass_all_stack_7->SetBinContent(29,1.247642);
   VbbHcc_HMass_all_stack_7->SetBinContent(30,1.271025);
   VbbHcc_HMass_all_stack_7->SetBinContent(31,15.52049);
   VbbHcc_HMass_all_stack_7->SetBinError(3,0.3875877);
   VbbHcc_HMass_all_stack_7->SetBinError(4,0.5200274);
   VbbHcc_HMass_all_stack_7->SetBinError(5,0.6590563);
   VbbHcc_HMass_all_stack_7->SetBinError(6,0.8073533);
   VbbHcc_HMass_all_stack_7->SetBinError(7,0.9801578);
   VbbHcc_HMass_all_stack_7->SetBinError(8,1.228084);
   VbbHcc_HMass_all_stack_7->SetBinError(9,1.433842);
   VbbHcc_HMass_all_stack_7->SetBinError(10,1.22736);
   VbbHcc_HMass_all_stack_7->SetBinError(11,1.080678);
   VbbHcc_HMass_all_stack_7->SetBinError(12,0.7395891);
   VbbHcc_HMass_all_stack_7->SetBinError(13,0.8029574);
   VbbHcc_HMass_all_stack_7->SetBinError(14,0.8494406);
   VbbHcc_HMass_all_stack_7->SetBinError(15,0.6464044);
   VbbHcc_HMass_all_stack_7->SetBinError(16,0.7248076);
   VbbHcc_HMass_all_stack_7->SetBinError(17,0.6734705);
   VbbHcc_HMass_all_stack_7->SetBinError(18,0.6360955);
   VbbHcc_HMass_all_stack_7->SetBinError(19,0.5765064);
   VbbHcc_HMass_all_stack_7->SetBinError(20,0.5649752);
   VbbHcc_HMass_all_stack_7->SetBinError(21,0.5026071);
   VbbHcc_HMass_all_stack_7->SetBinError(22,0.5920583);
   VbbHcc_HMass_all_stack_7->SetBinError(23,0.5743769);
   VbbHcc_HMass_all_stack_7->SetBinError(24,0.4554913);
   VbbHcc_HMass_all_stack_7->SetBinError(25,0.4986112);
   VbbHcc_HMass_all_stack_7->SetBinError(26,0.3734652);
   VbbHcc_HMass_all_stack_7->SetBinError(27,0.4068216);
   VbbHcc_HMass_all_stack_7->SetBinError(28,0.389921);
   VbbHcc_HMass_all_stack_7->SetBinError(29,0.437463);
   VbbHcc_HMass_all_stack_7->SetBinError(30,0.4159145);
   VbbHcc_HMass_all_stack_7->SetBinError(31,1.39491);
   VbbHcc_HMass_all_stack_7->SetEntries(1328);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_HMass_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_all_stack_7->SetLineColor(ci);
   VbbHcc_HMass_all_stack_7->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_all_stack_7,"");
   
   TH1D *VbbHcc_HMass_all_stack_8 = new TH1D("VbbHcc_HMass_all_stack_8","",30,0,300);
   VbbHcc_HMass_all_stack_8->SetBinContent(3,7.59865);
   VbbHcc_HMass_all_stack_8->SetBinContent(4,11.62722);
   VbbHcc_HMass_all_stack_8->SetBinContent(5,21.08437);
   VbbHcc_HMass_all_stack_8->SetBinContent(6,24.16474);
   VbbHcc_HMass_all_stack_8->SetBinContent(7,43.3708);
   VbbHcc_HMass_all_stack_8->SetBinContent(8,64.11197);
   VbbHcc_HMass_all_stack_8->SetBinContent(9,97.91974);
   VbbHcc_HMass_all_stack_8->SetBinContent(10,73.21091);
   VbbHcc_HMass_all_stack_8->SetBinContent(11,38.19098);
   VbbHcc_HMass_all_stack_8->SetBinContent(12,27.11199);
   VbbHcc_HMass_all_stack_8->SetBinContent(13,18.41912);
   VbbHcc_HMass_all_stack_8->SetBinContent(14,15.27569);
   VbbHcc_HMass_all_stack_8->SetBinContent(15,14.50181);
   VbbHcc_HMass_all_stack_8->SetBinContent(16,10.44122);
   VbbHcc_HMass_all_stack_8->SetBinContent(17,12.92421);
   VbbHcc_HMass_all_stack_8->SetBinContent(18,12.62492);
   VbbHcc_HMass_all_stack_8->SetBinContent(19,12.29925);
   VbbHcc_HMass_all_stack_8->SetBinContent(20,6.14797);
   VbbHcc_HMass_all_stack_8->SetBinContent(21,5.546874);
   VbbHcc_HMass_all_stack_8->SetBinContent(22,6.014865);
   VbbHcc_HMass_all_stack_8->SetBinContent(23,5.321281);
   VbbHcc_HMass_all_stack_8->SetBinContent(24,2.953665);
   VbbHcc_HMass_all_stack_8->SetBinContent(25,4.33904);
   VbbHcc_HMass_all_stack_8->SetBinContent(26,2.853353);
   VbbHcc_HMass_all_stack_8->SetBinContent(27,4.394243);
   VbbHcc_HMass_all_stack_8->SetBinContent(28,3.30735);
   VbbHcc_HMass_all_stack_8->SetBinContent(29,2.648173);
   VbbHcc_HMass_all_stack_8->SetBinContent(30,3.513495);
   VbbHcc_HMass_all_stack_8->SetBinContent(31,29.99387);
   VbbHcc_HMass_all_stack_8->SetBinError(3,1.258419);
   VbbHcc_HMass_all_stack_8->SetBinError(4,1.559585);
   VbbHcc_HMass_all_stack_8->SetBinError(5,2.114046);
   VbbHcc_HMass_all_stack_8->SetBinError(6,2.254016);
   VbbHcc_HMass_all_stack_8->SetBinError(7,3.047014);
   VbbHcc_HMass_all_stack_8->SetBinError(8,3.635656);
   VbbHcc_HMass_all_stack_8->SetBinError(9,4.514247);
   VbbHcc_HMass_all_stack_8->SetBinError(10,3.882428);
   VbbHcc_HMass_all_stack_8->SetBinError(11,2.816095);
   VbbHcc_HMass_all_stack_8->SetBinError(12,2.37593);
   VbbHcc_HMass_all_stack_8->SetBinError(13,1.951312);
   VbbHcc_HMass_all_stack_8->SetBinError(14,1.791389);
   VbbHcc_HMass_all_stack_8->SetBinError(15,1.72125);
   VbbHcc_HMass_all_stack_8->SetBinError(16,1.455645);
   VbbHcc_HMass_all_stack_8->SetBinError(17,1.625436);
   VbbHcc_HMass_all_stack_8->SetBinError(18,1.610323);
   VbbHcc_HMass_all_stack_8->SetBinError(19,1.591662);
   VbbHcc_HMass_all_stack_8->SetBinError(20,1.11448);
   VbbHcc_HMass_all_stack_8->SetBinError(21,1.066969);
   VbbHcc_HMass_all_stack_8->SetBinError(22,1.109884);
   VbbHcc_HMass_all_stack_8->SetBinError(23,1.050894);
   VbbHcc_HMass_all_stack_8->SetBinError(24,0.7669113);
   VbbHcc_HMass_all_stack_8->SetBinError(25,0.9666202);
   VbbHcc_HMass_all_stack_8->SetBinError(26,0.7666992);
   VbbHcc_HMass_all_stack_8->SetBinError(27,0.9620346);
   VbbHcc_HMass_all_stack_8->SetBinError(28,0.8347001);
   VbbHcc_HMass_all_stack_8->SetBinError(29,0.7472956);
   VbbHcc_HMass_all_stack_8->SetBinError(30,0.8702896);
   VbbHcc_HMass_all_stack_8->SetBinError(31,2.472611);
   VbbHcc_HMass_all_stack_8->SetEntries(2883);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_HMass_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_all_stack_8->SetLineColor(ci);
   VbbHcc_HMass_all_stack_8->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_all_stack_8,"");
   
   TH1D *VbbHcc_HMass_all_stack_9 = new TH1D("VbbHcc_HMass_all_stack_9","",30,0,300);
   VbbHcc_HMass_all_stack_9->SetBinContent(2,0.05616907);
   VbbHcc_HMass_all_stack_9->SetBinContent(3,2.264532);
   VbbHcc_HMass_all_stack_9->SetBinContent(4,6.718292);
   VbbHcc_HMass_all_stack_9->SetBinContent(5,9.717018);
   VbbHcc_HMass_all_stack_9->SetBinContent(6,14.54594);
   VbbHcc_HMass_all_stack_9->SetBinContent(7,23.30622);
   VbbHcc_HMass_all_stack_9->SetBinContent(8,37.8398);
   VbbHcc_HMass_all_stack_9->SetBinContent(9,50.2816);
   VbbHcc_HMass_all_stack_9->SetBinContent(10,50.05004);
   VbbHcc_HMass_all_stack_9->SetBinContent(11,35.85015);
   VbbHcc_HMass_all_stack_9->SetBinContent(12,27.0589);
   VbbHcc_HMass_all_stack_9->SetBinContent(13,21.30163);
   VbbHcc_HMass_all_stack_9->SetBinContent(14,14.74279);
   VbbHcc_HMass_all_stack_9->SetBinContent(15,10.86922);
   VbbHcc_HMass_all_stack_9->SetBinContent(16,9.131807);
   VbbHcc_HMass_all_stack_9->SetBinContent(17,7.937977);
   VbbHcc_HMass_all_stack_9->SetBinContent(18,6.934243);
   VbbHcc_HMass_all_stack_9->SetBinContent(19,6.266654);
   VbbHcc_HMass_all_stack_9->SetBinContent(20,5.46086);
   VbbHcc_HMass_all_stack_9->SetBinContent(21,4.897612);
   VbbHcc_HMass_all_stack_9->SetBinContent(22,4.485124);
   VbbHcc_HMass_all_stack_9->SetBinContent(23,3.836864);
   VbbHcc_HMass_all_stack_9->SetBinContent(24,3.594316);
   VbbHcc_HMass_all_stack_9->SetBinContent(25,3.236487);
   VbbHcc_HMass_all_stack_9->SetBinContent(26,2.879934);
   VbbHcc_HMass_all_stack_9->SetBinContent(27,2.695612);
   VbbHcc_HMass_all_stack_9->SetBinContent(28,2.30166);
   VbbHcc_HMass_all_stack_9->SetBinContent(29,2.173487);
   VbbHcc_HMass_all_stack_9->SetBinContent(30,1.954767);
   VbbHcc_HMass_all_stack_9->SetBinContent(31,18.98923);
   VbbHcc_HMass_all_stack_9->SetBinError(2,0.01014051);
   VbbHcc_HMass_all_stack_9->SetBinError(3,0.06370858);
   VbbHcc_HMass_all_stack_9->SetBinError(4,0.1101799);
   VbbHcc_HMass_all_stack_9->SetBinError(5,0.1316447);
   VbbHcc_HMass_all_stack_9->SetBinError(6,0.1602468);
   VbbHcc_HMass_all_stack_9->SetBinError(7,0.203948);
   VbbHcc_HMass_all_stack_9->SetBinError(8,0.2591065);
   VbbHcc_HMass_all_stack_9->SetBinError(9,0.29917);
   VbbHcc_HMass_all_stack_9->SetBinError(10,0.2980891);
   VbbHcc_HMass_all_stack_9->SetBinError(11,0.2517715);
   VbbHcc_HMass_all_stack_9->SetBinError(12,0.2191107);
   VbbHcc_HMass_all_stack_9->SetBinError(13,0.1933928);
   VbbHcc_HMass_all_stack_9->SetBinError(14,0.1609719);
   VbbHcc_HMass_all_stack_9->SetBinError(15,0.1380712);
   VbbHcc_HMass_all_stack_9->SetBinError(16,0.126177);
   VbbHcc_HMass_all_stack_9->SetBinError(17,0.1181163);
   VbbHcc_HMass_all_stack_9->SetBinError(18,0.1097778);
   VbbHcc_HMass_all_stack_9->SetBinError(19,0.1050487);
   VbbHcc_HMass_all_stack_9->SetBinError(20,0.09787608);
   VbbHcc_HMass_all_stack_9->SetBinError(21,0.09274749);
   VbbHcc_HMass_all_stack_9->SetBinError(22,0.0895269);
   VbbHcc_HMass_all_stack_9->SetBinError(23,0.08171009);
   VbbHcc_HMass_all_stack_9->SetBinError(24,0.07999065);
   VbbHcc_HMass_all_stack_9->SetBinError(25,0.07515516);
   VbbHcc_HMass_all_stack_9->SetBinError(26,0.07066725);
   VbbHcc_HMass_all_stack_9->SetBinError(27,0.0682266);
   VbbHcc_HMass_all_stack_9->SetBinError(28,0.06344632);
   VbbHcc_HMass_all_stack_9->SetBinError(29,0.06174271);
   VbbHcc_HMass_all_stack_9->SetBinError(30,0.05854844);
   VbbHcc_HMass_all_stack_9->SetBinError(31,0.1818615);
   VbbHcc_HMass_all_stack_9->SetEntries(249013);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_HMass_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_all_stack_9->SetLineColor(ci);
   VbbHcc_HMass_all_stack_9->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_all_stack_9,"");
   
   TH1D *VbbHcc_HMass_all_stack_10 = new TH1D("VbbHcc_HMass_all_stack_10","",30,0,300);
   VbbHcc_HMass_all_stack_10->SetBinContent(2,0.003625558);
   VbbHcc_HMass_all_stack_10->SetBinContent(3,0.137851);
   VbbHcc_HMass_all_stack_10->SetBinContent(4,0.5043479);
   VbbHcc_HMass_all_stack_10->SetBinContent(5,1.166013);
   VbbHcc_HMass_all_stack_10->SetBinContent(6,2.065676);
   VbbHcc_HMass_all_stack_10->SetBinContent(7,4.302366);
   VbbHcc_HMass_all_stack_10->SetBinContent(8,7.719631);
   VbbHcc_HMass_all_stack_10->SetBinContent(9,11.03883);
   VbbHcc_HMass_all_stack_10->SetBinContent(10,10.79104);
   VbbHcc_HMass_all_stack_10->SetBinContent(11,8.007619);
   VbbHcc_HMass_all_stack_10->SetBinContent(12,6.157047);
   VbbHcc_HMass_all_stack_10->SetBinContent(13,4.927616);
   VbbHcc_HMass_all_stack_10->SetBinContent(14,3.564432);
   VbbHcc_HMass_all_stack_10->SetBinContent(15,2.659245);
   VbbHcc_HMass_all_stack_10->SetBinContent(16,2.289655);
   VbbHcc_HMass_all_stack_10->SetBinContent(17,2.068592);
   VbbHcc_HMass_all_stack_10->SetBinContent(18,1.896895);
   VbbHcc_HMass_all_stack_10->SetBinContent(19,1.787008);
   VbbHcc_HMass_all_stack_10->SetBinContent(20,1.63265);
   VbbHcc_HMass_all_stack_10->SetBinContent(21,1.456405);
   VbbHcc_HMass_all_stack_10->SetBinContent(22,1.302847);
   VbbHcc_HMass_all_stack_10->SetBinContent(23,1.15831);
   VbbHcc_HMass_all_stack_10->SetBinContent(24,1.132385);
   VbbHcc_HMass_all_stack_10->SetBinContent(25,0.9142342);
   VbbHcc_HMass_all_stack_10->SetBinContent(26,0.8479228);
   VbbHcc_HMass_all_stack_10->SetBinContent(27,0.7376153);
   VbbHcc_HMass_all_stack_10->SetBinContent(28,0.6787051);
   VbbHcc_HMass_all_stack_10->SetBinContent(29,0.601465);
   VbbHcc_HMass_all_stack_10->SetBinContent(30,0.5331719);
   VbbHcc_HMass_all_stack_10->SetBinContent(31,6.115671);
   VbbHcc_HMass_all_stack_10->SetBinError(2,0.001211723);
   VbbHcc_HMass_all_stack_10->SetBinError(3,0.007544034);
   VbbHcc_HMass_all_stack_10->SetBinError(4,0.01437369);
   VbbHcc_HMass_all_stack_10->SetBinError(5,0.02190478);
   VbbHcc_HMass_all_stack_10->SetBinError(6,0.02909394);
   VbbHcc_HMass_all_stack_10->SetBinError(7,0.04205928);
   VbbHcc_HMass_all_stack_10->SetBinError(8,0.05635767);
   VbbHcc_HMass_all_stack_10->SetBinError(9,0.06736034);
   VbbHcc_HMass_all_stack_10->SetBinError(10,0.06658527);
   VbbHcc_HMass_all_stack_10->SetBinError(11,0.05733809);
   VbbHcc_HMass_all_stack_10->SetBinError(12,0.05029054);
   VbbHcc_HMass_all_stack_10->SetBinError(13,0.04499319);
   VbbHcc_HMass_all_stack_10->SetBinError(14,0.03824683);
   VbbHcc_HMass_all_stack_10->SetBinError(15,0.03306358);
   VbbHcc_HMass_all_stack_10->SetBinError(16,0.03065302);
   VbbHcc_HMass_all_stack_10->SetBinError(17,0.02911224);
   VbbHcc_HMass_all_stack_10->SetBinError(18,0.02791682);
   VbbHcc_HMass_all_stack_10->SetBinError(19,0.02705681);
   VbbHcc_HMass_all_stack_10->SetBinError(20,0.02591267);
   VbbHcc_HMass_all_stack_10->SetBinError(21,0.02445911);
   VbbHcc_HMass_all_stack_10->SetBinError(22,0.02314388);
   VbbHcc_HMass_all_stack_10->SetBinError(23,0.02180631);
   VbbHcc_HMass_all_stack_10->SetBinError(24,0.02152042);
   VbbHcc_HMass_all_stack_10->SetBinError(25,0.01936234);
   VbbHcc_HMass_all_stack_10->SetBinError(26,0.01858757);
   VbbHcc_HMass_all_stack_10->SetBinError(27,0.01738327);
   VbbHcc_HMass_all_stack_10->SetBinError(28,0.01666295);
   VbbHcc_HMass_all_stack_10->SetBinError(29,0.01569435);
   VbbHcc_HMass_all_stack_10->SetBinError(30,0.01477927);
   VbbHcc_HMass_all_stack_10->SetBinError(31,0.04990449);
   VbbHcc_HMass_all_stack_10->SetEntries(218730);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_HMass_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_all_stack_10->SetLineColor(ci);
   VbbHcc_HMass_all_stack_10->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_all_stack_10,"");
   
   TH1D *VbbHcc_HMass_all_stack_11 = new TH1D("VbbHcc_HMass_all_stack_11","",30,0,300);
   VbbHcc_HMass_all_stack_11->SetBinContent(2,0.006538707);
   VbbHcc_HMass_all_stack_11->SetBinContent(3,0.06618248);
   VbbHcc_HMass_all_stack_11->SetBinContent(4,0.3033056);
   VbbHcc_HMass_all_stack_11->SetBinContent(5,0.4177874);
   VbbHcc_HMass_all_stack_11->SetBinContent(6,0.4626121);
   VbbHcc_HMass_all_stack_11->SetBinContent(7,0.6733139);
   VbbHcc_HMass_all_stack_11->SetBinContent(8,0.6984028);
   VbbHcc_HMass_all_stack_11->SetBinContent(9,1.019257);
   VbbHcc_HMass_all_stack_11->SetBinContent(10,1.143484);
   VbbHcc_HMass_all_stack_11->SetBinContent(11,1.427613);
   VbbHcc_HMass_all_stack_11->SetBinContent(12,1.496967);
   VbbHcc_HMass_all_stack_11->SetBinContent(13,1.47473);
   VbbHcc_HMass_all_stack_11->SetBinContent(14,1.051485);
   VbbHcc_HMass_all_stack_11->SetBinContent(15,0.6127792);
   VbbHcc_HMass_all_stack_11->SetBinContent(16,0.5150512);
   VbbHcc_HMass_all_stack_11->SetBinContent(17,0.3323739);
   VbbHcc_HMass_all_stack_11->SetBinContent(18,0.3397095);
   VbbHcc_HMass_all_stack_11->SetBinContent(19,0.3076728);
   VbbHcc_HMass_all_stack_11->SetBinContent(20,0.2320658);
   VbbHcc_HMass_all_stack_11->SetBinContent(21,0.2359556);
   VbbHcc_HMass_all_stack_11->SetBinContent(22,0.2487883);
   VbbHcc_HMass_all_stack_11->SetBinContent(23,0.2709839);
   VbbHcc_HMass_all_stack_11->SetBinContent(24,0.2139692);
   VbbHcc_HMass_all_stack_11->SetBinContent(25,0.1902964);
   VbbHcc_HMass_all_stack_11->SetBinContent(26,0.1802791);
   VbbHcc_HMass_all_stack_11->SetBinContent(27,0.1194784);
   VbbHcc_HMass_all_stack_11->SetBinContent(28,0.1635024);
   VbbHcc_HMass_all_stack_11->SetBinContent(29,0.1680789);
   VbbHcc_HMass_all_stack_11->SetBinContent(30,0.1183865);
   VbbHcc_HMass_all_stack_11->SetBinContent(31,1.345457);
   VbbHcc_HMass_all_stack_11->SetBinError(2,0.003247736);
   VbbHcc_HMass_all_stack_11->SetBinError(3,0.01143277);
   VbbHcc_HMass_all_stack_11->SetBinError(4,0.02405289);
   VbbHcc_HMass_all_stack_11->SetBinError(5,0.02877425);
   VbbHcc_HMass_all_stack_11->SetBinError(6,0.03012607);
   VbbHcc_HMass_all_stack_11->SetBinError(7,0.03687148);
   VbbHcc_HMass_all_stack_11->SetBinError(8,0.03747904);
   VbbHcc_HMass_all_stack_11->SetBinError(9,0.0457672);
   VbbHcc_HMass_all_stack_11->SetBinError(10,0.04802646);
   VbbHcc_HMass_all_stack_11->SetBinError(11,0.05300546);
   VbbHcc_HMass_all_stack_11->SetBinError(12,0.05446171);
   VbbHcc_HMass_all_stack_11->SetBinError(13,0.05536616);
   VbbHcc_HMass_all_stack_11->SetBinError(14,0.04775409);
   VbbHcc_HMass_all_stack_11->SetBinError(15,0.03417436);
   VbbHcc_HMass_all_stack_11->SetBinError(16,0.03180749);
   VbbHcc_HMass_all_stack_11->SetBinError(17,0.02522795);
   VbbHcc_HMass_all_stack_11->SetBinError(18,0.02575201);
   VbbHcc_HMass_all_stack_11->SetBinError(19,0.02513991);
   VbbHcc_HMass_all_stack_11->SetBinError(20,0.02144886);
   VbbHcc_HMass_all_stack_11->SetBinError(21,0.02146834);
   VbbHcc_HMass_all_stack_11->SetBinError(22,0.02199411);
   VbbHcc_HMass_all_stack_11->SetBinError(23,0.0233547);
   VbbHcc_HMass_all_stack_11->SetBinError(24,0.01981295);
   VbbHcc_HMass_all_stack_11->SetBinError(25,0.01967102);
   VbbHcc_HMass_all_stack_11->SetBinError(26,0.01845201);
   VbbHcc_HMass_all_stack_11->SetBinError(27,0.01520998);
   VbbHcc_HMass_all_stack_11->SetBinError(28,0.01855824);
   VbbHcc_HMass_all_stack_11->SetBinError(29,0.01849661);
   VbbHcc_HMass_all_stack_11->SetBinError(30,0.01539928);
   VbbHcc_HMass_all_stack_11->SetBinError(31,0.04986412);
   VbbHcc_HMass_all_stack_11->SetEntries(9805);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_HMass_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_all_stack_11->SetLineColor(ci);
   VbbHcc_HMass_all_stack_11->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_all_stack_11,"");
   
   TH1D *VbbHcc_HMass_all_stack_12 = new TH1D("VbbHcc_HMass_all_stack_12","",30,0,300);
   VbbHcc_HMass_all_stack_12->SetBinContent(2,0.0003751476);
   VbbHcc_HMass_all_stack_12->SetBinContent(3,0.007438906);
   VbbHcc_HMass_all_stack_12->SetBinContent(4,0.05370428);
   VbbHcc_HMass_all_stack_12->SetBinContent(5,0.09482241);
   VbbHcc_HMass_all_stack_12->SetBinContent(6,0.1197472);
   VbbHcc_HMass_all_stack_12->SetBinContent(7,0.1524097);
   VbbHcc_HMass_all_stack_12->SetBinContent(8,0.1813981);
   VbbHcc_HMass_all_stack_12->SetBinContent(9,0.2475086);
   VbbHcc_HMass_all_stack_12->SetBinContent(10,0.2792386);
   VbbHcc_HMass_all_stack_12->SetBinContent(11,0.342567);
   VbbHcc_HMass_all_stack_12->SetBinContent(12,0.4026244);
   VbbHcc_HMass_all_stack_12->SetBinContent(13,0.4079243);
   VbbHcc_HMass_all_stack_12->SetBinContent(14,0.2999808);
   VbbHcc_HMass_all_stack_12->SetBinContent(15,0.1880389);
   VbbHcc_HMass_all_stack_12->SetBinContent(16,0.1244587);
   VbbHcc_HMass_all_stack_12->SetBinContent(17,0.1385553);
   VbbHcc_HMass_all_stack_12->SetBinContent(18,0.1220133);
   VbbHcc_HMass_all_stack_12->SetBinContent(19,0.1273501);
   VbbHcc_HMass_all_stack_12->SetBinContent(20,0.1129953);
   VbbHcc_HMass_all_stack_12->SetBinContent(21,0.1190016);
   VbbHcc_HMass_all_stack_12->SetBinContent(22,0.09323854);
   VbbHcc_HMass_all_stack_12->SetBinContent(23,0.08579057);
   VbbHcc_HMass_all_stack_12->SetBinContent(24,0.08038894);
   VbbHcc_HMass_all_stack_12->SetBinContent(25,0.09045617);
   VbbHcc_HMass_all_stack_12->SetBinContent(26,0.0730972);
   VbbHcc_HMass_all_stack_12->SetBinContent(27,0.0785067);
   VbbHcc_HMass_all_stack_12->SetBinContent(28,0.07497094);
   VbbHcc_HMass_all_stack_12->SetBinContent(29,0.05972086);
   VbbHcc_HMass_all_stack_12->SetBinContent(30,0.05219565);
   VbbHcc_HMass_all_stack_12->SetBinContent(31,0.877689);
   VbbHcc_HMass_all_stack_12->SetBinError(2,0.0002652694);
   VbbHcc_HMass_all_stack_12->SetBinError(3,0.001307423);
   VbbHcc_HMass_all_stack_12->SetBinError(4,0.003616555);
   VbbHcc_HMass_all_stack_12->SetBinError(5,0.00488564);
   VbbHcc_HMass_all_stack_12->SetBinError(6,0.00543652);
   VbbHcc_HMass_all_stack_12->SetBinError(7,0.006182597);
   VbbHcc_HMass_all_stack_12->SetBinError(8,0.00675256);
   VbbHcc_HMass_all_stack_12->SetBinError(9,0.007918304);
   VbbHcc_HMass_all_stack_12->SetBinError(10,0.008438625);
   VbbHcc_HMass_all_stack_12->SetBinError(11,0.009307628);
   VbbHcc_HMass_all_stack_12->SetBinError(12,0.01001305);
   VbbHcc_HMass_all_stack_12->SetBinError(13,0.01016977);
   VbbHcc_HMass_all_stack_12->SetBinError(14,0.008705584);
   VbbHcc_HMass_all_stack_12->SetBinError(15,0.006861241);
   VbbHcc_HMass_all_stack_12->SetBinError(16,0.00550313);
   VbbHcc_HMass_all_stack_12->SetBinError(17,0.005916703);
   VbbHcc_HMass_all_stack_12->SetBinError(18,0.005396328);
   VbbHcc_HMass_all_stack_12->SetBinError(19,0.005606376);
   VbbHcc_HMass_all_stack_12->SetBinError(20,0.00533884);
   VbbHcc_HMass_all_stack_12->SetBinError(21,0.005503141);
   VbbHcc_HMass_all_stack_12->SetBinError(22,0.004799298);
   VbbHcc_HMass_all_stack_12->SetBinError(23,0.004490468);
   VbbHcc_HMass_all_stack_12->SetBinError(24,0.004418422);
   VbbHcc_HMass_all_stack_12->SetBinError(25,0.004691471);
   VbbHcc_HMass_all_stack_12->SetBinError(26,0.004258807);
   VbbHcc_HMass_all_stack_12->SetBinError(27,0.004349536);
   VbbHcc_HMass_all_stack_12->SetBinError(28,0.004186591);
   VbbHcc_HMass_all_stack_12->SetBinError(29,0.003801962);
   VbbHcc_HMass_all_stack_12->SetBinError(30,0.003528106);
   VbbHcc_HMass_all_stack_12->SetBinError(31,0.01425291);
   VbbHcc_HMass_all_stack_12->SetEntries(24305);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_HMass_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_all_stack_12->SetLineColor(ci);
   VbbHcc_HMass_all_stack_12->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_HMass_all__15 = new TH1D("VbbHcc_HMass_all__15","",30,0,300);
   VbbHcc_HMass_all__15->SetBinContent(2,80);
   VbbHcc_HMass_all__15->SetBinContent(3,3322);
   VbbHcc_HMass_all__15->SetBinContent(4,10605);
   VbbHcc_HMass_all__15->SetBinContent(5,17052);
   VbbHcc_HMass_all__15->SetBinContent(6,20617);
   VbbHcc_HMass_all__15->SetBinContent(7,22424);
   VbbHcc_HMass_all__15->SetBinContent(8,24343);
   VbbHcc_HMass_all__15->SetBinContent(9,24608);
   VbbHcc_HMass_all__15->SetBinContent(10,24191);
   VbbHcc_HMass_all__15->SetBinContent(11,23721);
   VbbHcc_HMass_all__15->SetBinContent(12,22577);
   VbbHcc_HMass_all__15->SetBinContent(13,21355);
   VbbHcc_HMass_all__15->SetBinContent(14,20843);
   VbbHcc_HMass_all__15->SetBinContent(15,19381);
   VbbHcc_HMass_all__15->SetBinContent(16,18277);
   VbbHcc_HMass_all__15->SetBinContent(17,17526);
   VbbHcc_HMass_all__15->SetBinContent(18,16497);
   VbbHcc_HMass_all__15->SetBinContent(19,15563);
   VbbHcc_HMass_all__15->SetBinContent(20,14618);
   VbbHcc_HMass_all__15->SetBinContent(21,13777);
   VbbHcc_HMass_all__15->SetBinContent(22,12707);
   VbbHcc_HMass_all__15->SetBinContent(23,11991);
   VbbHcc_HMass_all__15->SetBinContent(24,11291);
   VbbHcc_HMass_all__15->SetBinContent(25,10629);
   VbbHcc_HMass_all__15->SetBinContent(26,9829);
   VbbHcc_HMass_all__15->SetBinContent(27,9293);
   VbbHcc_HMass_all__15->SetBinContent(28,8500);
   VbbHcc_HMass_all__15->SetBinContent(29,7842);
   VbbHcc_HMass_all__15->SetBinContent(30,7527);
   VbbHcc_HMass_all__15->SetBinContent(31,129039);
   VbbHcc_HMass_all__15->SetBinError(2,8.944272);
   VbbHcc_HMass_all__15->SetBinError(3,57.63679);
   VbbHcc_HMass_all__15->SetBinError(4,102.9806);
   VbbHcc_HMass_all__15->SetBinError(5,130.5833);
   VbbHcc_HMass_all__15->SetBinError(6,143.5862);
   VbbHcc_HMass_all__15->SetBinError(7,149.7465);
   VbbHcc_HMass_all__15->SetBinError(8,156.0224);
   VbbHcc_HMass_all__15->SetBinError(9,156.8694);
   VbbHcc_HMass_all__15->SetBinError(10,155.5346);
   VbbHcc_HMass_all__15->SetBinError(11,154.0162);
   VbbHcc_HMass_all__15->SetBinError(12,150.2564);
   VbbHcc_HMass_all__15->SetBinError(13,146.1335);
   VbbHcc_HMass_all__15->SetBinError(14,144.371);
   VbbHcc_HMass_all__15->SetBinError(15,139.2157);
   VbbHcc_HMass_all__15->SetBinError(16,135.1925);
   VbbHcc_HMass_all__15->SetBinError(17,132.3858);
   VbbHcc_HMass_all__15->SetBinError(18,128.4406);
   VbbHcc_HMass_all__15->SetBinError(19,124.7518);
   VbbHcc_HMass_all__15->SetBinError(20,120.9049);
   VbbHcc_HMass_all__15->SetBinError(21,117.3755);
   VbbHcc_HMass_all__15->SetBinError(22,112.7253);
   VbbHcc_HMass_all__15->SetBinError(23,109.5034);
   VbbHcc_HMass_all__15->SetBinError(24,106.2591);
   VbbHcc_HMass_all__15->SetBinError(25,103.097);
   VbbHcc_HMass_all__15->SetBinError(26,99.14131);
   VbbHcc_HMass_all__15->SetBinError(27,96.40021);
   VbbHcc_HMass_all__15->SetBinError(28,92.19544);
   VbbHcc_HMass_all__15->SetBinError(29,88.55507);
   VbbHcc_HMass_all__15->SetBinError(30,86.75828);
   VbbHcc_HMass_all__15->SetBinError(31,359.22);
   VbbHcc_HMass_all__15->SetEntries(570025);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_all__15->SetLineColor(ci);
   VbbHcc_HMass_all__15->SetLineWidth(2);
   VbbHcc_HMass_all__15->SetMarkerStyle(20);
   VbbHcc_HMass_all__15->SetMarkerSize(1.2);
   VbbHcc_HMass_all__15->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_all__15->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_all__15->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all__15->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all__15->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_all__15->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_all__15->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all__15->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all__15->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_all__15->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_all__15->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_all__15->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_all__15->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_all__15->GetZaxis()->SetTitleFont(42);
   VbbHcc_HMass_all__15->Draw("same E");
   
   Double_t Graph_from_VbbHcc_HMass_all_fx1015[30] = {
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
   Double_t Graph_from_VbbHcc_HMass_all_fy1015[30] = {
   0,
   755.6705,
   27487.53,
   97675.12,
   127170.1,
   127067.7,
   119676.1,
   123536.6,
   115809.4,
   105561.8,
   102561.6,
   114263.3,
   98685.65,
   97813.8,
   90526.76,
   82921.82,
   85334.72,
   86234.04,
   71369.82,
   68251.54,
   62332.06,
   54688.66,
   51816.33,
   41409.84,
   41196.04,
   36594.36,
   32989.33,
   28204.26,
   31706.15,
   22863.45};
   Double_t Graph_from_VbbHcc_HMass_all_fex1015[30] = {
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
   Double_t Graph_from_VbbHcc_HMass_all_fey1015[30] = {
   0,
   434.7115,
   2615.868,
   4932.46,
   5491.962,
   5326.944,
   4921.625,
   4925.324,
   4614.763,
   4372.627,
   4398.908,
   4806.111,
   4338.562,
   4397.76,
   4215.559,
   4024.192,
   4178.768,
   4289.383,
   3778.958,
   3705.51,
   3596.512,
   3282.489,
   3157.693,
   2685.158,
   2744.043,
   2548.451,
   2443.155,
   2203.226,
   2403.77,
   1813.414};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_HMass_all_fx1015,Graph_from_VbbHcc_HMass_all_fy1015,Graph_from_VbbHcc_HMass_all_fex1015,Graph_from_VbbHcc_HMass_all_fey1015);
   gre->SetName("Graph_from_VbbHcc_HMass_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_HMass_all1015 = new TH1F("Graph_Graph_from_VbbHcc_HMass_all1015","",100,0,330);
   Graph_Graph_from_VbbHcc_HMass_all1015->SetMinimum(0);
   Graph_Graph_from_VbbHcc_HMass_all1015->SetMaximum(145928.3);
   Graph_Graph_from_VbbHcc_HMass_all1015->SetDirectory(0);
   Graph_Graph_from_VbbHcc_HMass_all1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_HMass_all1015->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_HMass_all1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HMass_all1015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HMass_all1015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HMass_all1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_HMass_all1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HMass_all1015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HMass_all1015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HMass_all1015->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_HMass_all1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_HMass_all1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HMass_all1015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HMass_all1015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HMass_all1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_HMass_all1015);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_HMass_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HMass_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_HMass_all","MC unc. (stat.)","fl");

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
   HMass_VbbHcc_all->cd();
  
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
   
   TH1D *data_mc_ratio__16 = new TH1D("data_mc_ratio__16","",30,0,300);
   data_mc_ratio__16->SetBinContent(2,0.1058662);
   data_mc_ratio__16->SetBinContent(3,0.1208548);
   data_mc_ratio__16->SetBinContent(4,0.1085742);
   data_mc_ratio__16->SetBinContent(5,0.1340881);
   data_mc_ratio__16->SetBinContent(6,0.1622521);
   data_mc_ratio__16->SetBinContent(7,0.1873725);
   data_mc_ratio__16->SetBinContent(8,0.1970509);
   data_mc_ratio__16->SetBinContent(9,0.212487);
   data_mc_ratio__16->SetBinContent(10,0.2291644);
   data_mc_ratio__16->SetBinContent(11,0.2312854);
   data_mc_ratio__16->SetBinContent(12,0.1975875);
   data_mc_ratio__16->SetBinContent(13,0.2163942);
   data_mc_ratio__16->SetBinContent(14,0.2130885);
   data_mc_ratio__16->SetBinContent(15,0.2140914);
   data_mc_ratio__16->SetBinContent(16,0.2204124);
   data_mc_ratio__16->SetBinContent(17,0.2053795);
   data_mc_ratio__16->SetBinContent(18,0.191305);
   data_mc_ratio__16->SetBinContent(19,0.2180613);
   data_mc_ratio__16->SetBinContent(20,0.2141783);
   data_mc_ratio__16->SetBinContent(21,0.2210259);
   data_mc_ratio__16->SetBinContent(22,0.2323516);
   data_mc_ratio__16->SetBinContent(23,0.2314135);
   data_mc_ratio__16->SetBinContent(24,0.2726647);
   data_mc_ratio__16->SetBinContent(25,0.2580102);
   data_mc_ratio__16->SetBinContent(26,0.2685933);
   data_mc_ratio__16->SetBinContent(27,0.2816971);
   data_mc_ratio__16->SetBinContent(28,0.3013729);
   data_mc_ratio__16->SetBinContent(29,0.2473337);
   data_mc_ratio__16->SetBinContent(30,0.3292155);
   data_mc_ratio__16->SetBinContent(31,0.3903132);
   data_mc_ratio__16->SetBinError(2,0.01183621);
   data_mc_ratio__16->SetBinError(3,0.002096834);
   data_mc_ratio__16->SetBinError(4,0.001054317);
   data_mc_ratio__16->SetBinError(5,0.00102684);
   data_mc_ratio__16->SetBinError(6,0.001129998);
   data_mc_ratio__16->SetBinError(7,0.001251265);
   data_mc_ratio__16->SetBinError(8,0.001262965);
   data_mc_ratio__16->SetBinError(9,0.001354548);
   data_mc_ratio__16->SetBinError(10,0.001473398);
   data_mc_ratio__16->SetBinError(11,0.001501695);
   data_mc_ratio__16->SetBinError(12,0.001315002);
   data_mc_ratio__16->SetBinError(13,0.001480798);
   data_mc_ratio__16->SetBinError(14,0.001475978);
   data_mc_ratio__16->SetBinError(15,0.00153784);
   data_mc_ratio__16->SetBinError(16,0.001630361);
   data_mc_ratio__16->SetBinError(17,0.001551371);
   data_mc_ratio__16->SetBinError(18,0.001489443);
   data_mc_ratio__16->SetBinError(19,0.001747962);
   data_mc_ratio__16->SetBinError(20,0.001771461);
   data_mc_ratio__16->SetBinError(21,0.001883067);
   data_mc_ratio__16->SetBinError(22,0.002061219);
   data_mc_ratio__16->SetBinError(23,0.002113299);
   data_mc_ratio__16->SetBinError(24,0.002566036);
   data_mc_ratio__16->SetBinError(25,0.002502596);
   data_mc_ratio__16->SetBinError(26,0.002709196);
   data_mc_ratio__16->SetBinError(27,0.002922163);
   data_mc_ratio__16->SetBinError(28,0.003268848);
   data_mc_ratio__16->SetBinError(29,0.002792994);
   data_mc_ratio__16->SetBinError(30,0.003794629);
   data_mc_ratio__16->SetBinError(31,0.008144677);
   data_mc_ratio__16->SetMinimum(0.4);
   data_mc_ratio__16->SetMaximum(1.6);
   data_mc_ratio__16->SetEntries(4280.401);
   data_mc_ratio__16->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__16->SetLineColor(ci);
   data_mc_ratio__16->SetLineWidth(2);
   data_mc_ratio__16->SetMarkerStyle(20);
   data_mc_ratio__16->SetMarkerSize(1.2);
   data_mc_ratio__16->GetXaxis()->SetTitle("M_{H}");
   data_mc_ratio__16->GetXaxis()->SetRange(1,30);
   data_mc_ratio__16->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__16->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__16->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__16->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__16->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__16->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__16->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__16->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__16->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__16->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__16->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__16->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__16->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__16->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1016[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1016[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1016[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1016[30] = {
   0,
   0.5752659,
   0.09516563,
   0.05049863,
   0.04318595,
   0.0419221,
   0.04112455,
   0.03986934,
   0.03984791,
   0.04142244,
   0.0428904,
   0.04206171,
   0.04396346,
   0.04496052,
   0.04656699,
   0.04852995,
   0.04896914,
   0.04974118,
   0.05294896,
   0.05429196,
   0.05769924,
   0.06002137,
   0.06094011,
   0.06484348,
   0.06660939,
   0.06964054,
   0.07405894,
   0.07811679,
   0.075814,
   0.07931497};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1016,Graph_from_mc_statistical_error_fy1016,Graph_from_mc_statistical_error_fex1016,Graph_from_mc_statistical_error_fey1016);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1016 = new TH1F("Graph_Graph_from_mc_statistical_error1016","",100,0,330);
   Graph_Graph_from_mc_statistical_error1016->SetMinimum(0.309681);
   Graph_Graph_from_mc_statistical_error1016->SetMaximum(1.690319);
   Graph_Graph_from_mc_statistical_error1016->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1016->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1016->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1016->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1016->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1016);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   HMass_VbbHcc_all->cd();
   HMass_VbbHcc_all->Modified();
   HMass_VbbHcc_all->cd();
   HMass_VbbHcc_all->SetSelected(HMass_VbbHcc_all);
}
