#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Mon Dec 19 11:11:22 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(-1.310117,-0.2010094,7.029799,1.474069);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetFillStyle(4000);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_17->SetBottomMargin(0.12);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.306561);
   
   TH1F *st_stack_98 = new TH1F("st_stack_98","",30,0,6);
   st_stack_98->SetMinimum(0);
   st_stack_98->SetMaximum(1.306561);
   st_stack_98->SetDirectory(0);
   st_stack_98->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_98->SetLineColor(ci);
   st_stack_98->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_98->GetXaxis()->SetRange(1,30);
   st_stack_98->GetXaxis()->SetLabelFont(42);
   st_stack_98->GetXaxis()->SetTitleOffset(1);
   st_stack_98->GetXaxis()->SetTitleFont(42);
   st_stack_98->GetYaxis()->SetTitle("Events/0.2");
   st_stack_98->GetYaxis()->SetLabelFont(42);
   st_stack_98->GetYaxis()->SetTitleSize(0.037);
   st_stack_98->GetYaxis()->SetTitleFont(42);
   st_stack_98->GetZaxis()->SetLabelFont(42);
   st_stack_98->GetZaxis()->SetTitleOffset(1);
   st_stack_98->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_98);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,0.1650562);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,0.6364185);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,0.6760955);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,0.4745365);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,0.2809129);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,0.1333146);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,0.05872191);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,0.04919944);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,0.02539326);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,0.01904494);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,0.01428371);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,0.006348314);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,0.003174157);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,0.003174157);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,0.001587079);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,0.001587079);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,0.01618509);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,0.03178122);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,0.03275693);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,0.02744315);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,0.02111471);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,0.01454582);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,0.009653822);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,0.008836479);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,0.006348314);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,0.005497801);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,0.004761236);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,0.003174157);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,0.002244468);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,0.002244468);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,0.001587079);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,0.001587079);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(1606);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,0.04614215);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,0.2108409);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,0.194945);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,0.09272584);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,0.04680447);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,0.0192075);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,0.01258422);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,0.006181723);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,0.003532413);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,0.00264931);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,0.001103879);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,0.0008831033);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,0.0006623275);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,0.0004415516);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,0.0008831033);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,0.003191719);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,0.006822652);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,0.006560423);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,0.004524558);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,0.003214544);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,0.00205926);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,0.001666821);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,0.001168236);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,0.0008831033);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,0.0007647899);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,0.0004936697);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,0.0004415516);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,0.0003823949);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,0.0003122242);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,0.0004415516);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(2897);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_algo_17->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->SetSelected(H_dR_Bj0_algo_17);
}
