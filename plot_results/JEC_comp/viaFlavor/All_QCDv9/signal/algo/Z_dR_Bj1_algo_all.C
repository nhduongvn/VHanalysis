#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_all/Z_dR_Bj1_algo_all
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_all = new TCanvas("Z_dR_Bj1_algo_all", "Z_dR_Bj1_algo_all",0,0,600,600);
   Z_dR_Bj1_algo_all->SetHighLightColor(2);
   Z_dR_Bj1_algo_all->Range(-1.310117,-0.1188797,7.029799,0.8717842);
   Z_dR_Bj1_algo_all->SetFillColor(0);
   Z_dR_Bj1_algo_all->SetFillStyle(4000);
   Z_dR_Bj1_algo_all->SetBorderMode(0);
   Z_dR_Bj1_algo_all->SetBorderSize(2);
   Z_dR_Bj1_algo_all->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_all->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_all->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_all->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.7727178);
   
   TH1F *st_stack_152 = new TH1F("st_stack_152","",30,0,6);
   st_stack_152->SetMinimum(0);
   st_stack_152->SetMaximum(0.7727178);
   st_stack_152->SetDirectory(0);
   st_stack_152->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_152->SetLineColor(ci);
   st_stack_152->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_152->GetXaxis()->SetRange(1,30);
   st_stack_152->GetXaxis()->SetLabelFont(42);
   st_stack_152->GetXaxis()->SetTitleOffset(1);
   st_stack_152->GetXaxis()->SetTitleFont(42);
   st_stack_152->GetYaxis()->SetTitle("Event/0.2");
   st_stack_152->GetYaxis()->SetLabelFont(42);
   st_stack_152->GetYaxis()->SetTitleSize(0.037);
   st_stack_152->GetYaxis()->SetTitleFont(42);
   st_stack_152->GetZaxis()->SetLabelFont(42);
   st_stack_152->GetZaxis()->SetTitleOffset(1);
   st_stack_152->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_152);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(2,0.3225417);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(3,0.4673876);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(4,0.3473521);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(5,0.1572588);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(6,0.06966497);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(7,0.05492314);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(8,0.01472854);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(9,0.02991633);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(10,0.0293016);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(11,0.02678958);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(12,0.01406678);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(13,0.02019856);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(14,0.02247432);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(15,0.009987788);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(16,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(17,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinContent(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(2,0.02620622);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(3,0.0317898);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(4,0.02723629);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(5,0.01874269);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(6,0.01203664);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(7,0.01088104);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(8,0.005293699);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(9,0.007638564);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(10,0.007981237);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(11,0.007624981);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(12,0.005488934);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(13,0.006556201);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(14,0.006939947);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(15,0.004531188);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(16,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(17,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetBinError(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetEntries(776);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(1,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(2,0.08363655);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(3,0.1739682);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(4,0.1217126);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(5,0.06522314);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(6,0.02634085);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(7,0.01404174);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(8,0.009764424);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(9,0.008023475);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(10,0.008738007);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(11,0.00813903);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(12,0.005256054);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(13,0.007181778);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(14,0.00345845);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(15,0.002270761);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(16,0.0007724772);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(17,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(18,0.001072134);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(19,0.001164185);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(21,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(23,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinContent(25,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(1,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(2,0.004826678);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(3,0.006982423);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(4,0.005829777);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(5,0.00433073);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(6,0.002730685);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(7,0.001953257);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(8,0.001675825);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(9,0.001496055);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(10,0.001579069);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(11,0.001494854);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(12,0.001257338);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(13,0.001444274);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(14,0.0009812489);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(15,0.0008141315);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(16,0.0004624274);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(17,0.0004237787);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(18,0.0005510293);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(19,0.0005918846);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(21,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(23,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetBinError(25,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetEntries(2016);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_algo_all->Modified();
   Z_dR_Bj1_algo_all->cd();
   Z_dR_Bj1_algo_all->SetSelected(Z_dR_Bj1_algo_all);
}
