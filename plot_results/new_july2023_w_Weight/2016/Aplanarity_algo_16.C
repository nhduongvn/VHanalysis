void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug 10 12:24:19 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(0,0,1,1);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetFillStyle(4000);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-8545.597,1.052419,8537061);
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
   st->SetMaximum(7316667);
   
   TH1F *st_stack_157 = new TH1F("st_stack_157","",50,0,1);
   st_stack_157->SetMinimum(0.01);
   st_stack_157->SetMaximum(7682500);
   st_stack_157->SetDirectory(0);
   st_stack_157->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_157->SetLineColor(ci);
   st_stack_157->GetXaxis()->SetRange(1,50);
   st_stack_157->GetXaxis()->SetLabelFont(42);
   st_stack_157->GetXaxis()->SetLabelSize(0.035);
   st_stack_157->GetXaxis()->SetTitleSize(0.035);
   st_stack_157->GetXaxis()->SetTitleFont(42);
   st_stack_157->GetYaxis()->SetTitle("Events/0.02");
   st_stack_157->GetYaxis()->SetLabelFont(42);
   st_stack_157->GetYaxis()->SetLabelSize(0.05);
   st_stack_157->GetYaxis()->SetTitleSize(0.057);
   st_stack_157->GetYaxis()->SetTitleOffset(1.2);
   st_stack_157->GetYaxis()->SetTitleFont(42);
   st_stack_157->GetZaxis()->SetLabelFont(42);
   st_stack_157->GetZaxis()->SetLabelSize(0.035);
   st_stack_157->GetZaxis()->SetTitleSize(0.035);
   st_stack_157->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_157);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,2900904);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,474717.2);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,102345.5);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,22685.83);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,5014.038);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,1573.543);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,135.5834);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,137.6);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,47.09996);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,16.40358);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,13.17292);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,4.75717);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,5.281904);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,2.017197);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,47993.78);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,26469.63);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,6667.209);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,2923.321);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,1060.804);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,576.087);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,48.04713);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,51.96457);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,27.20144);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,16.40358);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,13.17292);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,4.75717);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,5.281904);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,2.017197);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(131372);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,19085.79);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,2755.702);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,611.9859);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,172.4029);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,57.25787);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,21.95682);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,10.03257);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,5.210782);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1.933116);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,1.240247);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.6635351);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.3845326);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.08422737);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.3870831);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.09067077);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.02438775);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,56.11309);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,21.27601);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,10.02663);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,5.400883);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,3.020318);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.911432);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,1.263324);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.9973194);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.617558);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.3886434);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.3179329);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.2352891);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.0917668);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.3145667);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.05800488);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.02438775);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(347069);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,351451.9);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,47838.81);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,10070.09);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,2842.941);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,950.2919);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,378.0098);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,167.0943);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,76.90358);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,40.46193);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,18.61186);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,11.72114);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,6.642724);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,4.681372);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,2.122362);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,1.335477);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.7091245);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.4293485);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.3333904);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.05079964);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(22,0.04494681);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,156.5856);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,57.47006);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,26.15175);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,13.7601);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,7.879381);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,4.936804);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,3.254674);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,2.193107);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.590453);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,1.050185);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.844293);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.6293906);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.5416464);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.3549448);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.2702218);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.2139574);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.1578814);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1380806);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.05079964);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(22,0.04494681);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(6426049);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,13593.26);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,1771.308);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,415.5424);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,87.40884);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,28.22909);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,6.372774);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,7.354479);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,3.487524);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.4506334);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.341819);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.1439928);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(13,0.2637121);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,102.077);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,42.62998);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,21.32377);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,9.070812);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,6.110292);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,2.97595);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,3.723304);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,2.868692);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.3160833);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.272341);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.1029559);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(13,0.2637121);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(94081);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,6997.962);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,814.952);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,187.3911);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,33.47629);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,4.942481);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,9.879714);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,7.38855);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(8,0.5152085);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(9,0.5144519);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(10,0.3698299);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(11,0.02678655);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,110.1173);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,44.90168);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,21.76923);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,8.193697);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,1.319851);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,6.961174);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,6.590164);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(8,0.3976914);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(9,0.4748127);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(10,0.3389751);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(11,0.02678655);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(65948);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_6 = new TH1D("VbbHcc_algo_Aplanarity_stack_6","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(1,71.4081);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(2,6.805527);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(3,1.567902);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(4,0.4388234);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(5,0.1380529);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(7,0.09641758);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(1,3.203295);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(2,0.9854575);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(3,0.474329);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(4,0.2540211);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(5,0.1380529);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(7,0.09641758);
   VbbHcc_algo_Aplanarity_stack_6->SetEntries(573);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,116.4358);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,13.83548);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(3,2.751364);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(4,0.4049486);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(5,0.4672681);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(6,0.2184507);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(7,0.1228988);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,3.694923);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,1.273629);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(3,0.5674424);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(4,0.2126199);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(5,0.2342996);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(6,0.1548394);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(7,0.1228988);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(1163);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_8 = new TH1D("VbbHcc_algo_Aplanarity_stack_8","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(1,147.8533);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(2,20.198);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(3,3.233437);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(4,0.5178421);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(6,0.2396603);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(1,6.228112);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(2,2.305072);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(3,0.9160646);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(4,0.3662043);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(6,0.2396603);
   VbbHcc_algo_Aplanarity_stack_8->SetEntries(665);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,92.97578);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,8.772965);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,1.504225);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.3613198);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.08568614);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.02779308);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.007173491);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(8,0.007599412);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(9,0.002680017);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(10,0.001615869);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.3783429);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.1153853);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.04770928);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.02316328);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.01131477);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.006294216);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.003217107);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(8,0.003409544);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(9,0.001936569);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(10,0.001615869);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(72116);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,37.31944);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,4.246642);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.8150945);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.1762525);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.05981865);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.01755911);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.005979734);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.003091222);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.001694147);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.0007399519);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0002703011);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0001319684);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1201103);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.04051122);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.01772025);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.008196965);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.004745781);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.002550675);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.001479914);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.001042122);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.0007661107);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0004766633);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0002703011);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0001319684);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_11 = new TH1D("VbbHcc_algo_Aplanarity_stack_11","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(1,0.943598);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(2,0.07079581);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(3,0.01761457);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(4,0.005998222);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(6,0.002761603);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(1,0.05322361);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(2,0.01488653);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(3,0.007210821);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(4,0.004254069);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(6,0.002761603);
   VbbHcc_algo_Aplanarity_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.3663722);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.04743335);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.009641675);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.001850617);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(5,0.001145693);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.011855);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.004262832);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.001910679);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.0008330926);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(5,0.0006617766);
   VbbHcc_algo_Aplanarity_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Aplanarity__430 = new TH1D("VbbHcc_algo_Aplanarity__430","",50,0,1);
   VbbHcc_algo_Aplanarity__430->SetBinContent(1,735261);
   VbbHcc_algo_Aplanarity__430->SetBinContent(2,92247);
   VbbHcc_algo_Aplanarity__430->SetBinContent(3,20504);
   VbbHcc_algo_Aplanarity__430->SetBinContent(4,5442);
   VbbHcc_algo_Aplanarity__430->SetBinContent(5,1567);
   VbbHcc_algo_Aplanarity__430->SetBinContent(6,563);
   VbbHcc_algo_Aplanarity__430->SetBinContent(7,224);
   VbbHcc_algo_Aplanarity__430->SetBinContent(8,100);
   VbbHcc_algo_Aplanarity__430->SetBinContent(9,56);
   VbbHcc_algo_Aplanarity__430->SetBinContent(10,35);
   VbbHcc_algo_Aplanarity__430->SetBinContent(11,20);
   VbbHcc_algo_Aplanarity__430->SetBinContent(12,10);
   VbbHcc_algo_Aplanarity__430->SetBinContent(13,7);
   VbbHcc_algo_Aplanarity__430->SetBinContent(14,3);
   VbbHcc_algo_Aplanarity__430->SetBinContent(15,2);
   VbbHcc_algo_Aplanarity__430->SetBinContent(16,4);
   VbbHcc_algo_Aplanarity__430->SetBinContent(17,1);
   VbbHcc_algo_Aplanarity__430->SetBinContent(18,2);
   VbbHcc_algo_Aplanarity__430->SetEntries(856097);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity__430->SetLineColor(ci);
   VbbHcc_algo_Aplanarity__430->SetLineWidth(2);
   VbbHcc_algo_Aplanarity__430->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity__430->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity__430->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity__430->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__430->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__430->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__430->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity__430->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__430->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__430->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__430->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fx1313[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fy1313[50] = {
   3292500,
   527951.9,
   113640.4,
   25823.96,
   6055.511,
   1990.269,
   327.6857,
   223.7278,
   90.46446,
   36.96969,
   25.72864,
   11.78456,
   10.31122,
   2.509445,
   3.443346,
   0.7091245,
   0.4293485,
   0.3577781,
   0.05079964,
   0,
   0,
   0.04494681,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fex1313[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fey1313[50] = {
   47994.3,
   26469.77,
   6667.338,
   2923.384,
   1060.856,
   576.1612,
   48.76508,
   52.10094,
   27.26086,
   16.44751,
   13.20421,
   4.80439,
   5.316941,
   0.4742763,
   2.036043,
   0.2139574,
   0.1578814,
   0.1402177,
   0.05079964,
   0,
   0,
   0.04494681,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_fx1313,Graph_from_VbbHcc_algo_Aplanarity_fy1313,Graph_from_VbbHcc_algo_Aplanarity_fex1313,Graph_from_VbbHcc_algo_Aplanarity_fey1313);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity1313 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity1313","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetMaximum(3674544);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity1313);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Aplanarity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__431 = new TH1D("data_mc_ratio__431","",50,0,1);
   data_mc_ratio__431->SetBinContent(1,0.2233139);
   data_mc_ratio__431->SetBinContent(2,0.1747261);
   data_mc_ratio__431->SetBinContent(3,0.1804287);
   data_mc_ratio__431->SetBinContent(4,0.2107345);
   data_mc_ratio__431->SetBinContent(5,0.2587725);
   data_mc_ratio__431->SetBinContent(6,0.2828764);
   data_mc_ratio__431->SetBinContent(7,0.6835818);
   data_mc_ratio__431->SetBinContent(8,0.4469717);
   data_mc_ratio__431->SetBinContent(9,0.6190276);
   data_mc_ratio__431->SetBinContent(10,0.9467215);
   data_mc_ratio__431->SetBinContent(11,0.7773437);
   data_mc_ratio__431->SetBinContent(12,0.848568);
   data_mc_ratio__431->SetBinContent(13,0.6788724);
   data_mc_ratio__431->SetBinContent(14,1.195483);
   data_mc_ratio__431->SetBinContent(15,0.5808305);
   data_mc_ratio__431->SetBinContent(16,5.640758);
   data_mc_ratio__431->SetBinContent(17,2.329111);
   data_mc_ratio__431->SetBinContent(18,5.590057);
   data_mc_ratio__431->SetBinError(1,0.0002604324);
   data_mc_ratio__431->SetBinError(2,0.0005752833);
   data_mc_ratio__431->SetBinError(3,0.001260046);
   data_mc_ratio__431->SetBinError(4,0.002856646);
   data_mc_ratio__431->SetBinError(5,0.006537078);
   data_mc_ratio__431->SetBinError(6,0.01192182);
   data_mc_ratio__431->SetBinError(7,0.04567373);
   data_mc_ratio__431->SetBinError(8,0.04469717);
   data_mc_ratio__431->SetBinError(9,0.08272105);
   data_mc_ratio__431->SetBinError(10,0.1600251);
   data_mc_ratio__431->SetBinError(11,0.1738193);
   data_mc_ratio__431->SetBinError(12,0.2683408);
   data_mc_ratio__431->SetBinError(13,0.2565897);
   data_mc_ratio__431->SetBinError(14,0.6902126);
   data_mc_ratio__431->SetBinError(15,0.4107092);
   data_mc_ratio__431->SetBinError(16,2.820379);
   data_mc_ratio__431->SetBinError(17,2.329111);
   data_mc_ratio__431->SetBinError(18,3.952767);
   data_mc_ratio__431->SetMinimum(0.4);
   data_mc_ratio__431->SetMaximum(1.6);
   data_mc_ratio__431->SetEntries(12.00898);
   data_mc_ratio__431->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__431->SetLineColor(ci);
   data_mc_ratio__431->SetLineWidth(2);
   data_mc_ratio__431->SetMarkerStyle(20);
   data_mc_ratio__431->SetMarkerSize(1.2);
   data_mc_ratio__431->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__431->GetXaxis()->SetRange(1,50);
   data_mc_ratio__431->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__431->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__431->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__431->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__431->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__431->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__431->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__431->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__431->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__431->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__431->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__431->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__431->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__431->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__431->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__431->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__431->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1314[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1314[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1314[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1314[50] = {
   0.01457686,
   0.0501367,
   0.05867047,
   0.1132043,
   0.1751885,
   0.2894892,
   0.1488166,
   0.2328764,
   0.3013433,
   0.4448916,
   0.5132105,
   0.4076852,
   0.5156464,
   0.1889965,
   0.5912978,
   0.3017205,
   0.3677232,
   0.3919126,
   1,
   0,
   0,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1314,Graph_from_mc_statistical_error_fy1314,Graph_from_mc_statistical_error_fex1314,Graph_from_mc_statistical_error_fey1314);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1314 = new TH1F("Graph_Graph_from_mc_statistical_error1314","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1314->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1314->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1314->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1314->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1314->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1314);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
