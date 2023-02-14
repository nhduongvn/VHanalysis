#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_18/Z_dR_Bj1_algo_18
//=========  (Tue Feb 14 10:43:07 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_18 = new TCanvas("Z_dR_Bj1_algo_18", "Z_dR_Bj1_algo_18",0,0,600,600);
   Z_dR_Bj1_algo_18->SetHighLightColor(2);
   Z_dR_Bj1_algo_18->Range(-1.310117,0.5806989,7.029799,2.427624);
   Z_dR_Bj1_algo_18->SetFillColor(0);
   Z_dR_Bj1_algo_18->SetFillStyle(4000);
   Z_dR_Bj1_algo_18->SetBorderMode(0);
   Z_dR_Bj1_algo_18->SetBorderSize(2);
   Z_dR_Bj1_algo_18->SetLogy();
   Z_dR_Bj1_algo_18->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_18->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_18->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(142.1762);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",30,0,6);
   st_stack_119->SetMinimum(6.343514);
   st_stack_119->SetMaximum(174.957);
   st_stack_119->SetDirectory(0);
   st_stack_119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_119->SetLineColor(ci);
   st_stack_119->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_119->GetXaxis()->SetRange(1,30);
   st_stack_119->GetXaxis()->SetLabelFont(42);
   st_stack_119->GetXaxis()->SetTitleOffset(1);
   st_stack_119->GetXaxis()->SetTitleFont(42);
   st_stack_119->GetYaxis()->SetTitle("Events/0.2");
   st_stack_119->GetYaxis()->SetLabelFont(42);
   st_stack_119->GetYaxis()->SetTitleSize(0.037);
   st_stack_119->GetYaxis()->SetTitleFont(42);
   st_stack_119->GetZaxis()->SetLabelFont(42);
   st_stack_119->GetZaxis()->SetTitleOffset(1);
   st_stack_119->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_119);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,0.5029434);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,1.065057);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,1.07416);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,0.7601045);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,0.516598);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,0.2799187);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,0.1888882);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,0.1183396);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,0.06144557);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,0.04551524);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,0.047791);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,0.02275762);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,0.02275762);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,0.03186067);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,0.02503338);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,0.006827286);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,0.03383163);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,0.04923226);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,0.0494422);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,0.04159107);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,0.03428781);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,0.02523942);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,0.02073318);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,0.01641075);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,0.01182521);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,0.01017752);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,0.01042885);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,0.007196591);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,0.007196591);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,0.008515121);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,0.007547848);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,0.003218413);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,0.003941735);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,0.003218413);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(2101);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,0.1024826);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,0.3517971);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,0.3476019);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,0.2118574);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,0.1060785);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,0.04704612);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,0.02607014);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,0.01468318);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,0.01408387);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,0.009589018);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,0.00839039);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,0.007191763);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,0.004195195);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,0.003895538);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,0.004494852);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,0.003595882);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,0.001498284);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,0.002097598);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,0.005541626);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,0.01026735);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,0.01020594);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,0.007967716);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,0.005638009);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,0.003754689);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,0.002795013);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,0.002097598);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,0.002054343);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,0.001695115);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,0.001585635);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,0.001468013);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,0.001121213);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,0.001080428);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,0.001160566);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,0.001038042);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,0.000670053);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,0.0007928174);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,0.0004237787);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(4230);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_algo_18->Modified();
   Z_dR_Bj1_algo_18->cd();
   Z_dR_Bj1_algo_18->SetSelected(Z_dR_Bj1_algo_18);
}
