#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_bckg_18_logY()
{
//=========Macro generated from canvas: CvB_jets_all_bckg_18/CvB_jets_all_bckg_18
//=========  (Thu Mar  9 13:30:14 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_bckg_18 = new TCanvas("CvB_jets_all_bckg_18", "CvB_jets_all_bckg_18",0,0,600,600);
   CvB_jets_all_bckg_18->SetHighLightColor(2);
   CvB_jets_all_bckg_18->Range(-0.2183529,-1.762132,1.171633,14.40533);
   CvB_jets_all_bckg_18->SetFillColor(0);
   CvB_jets_all_bckg_18->SetFillStyle(4000);
   CvB_jets_all_bckg_18->SetBorderMode(0);
   CvB_jets_all_bckg_18->SetBorderSize(2);
   CvB_jets_all_bckg_18->SetLogy();
   CvB_jets_all_bckg_18->SetLeftMargin(0.15709);
   CvB_jets_all_bckg_18->SetRightMargin(0.1234783);
   CvB_jets_all_bckg_18->SetBottomMargin(0.12);
   CvB_jets_all_bckg_18->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_18->SetFrameBorderMode(0);
   CvB_jets_all_bckg_18->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.888005e+12);
   
   TH1F *st_stack_180 = new TH1F("st_stack_180","",20,0,1);
   st_stack_180->SetMinimum(1.506478);
   st_stack_180->SetMaximum(6.145834e+12);
   st_stack_180->SetDirectory(0);
   st_stack_180->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_180->SetLineColor(ci);
   st_stack_180->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_180->GetXaxis()->SetRange(1,20);
   st_stack_180->GetXaxis()->SetLabelFont(42);
   st_stack_180->GetXaxis()->SetTitleOffset(1);
   st_stack_180->GetXaxis()->SetTitleFont(42);
   st_stack_180->GetYaxis()->SetTitle("Event/0.05");
   st_stack_180->GetYaxis()->SetLabelFont(42);
   st_stack_180->GetYaxis()->SetTitleSize(0.037);
   st_stack_180->GetYaxis()->SetTitleFont(42);
   st_stack_180->GetZaxis()->SetLabelFont(42);
   st_stack_180->GetZaxis()->SetTitleOffset(1);
   st_stack_180->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_180);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,5.406007e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,1.635065e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,1.553639e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,1.904389e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,2.629179e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,3.86996e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,5.719661e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,8.398518e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,1.299068e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,2.292405e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,4.53859e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,1.474106e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,1.566998e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,1.022025e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,8.965384e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,9.716985e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,1.173983e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,1.211706e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,5.55583e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,3.249834e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,3.843116e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,2.091883e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,2.010359e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,2.218611e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,2.613425e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,3.146066e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,3.828973e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,4.635307e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,5.745393e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,7.561364e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,1.06123e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,1.898167e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,1.959107e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,1.612702e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,1.55499e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,1.631496e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,1.80262e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,1.818692e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,1.231665e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,2.876321e+07);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(1.875775e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvB_stack_2 = new TH1D("VbbHcc_jets_all_CvB_stack_2","",20,0,1);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,4.156816e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,7160957);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,4989463);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,4708687);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,4767528);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,4794202);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,5204004);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,6166223);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,8020826);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,1.069582e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,1.66147e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,4.231593e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,4.633056e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,3.482479e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,3.378639e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,3.68735e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,4.385158e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,4.732561e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,3.581142e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,5135497);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,1807.562);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,746.8154);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,621.9781);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,602.7252);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,602.6014);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,603.0676);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,626.5622);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,678.8124);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,766.8589);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,879.659);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,1088.729);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,1708.697);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,1792.626);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,1590.713);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,1606.031);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,1705.774);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,1874.259);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,1979.559);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,1755.423);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,666.7452);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(7.277891e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_all_bckg_18->Modified();
   CvB_jets_all_bckg_18->cd();
   CvB_jets_all_bckg_18->SetSelected(CvB_jets_all_bckg_18);
}
