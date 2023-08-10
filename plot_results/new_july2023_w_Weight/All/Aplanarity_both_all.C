void Aplanarity_both_all()
{
//=========Macro generated from canvas: Aplanarity_both_all/Aplanarity_both_all
//=========  (Thu Aug 10 10:43:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_all = new TCanvas("Aplanarity_both_all", "Aplanarity_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_all->SetHighLightColor(2);
   Aplanarity_both_all->Range(0,0,1,1);
   Aplanarity_both_all->SetFillColor(0);
   Aplanarity_both_all->SetFillStyle(4000);
   Aplanarity_both_all->SetBorderMode(0);
   Aplanarity_both_all->SetBorderSize(2);
   Aplanarity_both_all->SetFrameFillStyle(1000);
   Aplanarity_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1.415279,1.052419,14.6875);
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
   st->SetMaximum(3.310455e+12);
   
   TH1F *st_stack_256 = new TH1F("st_stack_256","",50,0,1);
   st_stack_256->SetMinimum(0.03988628);
   st_stack_256->SetMaximum(1.194595e+13);
   st_stack_256->SetDirectory(0);
   st_stack_256->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_256->SetLineColor(ci);
   st_stack_256->GetXaxis()->SetRange(1,50);
   st_stack_256->GetXaxis()->SetLabelFont(42);
   st_stack_256->GetXaxis()->SetLabelSize(0.035);
   st_stack_256->GetXaxis()->SetTitleSize(0.035);
   st_stack_256->GetXaxis()->SetTitleFont(42);
   st_stack_256->GetYaxis()->SetTitle("Events/0.02");
   st_stack_256->GetYaxis()->SetLabelFont(42);
   st_stack_256->GetYaxis()->SetLabelSize(0.05);
   st_stack_256->GetYaxis()->SetTitleSize(0.057);
   st_stack_256->GetYaxis()->SetTitleOffset(1.2);
   st_stack_256->GetYaxis()->SetTitleFont(42);
   st_stack_256->GetZaxis()->SetLabelFont(42);
   st_stack_256->GetZaxis()->SetLabelSize(0.035);
   st_stack_256->GetZaxis()->SetTitleSize(0.035);
   st_stack_256->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_256);
   
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_1 = new TH1D("VbbHcc_both_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(1,383363.5);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(2,106985.2);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(3,71562.56);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(4,29249.98);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(5,40768.67);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(6,10691.68);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(7,8171.589);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(8,4266.068);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(9,5903.625);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(10,1791.979);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(11,1581.942);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(12,1437.443);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(13,644.3183);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(14,391.9668);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(15,629.3405);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(16,58.96135);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(17,103.9043);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(18,17.30984);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinContent(19,397.8102);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(1,9816.218);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(2,5264.664);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(3,15960.21);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(4,2621.932);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(5,21835.31);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(6,1354.943);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(7,1895.856);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(8,884.6814);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(9,2127.995);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(10,591.2508);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(11,515.387);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(12,790.5694);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(13,343.2627);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(14,86.19572);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(15,545.3509);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(16,42.82712);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(17,56.90303);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(18,10.23845);
   VbbHcc_both_Aplanarity_all_stack_1->SetBinError(19,339.8094);
   VbbHcc_both_Aplanarity_all_stack_1->SetEntries(30761);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_2 = new TH1D("VbbHcc_both_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(1,1936.372);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(2,575.9755);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(3,279.8608);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(4,157.9259);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(5,100.0276);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(6,64.90908);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(7,44.07926);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(8,28.86354);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(9,19.53169);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(10,12.02062);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(11,7.879945);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(12,5.514542);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(13,4.005016);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(14,2.237982);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(15,2.622157);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(16,1.326173);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(17,0.8537356);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(18,0.5170024);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(19,0.3349459);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(20,0.05543612);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(21,0.06619855);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(22,0.04501684);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinContent(23,0.0782043);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(1,19.88106);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(2,10.85235);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(3,7.545202);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(4,5.656755);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(5,4.513189);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(6,3.684676);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(7,2.966707);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(8,2.420884);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(9,2.057101);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(10,1.644995);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(11,1.178731);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(12,1.118068);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(13,0.9450236);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(14,0.5871628);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(15,0.782724);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(16,0.5863936);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(17,0.4325874);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(18,0.3299402);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(19,0.3349459);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(20,0.05543612);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(21,0.06619855);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(22,0.04501684);
   VbbHcc_both_Aplanarity_all_stack_2->SetBinError(23,0.0782043);
   VbbHcc_both_Aplanarity_all_stack_2->SetEntries(36922);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_2,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_3 = new TH1D("VbbHcc_both_Aplanarity_all_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(1,38989.18);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(2,12851.57);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(3,6277.783);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(4,3631.132);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(5,2240.004);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(6,1485.378);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(7,989.9372);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(8,667.9051);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(9,464.6425);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(10,324.1972);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(11,218.5758);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(12,155.6041);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(13,105.2205);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(14,69.67804);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(15,43.88956);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(16,28.85333);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(17,17.28491);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(18,11.21757);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(19,6.245807);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(20,2.214544);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(21,0.7044173);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(22,0.1869164);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(23,0.08098213);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinContent(24,0.08377996);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(1,57.43293);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(2,32.41522);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(3,23.40733);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(4,17.50817);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(5,13.90726);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(6,11.08497);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(7,9.110488);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(8,8.053111);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(9,6.138334);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(10,5.266084);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(11,4.161328);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(12,3.58558);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(13,3.042695);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(14,2.348718);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(15,1.855873);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(16,1.501326);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(17,1.176195);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(18,0.9636094);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(19,0.697514);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(20,0.4049373);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(21,0.2179688);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(22,0.1035906);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(23,0.08098213);
   VbbHcc_both_Aplanarity_all_stack_3->SetBinError(24,0.08377996);
   VbbHcc_both_Aplanarity_all_stack_3->SetEntries(956114);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_3,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_4 = new TH1D("VbbHcc_both_Aplanarity_all_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(1,5385.151);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(2,1555.675);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(3,732.0482);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(4,411.9968);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(5,238.3626);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(6,163.3746);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(7,96.10087);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(8,72.37956);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(9,45.87677);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(10,31.9239);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(11,18.38816);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(12,10.5587);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(13,12.06416);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(14,4.297062);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(15,6.530343);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(16,1.952866);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(17,1.606387);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(18,0.863073);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(19,0.1106342);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinContent(20,0.09198592);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(1,55.24794);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(2,31.98059);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(3,23.98548);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(4,16.95834);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(5,12.69874);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(6,11.24735);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(7,7.041958);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(8,7.57871);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(9,3.939576);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(10,4.573836);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(11,3.322992);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(12,1.679464);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(13,2.113696);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(14,1.027213);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(15,2.857853);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(16,0.8162765);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(17,0.7576803);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(18,0.6250966);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(19,0.1106342);
   VbbHcc_both_Aplanarity_all_stack_4->SetBinError(20,0.09198592);
   VbbHcc_both_Aplanarity_all_stack_4->SetEntries(52923);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_4,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_5 = new TH1D("VbbHcc_both_Aplanarity_all_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(1,546.5059);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(2,165.5203);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(3,68.36053);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(4,36.43015);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(5,21.40216);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(6,9.115297);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(7,12.00237);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(8,3.927813);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(9,2.164138);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(10,1.944046);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(11,1.959992);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(12,3.032951);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(13,0.2859509);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(14,0.6920286);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinContent(15,0.575622);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(1,21.15711);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(2,13.05106);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(3,9.829947);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(4,4.256305);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(5,4.482271);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(6,1.637921);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(7,3.308145);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(8,0.8297558);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(9,0.6321449);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(10,0.6175049);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(11,0.6452444);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(12,2.272098);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(13,0.1983022);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(14,0.2810616);
   VbbHcc_both_Aplanarity_all_stack_5->SetBinError(15,0.2982491);
   VbbHcc_both_Aplanarity_all_stack_5->SetEntries(8398);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_5,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_6 = new TH1D("VbbHcc_both_Aplanarity_all_stack_6","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(1,4.159197);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(2,0.5817051);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(4,0.3402984);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinContent(6,0.3608682);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(1,1.249944);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(2,0.2910315);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(4,0.3402984);
   VbbHcc_both_Aplanarity_all_stack_6->SetBinError(6,0.3608682);
   VbbHcc_both_Aplanarity_all_stack_6->SetEntries(21);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Aplanarity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_6,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_7 = new TH1D("VbbHcc_both_Aplanarity_all_stack_7","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(1,6.881222);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(2,0.9502463);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(3,0.7189392);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(4,0.6428665);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(5,0.242823);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(6,0.3608682);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinContent(10,0.1145399);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(1,1.361479);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(2,0.336662);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(3,0.2938068);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(4,0.3869772);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(5,0.1717599);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(6,0.3608682);
   VbbHcc_both_Aplanarity_all_stack_7->SetBinError(10,0.1145399);
   VbbHcc_both_Aplanarity_all_stack_7->SetEntries(62);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_7,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_8 = new TH1D("VbbHcc_both_Aplanarity_all_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(1,105.59);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(2,31.43366);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(3,14.16804);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(4,8.594817);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(5,2.604047);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(6,2.671996);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(7,2.805186);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(8,1.617737);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(9,0.255359);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(10,0.211376);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinContent(11,0.2830566);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(1,5.648457);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(2,3.074947);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(3,2.003932);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(4,1.626895);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(5,0.9447455);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(6,0.9022894);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(7,0.9457847);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(8,0.7308945);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(9,0.255359);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(10,0.211376);
   VbbHcc_both_Aplanarity_all_stack_8->SetBinError(11,0.2830566);
   VbbHcc_both_Aplanarity_all_stack_8->SetEntries(591);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_8,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_9 = new TH1D("VbbHcc_both_Aplanarity_all_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(1,98.18247);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(2,29.02411);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(3,14.04039);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(4,8.114715);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(5,5.083795);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(6,3.148295);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(7,2.055034);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(8,1.327337);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(9,0.8721564);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(10,0.5852394);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(11,0.3969993);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(12,0.2652609);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(13,0.1657216);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(14,0.08842968);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(15,0.07960753);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(16,0.0299695);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(17,0.03172301);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(18,0.01268239);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(19,0.008465004);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(20,0.001517649);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinContent(22,0.00166245);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(1,0.4945203);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(2,0.2594928);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(3,0.1823404);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(4,0.1402793);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(5,0.1059695);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(6,0.09621656);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(7,0.06746221);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(8,0.05276648);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(9,0.04366575);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(10,0.03774002);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(11,0.02927591);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(12,0.02366647);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(13,0.01912143);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(14,0.01324554);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(15,0.01480368);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(16,0.008240951);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(17,0.007936287);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(18,0.004909922);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(19,0.004525841);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(20,0.001517649);
   VbbHcc_both_Aplanarity_all_stack_9->SetBinError(22,0.00166245);
   VbbHcc_both_Aplanarity_all_stack_9->SetEntries(84809);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_9,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_10 = new TH1D("VbbHcc_both_Aplanarity_all_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(1,40.55425);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(2,13.62225);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(3,7.051998);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(4,4.157972);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(5,2.58502);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(6,1.670266);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(7,1.137569);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(8,0.8076425);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(9,0.5001615);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(10,0.336365);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(11,0.2141552);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(12,0.1619637);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(13,0.1109021);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(14,0.07678804);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(15,0.02668266);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(16,0.02195836);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(17,0.02413184);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(18,0.007338337);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(19,0.006182125);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinContent(21,0.002942341);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(1,0.1448741);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(2,0.0840208);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(3,0.0604848);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(4,0.04639735);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(5,0.03663032);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(6,0.02942625);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(7,0.02429957);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(8,0.02048685);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(9,0.01609462);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(10,0.01323101);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(11,0.01053054);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(12,0.009202155);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(13,0.007573072);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(14,0.006286321);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(15,0.00372426);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(16,0.003363955);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(17,0.003500862);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(18,0.001942296);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(19,0.001829414);
   VbbHcc_both_Aplanarity_all_stack_10->SetBinError(21,0.001230606);
   VbbHcc_both_Aplanarity_all_stack_10->SetEntries(150219);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_10,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_11 = new TH1D("VbbHcc_both_Aplanarity_all_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(1,0.2912999);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(2,0.08622655);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(3,0.02927181);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(4,0.02690662);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(5,0.008476182);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(6,0.006425384);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(7,0.004374861);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(8,0.005896416);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(9,0.002909221);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(10,0.00624983);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinContent(11,0.003060115);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(1,0.02723865);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(2,0.01497824);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(3,0.008763343);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(4,0.008052521);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(5,0.004299834);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(6,0.004568617);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(7,0.003103752);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(8,0.003404736);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(9,0.002909221);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(10,0.003905549);
   VbbHcc_both_Aplanarity_all_stack_11->SetBinError(11,0.003060115);
   VbbHcc_both_Aplanarity_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_11,"");
   
   TH1D *VbbHcc_both_Aplanarity_all_stack_12 = new TH1D("VbbHcc_both_Aplanarity_all_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(1,0.1312357);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(2,0.04524897);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(3,0.01991407);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(4,0.01423338);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(5,0.007105972);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(6,0.006742572);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(7,0.003317632);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(8,0.002076156);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(9,0.001869404);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(10,0.001426069);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(11,0.0007836782);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(12,0.0003228833);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinContent(13,0.0004371028);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(1,0.006535392);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(2,0.003829652);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(3,0.002508238);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(4,0.002131197);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(5,0.001507782);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(6,0.001539274);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(7,0.001072231);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(8,0.0008652669);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(9,0.0007823259);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(10,0.0006692076);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(11,0.0004705746);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(12,0.0003228833);
   VbbHcc_both_Aplanarity_all_stack_12->SetBinError(13,0.0004371028);
   VbbHcc_both_Aplanarity_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Aplanarity_all__703 = new TH1D("VbbHcc_both_Aplanarity_all__703","",50,0,1);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(1,304301);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(2,87705);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(3,40997);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(4,22861);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(5,13926);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(6,8773);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(7,5765);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(8,3833);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(9,2620);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(10,1785);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(11,1247);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(12,844);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(13,541);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(14,332);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(15,246);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(16,155);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(17,95);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(18,54);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(19,30);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(20,17);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(21,3);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(22,1);
   VbbHcc_both_Aplanarity_all__703->SetBinContent(24,1);
   VbbHcc_both_Aplanarity_all__703->SetEntries(496181);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_all__703->SetLineColor(ci);
   VbbHcc_both_Aplanarity_all__703->SetLineWidth(2);
   VbbHcc_both_Aplanarity_all__703->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity_all__703->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity_all__703->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_all__703->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all__703->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all__703->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all__703->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_all__703->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all__703->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_all__703->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_all__703->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_all__703->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_all_fx1511[50] = {
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
   Double_t Graph_from_VbbHcc_both_Aplanarity_all_fy1511[50] = {
   430476.5,
   122209.7,
   78956.65,
   33509.36,
   43378.99,
   12422.68,
   9319.714,
   5042.904,
   6437.473,
   2163.319,
   1829.644,
   1612.58,
   766.171,
   469.0371,
   683.0645,
   91.14565,
   123.7052,
   29.92751,
   404.5163,
   2.363484,
   0.7735582,
   0.2335957,
   0.1591864,
   0.08377996,
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
   Double_t Graph_from_VbbHcc_both_Aplanarity_all_fex1511[50] = {
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
   Double_t Graph_from_VbbHcc_both_Aplanarity_all_fey1511[50] = {
   9816.586,
   5264.889,
   15960.25,
   2622.055,
   21835.32,
   1355.042,
   1895.897,
   884.7545,
   2128.009,
   591.2946,
   515.4163,
   790.5833,
   343.2841,
   86.23629,
   545.3622,
   42.86521,
   56.92187,
   10.30796,
   339.8103,
   0.4189405,
   0.2278029,
   0.1129615,
   0.1125789,
   0.08377996,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_all_fx1511,Graph_from_VbbHcc_both_Aplanarity_all_fy1511,Graph_from_VbbHcc_both_Aplanarity_all_fex1511,Graph_from_VbbHcc_both_Aplanarity_all_fey1511);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity_all1511 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity_all1511","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetMinimum(484.3224);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetMaximum(484322.4);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity_all1511->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity_all1511);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Aplanarity_all","MC unc. (stat.)","fl");

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
   Aplanarity_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__704 = new TH1D("data_mc_ratio__704","",50,0,1);
   data_mc_ratio__704->SetBinContent(1,0.7068934);
   data_mc_ratio__704->SetBinContent(2,0.7176598);
   data_mc_ratio__704->SetBinContent(3,0.5192343);
   data_mc_ratio__704->SetBinContent(4,0.6822273);
   data_mc_ratio__704->SetBinContent(5,0.321031);
   data_mc_ratio__704->SetBinContent(6,0.7062084);
   data_mc_ratio__704->SetBinContent(7,0.6185812);
   data_mc_ratio__704->SetBinContent(8,0.7600779);
   data_mc_ratio__704->SetBinContent(9,0.406992);
   data_mc_ratio__704->SetBinContent(10,0.8251209);
   data_mc_ratio__704->SetBinContent(11,0.6815533);
   data_mc_ratio__704->SetBinContent(12,0.5233848);
   data_mc_ratio__704->SetBinContent(13,0.7061087);
   data_mc_ratio__704->SetBinContent(14,0.7078331);
   data_mc_ratio__704->SetBinContent(15,0.3601417);
   data_mc_ratio__704->SetBinContent(16,1.700575);
   data_mc_ratio__704->SetBinContent(17,0.767955);
   data_mc_ratio__704->SetBinContent(18,1.80436);
   data_mc_ratio__704->SetBinContent(19,0.07416266);
   data_mc_ratio__704->SetBinContent(20,7.192771);
   data_mc_ratio__704->SetBinContent(21,3.878183);
   data_mc_ratio__704->SetBinContent(22,4.280902);
   data_mc_ratio__704->SetBinContent(24,11.93603);
   data_mc_ratio__704->SetBinError(1,0.001281452);
   data_mc_ratio__704->SetBinError(2,0.002423296);
   data_mc_ratio__704->SetBinError(3,0.002564409);
   data_mc_ratio__704->SetBinError(4,0.004512129);
   data_mc_ratio__704->SetBinError(5,0.002720406);
   data_mc_ratio__704->SetBinError(6,0.007539782);
   data_mc_ratio__704->SetBinError(7,0.008146988);
   data_mc_ratio__704->SetBinError(8,0.0122769);
   data_mc_ratio__704->SetBinError(9,0.007951247);
   data_mc_ratio__704->SetBinError(10,0.01952983);
   data_mc_ratio__704->SetBinError(11,0.01930041);
   data_mc_ratio__704->SetBinError(12,0.01801565);
   data_mc_ratio__704->SetBinError(13,0.03035798);
   data_mc_ratio__704->SetBinError(14,0.03884739);
   data_mc_ratio__704->SetBinError(15,0.0229618);
   data_mc_ratio__704->SetBinError(16,0.1365935);
   data_mc_ratio__704->SetBinError(17,0.07879052);
   data_mc_ratio__704->SetBinError(18,0.2455423);
   data_mc_ratio__704->SetBinError(19,0.01354019);
   data_mc_ratio__704->SetBinError(20,1.744503);
   data_mc_ratio__704->SetBinError(21,2.23907);
   data_mc_ratio__704->SetBinError(22,4.280902);
   data_mc_ratio__704->SetBinError(24,11.93603);
   data_mc_ratio__704->SetMinimum(0.4);
   data_mc_ratio__704->SetMaximum(1.6);
   data_mc_ratio__704->SetEntries(5.218118);
   data_mc_ratio__704->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__704->SetLineColor(ci);
   data_mc_ratio__704->SetLineWidth(2);
   data_mc_ratio__704->SetMarkerStyle(20);
   data_mc_ratio__704->SetMarkerSize(1.2);
   data_mc_ratio__704->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__704->GetXaxis()->SetRange(1,50);
   data_mc_ratio__704->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__704->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__704->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__704->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__704->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__704->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__704->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__704->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__704->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__704->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__704->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__704->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__704->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__704->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__704->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__704->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__704->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1512[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1512[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1512[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1512[50] = {
   0.022804,
   0.04308077,
   0.2021394,
   0.07824845,
   0.5033617,
   0.109078,
   0.2034286,
   0.1754454,
   0.3305659,
   0.2733275,
   0.2817031,
   0.4902598,
   0.4480515,
   0.1838581,
   0.7984051,
   0.4702936,
   0.4601414,
   0.3444309,
   0.840041,
   0.1772555,
   0.294487,
   0.4835771,
   0.7072144,
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
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1512,Graph_from_mc_statistical_error_fy1512,Graph_from_mc_statistical_error_fex1512,Graph_from_mc_statistical_error_fey1512);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1512 = new TH1F("Graph_Graph_from_mc_statistical_error1512","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1512->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1512->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1512->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1512->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1512->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1512->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1512->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1512->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1512->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1512);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_all->cd();
   Aplanarity_both_all->Modified();
   Aplanarity_both_all->cd();
   Aplanarity_both_all->SetSelected(Aplanarity_both_all);
}
