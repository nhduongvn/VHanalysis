#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_17_logY()
{
//=========Macro generated from canvas: H_pt_tags_17/H_pt_tags_17
//=========  (Tue Feb 14 16:07:55 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_17 = new TCanvas("H_pt_tags_17", "H_pt_tags_17",0,0,600,600);
   H_pt_tags_17->SetHighLightColor(2);
   H_pt_tags_17->Range(37.97653,0.3912482,1705.96,3.174683);
   H_pt_tags_17->SetFillColor(0);
   H_pt_tags_17->SetFillStyle(4000);
   H_pt_tags_17->SetBorderMode(0);
   H_pt_tags_17->SetBorderSize(2);
   H_pt_tags_17->SetLogy();
   H_pt_tags_17->SetLeftMargin(0.15709);
   H_pt_tags_17->SetRightMargin(0.1234783);
   H_pt_tags_17->SetBottomMargin(0.12);
   H_pt_tags_17->SetFrameFillStyle(1000);
   H_pt_tags_17->SetFrameBorderMode(0);
   H_pt_tags_17->SetFrameFillStyle(1000);
   H_pt_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(582.1563);
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",40,0,2000);
   st_stack_14->SetMinimum(5.312029);
   st_stack_14->SetMaximum(787.6621);
   st_stack_14->SetDirectory(0);
   st_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_14->SetLineColor(ci);
   st_stack_14->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_14->GetXaxis()->SetRange(7,30);
   st_stack_14->GetXaxis()->SetLabelFont(42);
   st_stack_14->GetXaxis()->SetTitleOffset(1);
   st_stack_14->GetXaxis()->SetTitleFont(42);
   st_stack_14->GetYaxis()->SetTitle("Events/50.0");
   st_stack_14->GetYaxis()->SetLabelFont(42);
   st_stack_14->GetYaxis()->SetTitleSize(0.037);
   st_stack_14->GetYaxis()->SetTitleFont(42);
   st_stack_14->GetZaxis()->SetLabelFont(42);
   st_stack_14->GetZaxis()->SetTitleOffset(1);
   st_stack_14->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_14);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,3.264312);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,5.821563);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,3.798609);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,1.955353);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,1.035858);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,0.5246066);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,0.2864291);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,0.162993);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,0.08931507);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,0.04904842);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,0.0266588);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,0.005809608);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(13,0.01297137);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(14,0.01285419);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(16,0.007733411);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(18,0.002873518);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(19,0.001842579);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(20,0.001227937);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(24,0.002001313);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,0.07883259);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,0.1055198);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,0.08451785);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,0.06056631);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,0.04407459);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,0.03164464);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,0.02293492);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,0.01776363);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,0.01300774);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,0.0093035);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,0.00773537);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,0.003406225);
   VbbHcc_tags_H_pt_stack_1->SetBinError(13,0.00493528);
   VbbHcc_tags_H_pt_stack_1->SetBinError(14,0.004904285);
   VbbHcc_tags_H_pt_stack_1->SetBinError(16,0.003920963);
   VbbHcc_tags_H_pt_stack_1->SetBinError(18,0.002082033);
   VbbHcc_tags_H_pt_stack_1->SetBinError(19,0.001842579);
   VbbHcc_tags_H_pt_stack_1->SetBinError(20,0.001227937);
   VbbHcc_tags_H_pt_stack_1->SetBinError(24,0.002001313);
   VbbHcc_tags_H_pt_stack_1->SetEntries(9885);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_2 = new TH1D("VbbHcc_tags_H_pt_stack_2","",40,0,2000);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,0.5820837);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,1.371879);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,1.450355);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,0.9363873);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,0.4975702);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,0.2494695);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,0.1228011);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,0.05515219);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,0.03642573);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,0.01716011);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,0.005287186);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,0.003808734);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,0.0007658153);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(14,0.001072737);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(16,0.0001728116);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(17,0.0002598782);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(19,0.0002398048);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(24,0.0002536154);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,0.01184455);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,0.01819775);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,0.01874492);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,0.01501189);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,0.01094789);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,0.007713232);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,0.005388019);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,0.003617768);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,0.002947429);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,0.002073583);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,0.001101769);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,0.0009407173);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,0.0004488803);
   VbbHcc_tags_H_pt_stack_2->SetBinError(14,0.0004855936);
   VbbHcc_tags_H_pt_stack_2->SetBinError(16,0.0001728116);
   VbbHcc_tags_H_pt_stack_2->SetBinError(17,0.0002598782);
   VbbHcc_tags_H_pt_stack_2->SetBinError(19,0.0002398048);
   VbbHcc_tags_H_pt_stack_2->SetBinError(24,0.0002536154);
   VbbHcc_tags_H_pt_stack_2->SetEntries(23096);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_17->Modified();
   H_pt_tags_17->cd();
   H_pt_tags_17->SetSelected(H_pt_tags_17);
}
