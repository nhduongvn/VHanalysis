#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_algo_18()
{
//=========Macro generated from canvas: H_pt_algo_18/H_pt_algo_18
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *H_pt_algo_18 = new TCanvas("H_pt_algo_18", "H_pt_algo_18",0,0,600,600);
   H_pt_algo_18->SetHighLightColor(2);
   H_pt_algo_18->Range(37.97653,-0.3426214,1705.96,2.512557);
   H_pt_algo_18->SetFillColor(0);
   H_pt_algo_18->SetFillStyle(4000);
   H_pt_algo_18->SetBorderMode(0);
   H_pt_algo_18->SetBorderSize(2);
   H_pt_algo_18->SetLeftMargin(0.15709);
   H_pt_algo_18->SetRightMargin(0.1234783);
   H_pt_algo_18->SetBottomMargin(0.12);
   H_pt_algo_18->SetFrameFillStyle(1000);
   H_pt_algo_18->SetFrameBorderMode(0);
   H_pt_algo_18->SetFrameFillStyle(1000);
   H_pt_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.227039);
   
   TH1F *st_stack_79 = new TH1F("st_stack_79","",40,0,2000);
   st_stack_79->SetMinimum(0);
   st_stack_79->SetMaximum(2.227039);
   st_stack_79->SetDirectory(0);
   st_stack_79->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_79->SetLineColor(ci);
   st_stack_79->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_79->GetXaxis()->SetRange(7,30);
   st_stack_79->GetXaxis()->SetLabelFont(42);
   st_stack_79->GetXaxis()->SetTitleOffset(1);
   st_stack_79->GetXaxis()->SetTitleFont(42);
   st_stack_79->GetYaxis()->SetTitle("Events/50.0");
   st_stack_79->GetYaxis()->SetLabelFont(42);
   st_stack_79->GetYaxis()->SetTitleSize(0.037);
   st_stack_79->GetYaxis()->SetTitleFont(42);
   st_stack_79->GetZaxis()->SetLabelFont(42);
   st_stack_79->GetZaxis()->SetTitleOffset(1);
   st_stack_79->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_79);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,0.2221744);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,1.338677);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,1.484693);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,0.9078045);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(5,0.5101456);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(6,0.3185498);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(7,0.1589632);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(8,0.1347852);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(9,0.03910372);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(10,0.01095994);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(11,0.01278842);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(12,0.007651353);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(13,0.002397148);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(14,0.002958322);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(16,0.01223407);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(18,0.002840873);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,0.02493647);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,0.06174331);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,0.06558685);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,0.05000345);
   VbbHcc_algo_H_pt_stack_1->SetBinError(5,0.05438915);
   VbbHcc_algo_H_pt_stack_1->SetBinError(6,0.0305699);
   VbbHcc_algo_H_pt_stack_1->SetBinError(7,0.02041972);
   VbbHcc_algo_H_pt_stack_1->SetBinError(8,0.01906781);
   VbbHcc_algo_H_pt_stack_1->SetBinError(9,0.01064338);
   VbbHcc_algo_H_pt_stack_1->SetBinError(10,0.005527779);
   VbbHcc_algo_H_pt_stack_1->SetBinError(11,0.005815471);
   VbbHcc_algo_H_pt_stack_1->SetBinError(12,0.004417986);
   VbbHcc_algo_H_pt_stack_1->SetBinError(13,0.002397148);
   VbbHcc_algo_H_pt_stack_1->SetBinError(14,0.002958322);
   VbbHcc_algo_H_pt_stack_1->SetBinError(16,0.007595962);
   VbbHcc_algo_H_pt_stack_1->SetBinError(18,0.002840873);
   VbbHcc_algo_H_pt_stack_1->SetEntries(2101);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_2 = new TH1D("VbbHcc_algo_H_pt_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,0.02437466);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,0.1746762);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,0.443797);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,0.4028683);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,0.1992082);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,0.1015674);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,0.04676945);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,0.0247654);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,0.008298342);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,0.002960529);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,0.0005680712);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,0.002924719);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,0.007871905);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,0.01254184);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,0.01259403);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,0.008584717);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,0.006008502);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,0.004809792);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,0.003110007);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,0.001733321);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,0.0009964562);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,0.00040943);
   VbbHcc_algo_H_pt_stack_2->SetEntries(4230);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_1","ZHcc","F");

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
   H_pt_algo_18->Modified();
   H_pt_algo_18->cd();
   H_pt_algo_18->SetSelected(H_pt_algo_18);
}
