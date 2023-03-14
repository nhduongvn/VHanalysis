#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_bckg_17()
{
//=========Macro generated from canvas: CvL_jets_all_bckg_17/CvL_jets_all_bckg_17
//=========  (Fri Mar 10 12:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_bckg_17 = new TCanvas("CvL_jets_all_bckg_17", "CvL_jets_all_bckg_17",0,0,600,600);
   CvL_jets_all_bckg_17->SetHighLightColor(2);
   CvL_jets_all_bckg_17->Range(-0.2183529,-8.413466e+11,1.171633,6.169875e+12);
   CvL_jets_all_bckg_17->SetFillColor(0);
   CvL_jets_all_bckg_17->SetFillStyle(4000);
   CvL_jets_all_bckg_17->SetBorderMode(0);
   CvL_jets_all_bckg_17->SetBorderSize(2);
   CvL_jets_all_bckg_17->SetLeftMargin(0.15709);
   CvL_jets_all_bckg_17->SetRightMargin(0.1234783);
   CvL_jets_all_bckg_17->SetBottomMargin(0.12);
   CvL_jets_all_bckg_17->SetFrameFillStyle(1000);
   CvL_jets_all_bckg_17->SetFrameBorderMode(0);
   CvL_jets_all_bckg_17->SetFrameFillStyle(1000);
   CvL_jets_all_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.468753e+12);
   
   TH1F *st_stack_172 = new TH1F("st_stack_172","",20,0,1);
   st_stack_172->SetMinimum(0);
   st_stack_172->SetMaximum(5.468753e+12);
   st_stack_172->SetDirectory(0);
   st_stack_172->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_172->SetLineColor(ci);
   st_stack_172->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_172->GetXaxis()->SetRange(1,20);
   st_stack_172->GetXaxis()->SetLabelFont(42);
   st_stack_172->GetXaxis()->SetTitleOffset(1);
   st_stack_172->GetXaxis()->SetTitleFont(42);
   st_stack_172->GetYaxis()->SetTitle("Event/0.05");
   st_stack_172->GetYaxis()->SetLabelFont(42);
   st_stack_172->GetYaxis()->SetTitleSize(0.037);
   st_stack_172->GetYaxis()->SetTitleFont(42);
   st_stack_172->GetZaxis()->SetLabelFont(42);
   st_stack_172->GetZaxis()->SetTitleOffset(1);
   st_stack_172->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_172);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,1.005156e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,4.53893e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,1.084159e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,2.637051e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,1.176557e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,6.879526e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,4.305217e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,2.970144e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,2.293329e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,1.847559e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,1.504708e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,1.255661e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,1.105502e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,1.012395e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,9.797761e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,9.98408e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,1.062667e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,1.276682e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,1.702834e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,4.492752e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,1.245654e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,2.686459e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.310589e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,6.444195e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,4.299034e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,3.285325e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,2.596636e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,2.15525e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,1.893936e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,1.698975e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,1.531456e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,1.397761e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,1.30991e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,1.252646e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,1.230393e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,1.240242e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,1.27694e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,1.398933e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,1.614133e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,2.62041e+07);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(1.90024e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CvL_stack_1->SetFillColor(ci);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvL_stack_2 = new TH1D("VbbHcc_jets_all_CvL_stack_2","",20,0,1);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,4.133632e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,1.34756e+08);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,3.790772e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,1.222759e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,6768808);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,4696749);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,3559568);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,2927667);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,2638643);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,2508840);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,2460724);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,2472930);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,2624210);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,2868627);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,3272786);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,3901988);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,4789149);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,6357723);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,8963893);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,2.013444e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,1645.006);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,2994.251);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,1591.249);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,906.8499);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,673.1572);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,560.8737);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,488.3825);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,442.6554);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,419.9359);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,409.2016);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,404.9543);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,405.6552);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,417.4861);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,436.2235);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,465.6739);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,508.2034);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,562.67);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,647.9942);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,769.3768);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,1157.675);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(5.265984e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CvL_stack_2->SetFillColor(ci);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_all_bckg_17->Modified();
   CvL_jets_all_bckg_17->cd();
   CvL_jets_all_bckg_17->SetSelected(CvL_jets_all_bckg_17);
}
