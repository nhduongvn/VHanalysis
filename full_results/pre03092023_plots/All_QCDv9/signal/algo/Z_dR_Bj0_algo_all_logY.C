#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_all/Z_dR_Bj0_algo_all
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_all = new TCanvas("Z_dR_Bj0_algo_all", "Z_dR_Bj0_algo_all",0,0,600,600);
   Z_dR_Bj0_algo_all->SetHighLightColor(2);
   Z_dR_Bj0_algo_all->Range(-1.310117,-3.260729,7.029799,0.5854248);
   Z_dR_Bj0_algo_all->SetFillColor(0);
   Z_dR_Bj0_algo_all->SetFillStyle(4000);
   Z_dR_Bj0_algo_all->SetBorderMode(0);
   Z_dR_Bj0_algo_all->SetBorderSize(2);
   Z_dR_Bj0_algo_all->SetLogy();
   Z_dR_Bj0_algo_all->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_all->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_all->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",30,0,6);
   st_stack_116->SetMinimum(15.75533);
   st_stack_116->SetMaximum(1.58785);
   st_stack_116->SetDirectory(0);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_116->GetXaxis()->SetRange(1,30);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetTitleOffset(1);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Event/0.2");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetTitleSize(0.037);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetTitleOffset(1);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(1,0.3445231);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(2,1.385989);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(3,0.9072539);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(4,0.3751613);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(5,0.1496621);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(6,0.07851656);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(7,0.0348093);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(8,0.02343873);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(9,0.0156174);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(10,0.004934469);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(11,0.003407568);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(14,0.001703784);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(18,0.001703784);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(1,0.02349583);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(2,0.04711031);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(3,0.03842642);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(4,0.02463523);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(5,0.01520336);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(6,0.01109227);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(7,0.007259966);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(8,0.005975807);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(9,0.004786697);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(10,0.00291466);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(11,0.002409515);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(14,0.001703784);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(18,0.001703784);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetEntries(2165);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(1,0.06853567);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(2,0.4735765);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(3,0.3587295);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(4,0.1284661);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(5,0.03978752);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(6,0.01727825);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(7,0.008587679);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(8,0.006343538);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(9,0.003823232);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(10,0.004582772);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(11,0.001985109);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(12,0.001294737);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(13,0.001501483);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(14,0.001251355);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(15,0.000535197);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(16,0.000535197);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(1,0.003795163);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(2,0.009980816);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(3,0.00870013);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(4,0.005198965);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(5,0.002874362);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(6,0.001917086);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(7,0.001343678);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(8,0.00114358);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(9,0.0008912187);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(10,0.0009712082);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(11,0.0006440964);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(12,0.0004976136);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(13,0.0005710827);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(14,0.0005204284);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(15,0.0003140778);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(16,0.0003140778);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetEntries(5547);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_all->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->SetSelected(Z_dR_Bj0_algo_all);
}
