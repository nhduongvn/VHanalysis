#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_16/Z_dR_Bj1_tags_16
//=========  (Mon Mar 27 11:09:49 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_tags_16 = new TCanvas("Z_dR_Bj1_tags_16", "Z_dR_Bj1_tags_16",0,0,600,600);
   Z_dR_Bj1_tags_16->SetHighLightColor(2);
   Z_dR_Bj1_tags_16->Range(-1.310117,-0.109985,7.029799,0.8065567);
   Z_dR_Bj1_tags_16->SetFillColor(0);
   Z_dR_Bj1_tags_16->SetFillStyle(4000);
   Z_dR_Bj1_tags_16->SetBorderMode(0);
   Z_dR_Bj1_tags_16->SetBorderSize(2);
   Z_dR_Bj1_tags_16->SetLeftMargin(0.15709);
   Z_dR_Bj1_tags_16->SetRightMargin(0.1234783);
   Z_dR_Bj1_tags_16->SetBottomMargin(0.12);
   Z_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_16->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.7149025);
   
   TH1F *st_stack_53 = new TH1F("st_stack_53","",30,0,6);
   st_stack_53->SetMinimum(0);
   st_stack_53->SetMaximum(0.7149025);
   st_stack_53->SetDirectory(0);
   st_stack_53->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_53->SetLineColor(ci);
   st_stack_53->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_53->GetXaxis()->SetRange(1,30);
   st_stack_53->GetXaxis()->SetLabelFont(42);
   st_stack_53->GetXaxis()->SetTitleOffset(1);
   st_stack_53->GetXaxis()->SetTitleFont(42);
   st_stack_53->GetYaxis()->SetTitle("Event/0.2");
   st_stack_53->GetYaxis()->SetLabelFont(42);
   st_stack_53->GetYaxis()->SetTitleSize(0.037);
   st_stack_53->GetYaxis()->SetTitleFont(42);
   st_stack_53->GetZaxis()->SetLabelFont(42);
   st_stack_53->GetZaxis()->SetTitleOffset(1);
   st_stack_53->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_53);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,0.08752024);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,0.3336709);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,0.4376012);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,0.2297406);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,0.1422204);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,0.0738452);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,0.06564018);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,0.0382901);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,0.05196514);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,0.04376012);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,0.0355551);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,0.02461507);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,0.02461507);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,0.01914505);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,0.005470015);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,0.01367504);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,0.01094003);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,0.005470015);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,0.005470015);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,0.01547154);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,0.03020914);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,0.03459541);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,0.02506676);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,0.01972242);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,0.01421152);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,0.01339875);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,0.01023346);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,0.01192162);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,0.01094003);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,0.00986121);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,0.008205022);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,0.008205022);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,0.00723615);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,0.003867885);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,0.006115663);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,0.005470015);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,0.003867885);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,0.003867885);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(603);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,0.0450155);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,0.1618414);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,0.1557679);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,0.1032498);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,0.06216426);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,0.03215393);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,0.02250775);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,0.01822056);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,0.01536243);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,0.01286157);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,0.01536243);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,0.01107524);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,0.009646178);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,0.01036071);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,0.006788051);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,0.002143595);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,0.007502583);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,0.002143595);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,0.001429063);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,0.001071798);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(31,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,0.004010299);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,0.007603974);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,0.00745993);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,0.006073519);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,0.00471266);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,0.003389321);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,0.00283571);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,0.002551388);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,0.002342749);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,0.002143595);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,0.002342749);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,0.001989172);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,0.001856408);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,0.001923935);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,0.001557286);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,0.000875119);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,0.001637198);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,0.000875119);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,0.0005052502);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.0005052502);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,0.0006188026);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(31,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(1957);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_tags_16->Modified();
   Z_dR_Bj1_tags_16->cd();
   Z_dR_Bj1_tags_16->SetSelected(Z_dR_Bj1_tags_16);
}
