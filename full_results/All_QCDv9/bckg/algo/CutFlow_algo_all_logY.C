#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_algo_all_logY()
{
//=========Macro generated from canvas: CutFlow_algo_all/CutFlow_algo_all
//=========  (Thu Dec 15 14:28:48 2022) by ROOT version 6.26/06
   TCanvas *CutFlow_algo_all = new TCanvas("CutFlow_algo_all", "CutFlow_algo_all",0,0,600,600);
   CutFlow_algo_all->SetHighLightColor(2);
   CutFlow_algo_all->Range(-1.310117,3.352866,7.029799,16.36209);
   CutFlow_algo_all->SetFillColor(0);
   CutFlow_algo_all->SetFillStyle(4000);
   CutFlow_algo_all->SetBorderMode(0);
   CutFlow_algo_all->SetBorderSize(2);
   CutFlow_algo_all->SetLogy();
   CutFlow_algo_all->SetLeftMargin(0.15709);
   CutFlow_algo_all->SetRightMargin(0.1234783);
   CutFlow_algo_all->SetBottomMargin(0.12);
   CutFlow_algo_all->SetFrameFillStyle(1000);
   CutFlow_algo_all->SetFrameBorderMode(0);
   CutFlow_algo_all->SetFrameFillStyle(1000);
   CutFlow_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(449619.6);
   st->SetMaximum(4.122645e+14);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",5,0,5);
   st_stack_48->SetMinimum(82029.93);
   st_stack_48->SetMaximum(1.151235e+15);
   st_stack_48->SetDirectory(0);
   st_stack_48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_48->SetLineColor(ci);
   st_stack_48->GetXaxis()->SetTitle(""Cut flow"");
   st_stack_48->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_48->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_48->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_48->GetXaxis()->SetBinLabel(4,"b-tags");
   st_stack_48->GetXaxis()->SetBinLabel(5,"c-tags");
   st_stack_48->GetXaxis()->SetRange(1,6);
   st_stack_48->GetXaxis()->SetLabelFont(42);
   st_stack_48->GetXaxis()->SetTitleOffset(1);
   st_stack_48->GetXaxis()->SetTitleFont(42);
   st_stack_48->GetYaxis()->SetTitle("Events/1.0");
   st_stack_48->GetYaxis()->SetLabelFont(42);
   st_stack_48->GetYaxis()->SetTitleSize(0.037);
   st_stack_48->GetYaxis()->SetTitleFont(42);
   st_stack_48->GetZaxis()->SetLabelFont(42);
   st_stack_48->GetZaxis()->SetTitleOffset(1);
   st_stack_48->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_48);
   
   
   TH1D *VbbHcc_algo_CutFlow_all_stack_1 = new TH1D("VbbHcc_algo_CutFlow_all_stack_1","",5,0,5);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinContent(1,4.122531e+12);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinContent(2,4.122294e+12);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinContent(3,6.117986e+10);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinContent(4,4.452733e+08);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinContent(5,2.441761e+07);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinError(1,2.671214e+08);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinError(2,2.671152e+08);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinError(3,2.190848e+07);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinError(4,1808499);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinError(5,431120.7);
   VbbHcc_algo_CutFlow_all_stack_1->SetEntries(1.923359e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_CutFlow_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_CutFlow_all_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_all_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_all_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_all_stack_1->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_all_stack_1->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_all_stack_1->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_all_stack_1,"");
   
   TH1D *VbbHcc_algo_CutFlow_all_stack_2 = new TH1D("VbbHcc_algo_CutFlow_all_stack_2","",5,0,5);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinContent(1,1.139995e+08);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinContent(2,1.0823e+08);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinContent(3,6.676557e+07);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinContent(4,4346284);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinContent(5,403719.5);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinError(1,2662.784);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinError(2,2608.799);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinError(3,2123.64);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinError(4,529.8972);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinError(5,162.7087);
   VbbHcc_algo_CutFlow_all_stack_2->SetEntries(4.997178e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_CutFlow_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_CutFlow_all_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_all_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_all_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_all_stack_2->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_all_stack_2->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_all_stack_2->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_CutFlow_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_algo_all->Modified();
   CutFlow_algo_all->cd();
   CutFlow_algo_all->SetSelected(CutFlow_algo_all);
}
