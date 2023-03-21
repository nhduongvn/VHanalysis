#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Mon Mar 20 11:48:16 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.310117,-3.786094,7.029799,0.06006017);
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
   st->SetMinimum(1);
   st->SetMaximum(0.5036409);
   
   TH1F *st_stack_137 = new TH1F("st_stack_137","",30,0,6);
   st_stack_137->SetMinimum(1.175005);
   st_stack_137->SetMaximum(0.4736361);
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
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,0.09572526);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,0.3090558);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,0.2570907);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,0.1641004);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,0.06837519);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,0.01914505);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,0.01618052);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,0.02907353);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,0.02651688);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,0.02118528);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,0.01367504);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,0.00723615);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(339);

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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,0.02429408);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,0.1089661);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,0.100749);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,0.05144628);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,0.01429063);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,0.007502583);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,0.00428719);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,0.001429063);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,0.001071798);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,0.00294609);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,0.00623938);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,0.005999514);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,0.00428719);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,0.002259548);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,0.001637198);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,0.001237605);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,0.0005052502);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,0.0006188026);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(884);

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
