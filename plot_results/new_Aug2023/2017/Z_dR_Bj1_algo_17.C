void Z_dR_Bj1_algo_17()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_17/Z_dR_Bj1_algo_17
//=========  (Tue Aug 22 09:21:51 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_algo_17 = new TCanvas("Z_dR_Bj1_algo_17", "Z_dR_Bj1_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_algo_17->SetHighLightColor(2);
   Z_dR_Bj1_algo_17->Range(0,0,1,1);
   Z_dR_Bj1_algo_17->SetFillColor(0);
   Z_dR_Bj1_algo_17->SetFillStyle(4000);
   Z_dR_Bj1_algo_17->SetBorderMode(0);
   Z_dR_Bj1_algo_17->SetBorderSize(2);
   Z_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-599.2704,6.314516,598681.1);
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
   st->SetMaximum(513098.2);
   
   TH1F *st_stack_150 = new TH1F("st_stack_150","",30,0,6);
   st_stack_150->SetMinimum(0.01);
   st_stack_150->SetMaximum(538753.1);
   st_stack_150->SetDirectory(0);
   st_stack_150->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_150->SetLineColor(ci);
   st_stack_150->GetXaxis()->SetRange(1,30);
   st_stack_150->GetXaxis()->SetLabelFont(42);
   st_stack_150->GetXaxis()->SetLabelSize(0.035);
   st_stack_150->GetXaxis()->SetTitleSize(0.035);
   st_stack_150->GetXaxis()->SetTitleFont(42);
   st_stack_150->GetYaxis()->SetTitle("Events/0.2");
   st_stack_150->GetYaxis()->SetLabelFont(42);
   st_stack_150->GetYaxis()->SetLabelSize(0.05);
   st_stack_150->GetYaxis()->SetTitleSize(0.057);
   st_stack_150->GetYaxis()->SetTitleOffset(1.2);
   st_stack_150->GetYaxis()->SetTitleFont(42);
   st_stack_150->GetZaxis()->SetLabelFont(42);
   st_stack_150->GetZaxis()->SetLabelSize(0.035);
   st_stack_150->GetZaxis()->SetTitleSize(0.035);
   st_stack_150->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_150);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,423.7499);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,118579.1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,194613.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,170194.3);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,145439.5);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,135407.5);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,114386.1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,96521.89);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,89515.02);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,67096.92);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,51456.08);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,49039.3);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,42282.69);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,38987.18);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,33235.25);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,28778.03);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,26671.04);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,39844.28);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,18308.73);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,17694.25);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,17067.15);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,14519.49);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,13980.95);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,9845.845);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(25,9332.262);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(26,5482.152);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(27,5489.787);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(28,20043.05);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(29,1912.645);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(30,654.0071);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(31,2013.274);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,271.9417);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,4291.054);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,17914.54);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,17791.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,5062.522);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,4959.134);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,4691.659);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,4104.916);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,17418.67);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,3677.598);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,2684.556);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,2688.38);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,2868.114);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,2406.112);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,2397.313);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,1936.407);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,1961.788);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,17119.1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,1474.577);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,1490.722);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,1490.306);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,1404.063);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,1352.08);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,1104.786);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(25,1070.44);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(26,640.7015);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(27,785.3047);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(28,17036.82);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(29,401.4782);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(30,90.02859);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(31,483.4559);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(106115);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,2.677789);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,700.4067);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,1425.053);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,1513.406);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,1315.645);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,1058.729);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,836.7546);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,673.0314);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,538.0255);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,443.1923);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,362.1534);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,314.4513);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,281.8204);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,250.4406);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,221.6731);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,213.1516);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,188.7382);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,177.001);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,157.3442);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,144.2088);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,122.5974);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(22,111.8203);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,90.82101);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,71.55813);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,48.59466);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(26,36.68271);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,23.08754);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(28,14.70528);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(29,6.630587);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(30,5.200078);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(31,12.89147);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.6435418);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,10.23164);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,14.37333);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,14.84779);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,13.90441);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,12.40652);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,11.13114);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,10.02484);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,8.934566);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,8.175646);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,7.218865);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,6.692675);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,6.355201);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,5.948828);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,5.47444);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,5.599978);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,5.271873);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,5.139557);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,4.7516);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,4.614035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,4.169141);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(22,4.049565);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,3.612315);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,3.207291);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,2.600527);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(26,2.318779);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,1.799401);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(28,1.464991);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(29,0.8854554);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(30,0.810598);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(31,1.393357);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(142925);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(1,28.05409);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(2,14748.93);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(3,33090.69);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(4,30998.67);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(5,23129.03);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(6,16517.69);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(7,11912.66);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(8,8877.335);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(9,6873.383);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(10,5605.913);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(11,4729.481);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(12,4139.381);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(13,3683.141);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(14,3349.018);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(15,3134.166);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(16,2912.091);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(17,2661.407);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(18,2527.749);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(19,2355.293);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(20,2239.593);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(21,2051.634);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(22,1786.543);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(23,1406.343);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(24,1023.479);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(25,668.3244);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(26,412.7966);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(27,239.7069);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(28,129.0683);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(29,69.30602);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(30,41.46601);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(31,70.43373);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(1,1.307231);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(2,31.16331);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(3,46.71651);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(4,44.96931);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(5,38.56627);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(6,32.41584);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(7,27.41628);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(8,23.61313);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(9,20.75674);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(10,18.72839);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(11,17.20189);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(12,16.09117);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(13,15.19698);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(14,14.48674);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(15,14.04644);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(16,13.54053);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(17,12.97569);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(18,12.67185);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(19,12.2342);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(20,11.97091);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(21,11.46797);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(22,10.72821);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(23,9.520791);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(24,8.118874);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(25,6.53347);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(26,5.12074);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(27,3.883747);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(28,2.834074);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(29,2.050155);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(30,1.568608);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(31,2.048317);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetEntries(3114170);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(1,2.286498);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(2,755.7662);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(3,1290.086);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(4,1102.671);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(5,921.1994);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(6,728.5143);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(7,592.0866);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(8,484.8139);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(9,379.8489);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(10,303.3234);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(11,250.2344);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(12,245.6126);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(13,212.0998);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(14,184.0448);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(15,160.5448);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(16,175.8887);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(17,130.2652);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(18,133.4408);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(19,121.2216);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(20,96.44854);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(21,93.05842);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(22,75.26853);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(23,70.55695);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(24,56.65814);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(25,46.47494);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(26,26.10229);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(27,17.61407);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(28,12.52077);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(29,7.449144);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(30,4.068784);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(31,7.353472);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(1,0.6989002);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(2,17.16153);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(3,27.72416);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(4,28.38334);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(5,25.20066);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(6,20.57342);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(7,18.67311);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(8,16.69371);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(9,14.22799);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(10,12.2946);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(11,10.62171);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(12,12.54784);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(13,12.18415);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(14,9.039986);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(15,7.676213);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(16,11.17036);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(17,8.924885);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(18,8.526521);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(19,8.860036);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(20,6.180718);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(21,6.79056);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(22,4.957062);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(23,5.661725);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(24,5.354594);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(25,5.944091);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(26,2.124157);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(27,1.640053);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(28,1.440229);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(29,1.059263);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(30,0.7911855);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(31,1.174172);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetEntries(54777);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(1,0.731285);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(2,275.4534);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(3,401.6131);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(4,315.2753);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(5,288.1633);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(6,247.8692);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(7,217.6072);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(8,145.4619);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(9,139.9715);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(10,128.2092);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(11,86.63146);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(12,96.69697);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(13,74.67331);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(14,80.79344);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(15,59.47262);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(16,59.28144);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(17,47.7293);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(18,55.49546);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(19,36.50281);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(20,44.07267);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(21,31.76176);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(22,24.05057);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(23,23.34836);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(24,21.62124);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(25,18.34607);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(26,13.142);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(27,17.06649);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(28,6.849609);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(29,4.357391);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(30,1.086961);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(31,2.571283);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(1,0.2784396);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(2,18.69851);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(3,23.60822);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(4,24.16442);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(5,19.5232);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(6,20.03075);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(7,20.60038);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(8,9.072527);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(9,13.39364);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(10,16.55749);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(11,9.877933);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(12,12.66797);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(13,9.453783);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(14,14.03635);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(15,8.908628);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(16,5.782743);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(17,8.786277);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(18,9.299185);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(19,4.510979);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(20,8.750332);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(21,4.38389);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(22,3.481665);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(23,3.471346);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(24,3.221888);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(25,2.972991);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(26,2.786905);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(27,7.721732);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(28,1.806332);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(29,1.43788);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(30,0.3526029);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(31,0.5607291);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetEntries(15759);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(2,2.522447);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(3,6.306118);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(4,3.153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(5,2.837753);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(6,1.576529);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(7,1.576529);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(8,1.261224);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(9,0.9459177);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(10,1.891835);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(11,0.9459177);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(12,0.3153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(13,0.3153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(14,1.261224);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(16,0.6306118);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(21,0.3153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(26,0.3153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(2,0.8918197);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(3,1.410091);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(4,0.9970848);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(5,0.9459177);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(6,0.7050454);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(7,0.7050454);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(8,0.6306118);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(9,0.5461258);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(10,0.7723385);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(11,0.5461258);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(12,0.3153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(13,0.3153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(14,0.6306118);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(16,0.4459099);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(21,0.3153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(26,0.3153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(2,9.811902);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(3,13.7897);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(4,6.629663);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(5,6.89485);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(6,5.834104);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(7,4.508171);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(8,2.651865);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(9,2.651865);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(10,1.591119);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(11,2.651865);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(12,2.386679);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(13,1.856306);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(14,0.5303731);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(15,1.060746);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(16,1.060746);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(17,1.591119);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(18,1.325933);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(19,1.325933);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(20,1.060746);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(21,0.2651865);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(22,0.5303731);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(23,0.5303731);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(24,0.2651865);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(25,0.5303731);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(26,0.7955596);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(2,1.613067);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(3,1.912287);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(4,1.325933);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(5,1.352191);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(6,1.243835);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(7,1.093392);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(8,0.8385935);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(9,0.8385935);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(10,0.6495717);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(11,0.8385935);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(12,0.7955596);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(13,0.7016176);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(14,0.3750304);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(15,0.5303731);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(16,0.5303731);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(17,0.6495717);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(18,0.5929751);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(19,0.5929751);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(20,0.5303731);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(21,0.2651865);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(22,0.3750304);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(23,0.3750304);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(24,0.2651865);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(25,0.3750304);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(26,0.4593166);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetEntries(272);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(1,0.2532256);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(2,18.48547);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(3,24.05643);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(4,13.42096);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(5,5.064512);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(6,8.10322);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(7,6.077415);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(8,5.570963);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(9,4.304835);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(10,3.291933);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(11,2.27903);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(12,2.785482);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(13,2.532256);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(14,2.532256);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(15,1.519354);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(16,1.519354);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(17,2.025805);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(18,1.012902);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(19,0.7596768);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(20,2.025805);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(21,0.7596768);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(23,0.7596768);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(24,1.266128);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(25,0.5064512);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(26,0.7596768);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(29,0.2532256);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(1,0.2532256);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(2,2.163561);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(3,2.468138);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(4,1.84351);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(5,1.132459);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(6,1.43246);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(7,1.240547);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(8,1.187733);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(9,1.044076);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(10,0.9130179);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(11,0.7596768);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(12,0.8398543);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(13,0.8007697);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(14,0.8007697);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(15,0.6202735);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(16,0.6202735);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(17,0.7162302);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(18,0.5064512);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(19,0.4385996);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(20,0.7162302);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(21,0.4385996);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(22,0.2532256);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(23,0.4385996);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(24,0.5662297);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(25,0.3581151);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(26,0.4385996);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(29,0.2532256);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(1,0.03230234);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(2,12.20705);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(3,19.59944);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(4,12.20221);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(5,7.037064);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(6,4.42865);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(7,3.231849);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(8,2.627795);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(9,2.227246);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(10,1.881611);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(11,1.649034);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(12,1.472987);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(13,1.308245);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(14,1.217798);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(15,1.16773);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(16,0.994912);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(17,0.870548);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(18,0.8398608);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(19,0.69127);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(20,0.7009607);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(21,0.649277);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(22,0.6848096);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(23,0.5378339);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(24,0.4926106);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(25,0.3052571);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(26,0.1921989);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(27,0.1114431);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(28,0.05652909);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(29,0.02261164);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(30,0.01292094);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(31,0.0193814);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(1,0.007223022);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(2,0.140413);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(3,0.1779196);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(4,0.1403852);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(5,0.1066099);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(6,0.08457416);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(7,0.07224828);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(8,0.0651475);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(9,0.05997719);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(10,0.05512732);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(11,0.05160798);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(12,0.04877546);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(13,0.04596703);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(14,0.04434959);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(15,0.04342833);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(16,0.04008615);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(17,0.03749716);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(18,0.03683033);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(19,0.0334138);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(20,0.03364719);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(21,0.03238299);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(22,0.03325729);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(23,0.02947312);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(24,0.0282068);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(25,0.02220419);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(26,0.01761885);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(27,0.01341617);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(28,0.00955516);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(29,0.006043214);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(30,0.00456824);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(31,0.005594929);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetEntries(49206);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(1,0.008359386);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(2,3.856627);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(3,8.978964);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(4,7.533774);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(5,5.202488);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(6,3.491765);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(7,2.531419);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(8,1.986583);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(9,1.640407);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(10,1.384708);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(11,1.192442);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(12,1.023779);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(13,0.9264166);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(14,0.8226619);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(15,0.804468);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(16,0.7208741);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(17,0.6436727);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(18,0.5733555);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(19,0.5581119);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(20,0.4897617);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(21,0.4435392);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(22,0.4307542);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(23,0.3520777);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(24,0.2547154);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(25,0.1730885);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(26,0.1234239);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(27,0.07523447);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(28,0.03245409);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(29,0.01770223);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(30,0.01130976);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(31,0.01475186);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(1,0.002027449);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(2,0.04354783);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(3,0.06644707);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(4,0.06086519);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(5,0.05057877);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(6,0.0414367);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(7,0.03528131);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(8,0.03125476);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(9,0.02840132);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(10,0.02609407);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(11,0.02421482);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(12,0.02243705);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(13,0.02134351);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(14,0.02011284);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(15,0.01988919);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(16,0.01882749);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(17,0.01779079);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(18,0.01679093);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(19,0.01656622);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(20,0.01551869);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(21,0.01476824);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(22,0.01455384);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(23,0.01315776);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(24,0.01119155);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(25,0.009225646);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(26,0.007790446);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(27,0.006082347);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(28,0.003994822);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(29,0.002950371);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(30,0.002358247);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(31,0.002693308);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(2,0.09639532);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(3,0.1517041);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(4,0.1074571);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(5,0.04898779);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(6,0.04266678);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(7,0.03002477);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(8,0.02370377);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(9,0.01264201);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(10,0.02054326);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(11,0.01264201);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(12,0.01106176);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(13,0.01580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(14,0.006321005);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(15,0.009481507);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(16,0.007901256);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(17,0.007901256);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(18,0.01106176);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(19,0.004740753);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(20,0.006321005);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(21,0.006321005);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(22,0.004740753);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(23,0.006321005);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(24,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(27,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(29,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(2,0.01234216);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(3,0.01548324);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(4,0.01303108);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(5,0.008798466);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(6,0.008211226);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(7,0.006888155);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(8,0.006120286);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(9,0.004469625);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(10,0.005697677);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(11,0.004469625);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(12,0.004180952);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(13,0.004997193);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(14,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(15,0.003870809);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(16,0.003533549);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(17,0.003533549);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(18,0.004180952);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(19,0.002737075);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(20,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(21,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(22,0.002737075);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(23,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(24,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(25,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(27,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(28,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(29,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(2,0.02906479);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(3,0.05584592);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(4,0.04961775);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(5,0.03363212);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(6,0.02117578);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(7,0.02055296);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(8,0.01515521);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(9,0.009965071);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(10,0.009757466);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(11,0.007681409);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(12,0.006020564);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(13,0.007889015);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(14,0.003529296);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(15,0.005812958);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(16,0.004982536);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(17,0.00332169);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(18,0.001868451);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(19,0.002906479);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(20,0.002491268);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(21,0.002698874);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(22,0.00145324);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(23,0.002698874);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(24,0.002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(25,0.00145324);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(26,0.0008304226);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(29,0.0004152113);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(2,0.002456423);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(3,0.003404986);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(4,0.003209506);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(5,0.002642389);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(6,0.002096714);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(7,0.00206565);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(8,0.001773783);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(9,0.001438334);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(10,0.001423273);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(11,0.001262816);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(12,0.001117991);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(13,0.001279767);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(14,0.00085598);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(15,0.001098546);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(16,0.001017056);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(17,0.0008304226);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(18,0.000622817);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(19,0.0007767892);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(20,0.0007191671);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(21,0.0007485328);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(22,0.0005492729);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(23,0.0007485328);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(24,0.0006565067);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(25,0.0005492729);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(26,0.0004152113);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(29,0.0002935987);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1__411 = new TH1D("VbbHcc_algo_Z_dR_Bj1__411","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(1,60);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(2,18622);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(3,27526);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(4,25801);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(5,24702);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(6,20868);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(7,17482);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(8,14120);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(9,11663);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(10,9674);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(11,8371);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(12,7353);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(13,6501);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(14,5720);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(15,5294);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(16,4940);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(17,4198);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(18,3720);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(19,3260);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(20,2997);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(21,2737);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(22,2339);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(23,1954);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(24,1582);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(25,1263);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(26,905);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(27,672);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(28,478);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(29,301);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(30,201);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(31,306);
   VbbHcc_algo_Z_dR_Bj1__411->SetEntries(235639);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1__411->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1__411->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj1__411->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj1__411->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj1__411->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1__411->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__411->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__411->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__411->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__411->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__411->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__411->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__411->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1__411->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__411->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__411->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__411->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__411->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__411->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1299[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1299[30] = {
   457.7935,
   135106.7,
   230894.2,
   204167.4,
   171120.7,
   153983.8,
   127963.1,
   106716.7,
   97458.04,
   73587.63,
   56893.32,
   53843.44,
   46541.39,
   42857.85,
   36815.67,
   32143.39,
   29704.32,
   42741.73,
   20982.43,
   20222.86,
   19368.64,
   16519.08,
   15574.21,
   11021.44,
   10115.52,
   5973.063,
   5787.451,
   20206.29,
   2000.684,
   705.8532};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1299[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1299[30] = {
   271.9468,
   4291.255,
   17914.64,
   17791.9,
   5062.789,
   4959.339,
   4691.835,
   4105.04,
   17418.7,
   3677.713,
   2684.661,
   2688.496,
   2868.203,
   2406.222,
   2397.389,
   1936.504,
   1961.878,
   17119.11,
   1474.669,
   1490.816,
   1490.378,
   1404.123,
   1352.135,
   1104.838,
   1070.484,
   640.7361,
   785.356,
   17036.82,
   401.4885,
   90.05007};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1299,Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1299,Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1299,Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1299);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetMinimum(167.262);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetMaximum(273671.1);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__412 = new TH1D("data_mc_ratio__412","",30,0,6);
   data_mc_ratio__412->SetBinContent(1,0.1310635);
   data_mc_ratio__412->SetBinContent(2,0.1378318);
   data_mc_ratio__412->SetBinContent(3,0.1192148);
   data_mc_ratio__412->SetBinContent(4,0.1263718);
   data_mc_ratio__412->SetBinContent(5,0.1443542);
   data_mc_ratio__412->SetBinContent(6,0.1355208);
   data_mc_ratio__412->SetBinContent(7,0.1366175);
   data_mc_ratio__412->SetBinContent(8,0.132313);
   data_mc_ratio__412->SetBinContent(9,0.119672);
   data_mc_ratio__412->SetBinContent(10,0.1314623);
   data_mc_ratio__412->SetBinContent(11,0.147135);
   data_mc_ratio__412->SetBinContent(12,0.1365626);
   data_mc_ratio__412->SetBinContent(13,0.1396821);
   data_mc_ratio__412->SetBinContent(14,0.1334645);
   data_mc_ratio__412->SetBinContent(15,0.1437975);
   data_mc_ratio__412->SetBinContent(16,0.1536864);
   data_mc_ratio__412->SetBinContent(17,0.1413262);
   data_mc_ratio__412->SetBinContent(18,0.08703438);
   data_mc_ratio__412->SetBinContent(19,0.1553681);
   data_mc_ratio__412->SetBinContent(20,0.1481986);
   data_mc_ratio__412->SetBinContent(21,0.1413109);
   data_mc_ratio__412->SetBinContent(22,0.1415939);
   data_mc_ratio__412->SetBinContent(23,0.1254638);
   data_mc_ratio__412->SetBinContent(24,0.1435384);
   data_mc_ratio__412->SetBinContent(25,0.1248576);
   data_mc_ratio__412->SetBinContent(26,0.1515136);
   data_mc_ratio__412->SetBinContent(27,0.1161133);
   data_mc_ratio__412->SetBinContent(28,0.023656);
   data_mc_ratio__412->SetBinContent(29,0.1504485);
   data_mc_ratio__412->SetBinContent(30,0.2847618);
   data_mc_ratio__412->SetBinContent(31,0.1452607);
   data_mc_ratio__412->SetBinError(1,0.01692022);
   data_mc_ratio__412->SetBinError(2,0.001010035);
   data_mc_ratio__412->SetBinError(3,0.0007185526);
   data_mc_ratio__412->SetBinError(4,0.0007867413);
   data_mc_ratio__412->SetBinError(5,0.0009184669);
   data_mc_ratio__412->SetBinError(6,0.0009381353);
   data_mc_ratio__412->SetBinError(7,0.001033263);
   data_mc_ratio__412->SetBinError(8,0.001113487);
   data_mc_ratio__412->SetBinError(9,0.001108122);
   data_mc_ratio__412->SetBinError(10,0.00133659);
   data_mc_ratio__412->SetBinError(11,0.001608153);
   data_mc_ratio__412->SetBinError(12,0.001592574);
   data_mc_ratio__412->SetBinError(13,0.00173241);
   data_mc_ratio__412->SetBinError(14,0.001764687);
   data_mc_ratio__412->SetBinError(15,0.001976329);
   data_mc_ratio__412->SetBinError(16,0.002186613);
   data_mc_ratio__412->SetBinError(17,0.002181231);
   data_mc_ratio__412->SetBinError(18,0.001426985);
   data_mc_ratio__412->SetBinError(19,0.002721153);
   data_mc_ratio__412->SetBinError(20,0.002707078);
   data_mc_ratio__412->SetBinError(21,0.002701085);
   data_mc_ratio__412->SetBinError(22,0.002927719);
   data_mc_ratio__412->SetBinError(23,0.002838286);
   data_mc_ratio__412->SetBinError(24,0.003608816);
   data_mc_ratio__412->SetBinError(25,0.003513286);
   data_mc_ratio__412->SetBinError(26,0.005036481);
   data_mc_ratio__412->SetBinError(27,0.004479168);
   data_mc_ratio__412->SetBinError(28,0.001082);
   data_mc_ratio__412->SetBinError(29,0.00867171);
   data_mc_ratio__412->SetBinError(30,0.02008555);
   data_mc_ratio__412->SetBinError(31,0.03435659);
   data_mc_ratio__412->SetMinimum(0.4);
   data_mc_ratio__412->SetMaximum(1.6);
   data_mc_ratio__412->SetEntries(1235.474);
   data_mc_ratio__412->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__412->SetLineColor(ci);
   data_mc_ratio__412->SetLineWidth(2);
   data_mc_ratio__412->SetMarkerStyle(20);
   data_mc_ratio__412->SetMarkerSize(1.2);
   data_mc_ratio__412->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__412->GetXaxis()->SetRange(1,30);
   data_mc_ratio__412->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__412->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__412->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__412->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__412->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__412->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__412->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__412->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__412->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__412->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__412->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__412->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__412->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__412->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__412->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__412->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__412->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1300[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1300[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1300[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1300[30] = {
   0.5940381,
   0.03176198,
   0.07758811,
   0.0871437,
   0.02958607,
   0.03220689,
   0.03666552,
   0.03846672,
   0.1787302,
   0.04997733,
   0.04718763,
   0.04993173,
   0.06162693,
   0.05614424,
   0.06511871,
   0.0602458,
   0.0660469,
   0.4005244,
   0.07028113,
   0.07371934,
   0.07694799,
   0.08500009,
   0.08681884,
   0.1002444,
   0.1058259,
   0.107271,
   0.1356998,
   0.8431443,
   0.2006756,
   0.1275762};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1300,Graph_from_mc_statistical_error_fy1300,Graph_from_mc_statistical_error_fex1300,Graph_from_mc_statistical_error_fey1300);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1300 = new TH1F("Graph_Graph_from_mc_statistical_error1300","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1300->SetMinimum(0.1411701);
   Graph_Graph_from_mc_statistical_error1300->SetMaximum(2.011773);
   Graph_Graph_from_mc_statistical_error1300->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1300->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1300->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1300->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1300->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1300->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1300->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1300->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1300->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1300->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1300);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_algo_17->cd();
   Z_dR_Bj1_algo_17->Modified();
   Z_dR_Bj1_algo_17->cd();
   Z_dR_Bj1_algo_17->SetSelected(Z_dR_Bj1_algo_17);
}
