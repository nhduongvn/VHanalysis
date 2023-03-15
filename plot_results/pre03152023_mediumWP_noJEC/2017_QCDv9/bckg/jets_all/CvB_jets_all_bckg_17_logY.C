#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_bckg_17_logY()
{
//=========Macro generated from canvas: CvB_jets_all_bckg_17/CvB_jets_all_bckg_17
//=========  (Thu Mar  9 13:30:14 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_bckg_17 = new TCanvas("CvB_jets_all_bckg_17", "CvB_jets_all_bckg_17",0,0,600,600);
   CvB_jets_all_bckg_17->SetHighLightColor(2);
   CvB_jets_all_bckg_17->Range(-0.2183529,-1.740488,1.171633,14.27685);
   CvB_jets_all_bckg_17->SetFillColor(0);
   CvB_jets_all_bckg_17->SetFillStyle(4000);
   CvB_jets_all_bckg_17->SetBorderMode(0);
   CvB_jets_all_bckg_17->SetBorderSize(2);
   CvB_jets_all_bckg_17->SetLogy();
   CvB_jets_all_bckg_17->SetLeftMargin(0.15709);
   CvB_jets_all_bckg_17->SetRightMargin(0.1234783);
   CvB_jets_all_bckg_17->SetBottomMargin(0.12);
   CvB_jets_all_bckg_17->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_17->SetFrameBorderMode(0);
   CvB_jets_all_bckg_17->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.46386e+12);
   
   TH1F *st_stack_178 = new TH1F("st_stack_178","",20,0,1);
   st_stack_178->SetMinimum(1.519122);
   st_stack_178->SetMaximum(4.732806e+12);
   st_stack_178->SetDirectory(0);
   st_stack_178->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_178->SetLineColor(ci);
   st_stack_178->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_178->GetXaxis()->SetRange(1,20);
   st_stack_178->GetXaxis()->SetLabelFont(42);
   st_stack_178->GetXaxis()->SetTitleOffset(1);
   st_stack_178->GetXaxis()->SetTitleFont(42);
   st_stack_178->GetYaxis()->SetTitle("Event/0.05");
   st_stack_178->GetYaxis()->SetLabelFont(42);
   st_stack_178->GetYaxis()->SetTitleSize(0.037);
   st_stack_178->GetYaxis()->SetTitleFont(42);
   st_stack_178->GetZaxis()->SetLabelFont(42);
   st_stack_178->GetZaxis()->SetTitleOffset(1);
   st_stack_178->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_178);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,3.737849e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,1.171834e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,1.128084e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,1.388439e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,1.935527e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,2.878399e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,4.263585e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,6.222735e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,9.693777e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,1.7519e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,3.571186e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,1.153923e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,1.214969e+12);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,7.65363e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,6.420282e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,6.824757e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,8.113486e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,8.286592e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,3.699441e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,2.120368e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,2.384143e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,1.350371e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,1.329305e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,1.478611e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,1.749812e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,2.138242e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,2.605846e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,3.150405e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,3.933903e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,5.291278e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,7.560232e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,1.360887e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,1.396074e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,1.107007e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,1.011777e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,1.040693e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,1.131819e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,1.131605e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,7.487676e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,1.709702e+07);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(1.921894e+09);

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
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,2.832656e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,4917960);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,3436025);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,3248442);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,3304252);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,3347875);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,3649958);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,4314019);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,5641129);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,7704058);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,1.233781e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,3.17681e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,3.435719e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,2.479437e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,2.326469e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,2.505863e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,2.946308e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,3.147091e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,2.343766e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,3331726);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,1369.867);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,570.7881);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,476.7561);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,462.3182);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,465.5964);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,469.0719);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,489.9852);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,530.5623);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,603.72);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,709.2585);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,899.8231);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,1443.607);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,1502.668);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,1278.089);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,1242.832);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,1302.733);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,1417.488);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,1482.802);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,1296.206);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,489.5609);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(5.212325e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_all_bckg_17->Modified();
   CvB_jets_all_bckg_17->cd();
   CvB_jets_all_bckg_17->SetSelected(CvB_jets_all_bckg_17);
}
