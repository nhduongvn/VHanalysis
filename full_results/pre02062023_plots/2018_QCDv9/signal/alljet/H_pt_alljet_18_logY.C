#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_alljet_18_logY()
{
//=========Macro generated from canvas: H_pt_alljet_18/H_pt_alljet_18
//=========  (Wed Jan 18 11:42:16 2023) by ROOT version 6.26/06
   TCanvas *H_pt_alljet_18 = new TCanvas("H_pt_alljet_18", "H_pt_alljet_18",0,0,600,600);
   H_pt_alljet_18->SetHighLightColor(2);
   H_pt_alljet_18->Range(37.97653,-0.1293561,1705.96,5.495908);
   H_pt_alljet_18->SetFillColor(0);
   H_pt_alljet_18->SetFillStyle(4000);
   H_pt_alljet_18->SetBorderMode(0);
   H_pt_alljet_18->SetBorderSize(2);
   H_pt_alljet_18->SetLogy();
   H_pt_alljet_18->SetLeftMargin(0.15709);
   H_pt_alljet_18->SetRightMargin(0.1234783);
   H_pt_alljet_18->SetBottomMargin(0.12);
   H_pt_alljet_18->SetFrameFillStyle(1000);
   H_pt_alljet_18->SetFrameBorderMode(0);
   H_pt_alljet_18->SetFrameFillStyle(1000);
   H_pt_alljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(49337.04);
   
   TH1F *st_stack_207 = new TH1F("st_stack_207","",40,0,2000);
   st_stack_207->SetMinimum(3.512979);
   st_stack_207->SetMaximum(85779.08);
   st_stack_207->SetDirectory(0);
   st_stack_207->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_207->SetLineColor(ci);
   st_stack_207->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_207->GetXaxis()->SetRange(7,30);
   st_stack_207->GetXaxis()->SetLabelFont(42);
   st_stack_207->GetXaxis()->SetTitleOffset(1);
   st_stack_207->GetXaxis()->SetTitleFont(42);
   st_stack_207->GetYaxis()->SetTitle("Events/50.0");
   st_stack_207->GetYaxis()->SetLabelFont(42);
   st_stack_207->GetYaxis()->SetTitleSize(0.037);
   st_stack_207->GetYaxis()->SetTitleFont(42);
   st_stack_207->GetZaxis()->SetLabelFont(42);
   st_stack_207->GetZaxis()->SetTitleOffset(1);
   st_stack_207->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_207);
   
   
   TH1D *VbbHcc_alljet_H_pt_stack_1 = new TH1D("VbbHcc_alljet_H_pt_stack_1","",40,0,2000);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(1,493.3704);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(2,412.7458);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(3,96.92434);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(4,21.36763);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(5,7.045153);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(6,2.799849);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(7,1.279104);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(8,0.6366592);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(9,0.2646964);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(10,0.13758);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(11,0.06809245);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(12,0.03090636);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(13,0.0229495);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(14,0.008413022);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(15,0.01356996);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(17,0.003517675);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(18,0.002585234);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(19,0.002177811);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(1,1.172439);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(2,1.063458);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(3,0.5072754);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(4,0.2364345);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(5,0.1355449);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(6,0.0855017);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(7,0.0570373);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(8,0.04159194);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(9,0.0264667);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(10,0.01834548);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(11,0.01313204);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(12,0.008359227);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(13,0.007809093);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(14,0.004771981);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(15,0.005610843);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(17,0.002965334);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(18,0.002585234);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(19,0.002177811);
   VbbHcc_alljet_H_pt_stack_1->SetEntries(475576);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_pt_stack_1,"");
   
   TH1D *VbbHcc_alljet_H_pt_stack_2 = new TH1D("VbbHcc_alljet_H_pt_stack_2","",40,0,2000);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(1,44.71115);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(2,57.6522);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(3,25.63617);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(4,10.07372);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(5,4.403542);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(6,1.981954);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(7,1.018862);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(8,0.4855203);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(9,0.2674246);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(10,0.1361846);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(11,0.06929357);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(12,0.04708978);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(13,0.02122807);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(14,0.01933184);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(15,0.01378275);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(16,0.007548276);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(17,0.004190843);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(18,0.001678381);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(19,0.001745722);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(20,0.001225052);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(21,0.0007428099);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(22,0.0004650931);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(25,0.0007672067);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(1,0.1313649);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(2,0.1490657);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(3,0.09940415);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(4,0.06229384);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(5,0.04104083);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(6,0.02767055);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(7,0.02015093);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(8,0.0136677);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(9,0.01034925);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(10,0.007215657);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(11,0.005052054);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(12,0.004460144);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(13,0.002844154);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(14,0.002728455);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(15,0.002219803);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(16,0.001735331);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(17,0.001272207);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(18,0.0007687783);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(19,0.0008808984);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(20,0.0007130653);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(21,0.0005252662);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(22,0.0004650931);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(25,0.0005601449);
   VbbHcc_alljet_H_pt_stack_2->SetEntries(426641);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_H_pt_stack_1","ZHcc","F");

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
   H_pt_alljet_18->Modified();
   H_pt_alljet_18->cd();
   H_pt_alljet_18->SetSelected(H_pt_alljet_18);
}
