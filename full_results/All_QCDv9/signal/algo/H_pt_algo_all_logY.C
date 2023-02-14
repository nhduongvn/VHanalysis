#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_algo_all_logY()
{
//=========Macro generated from canvas: H_pt_algo_all/H_pt_algo_all
//=========  (Tue Feb 14 10:43:07 2023) by ROOT version 6.26/06
   TCanvas *H_pt_algo_all = new TCanvas("H_pt_algo_all", "H_pt_algo_all",0,0,600,600);
   H_pt_algo_all->SetHighLightColor(2);
   H_pt_algo_all->Range(37.97653,0.4709253,1705.96,2.853396);
   H_pt_algo_all->SetFillColor(0);
   H_pt_algo_all->SetFillStyle(4000);
   H_pt_algo_all->SetBorderMode(0);
   H_pt_algo_all->SetBorderSize(2);
   H_pt_algo_all->SetLogy();
   H_pt_algo_all->SetLeftMargin(0.15709);
   H_pt_algo_all->SetRightMargin(0.1234783);
   H_pt_algo_all->SetBottomMargin(0.12);
   H_pt_algo_all->SetFrameFillStyle(1000);
   H_pt_algo_all->SetFrameBorderMode(0);
   H_pt_algo_all->SetFrameFillStyle(1000);
   H_pt_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(317.0517);
   
   TH1F *st_stack_80 = new TH1F("st_stack_80","",40,0,2000);
   st_stack_80->SetMinimum(5.712441);
   st_stack_80->SetMaximum(412.2388);
   st_stack_80->SetDirectory(0);
   st_stack_80->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_80->SetLineColor(ci);
   st_stack_80->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_80->GetXaxis()->SetRange(7,30);
   st_stack_80->GetXaxis()->SetLabelFont(42);
   st_stack_80->GetXaxis()->SetTitleOffset(1);
   st_stack_80->GetXaxis()->SetTitleFont(42);
   st_stack_80->GetYaxis()->SetTitle("Events/50.0");
   st_stack_80->GetYaxis()->SetLabelFont(42);
   st_stack_80->GetYaxis()->SetTitleSize(0.037);
   st_stack_80->GetYaxis()->SetTitleFont(42);
   st_stack_80->GetZaxis()->SetLabelFont(42);
   st_stack_80->GetZaxis()->SetTitleOffset(1);
   st_stack_80->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_80);
   
   
   TH1D *VbbHcc_algo_H_pt_all_stack_1 = new TH1D("VbbHcc_algo_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(1,0.4486983);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(2,2.988982);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(3,3.170517);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(4,1.94964);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(5,1.138678);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(6,0.6558857);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(7,0.3503713);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(8,0.2356405);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(9,0.09520432);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(10,0.0357855);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(11,0.01792558);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(12,0.0117076);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(13,0.009446568);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(14,0.008319908);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(16,0.01223407);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(18,0.002840873);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(1,0.0336302);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(2,0.08751352);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(3,0.09131861);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(4,0.07005127);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(5,0.06638671);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(6,0.04180442);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(7,0.02929987);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(8,0.02440336);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(9,0.01629441);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(10,0.009262423);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(11,0.006920244);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(12,0.005295913);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(13,0.004797001);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(14,0.004282471);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(16,0.007595962);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(18,0.002840873);
   VbbHcc_algo_H_pt_all_stack_1->SetEntries(5082);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_all_stack_2 = new TH1D("VbbHcc_algo_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(1,0.05078195);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(2,0.3772169);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(3,0.9704716);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(4,0.8577531);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(5,0.4436479);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(6,0.2139197);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(7,0.09288765);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(8,0.04769891);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(9,0.02005571);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(10,0.005706878);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(11,0.002285686);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(12,0.0003961915);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(13,0.0005044512);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(1,0.004027966);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(2,0.0110358);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(3,0.01766137);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(4,0.017125);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(5,0.01207624);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(6,0.008295739);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(7,0.006062969);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(8,0.003999126);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(9,0.002564011);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(10,0.001338633);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(11,0.0008303022);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(12,0.0003961915);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(13,0.0003569464);
   VbbHcc_algo_H_pt_all_stack_2->SetEntries(10346);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_1","ZHcc","F");

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
   H_pt_algo_all->Modified();
   H_pt_algo_all->cd();
   H_pt_algo_all->SetSelected(H_pt_algo_all);
}
