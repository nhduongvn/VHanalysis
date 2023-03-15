#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_seljet_18_logY()
{
//=========Macro generated from canvas: Z_pt_seljet_18/Z_pt_seljet_18
//=========  (Thu Feb 16 10:37:21 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_seljet_18 = new TCanvas("Z_pt_seljet_18", "Z_pt_seljet_18",0,0,600,600);
   Z_pt_seljet_18->SetHighLightColor(2);
   Z_pt_seljet_18->Range(37.97653,0.1032246,1705.96,4.414742);
   Z_pt_seljet_18->SetFillColor(0);
   Z_pt_seljet_18->SetFillStyle(4000);
   Z_pt_seljet_18->SetBorderMode(0);
   Z_pt_seljet_18->SetBorderSize(2);
   Z_pt_seljet_18->SetLogy();
   Z_pt_seljet_18->SetLeftMargin(0.15709);
   Z_pt_seljet_18->SetRightMargin(0.1234783);
   Z_pt_seljet_18->SetBottomMargin(0.12);
   Z_pt_seljet_18->SetFrameFillStyle(1000);
   Z_pt_seljet_18->SetFrameBorderMode(0);
   Z_pt_seljet_18->SetFrameFillStyle(1000);
   Z_pt_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(6179.719);
   
   TH1F *st_stack_267 = new TH1F("st_stack_267","",40,0,2000);
   st_stack_267->SetMinimum(4.174521);
   st_stack_267->SetMaximum(9629.199);
   st_stack_267->SetDirectory(0);
   st_stack_267->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_267->SetLineColor(ci);
   st_stack_267->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_267->GetXaxis()->SetRange(7,30);
   st_stack_267->GetXaxis()->SetLabelFont(42);
   st_stack_267->GetXaxis()->SetTitleOffset(1);
   st_stack_267->GetXaxis()->SetTitleFont(42);
   st_stack_267->GetYaxis()->SetTitle("Events/50.0");
   st_stack_267->GetYaxis()->SetLabelFont(42);
   st_stack_267->GetYaxis()->SetTitleSize(0.037);
   st_stack_267->GetYaxis()->SetTitleFont(42);
   st_stack_267->GetZaxis()->SetLabelFont(42);
   st_stack_267->GetZaxis()->SetTitleOffset(1);
   st_stack_267->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_267);
   
   
   TH1D *VbbHcc_seljet_Z_pt_stack_1 = new TH1D("VbbHcc_seljet_Z_pt_stack_1","",40,0,2000);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(1,50.86286);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(2,61.79719);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(3,36.40982);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(4,10.16913);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(5,3.539048);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(6,1.408754);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(7,0.5734964);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(8,0.2927105);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(9,0.1340819);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(10,0.04137159);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(11,0.03682279);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(12,0.02711519);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(13,0.02317015);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(14,0.008906828);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(15,0.003322577);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(16,0.009728655);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(1,0.3869519);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(2,0.4439302);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(3,0.375475);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(4,0.173742);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(5,0.103589);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(6,0.06262801);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(7,0.04374136);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(8,0.02957836);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(9,0.01913408);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(10,0.01133281);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(11,0.009643823);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(12,0.008619547);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(13,0.008005833);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(14,0.005182598);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(15,0.003322577);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(16,0.005620582);
   VbbHcc_seljet_Z_pt_stack_1->SetEntries(65138);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_pt_stack_2 = new TH1D("VbbHcc_seljet_Z_pt_stack_2","",40,0,2000);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(1,17.14816);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(2,21.27233);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(3,15.65915);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(4,6.082737);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(5,2.135138);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(6,0.7497647);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(7,0.2675725);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(8,0.1129998);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(9,0.04432173);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(10,0.01462128);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(11,0.006511426);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(12,0.003252565);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(13,0.001129104);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(14,0.0006897069);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(15,0.0006776297);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(17,0.0003186975);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(18,0.0004199154);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(21,0.0002658739);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(1,0.08238384);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(2,0.09136087);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(3,0.07937247);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(4,0.04778355);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(5,0.02940129);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(6,0.01722637);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(7,0.009739269);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(8,0.006402829);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(9,0.003968173);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(10,0.002269753);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(11,0.001478387);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(12,0.001048826);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(13,0.0006562592);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(14,0.0004894432);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(15,0.0004817431);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(17,0.0003186975);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(18,0.0004199154);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(21,0.0002658739);
   VbbHcc_seljet_Z_pt_stack_2->SetEntries(186422);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_seljet_18->Modified();
   Z_pt_seljet_18->cd();
   Z_pt_seljet_18->SetSelected(Z_pt_seljet_18);
}
