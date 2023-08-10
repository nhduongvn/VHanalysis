void Sphericity_algo_all_logY()
{
//=========Macro generated from canvas: Sphericity_algo_all/Sphericity_algo_all
//=========  (Thu Aug 10 12:21:04 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_all = new TCanvas("Sphericity_algo_all", "Sphericity_algo_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_all->SetHighLightColor(2);
   Sphericity_algo_all->Range(0,0,1,1);
   Sphericity_algo_all->SetFillColor(0);
   Sphericity_algo_all->SetFillStyle(4000);
   Sphericity_algo_all->SetBorderMode(0);
   Sphericity_algo_all->SetBorderSize(2);
   Sphericity_algo_all->SetFrameFillStyle(1000);
   Sphericity_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1.465778,1.052419,16.70995);
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
   st->SetMinimum(0.3);
   st->SetMaximum(1.969271e+14);
   
   TH1F *st_stack_156 = new TH1F("st_stack_156","",25,0,1);
   st_stack_156->SetMinimum(0.03567779);
   st_stack_156->SetMaximum(7.80508e+14);
   st_stack_156->SetDirectory(0);
   st_stack_156->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_156->SetLineColor(ci);
   st_stack_156->GetXaxis()->SetRange(1,25);
   st_stack_156->GetXaxis()->SetLabelFont(42);
   st_stack_156->GetXaxis()->SetLabelSize(0.035);
   st_stack_156->GetXaxis()->SetTitleSize(0.035);
   st_stack_156->GetXaxis()->SetTitleFont(42);
   st_stack_156->GetYaxis()->SetTitle("Events/0.04");
   st_stack_156->GetYaxis()->SetLabelFont(42);
   st_stack_156->GetYaxis()->SetLabelSize(0.05);
   st_stack_156->GetYaxis()->SetTitleSize(0.057);
   st_stack_156->GetYaxis()->SetTitleOffset(1.2);
   st_stack_156->GetYaxis()->SetTitleFont(42);
   st_stack_156->GetZaxis()->SetLabelFont(42);
   st_stack_156->GetZaxis()->SetLabelSize(0.035);
   st_stack_156->GetZaxis()->SetTitleSize(0.035);
   st_stack_156->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_156);
   
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_1 = new TH1D("VbbHcc_algo_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(1,2397652);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(2,2251140);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(3,1273237);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(4,723915.9);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(5,334996);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(6,146119.3);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(7,45592.69);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(8,12530.83);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(9,4174.293);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(10,2559.338);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(11,1330.562);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(12,788.384);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(13,434.8454);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(14,637.3866);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(15,130.5152);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(16,447.7144);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(17,872.5094);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(18,103.0176);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(19,40.13274);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(20,36.15004);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(1,37782.7);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(2,40478.43);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(3,37128.52);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(4,31164.85);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(5,9531.011);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(6,6381.094);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(7,4278.457);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(8,1630.281);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(9,764.3496);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(10,642.1922);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(11,377.327);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(12,343.5982);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(13,98.0278);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(14,328.2703);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(15,44.48814);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(16,298.2555);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(17,567.2229);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(18,32.63627);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(19,21.22987);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(20,15.45691);
   VbbHcc_algo_Sphericity_all_stack_1->SetEntries(355717);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_2 = new TH1D("VbbHcc_algo_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(1,15078.25);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(2,14646.68);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(3,8216.075);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(4,4626.363);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(5,2405.886);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(6,1139.757);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(7,471.1682);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(8,198.8677);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(9,97.53363);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(10,54.22771);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(11,32.47252);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(12,25.76109);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(13,14.61924);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(14,9.386857);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(15,7.101634);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(16,6.212709);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(17,5.041774);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(18,3.145204);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(19,0.871127);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(20,0.4197882);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(21,0.09780035);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(22,0.02438775);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(1,52.94594);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(2,52.00472);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(3,41.10616);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(4,29.71621);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(5,21.63382);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(6,15.67871);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(7,10.01563);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(8,6.00098);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(9,4.220416);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(10,3.083343);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(11,2.390743);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(12,2.230614);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(13,1.587084);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(14,1.217046);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(15,1.196544);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(16,1.074556);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(17,0.9122895);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(18,0.9059032);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(19,0.358957);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(20,0.3070201);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(21,0.07535842);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(22,0.02438775);
   VbbHcc_algo_Sphericity_all_stack_2->SetEntries(639487);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_3 = new TH1D("VbbHcc_algo_Sphericity_all_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(1,275889.4);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(2,287332.9);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(3,152056.5);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(4,82558.92);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(5,43792.42);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(6,20983.65);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(7,9127.134);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(8,4006.559);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(9,1959.978);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(10,1037.463);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(11,599.74);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(12,363.4209);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(13,221.1021);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(14,155.4526);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(15,102.0372);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(16,70.85815);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(17,46.58238);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(18,29.29334);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(19,18.27298);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(20,7.503901);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(21,2.763391);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(22,0.8250321);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(23,0.150105);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(24,0.05678712);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(1,147.8295);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(2,151.2548);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(3,109.574);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(4,80.97631);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(5,58.80918);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(6,40.46164);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(7,26.18838);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(8,17.27563);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(9,11.88566);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(10,8.596418);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(11,6.44232);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(12,4.975756);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(13,3.86917);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(14,3.224274);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(15,2.591162);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(16,2.226931);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(17,1.751332);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(18,1.39759);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(19,1.10199);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(20,0.7553524);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(21,0.4451075);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(22,0.2430461);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(23,0.09950339);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(24,0.05678712);
   VbbHcc_algo_Sphericity_all_stack_3->SetEntries(1.27678e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_4 = new TH1D("VbbHcc_algo_Sphericity_all_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(1,12376.44);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(2,11859.15);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(3,6727.997);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(4,3987.087);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(5,2041.401);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(6,873.0652);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(7,262.8882);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(8,94.53333);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(9,25.84289);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(10,13.87107);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(11,7.535807);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(12,12.0235);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(13,3.599066);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(14,1.748426);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(15,5.336829);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(16,4.398485);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(17,1.416306);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(18,2.054261);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(19,0.1228786);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(1,92.83271);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(2,98.88302);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(3,72.8745);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(4,54.70684);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(5,36.71605);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(6,22.90508);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(7,10.8461);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(8,7.495843);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(9,2.589755);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(10,1.857075);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(11,1.206673);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(12,5.993678);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(13,0.7016046);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(14,0.4135632);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(15,2.91452);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(16,3.284224);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(17,0.5448973);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(18,1.205093);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(19,0.07375961);
   VbbHcc_algo_Sphericity_all_stack_4->SetEntries(204480);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_5 = new TH1D("VbbHcc_algo_Sphericity_all_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(1,5269.419);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(2,4462.489);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(3,2683.919);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(4,1521.247);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(5,733.9967);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(6,312.9432);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(7,122.7707);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(8,31.27693);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(9,16.75109);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(10,8.312979);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(11,5.291986);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(12,9.739887);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(13,2.190366);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(14,1.589489);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(15,0.9340723);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(16,0.8358745);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(17,0.3737638);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(18,5.009395e-06);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(19,0.5085743);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(1,105.1473);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(2,91.52982);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(3,71.7751);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(4,53.68718);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(5,29.86122);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(6,16.77328);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(7,17.60631);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(8,5.107656);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(9,6.984687);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(10,1.986875);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(11,1.92948);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(12,6.707803);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(13,0.7371555);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(14,0.7352453);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(15,0.3193052);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(16,0.4738955);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(17,0.2138645);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(18,5.009395e-06);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(19,0.3165246);
   VbbHcc_algo_Sphericity_all_stack_5->SetEntries(98236);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_6 = new TH1D("VbbHcc_algo_Sphericity_all_stack_6","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(1,49.74784);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(2,46.4039);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(3,23.83578);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(4,16.47064);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(5,8.588716);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(6,4.317184);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(7,1.533884);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(8,0.4912025);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(9,0.1370544);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(10,0.09641758);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(11,0.1380529);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(1,4.232898);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(2,3.745336);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(3,2.694129);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(4,2.489362);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(5,1.448782);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(6,1.143632);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(7,0.6175378);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(8,0.3741418);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(9,0.1370544);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(10,0.09641758);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(11,0.1380529);
   VbbHcc_algo_Sphericity_all_stack_6->SetEntries(733);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Sphericity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_7 = new TH1D("VbbHcc_algo_Sphericity_all_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(1,66.07676);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(2,65.59707);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(3,34.49616);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(4,20.21722);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(5,10.96286);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(6,4.702204);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(7,2.590827);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(8,0.7383773);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(9,0.1142889);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(13,0.04629735);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(1,4.3667);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(2,3.959119);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(3,2.862912);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(4,2.533689);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(5,1.499115);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(6,1.134732);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(7,0.6999636);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(8,0.4032006);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(9,0.1142889);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(13,0.04629735);
   VbbHcc_algo_Sphericity_all_stack_7->SetEntries(1323);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_8 = new TH1D("VbbHcc_algo_Sphericity_all_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(1,155.5125);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(2,135.1543);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(3,76.61466);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(4,46.36687);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(5,32.30807);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(6,14.83407);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(7,2.013416);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(8,1.392543);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(9,0.3190703);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(10,0.4983592);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(11,0.5623179);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(1,6.808505);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(2,6.252194);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(3,4.687561);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(4,3.737408);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(5,3.076329);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(6,2.094217);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(7,0.7695625);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(8,0.6268544);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(9,0.3190703);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(10,0.3526502);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(11,0.3989528);
   VbbHcc_algo_Sphericity_all_stack_8->SetEntries(1651);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_9 = new TH1D("VbbHcc_algo_Sphericity_all_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(1,95.70554);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(2,93.01027);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(3,51.29164);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(4,34.38997);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(5,22.1762);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(6,10.70471);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(7,2.888478);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(8,0.6738192);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(9,0.2391485);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(10,0.09629647);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(11,0.04636424);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(12,0.02868513);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(13,0.01101627);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(14,0.009719421);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(15,0.01164259);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(16,0.003348055);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(17,0.003701757);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(19,0.001622014);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(1,0.4691943);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(2,0.4566671);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(3,0.3410669);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(4,0.2779879);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(5,0.22119);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(6,0.1860202);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(7,0.08323328);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(8,0.03707712);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(9,0.0218575);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(10,0.01365119);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(11,0.009222121);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(12,0.007416003);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(13,0.0038291);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(14,0.004377232);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(15,0.004976669);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(16,0.003348055);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(17,0.002753726);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(19,0.001622014);
   VbbHcc_algo_Sphericity_all_stack_9->SetEntries(167452);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_10 = new TH1D("VbbHcc_algo_Sphericity_all_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(1,49.8029);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(2,50.50278);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(3,28.41007);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(4,17.3355);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(5,9.813836);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(6,4.618552);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(7,1.531933);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(8,0.5365925);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(9,0.1858455);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(10,0.1293246);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(11,0.05815261);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(12,0.03445242);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(13,0.03039336);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(14,0.01291314);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(15,0.01224071);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(16,0.006042953);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(17,0.009246892);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(18,0.004260961);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(19,0.00404538);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(1,0.1603601);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(2,0.16166);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(3,0.1212322);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(4,0.0947678);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(5,0.07123212);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(6,0.04886117);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(7,0.02799898);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(8,0.01643584);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(9,0.009566858);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(10,0.007937474);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(11,0.005315026);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(12,0.003964198);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(13,0.003803046);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(14,0.002288034);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(15,0.002195597);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(16,0.001552988);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(17,0.002084481);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(18,0.001467612);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(19,0.001202368);
   VbbHcc_algo_Sphericity_all_stack_10->SetEntries(336228);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_11 = new TH1D("VbbHcc_algo_Sphericity_all_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(1,0.7944128);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(2,0.817191);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(3,0.3947489);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(4,0.303074);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(5,0.1976254);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(6,0.08490011);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(7,0.02728749);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(9,0.001319221);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(1,0.04626758);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(2,0.04730298);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(3,0.03241233);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(4,0.02933194);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(5,0.02423526);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(6,0.01523214);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(7,0.008275585);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(9,0.001319221);
   VbbHcc_algo_Sphericity_all_stack_11->SetEntries(1102);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_12 = new TH1D("VbbHcc_algo_Sphericity_all_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(1,0.3656598);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(2,0.372595);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(3,0.1949931);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(4,0.1302795);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(5,0.07455221);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(6,0.03196842);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(7,0.01266608);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(8,0.007108282);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(9,0.001062678);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(10,0.001273952);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(11,0.0008761278);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(12,0.0003400733);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(13,0.0007118336);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(16,6.327442e-05);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(1,0.01113302);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(2,0.01159187);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(3,0.008034115);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(4,0.006612917);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(5,0.006061685);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(6,0.003288063);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(7,0.002083109);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(8,0.001485765);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(9,0.0006325636);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(10,0.0006581959);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(11,0.0005371085);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(12,0.0003400733);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(13,0.0004412458);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(16,6.327442e-05);
   VbbHcc_algo_Sphericity_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Sphericity_all__428 = new TH1D("VbbHcc_algo_Sphericity_all__428","",25,0,1);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(1,1083393);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(2,989894);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(3,566632);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(4,315253);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(5,161696);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(6,70013);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(7,25272);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(8,9354);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(9,4101);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(10,2207);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(11,1268);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(12,833);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(13,543);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(14,376);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(15,294);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(16,211);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(17,124);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(18,87);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(19,52);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(20,26);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(21,12);
   VbbHcc_algo_Sphericity_all__428->SetBinContent(22,1);
   VbbHcc_algo_Sphericity_all__428->SetEntries(3231666);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all__428->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all__428->SetLineWidth(2);
   VbbHcc_algo_Sphericity_all__428->SetMarkerStyle(20);
   VbbHcc_algo_Sphericity_all__428->SetMarkerSize(1.2);
   VbbHcc_algo_Sphericity_all__428->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all__428->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all__428->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all__428->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all__428->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all__428->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all__428->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all__428->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all__428->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all__428->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all__428->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all__428->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all__428->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all__428->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all__428->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Sphericity_all_fx1311[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_algo_Sphericity_all_fy1311[25] = {
   2706683,
   2569833,
   1443136,
   816744.8,
   384053.8,
   169468,
   55587.25,
   16865.91,
   6275.397,
   3674.034,
   1976.408,
   1199.393,
   676.4446,
   805.5866,
   245.9488,
   530.029,
   925.9366,
   137.5147,
   59.91397,
   44.07373,
   2.861191,
   0.8494198,
   0.150105,
   0.05678712,
   0};
   Double_t Graph_from_VbbHcc_algo_Sphericity_all_fex1311[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_algo_Sphericity_all_fey1311[25] = {
   37783.29,
   40478.97,
   37128.85,
   31165.07,
   9531.335,
   6381.305,
   4278.599,
   1630.409,
   764.49,
   642.263,
   377.3967,
   343.7591,
   98.12225,
   328.2895,
   44.67591,
   298.2842,
   567.2267,
   32.70096,
   21.26397,
   15.4784,
   0.4514417,
   0.2442666,
   0.09950339,
   0.05678712,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algo_Sphericity_all_fx1311,Graph_from_VbbHcc_algo_Sphericity_all_fy1311,Graph_from_VbbHcc_algo_Sphericity_all_fex1311,Graph_from_VbbHcc_algo_Sphericity_all_fey1311);
   gre->SetName("Graph_from_VbbHcc_algo_Sphericity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Sphericity_all1311 = new TH1F("Graph_Graph_from_VbbHcc_algo_Sphericity_all1311","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetMinimum(3018.913);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetMaximum(3018913);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Sphericity_all1311);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Sphericity_all","MC unc. (stat.)","fl");

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
   Sphericity_algo_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__429 = new TH1D("data_mc_ratio__429","",25,0,1);
   data_mc_ratio__429->SetBinContent(1,0.4002659);
   data_mc_ratio__429->SetBinContent(2,0.3851978);
   data_mc_ratio__429->SetBinContent(3,0.3926393);
   data_mc_ratio__429->SetBinContent(4,0.3859872);
   data_mc_ratio__429->SetBinContent(5,0.4210243);
   data_mc_ratio__429->SetBinContent(6,0.413134);
   data_mc_ratio__429->SetBinContent(7,0.4546367);
   data_mc_ratio__429->SetBinContent(8,0.5546098);
   data_mc_ratio__429->SetBinContent(9,0.6535045);
   data_mc_ratio__429->SetBinContent(10,0.6007022);
   data_mc_ratio__429->SetBinContent(11,0.641568);
   data_mc_ratio__429->SetBinContent(12,0.6945181);
   data_mc_ratio__429->SetBinContent(13,0.8027265);
   data_mc_ratio__429->SetBinContent(14,0.4667406);
   data_mc_ratio__429->SetBinContent(15,1.195371);
   data_mc_ratio__429->SetBinContent(16,0.3980914);
   data_mc_ratio__429->SetBinContent(17,0.1339185);
   data_mc_ratio__429->SetBinContent(18,0.6326597);
   data_mc_ratio__429->SetBinContent(19,0.8679111);
   data_mc_ratio__429->SetBinContent(20,0.5899206);
   data_mc_ratio__429->SetBinContent(21,4.194058);
   data_mc_ratio__429->SetBinContent(22,1.177274);
   data_mc_ratio__429->SetBinError(1,0.0003845525);
   data_mc_ratio__429->SetBinError(2,0.0003871591);
   data_mc_ratio__429->SetBinError(3,0.0005216067);
   data_mc_ratio__429->SetBinError(4,0.0006874534);
   data_mc_ratio__429->SetBinError(5,0.001047026);
   data_mc_ratio__429->SetBinError(6,0.001561355);
   data_mc_ratio__429->SetBinError(7,0.002859859);
   data_mc_ratio__429->SetBinError(8,0.005734412);
   data_mc_ratio__429->SetBinError(9,0.01020478);
   data_mc_ratio__429->SetBinError(10,0.01278669);
   data_mc_ratio__429->SetBinError(11,0.01801702);
   data_mc_ratio__429->SetBinError(12,0.02406362);
   data_mc_ratio__429->SetBinError(13,0.03444829);
   data_mc_ratio__429->SetBinError(14,0.02407031);
   data_mc_ratio__429->SetBinError(15,0.06971544);
   data_mc_ratio__429->SetBinError(16,0.02740574);
   data_mc_ratio__429->SetBinError(17,0.01202623);
   data_mc_ratio__429->SetBinError(18,0.06782824);
   data_mc_ratio__429->SetBinError(19,0.1203576);
   data_mc_ratio__429->SetBinError(20,0.1156929);
   data_mc_ratio__429->SetBinError(21,1.21072);
   data_mc_ratio__429->SetBinError(22,1.177274);
   data_mc_ratio__429->SetMinimum(0.4);
   data_mc_ratio__429->SetMaximum(1.6);
   data_mc_ratio__429->SetEntries(70.58682);
   data_mc_ratio__429->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__429->SetLineColor(ci);
   data_mc_ratio__429->SetLineWidth(2);
   data_mc_ratio__429->SetMarkerStyle(20);
   data_mc_ratio__429->SetMarkerSize(1.2);
   data_mc_ratio__429->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__429->GetXaxis()->SetRange(1,25);
   data_mc_ratio__429->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__429->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__429->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__429->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__429->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__429->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__429->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__429->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__429->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__429->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__429->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__429->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__429->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__429->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__429->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__429->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__429->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1312[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1312[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1312[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1312[25] = {
   0.01395926,
   0.0157516,
   0.02572789,
   0.03815766,
   0.02481771,
   0.03765493,
   0.07697087,
   0.09666887,
   0.1218234,
   0.1748114,
   0.1909508,
   0.286611,
   0.1450559,
   0.407516,
   0.1816472,
   0.5627695,
   0.6125977,
   0.2377997,
   0.3549083,
   0.3511934,
   0.157781,
   0.2875687,
   0.6628918,
   1,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1312,Graph_from_mc_statistical_error_fy1312,Graph_from_mc_statistical_error_fex1312,Graph_from_mc_statistical_error_fey1312);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1312 = new TH1F("Graph_Graph_from_mc_statistical_error1312","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1312->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1312->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1312->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1312->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1312->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1312->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1312);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algo_all->cd();
   Sphericity_algo_all->Modified();
   Sphericity_algo_all->cd();
   Sphericity_algo_all->SetSelected(Sphericity_algo_all);
}
