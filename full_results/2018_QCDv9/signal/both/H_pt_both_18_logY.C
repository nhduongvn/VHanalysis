#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_18_logY()
{
//=========Macro generated from canvas: H_pt_both_18/H_pt_both_18
//=========  (Tue Feb 14 10:43:08 2023) by ROOT version 6.26/06
   TCanvas *H_pt_both_18 = new TCanvas("H_pt_both_18", "H_pt_both_18",0,0,600,600);
   H_pt_both_18->SetHighLightColor(2);
   H_pt_both_18->Range(37.97653,0.3483525,1705.96,3.351744);
   H_pt_both_18->SetFillColor(0);
   H_pt_both_18->SetFillStyle(4000);
   H_pt_both_18->SetBorderMode(0);
   H_pt_both_18->SetBorderSize(2);
   H_pt_both_18->SetLogy();
   H_pt_both_18->SetLeftMargin(0.15709);
   H_pt_both_18->SetRightMargin(0.1234783);
   H_pt_both_18->SetBottomMargin(0.12);
   H_pt_both_18->SetFrameFillStyle(1000);
   H_pt_both_18->SetFrameBorderMode(0);
   H_pt_both_18->SetFrameFillStyle(1000);
   H_pt_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(814.4117);
   
   TH1F *st_stack_143 = new TH1F("st_stack_143","",40,0,2000);
   st_stack_143->SetMinimum(5.113986);
   st_stack_143->SetMaximum(1125.654);
   st_stack_143->SetDirectory(0);
   st_stack_143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_143->SetLineColor(ci);
   st_stack_143->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_143->GetXaxis()->SetRange(7,30);
   st_stack_143->GetXaxis()->SetLabelFont(42);
   st_stack_143->GetXaxis()->SetTitleOffset(1);
   st_stack_143->GetXaxis()->SetTitleFont(42);
   st_stack_143->GetYaxis()->SetTitle("Events/50.0");
   st_stack_143->GetYaxis()->SetLabelFont(42);
   st_stack_143->GetYaxis()->SetTitleSize(0.037);
   st_stack_143->GetYaxis()->SetTitleFont(42);
   st_stack_143->GetZaxis()->SetLabelFont(42);
   st_stack_143->GetZaxis()->SetTitleOffset(1);
   st_stack_143->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_143);
   
   
   TH1D *VbbHcc_both_H_pt_stack_1 = new TH1D("VbbHcc_both_H_pt_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_stack_1->SetBinContent(1,4.466545);
   VbbHcc_both_H_pt_stack_1->SetBinContent(2,8.144117);
   VbbHcc_both_H_pt_stack_1->SetBinContent(3,5.157646);
   VbbHcc_both_H_pt_stack_1->SetBinContent(4,2.556477);
   VbbHcc_both_H_pt_stack_1->SetBinContent(5,1.461522);
   VbbHcc_both_H_pt_stack_1->SetBinContent(6,0.8397763);
   VbbHcc_both_H_pt_stack_1->SetBinContent(7,0.4361797);
   VbbHcc_both_H_pt_stack_1->SetBinContent(8,0.2612139);
   VbbHcc_both_H_pt_stack_1->SetBinContent(9,0.1102901);
   VbbHcc_both_H_pt_stack_1->SetBinContent(10,0.05541909);
   VbbHcc_both_H_pt_stack_1->SetBinContent(11,0.03099753);
   VbbHcc_both_H_pt_stack_1->SetBinContent(12,0.02565827);
   VbbHcc_both_H_pt_stack_1->SetBinContent(13,0.0107084);
   VbbHcc_both_H_pt_stack_1->SetBinContent(14,0.008730283);
   VbbHcc_both_H_pt_stack_1->SetBinContent(15,0.002434505);
   VbbHcc_both_H_pt_stack_1->SetBinContent(16,0.008900683);
   VbbHcc_both_H_pt_stack_1->SetBinError(1,0.1132206);
   VbbHcc_both_H_pt_stack_1->SetBinError(2,0.1554642);
   VbbHcc_both_H_pt_stack_1->SetBinError(3,0.1199093);
   VbbHcc_both_H_pt_stack_1->SetBinError(4,0.08482912);
   VbbHcc_both_H_pt_stack_1->SetBinError(5,0.07892111);
   VbbHcc_both_H_pt_stack_1->SetBinError(6,0.05224498);
   VbbHcc_both_H_pt_stack_1->SetBinError(7,0.03421627);
   VbbHcc_both_H_pt_stack_1->SetBinError(8,0.02643879);
   VbbHcc_both_H_pt_stack_1->SetBinError(9,0.01745744);
   VbbHcc_both_H_pt_stack_1->SetBinError(10,0.01225251);
   VbbHcc_both_H_pt_stack_1->SetBinError(11,0.008962849);
   VbbHcc_both_H_pt_stack_1->SetBinError(12,0.008129024);
   VbbHcc_both_H_pt_stack_1->SetBinError(13,0.005403356);
   VbbHcc_both_H_pt_stack_1->SetBinError(14,0.005070384);
   VbbHcc_both_H_pt_stack_1->SetBinError(15,0.002434505);
   VbbHcc_both_H_pt_stack_1->SetBinError(16,0.006825481);
   VbbHcc_both_H_pt_stack_1->SetEntries(9410);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_1,"");
   
   TH1D *VbbHcc_both_H_pt_stack_2 = new TH1D("VbbHcc_both_H_pt_stack_2","",40,0,2000);
   VbbHcc_both_H_pt_stack_2->SetBinContent(1,0.7992964);
   VbbHcc_both_H_pt_stack_2->SetBinContent(2,1.862726);
   VbbHcc_both_H_pt_stack_2->SetBinContent(3,1.974043);
   VbbHcc_both_H_pt_stack_2->SetBinContent(4,1.366711);
   VbbHcc_both_H_pt_stack_2->SetBinContent(5,0.7173151);
   VbbHcc_both_H_pt_stack_2->SetBinContent(6,0.3801114);
   VbbHcc_both_H_pt_stack_2->SetBinContent(7,0.1784766);
   VbbHcc_both_H_pt_stack_2->SetBinContent(8,0.101804);
   VbbHcc_both_H_pt_stack_2->SetBinContent(9,0.04330166);
   VbbHcc_both_H_pt_stack_2->SetBinContent(10,0.0199137);
   VbbHcc_both_H_pt_stack_2->SetBinContent(11,0.00754319);
   VbbHcc_both_H_pt_stack_2->SetBinContent(12,0.00761513);
   VbbHcc_both_H_pt_stack_2->SetBinContent(13,0.002120918);
   VbbHcc_both_H_pt_stack_2->SetBinContent(14,0.001964261);
   VbbHcc_both_H_pt_stack_2->SetBinContent(16,0.0002658739);
   VbbHcc_both_H_pt_stack_2->SetBinContent(17,0.0003895316);
   VbbHcc_both_H_pt_stack_2->SetBinContent(20,0.0004374943);
   VbbHcc_both_H_pt_stack_2->SetBinError(1,0.01819452);
   VbbHcc_both_H_pt_stack_2->SetBinError(2,0.02929854);
   VbbHcc_both_H_pt_stack_2->SetBinError(3,0.02995649);
   VbbHcc_both_H_pt_stack_2->SetBinError(4,0.02338768);
   VbbHcc_both_H_pt_stack_2->SetBinError(5,0.01649506);
   VbbHcc_both_H_pt_stack_2->SetBinError(6,0.01197797);
   VbbHcc_both_H_pt_stack_2->SetBinError(7,0.00850595);
   VbbHcc_both_H_pt_stack_2->SetBinError(8,0.006038879);
   VbbHcc_both_H_pt_stack_2->SetBinError(9,0.00395424);
   VbbHcc_both_H_pt_stack_2->SetBinError(10,0.002670012);
   VbbHcc_both_H_pt_stack_2->SetBinError(11,0.001560569);
   VbbHcc_both_H_pt_stack_2->SetBinError(12,0.001609806);
   VbbHcc_both_H_pt_stack_2->SetBinError(13,0.0008732208);
   VbbHcc_both_H_pt_stack_2->SetBinError(14,0.0008313219);
   VbbHcc_both_H_pt_stack_2->SetBinError(16,0.0002658739);
   VbbHcc_both_H_pt_stack_2->SetBinError(17,0.0003895316);
   VbbHcc_both_H_pt_stack_2->SetBinError(20,0.0004374943);
   VbbHcc_both_H_pt_stack_2->SetEntries(21941);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_pt_stack_1","ZHcc","F");

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
   H_pt_both_18->Modified();
   H_pt_both_18->cd();
   H_pt_both_18->SetSelected(H_pt_both_18);
}
