#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_algo_all_logY()
{
//=========Macro generated from canvas: CutFlow_algo_all/CutFlow_algo_all
//=========  (Thu Dec 15 14:28:57 2022) by ROOT version 6.26/06
   TCanvas *CutFlow_algo_all = new TCanvas("CutFlow_algo_all", "CutFlow_algo_all",0,0,600,600);
   CutFlow_algo_all->SetHighLightColor(2);
   CutFlow_algo_all->Range(-1.310117,-0.3127623,7.029799,6.391883);
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
   st->SetMinimum(10);
   st->SetMaximum(278726.3);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",5,0,5);
   st_stack_48->SetMinimum(3.103095);
   st_stack_48->SetMaximum(526524);
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
   VbbHcc_algo_CutFlow_all_stack_1->SetBinContent(1,2447.253);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinContent(2,2444.728);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinContent(3,855.7293);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinContent(4,39.59674);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinContent(5,7.211605);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinError(1,2.204878);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinError(2,2.20377);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinError(3,1.281492);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinError(4,0.2773517);
   VbbHcc_algo_CutFlow_all_stack_1->SetBinError(5,0.1190809);
   VbbHcc_algo_CutFlow_all_stack_1->SetEntries(3428428);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_algo_CutFlow_all_stack_2->SetBinContent(1,340.0105);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinContent(2,339.0681);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinContent(3,221.9233);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinContent(4,10.81819);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinContent(5,1.911924);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinError(1,0.2995158);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinError(2,0.2990875);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinError(3,0.241895);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinError(4,0.05352335);
   VbbHcc_algo_CutFlow_all_stack_2->SetBinError(5,0.02260904);
   VbbHcc_algo_CutFlow_all_stack_2->SetEntries(3738387);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_CutFlow_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_all_stack_1","ZHcc","F");

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
