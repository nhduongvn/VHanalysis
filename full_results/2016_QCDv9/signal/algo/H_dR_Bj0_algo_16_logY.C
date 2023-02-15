#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Tue Feb 14 16:07:56 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.310117,-0.1341856,7.029799,0.9840278);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetFillStyle(4000);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetLogy();
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
   st->SetMinimum(1e+10);
   st->SetMaximum(83.06728);
   
   TH1F *st_stack_105 = new TH1F("st_stack_105","",30,0,6);
   st_stack_105->SetMinimum(-3.289165e+09);
   st_stack_105->SetMaximum(-51.17891);
   st_stack_105->SetDirectory(0);
   st_stack_105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_105->SetLineColor(ci);
   st_stack_105->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_105->GetXaxis()->SetRange(1,30);
   st_stack_105->GetXaxis()->SetLabelFont(42);
   st_stack_105->GetXaxis()->SetTitleOffset(1);
   st_stack_105->GetXaxis()->SetTitleFont(42);
   st_stack_105->GetYaxis()->SetTitle("Events/0.2");
   st_stack_105->GetYaxis()->SetLabelFont(42);
   st_stack_105->GetYaxis()->SetTitleSize(0.037);
   st_stack_105->GetYaxis()->SetTitleFont(42);
   st_stack_105->GetZaxis()->SetLabelFont(42);
   st_stack_105->GetZaxis()->SetTitleOffset(1);
   st_stack_105->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_105);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,0.2297406);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,0.6263167);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,0.6017016);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,0.3446109);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,0.2133306);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,0.08752024);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,0.04376012);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,0.02461507);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,0.02506676);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,0.04138817);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,0.04056672);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,0.03070038);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,0.02415493);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,0.01547154);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,0.01094003);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,0.004737172);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,0.003867885);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,0.003867885);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(804);

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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,0.05394714);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,0.2043561);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,0.1661286);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,0.09074553);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,0.03108213);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,0.01321884);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,0.005358988);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,0.002143595);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,0.004644456);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,0.001786329);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,0.004390156);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,0.008544556);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,0.00770403);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,0.005693881);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,0.003332354);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,0.002173163);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,0.001383685);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,0.000875119);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,0.00128814);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,0.0007988707);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,0.0005052502);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(1609);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_16->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->SetSelected(H_dR_Bj0_algo_16);
}
