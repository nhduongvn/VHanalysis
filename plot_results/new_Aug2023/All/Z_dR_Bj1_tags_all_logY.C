void Z_dR_Bj1_tags_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_all/Z_dR_Bj1_tags_all
//=========  (Tue Aug 22 09:16:26 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_all = new TCanvas("Z_dR_Bj1_tags_all", "Z_dR_Bj1_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_all->SetHighLightColor(2);
   Z_dR_Bj1_tags_all->Range(0,0,1,1);
   Z_dR_Bj1_tags_all->SetFillColor(0);
   Z_dR_Bj1_tags_all->SetFillStyle(4000);
   Z_dR_Bj1_tags_all->SetBorderMode(0);
   Z_dR_Bj1_tags_all->SetBorderSize(2);
   Z_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.367464,6.314516,12.95875);
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
   st->SetMaximum(1.015868e+11);
   
   TH1F *st_stack_56 = new TH1F("st_stack_56","",30,0,6);
   st_stack_56->SetMinimum(0.04434683);
   st_stack_56->SetMaximum(3.358402e+11);
   st_stack_56->SetDirectory(0);
   st_stack_56->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_56->SetLineColor(ci);
   st_stack_56->GetXaxis()->SetRange(1,30);
   st_stack_56->GetXaxis()->SetLabelFont(42);
   st_stack_56->GetXaxis()->SetLabelSize(0.035);
   st_stack_56->GetXaxis()->SetTitleSize(0.035);
   st_stack_56->GetXaxis()->SetTitleFont(42);
   st_stack_56->GetYaxis()->SetTitle("Events/0.2");
   st_stack_56->GetYaxis()->SetLabelFont(42);
   st_stack_56->GetYaxis()->SetLabelSize(0.05);
   st_stack_56->GetYaxis()->SetTitleSize(0.057);
   st_stack_56->GetYaxis()->SetTitleOffset(1.2);
   st_stack_56->GetYaxis()->SetTitleFont(42);
   st_stack_56->GetZaxis()->SetLabelFont(42);
   st_stack_56->GetZaxis()->SetLabelSize(0.035);
   st_stack_56->GetZaxis()->SetTitleSize(0.035);
   st_stack_56->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_56);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(1,15294.25);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(2,72327.86);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(3,81044.56);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(4,61293.21);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(5,43894.23);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(6,42926.62);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(7,33850.44);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(8,28231.8);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(9,23306.22);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(10,41519.21);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(11,24955.51);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(12,17529.07);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(13,33145.83);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(14,18117.49);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(15,12897.21);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(16,9164.723);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(17,7169.929);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(18,6303.275);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(19,6042.599);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(20,6055.575);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(21,3923.984);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(22,3627.504);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(23,3197.504);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(24,1284.958);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(25,2303.058);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(26,1477.891);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(27,464.609);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(28,1006.482);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(29,157.1082);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(30,105.875);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinContent(31,152.4205);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(1,1176.508);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(2,3693.553);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(3,4510.673);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(4,3696.979);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(5,3103.073);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(6,4142.492);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(7,3304.579);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(8,2704.154);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(9,2048.043);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(10,17255.06);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(11,2609.872);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(12,2249.32);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(13,17172.12);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(14,2324.755);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(15,1551.806);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(16,1265.412);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(17,1005.217);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(18,1038.766);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(19,966.3462);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(20,1700.304);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(21,861.52);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(22,903.632);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(23,798.8696);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(24,340.8011);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(25,726.2108);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(26,501.817);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(27,101.4045);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(28,467.878);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(29,43.99863);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(30,49.83328);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetBinError(31,61.75526);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetEntries(27568);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(1,73.64294);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(2,312.6062);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(3,365.8381);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(4,325.9612);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(5,273.7667);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(6,241.4279);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(7,195.103);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(8,152.7728);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(9,149.6678);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(10,129.0305);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(11,112.8914);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(12,100.4414);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(13,92.97232);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(14,82.90784);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(15,69.91464);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(16,61.76652);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(17,54.11062);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(18,38.52507);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(19,32.38798);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(20,28.51637);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(21,19.73516);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(22,19.20362);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(23,15.99244);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(24,12.69789);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(25,8.100174);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(26,4.541582);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(27,4.221653);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(28,2.306053);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(29,1.972088);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(30,1.13136);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinContent(31,1.458795);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(1,3.626477);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(2,7.067582);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(3,7.674129);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(4,7.077594);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(5,6.539085);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(6,6.262101);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(7,5.526316);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(8,4.833841);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(9,4.893497);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(10,4.522629);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(11,4.227207);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(12,3.934115);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(13,3.850478);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(14,3.66835);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(15,3.321083);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(16,3.200045);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(17,2.942581);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(18,2.486471);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(19,2.254214);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(20,2.161631);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(21,1.786211);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(22,1.804477);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(23,1.621458);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(24,1.532252);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(25,1.186868);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(26,0.8765024);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(27,0.822636);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(28,0.6445928);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(29,0.5775395);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(30,0.4758462);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetBinError(31,0.4931703);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetEntries(34548);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(1,938.9061);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(2,5089.014);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(3,6999.348);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(4,6763.593);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(5,5824.073);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(6,4734.932);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(7,3855.866);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(8,3271.297);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(9,2814.391);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(10,2492.407);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(11,2263.893);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(12,2074.927);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(13,1847.815);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(14,1631.135);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(15,1403.351);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(16,1208.707);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(17,966.3226);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(18,798.803);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(19,653.1724);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(20,524.6122);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(21,411.8245);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(22,317.8859);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(23,243.9476);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(24,187.3122);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(25,138.6874);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(26,98.26927);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(27,67.87511);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(28,39.64343);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(29,30.27752);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(30,16.58403);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinContent(31,33.23295);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(1,7.873295);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(2,18.3038);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(3,21.53857);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(4,21.18401);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(5,19.6598);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(6,17.71998);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(7,15.97955);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(8,14.7155);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(9,13.66256);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(10,12.8717);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(11,12.26635);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(12,11.74522);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(13,11.09093);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(14,10.41267);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(15,9.662402);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(16,8.961802);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(17,8.004264);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(18,7.275703);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(19,6.578618);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(20,5.893122);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(21,5.212134);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(22,4.584821);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(23,4.006345);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(24,3.498525);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(25,3.013696);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(26,2.530363);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(27,2.106648);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(28,1.594381);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(29,1.403135);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(30,1.039728);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetBinError(31,1.477203);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetEntries(905703);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(1,252.7805);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(2,993.1711);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(3,1169.192);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(4,889.1762);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(5,669.6551);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(6,531.0813);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(7,413.9677);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(8,366.2332);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(9,332.4611);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(10,283.9127);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(11,269.9469);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(12,244.8975);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(13,207.2129);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(14,188.737);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(15,162.8003);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(16,128.9756);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(17,107.2409);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(18,102.2691);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(19,73.76626);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(20,68.80267);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(21,52.27915);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(22,39.51976);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(23,33.63596);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(24,21.98248);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(25,18.88203);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(26,15.55966);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(27,11.53983);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(28,5.58456);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(29,3.597668);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(30,2.105205);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinContent(31,3.224721);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(1,5.698938);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(2,19.64381);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(3,23.14542);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(4,21.18316);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(5,20.32976);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(6,17.81317);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(7,14.25575);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(8,13.71981);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(9,14.46012);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(10,11.54038);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(11,13.19231);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(12,12.45984);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(13,8.914725);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(14,9.503187);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(15,8.818492);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(16,8.69054);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(17,6.296321);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(18,8.643622);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(19,6.436165);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(20,6.447524);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(21,4.792185);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(22,4.324239);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(23,5.585018);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(24,2.248138);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(25,2.859835);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(26,2.826378);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(27,2.664932);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(28,1.0071);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(29,0.8837624);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(30,0.7237148);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetBinError(31,0.877734);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetEntries(49827);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(1,51.28064);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(2,144.1872);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(3,125.3849);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(4,78.08191);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(5,61.56939);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(6,44.02511);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(7,29.93479);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(8,29.8475);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(9,23.21427);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(10,29.05043);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(11,19.12951);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(12,21.29244);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(13,13.8789);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(14,15.79298);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(15,11.48105);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(16,8.291053);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(17,15.13438);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(18,7.545229);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(19,8.639332);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(20,7.777959);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(21,3.585956);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(22,3.015224);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(23,6.527203);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(24,3.594576);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(25,1.700079);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(26,0.9424391);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(27,1.003637);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(28,0.5008959);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(29,1.369108);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinContent(31,0.3745193);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(1,3.891686);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(2,11.0766);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(3,13.74078);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(4,11.97375);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(5,6.192964);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(6,3.982091);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(7,4.080539);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(8,4.118173);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(9,3.32268);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(10,4.653757);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(11,2.619264);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(12,3.828605);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(13,1.876652);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(14,3.553892);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(15,2.688849);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(16,1.573435);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(17,7.540426);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(18,2.321727);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(19,2.408344);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(20,2.55662);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(21,0.6888414);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(22,0.7608802);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(23,2.516363);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(24,1.387916);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(25,0.4973311);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(26,0.3066868);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(27,0.5194794);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(28,0.2081671);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(29,0.6678489);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetBinError(31,0.3071942);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetEntries(7212);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(3,0.8731578);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(4,0.7686413);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(5,0.1511118);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(6,0.8731578);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(7,0.7817236);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(8,0.1511118);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(3,0.6096191);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(4,0.409783);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(5,0.1511118);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(6,0.6096191);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(7,0.4708188);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(8,0.1511118);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetBinError(10,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetEntries(17);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(1,0.5611256);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(2,1.325332);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(3,1.468735);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(4,0.9886566);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(5,0.3366753);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(6,0.6831593);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(7,0.855062);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(8,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(9,0.2244502);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(10,0.427531);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(11,0.2244502);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(12,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(14,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(15,0.2244502);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinContent(24,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(1,0.250943);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(2,0.4612679);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(3,0.6532394);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(4,0.4183117);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(5,0.1943796);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(6,0.5818594);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(7,0.4733123);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(8,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(9,0.1587103);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(10,0.3346824);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(11,0.1587103);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(12,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(14,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(15,0.1587103);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetBinError(24,0.1122251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(1,4.513315);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(2,19.37177);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(3,19.11231);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(4,19.30238);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(5,16.6248);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(6,9.117004);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(7,7.415359);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(8,7.746636);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(9,7.49444);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(10,5.884198);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(11,2.942099);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(12,5.831306);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(13,4.83124);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(14,4.604718);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(15,3.779827);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(16,3.701776);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(17,2.181907);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(18,1.584568);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(19,1.876819);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(20,0.7858656);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(22,0.53264);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(24,0.532125);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(25,0.2660625);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinContent(28,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(1,1.095652);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(2,2.269434);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(3,2.269899);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(4,2.276943);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(5,2.113048);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(6,1.564668);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(7,1.402511);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(8,1.43958);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(9,1.417569);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(10,1.255733);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(11,0.8879376);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(12,1.244328);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(13,1.139528);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(14,1.117572);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(15,1.010957);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(16,0.9903549);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(17,0.7716518);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(18,0.6475366);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(19,0.7099592);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(20,0.4542233);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(21,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(22,0.3770883);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(24,0.3762692);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(25,0.2660625);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetBinError(28,0.2794144);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetEntries(564);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(1,3.925664);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(2,18.3713);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(3,22.2705);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(4,18.54746);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(5,14.02837);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(6,10.21522);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(7,7.775538);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(8,6.51104);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(9,6.246151);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(10,6.208361);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(11,6.009888);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(12,5.917521);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(13,5.006496);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(14,4.242007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(15,3.303388);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(16,2.452166);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(17,1.915398);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(18,1.295383);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(19,0.9194053);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(20,0.635649);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(21,0.5466593);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(22,0.4193816);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(23,0.4297036);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(24,0.2666643);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(25,0.2089308);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(26,0.1359115);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(27,0.08923136);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(28,0.05074483);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(29,0.0216849);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(30,0.005825005);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinContent(31,0.005825005);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(1,0.09054622);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(2,0.1959625);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(3,0.2143418);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(4,0.1943165);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(5,0.1692857);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(6,0.1449135);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(7,0.1261425);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(8,0.1156759);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(9,0.1135293);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(10,0.1136017);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(11,0.1117893);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(12,0.1112381);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(13,0.1015795);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(14,0.09430573);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(15,0.08256958);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(16,0.07093576);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(17,0.06380467);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(18,0.05157901);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(19,0.04411673);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(20,0.03699866);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(21,0.03317154);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(22,0.02927312);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(23,0.03007102);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(24,0.02406591);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(25,0.02061739);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(26,0.01690385);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(27,0.0138352);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(28,0.01086529);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(29,0.006895428);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(30,0.003541029);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetBinError(31,0.003541029);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetEntries(79284);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(1,1.647709);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(2,7.97881);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(3,10.5843);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(4,9.01776);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(5,6.860316);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(6,4.782416);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(7,3.519443);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(8,2.975617);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(9,2.738607);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(10,2.473999);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(11,2.371728);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(12,2.105497);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(13,1.858746);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(14,1.647709);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(15,1.379855);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(16,0.9626519);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(17,0.8473934);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(18,0.6201232);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(19,0.5405786);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(20,0.3814894);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(21,0.3133083);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(22,0.2435039);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(23,0.2191535);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(24,0.1574658);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(25,0.09090811);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(26,0.08279131);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(27,0.0357139);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(28,0.01785695);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(29,0.009740155);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(30,0.004870077);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinContent(31,0.003246718);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(1,0.03059065);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(2,0.06731587);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(3,0.07753173);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(4,0.07156452);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(5,0.06241952);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(6,0.05211612);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(7,0.04470801);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(8,0.041109);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(9,0.03943785);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(10,0.03748419);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(11,0.03670125);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(12,0.03458006);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(13,0.03249065);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(14,0.03059065);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(15,0.02799401);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(16,0.02338207);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(17,0.02193769);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(18,0.01876668);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(19,0.01752176);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(20,0.01471938);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(21,0.01333934);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(22,0.01175984);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(23,0.01115636);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(24,0.009456743);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(25,0.00718538);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(26,0.006857105);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(27,0.004503675);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(28,0.003184579);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(29,0.002351968);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(30,0.001663092);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetBinError(31,0.001357909);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetEntries(122844);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(1,0.03519711);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(2,0.09827106);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(3,0.07829548);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(4,0.06725419);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(5,0.0210833);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(6,0.01746355);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(7,0.01318204);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(8,0.01681507);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(9,0.01202728);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(10,0.0106833);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(11,0.009103048);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(12,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(14,0.004315259);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(16,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(24,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(26,0.004315259);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(1,0.008727818);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(2,0.01434918);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(3,0.01283883);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(4,0.01239685);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(5,0.0065421);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(6,0.005958482);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(7,0.005505734);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(8,0.006005742);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(9,0.005032895);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(10,0.004818046);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(11,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(12,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(14,0.003158712);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(15,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(16,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(17,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(19,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(24,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(25,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(26,0.003158712);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetBinError(27,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(1,0.009326045);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(2,0.04125772);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(3,0.04286129);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(4,0.0282295);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(5,0.01331397);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(6,0.006940066);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(7,0.005395112);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(8,0.006951341);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(9,0.005844092);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(10,0.004323314);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(11,0.002559479);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(12,0.005752378);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(13,0.002893242);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(14,0.002501534);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(15,0.003043238);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(16,0.001106576);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(17,0.0009565794);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(18,0.001463842);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(19,0.002420421);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(20,0.001371791);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(21,0.0005072625);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(22,0.0005993136);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(23,0.0005648715);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(24,0.0008645283);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(25,0.0005648715);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(1,0.001641095);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(2,0.003416256);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(3,0.003449417);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(4,0.002891233);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(5,0.001956509);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(6,0.001398104);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(7,0.001235725);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(8,0.00139088);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(9,0.001334403);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(10,0.001069626);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(11,0.0008327465);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(12,0.001286334);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(13,0.0009334847);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(14,0.0008572663);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(15,0.0009362955);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(16,0.0005590015);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(17,0.0005542809);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(18,0.0006634166);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(19,0.0008644934);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(20,0.000627238);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(21,0.0003645467);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(22,0.0004237787);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(23,0.0004132058);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(24,0.0005104245);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(25,0.0004132058);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_all__153 = new TH1D("VbbHcc_tags_Z_dR_Bj1_all__153","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(1,15502);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(2,63419);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(3,61970);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(4,49836);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(5,40832);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(6,32487);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(7,26750);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(8,22752);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(9,19689);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(10,17560);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(11,16095);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(12,14832);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(13,13237);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(14,11711);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(15,10471);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(16,9015);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(17,7533);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(18,6389);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(19,5215);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(20,4444);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(21,3597);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(22,2917);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(23,2416);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(24,1882);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(25,1367);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(26,1031);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(27,716);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(28,453);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(29,307);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(30,157);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetBinContent(31,285);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetEntries(464896);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_all__153->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj1_all__153->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_all__153->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_all__153->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fx1111[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fy1111[30] = {
   16621.56,
   78914.34,
   89758.75,
   69398.75,
   50761.33,
   48503.78,
   38365.68,
   32069.47,
   26642.68,
   44468.94,
   27632.93,
   19984.6,
   35319.41,
   20046.67,
   14553.45,
   10579.59,
   8317.688,
   7253.919,
   6813.906,
   6687.089,
   4412.522,
   4008.325,
   3498.536,
   1511.617,
   2470.997,
   1597.427,
   549.3768,
   1054.865,
   194.356,
   125.7062};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fex1111[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fey1111[30] = {
   1176.561,
   3693.675,
   4510.812,
   3697.128,
   3103.216,
   4142.575,
   3304.656,
   2704.236,
   2048.149,
   17255.07,
   2609.94,
   2249.392,
   17172.13,
   2324.804,
   1551.868,
   1265.479,
   1005.301,
   1038.834,
   966.3959,
   1700.33,
   861.5512,
   903.6562,
   798.9049,
   340.833,
   726.2239,
   501.8322,
   101.4661,
   467.8823,
   44.03872,
   49.85165};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fx1111,Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fy1111,Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fex1111,Graph_from_VbbHcc_tags_Z_dR_Bj1_all_fey1111);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetMinimum(68.26914);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetMaximum(103688.9);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj1_all1111);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj1_all","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__154 = new TH1D("data_mc_ratio__154","",30,0,6);
   data_mc_ratio__154->SetBinContent(1,0.9326444);
   data_mc_ratio__154->SetBinContent(2,0.8036436);
   data_mc_ratio__154->SetBinContent(3,0.6904062);
   data_mc_ratio__154->SetBinContent(4,0.718111);
   data_mc_ratio__154->SetBinContent(5,0.8043919);
   data_mc_ratio__154->SetBinContent(6,0.6697828);
   data_mc_ratio__154->SetBinContent(7,0.6972378);
   data_mc_ratio__154->SetBinContent(8,0.7094597);
   data_mc_ratio__154->SetBinContent(9,0.7390023);
   data_mc_ratio__154->SetBinContent(10,0.3948824);
   data_mc_ratio__154->SetBinContent(11,0.5824572);
   data_mc_ratio__154->SetBinContent(12,0.7421714);
   data_mc_ratio__154->SetBinContent(13,0.3747798);
   data_mc_ratio__154->SetBinContent(14,0.5841867);
   data_mc_ratio__154->SetBinContent(15,0.719486);
   data_mc_ratio__154->SetBinContent(16,0.8521127);
   data_mc_ratio__154->SetBinContent(17,0.9056604);
   data_mc_ratio__154->SetBinContent(18,0.8807653);
   data_mc_ratio__154->SetBinContent(19,0.7653467);
   data_mc_ratio__154->SetBinContent(20,0.6645642);
   data_mc_ratio__154->SetBinContent(21,0.81518);
   data_mc_ratio__154->SetBinContent(22,0.7277354);
   data_mc_ratio__154->SetBinContent(23,0.6905745);
   data_mc_ratio__154->SetBinContent(24,1.245024);
   data_mc_ratio__154->SetBinContent(25,0.5532179);
   data_mc_ratio__154->SetBinContent(26,0.645413);
   data_mc_ratio__154->SetBinContent(27,1.303295);
   data_mc_ratio__154->SetBinContent(28,0.429439);
   data_mc_ratio__154->SetBinContent(29,1.579575);
   data_mc_ratio__154->SetBinContent(30,1.248943);
   data_mc_ratio__154->SetBinContent(31,1.494333);
   data_mc_ratio__154->SetBinError(1,0.007490696);
   data_mc_ratio__154->SetBinError(2,0.003191198);
   data_mc_ratio__154->SetBinError(3,0.002773409);
   data_mc_ratio__154->SetBinError(4,0.00321677);
   data_mc_ratio__154->SetBinError(5,0.003980773);
   data_mc_ratio__154->SetBinError(6,0.00371603);
   data_mc_ratio__154->SetBinError(7,0.004263036);
   data_mc_ratio__154->SetBinError(8,0.004703466);
   data_mc_ratio__154->SetBinError(9,0.005266644);
   data_mc_ratio__154->SetBinError(10,0.002979926);
   data_mc_ratio__154->SetBinError(11,0.004591119);
   data_mc_ratio__154->SetBinError(12,0.006094027);
   data_mc_ratio__154->SetBinError(13,0.003257477);
   data_mc_ratio__154->SetBinError(14,0.005398271);
   data_mc_ratio__154->SetBinError(15,0.007031181);
   data_mc_ratio__154->SetBinError(16,0.008974581);
   data_mc_ratio__154->SetBinError(17,0.01043473);
   data_mc_ratio__154->SetBinError(18,0.01101904);
   data_mc_ratio__154->SetBinError(19,0.01059817);
   data_mc_ratio__154->SetBinError(20,0.009968962);
   data_mc_ratio__154->SetBinError(21,0.013592);
   data_mc_ratio__154->SetBinError(22,0.01347427);
   data_mc_ratio__154->SetBinError(23,0.01404954);
   data_mc_ratio__154->SetBinError(24,0.02869908);
   data_mc_ratio__154->SetBinError(25,0.01496277);
   data_mc_ratio__154->SetBinError(26,0.02010057);
   data_mc_ratio__154->SetBinError(27,0.04870642);
   data_mc_ratio__154->SetBinError(28,0.0201768);
   data_mc_ratio__154->SetBinError(29,0.09015113);
   data_mc_ratio__154->SetBinError(30,0.09967654);
   data_mc_ratio__154->SetBinError(31,0.4920998);
   data_mc_ratio__154->SetMinimum(0.4);
   data_mc_ratio__154->SetMaximum(1.6);
   data_mc_ratio__154->SetEntries(615.3331);
   data_mc_ratio__154->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__154->SetLineColor(ci);
   data_mc_ratio__154->SetLineWidth(2);
   data_mc_ratio__154->SetMarkerStyle(20);
   data_mc_ratio__154->SetMarkerSize(1.2);
   data_mc_ratio__154->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__154->GetXaxis()->SetRange(1,30);
   data_mc_ratio__154->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__154->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__154->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__154->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__154->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__154->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__154->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__154->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__154->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__154->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__154->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__154->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__154->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__154->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__154->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__154->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__154->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1112[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1112[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1112[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1112[30] = {
   0.07078526,
   0.04680613,
   0.05025485,
   0.0532737,
   0.06113347,
   0.08540725,
   0.08613575,
   0.08432432,
   0.07687472,
   0.3880252,
   0.09445033,
   0.1125563,
   0.4861952,
   0.1159696,
   0.1066323,
   0.1196151,
   0.120863,
   0.14321,
   0.141827,
   0.2542706,
   0.1952514,
   0.2254449,
   0.228354,
   0.2254757,
   0.2938991,
   0.3141504,
   0.184693,
   0.4435473,
   0.2265879,
   0.3965726};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1112,Graph_from_mc_statistical_error_fy1112,Graph_from_mc_statistical_error_fex1112,Graph_from_mc_statistical_error_fey1112);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1112 = new TH1F("Graph_Graph_from_mc_statistical_error1112","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1112->SetMinimum(0.4165658);
   Graph_Graph_from_mc_statistical_error1112->SetMaximum(1.583434);
   Graph_Graph_from_mc_statistical_error1112->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1112->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1112->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1112);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_tags_all->cd();
   Z_dR_Bj1_tags_all->Modified();
   Z_dR_Bj1_tags_all->cd();
   Z_dR_Bj1_tags_all->SetSelected(Z_dR_Bj1_tags_all);
}
