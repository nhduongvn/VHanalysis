#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_16/Z_dR_Bj0_algo_16
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_16 = new TCanvas("Z_dR_Bj0_algo_16", "Z_dR_Bj0_algo_16",0,0,600,600);
   Z_dR_Bj0_algo_16->SetHighLightColor(2);
   Z_dR_Bj0_algo_16->Range(-1.310117,-0.03228031,7.029799,0.2367223);
   Z_dR_Bj0_algo_16->SetFillColor(0);
   Z_dR_Bj0_algo_16->SetFillStyle(4000);
   Z_dR_Bj0_algo_16->SetBorderMode(0);
   Z_dR_Bj0_algo_16->SetBorderSize(2);
   Z_dR_Bj0_algo_16->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_16->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_16->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.209822);
   
   TH1F *st_stack_145 = new TH1F("st_stack_145","",30,0,6);
   st_stack_145->SetMinimum(0);
   st_stack_145->SetMaximum(0.209822);
   st_stack_145->SetDirectory(0);
   st_stack_145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_145->SetLineColor(ci);
   st_stack_145->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_145->GetXaxis()->SetRange(1,30);
   st_stack_145->GetXaxis()->SetLabelFont(42);
   st_stack_145->GetXaxis()->SetTitleOffset(1);
   st_stack_145->GetXaxis()->SetTitleFont(42);
   st_stack_145->GetYaxis()->SetTitle("Event/0.2");
   st_stack_145->GetYaxis()->SetLabelFont(42);
   st_stack_145->GetYaxis()->SetTitleSize(0.037);
   st_stack_145->GetYaxis()->SetTitleFont(42);
   st_stack_145->GetZaxis()->SetLabelFont(42);
   st_stack_145->GetZaxis()->SetTitleOffset(1);
   st_stack_145->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_145);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,0.0382901);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,0.1312804);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,0.09025525);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,0.05743516);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,0.008205022);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,0.005470015);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,0.008205022);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,0.01023346);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,0.01894869);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,0.01571142);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,0.01253338);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,0.004737172);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,0.003867885);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,0.004737172);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(124);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);
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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,0.007859849);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,0.0428719);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,0.03572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,0.01429063);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,0.003929924);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,0.001429063);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,0.002143595);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,0.002143595);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,0.001071798);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,0.001675725);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,0.003913651);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,0.003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,0.002259548);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,0.001184917);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,0.0007145317);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,0.000875119);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,0.000875119);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,0.0006188026);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.0003572658);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(317);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_16->Modified();
   Z_dR_Bj0_algo_16->cd();
   Z_dR_Bj0_algo_16->SetSelected(Z_dR_Bj0_algo_16);
}
