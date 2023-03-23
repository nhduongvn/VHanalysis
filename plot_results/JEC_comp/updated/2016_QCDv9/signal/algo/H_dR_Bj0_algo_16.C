#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.310117,-0.03609386,7.029799,0.2646883);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetFillStyle(4000);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_16->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_16->SetBottomMargin(0.12);
   H_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   H_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.2346101);
   
   TH1F *st_stack_137 = new TH1F("st_stack_137","",30,0,6);
   st_stack_137->SetMinimum(0);
   st_stack_137->SetMaximum(0.2346101);
   st_stack_137->SetDirectory(0);
   st_stack_137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_137->SetLineColor(ci);
   st_stack_137->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_137->GetXaxis()->SetRange(1,30);
   st_stack_137->GetXaxis()->SetLabelFont(42);
   st_stack_137->GetXaxis()->SetTitleOffset(1);
   st_stack_137->GetXaxis()->SetTitleFont(42);
   st_stack_137->GetYaxis()->SetTitle("Event/0.2");
   st_stack_137->GetYaxis()->SetLabelFont(42);
   st_stack_137->GetYaxis()->SetTitleSize(0.037);
   st_stack_137->GetYaxis()->SetTitleFont(42);
   st_stack_137->GetZaxis()->SetLabelFont(42);
   st_stack_137->GetZaxis()->SetTitleOffset(1);
   st_stack_137->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_137);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,0.0355551);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,0.1504254);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,0.08205022);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,0.04102511);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,0.02461507);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,0.00986121);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,0.02028336);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,0.01498025);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,0.01059264);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(126);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);
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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,0.005358988);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,0.04430097);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,0.03143939);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,0.0157197);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,0.004644456);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,0.003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,0.002143595);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,0.001383685);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,0.003978344);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,0.003351451);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,0.002369834);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,0.00128814);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,0.001129774);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,0.000875119);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,0.0005052502);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,0.0005052502);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_16->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->SetSelected(H_dR_Bj0_algo_16);
}
