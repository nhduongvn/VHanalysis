#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(-1.310117,-0.04019769,7.029799,0.2947831);
   H_dR_algo_17->SetFillColor(0);
   H_dR_algo_17->SetFillStyle(4000);
   H_dR_algo_17->SetBorderMode(0);
   H_dR_algo_17->SetBorderSize(2);
   H_dR_algo_17->SetLogy();
   H_dR_algo_17->SetLeftMargin(0.15709);
   H_dR_algo_17->SetRightMargin(0.1234783);
   H_dR_algo_17->SetBottomMargin(0.12);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   H_dR_algo_17->SetFrameFillStyle(1000);
   H_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_86 = new TH1F("st_stack_86","",30,0,6);
   st_stack_86->SetMinimum(-2.32448e+09);
   st_stack_86->SetMaximum(-0.2789068);
   st_stack_86->SetDirectory(0);
   st_stack_86->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_86->SetLineColor(ci);
   st_stack_86->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_86->GetXaxis()->SetRange(1,31);
   st_stack_86->GetXaxis()->SetLabelFont(42);
   st_stack_86->GetXaxis()->SetTitleOffset(1);
   st_stack_86->GetXaxis()->SetTitleFont(42);
   st_stack_86->GetYaxis()->SetTitle("Event/0.2");
   st_stack_86->GetYaxis()->SetLabelFont(42);
   st_stack_86->GetYaxis()->SetTitleSize(0.037);
   st_stack_86->GetYaxis()->SetTitleFont(42);
   st_stack_86->GetZaxis()->SetLabelFont(42);
   st_stack_86->GetZaxis()->SetTitleOffset(1);
   st_stack_86->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_86);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,0.02548835);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,0.08786926);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,0.1476473);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,0.1805227);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,0.1658089);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,0.1572829);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,0.09713343);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,0.06220695);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,0.05225854);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,0.03789078);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,0.02927005);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,0.03587854);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,0.02130145);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,0.01942639);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,0.008975903);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,0.001087126);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,0.002792545);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,0.00143679);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,0.0009153737);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,0.00616153);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,0.01114834);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,0.01427123);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,0.01615264);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,0.01525551);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,0.01522907);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,0.01154983);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,0.00938457);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,0.008392491);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,0.007217021);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,0.006072479);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,0.006907884);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,0.005296724);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,0.004943035);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,0.00340884);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,0.001087126);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,0.001974665);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,0.00143679);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,0.0009153737);
   VbbHcc_algo_H_dR_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,0.006786381);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,0.02388175);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,0.04452029);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,0.06832015);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,0.07651177);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,0.06487452);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,0.04212985);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,0.0190899);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,0.01460501);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,0.01016217);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,0.009547878);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,0.008960926);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,0.007093227);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,0.006134216);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,0.003273559);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,0.001461541);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,0.001056563);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,0.0005160905);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,0.0001323419);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,0.0003689152);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,0.0001947428);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,0.001082609);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,0.002036425);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,0.002794243);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,0.003465167);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,0.003704459);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,0.003403623);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,0.002734435);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,0.001861548);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,0.001617105);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,0.001324886);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,0.001296844);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,0.0012678);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,0.001135745);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,0.001039606);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,0.0007456699);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,0.0005149205);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,0.000438295);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,0.0003021551);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,0.0001323419);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,0.000261155);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,0.0001947428);
   VbbHcc_algo_H_dR_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","ZHcc","F");

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
   H_dR_algo_17->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->SetSelected(H_dR_algo_17);
}
