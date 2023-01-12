#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Mon Dec 19 11:15:39 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(-1.310117,-0.9890929,7.029799,9.959761);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetFillStyle(4000);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetLogy();
   Z_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_18->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2.93797e+08);
   
   TH1F *st_stack_107 = new TH1F("st_stack_107","",30,0,6);
   st_stack_107->SetMinimum(2.112368);
   st_stack_107->SetMaximum(7.326149e+08);
   st_stack_107->SetDirectory(0);
   st_stack_107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_107->SetLineColor(ci);
   st_stack_107->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_107->GetXaxis()->SetRange(1,30);
   st_stack_107->GetXaxis()->SetLabelFont(42);
   st_stack_107->GetXaxis()->SetTitleOffset(1);
   st_stack_107->GetXaxis()->SetTitleFont(42);
   st_stack_107->GetYaxis()->SetTitle("Events/0.2");
   st_stack_107->GetYaxis()->SetLabelFont(42);
   st_stack_107->GetYaxis()->SetTitleSize(0.037);
   st_stack_107->GetYaxis()->SetTitleFont(42);
   st_stack_107->GetZaxis()->SetLabelFont(42);
   st_stack_107->GetZaxis()->SetTitleOffset(1);
   st_stack_107->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_107);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,618049.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,2906990);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,2219204);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,1475366);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,1068441);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,536757.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,470424.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,187669);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,318007.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,213667.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,163429.4);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,87124.33);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,36617.15);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,58628.03);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,16528.56);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,8446.416);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,28931.56);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,6355.849);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,3789.277);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,1877.817);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,1751.662);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,426.2055);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,44.28145);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,413.4628);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,2400.835);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,1688.584);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,42825.26);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,145092.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,141368);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,120739.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,112710);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,65695.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,71874.43);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,40025.83);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,70446.94);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,54847.19);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,49863.74);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,32024.12);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,22335.91);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,31369.21);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,4877.94);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,3450.076);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,22179.86);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,2987.901);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,2413.775);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,1690.35);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,1689.173);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,352.8174);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,34.01575);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,352.5872);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,1759.584);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,1688.584);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(42604);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,4334.452);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,30979.72);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,42536.2);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,35167.31);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,23679.11);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,14730.99);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,9087.413);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,5755.833);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,3768.721);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,2529.733);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,1716.088);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,1157.015);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,811.1844);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,554.4991);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,380.3653);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,260.2333);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,185.4733);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,122.4958);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,87.4587);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,63.71739);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,39.78438);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,28.18005);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,17.94745);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,12.10661);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,8.520772);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,5.119945);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,4.786152);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,2.834577);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,1.545108);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,1.046464);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,3.147166);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,16.99838);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,45.57378);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,53.49828);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,48.65254);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,39.90808);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,31.42919);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,24.65176);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,19.58472);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,15.82301);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,12.94863);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,10.65707);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,8.729328);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,7.314142);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,6.044629);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,5.002598);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,4.137979);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,3.50529);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,2.827944);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,2.391703);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,2.040546);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.612875);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,1.374911);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,1.080213);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.8990977);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.7409496);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.582781);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.5513328);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.4368995);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.3151316);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.2572652);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.4586989);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(2750781);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}
