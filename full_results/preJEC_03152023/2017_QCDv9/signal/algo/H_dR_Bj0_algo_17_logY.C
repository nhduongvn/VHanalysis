#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Thu Mar  9 13:08:26 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(-1.310117,-3.549766,7.029799,0.2963883);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetFillStyle(4000);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetLogy();
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
   st->SetMinimum(1);
   st->SetMaximum(0.8296156);
   
   TH1F *st_stack_106 = new TH1F("st_stack_106","",30,0,6);
   st_stack_106->SetMinimum(1.042276);
   st_stack_106->SetMaximum(0.8161554);
   st_stack_106->SetDirectory(0);
   st_stack_106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_106->SetLineColor(ci);
   st_stack_106->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_106->GetXaxis()->SetRange(1,30);
   st_stack_106->GetXaxis()->SetLabelFont(42);
   st_stack_106->GetXaxis()->SetTitleOffset(1);
   st_stack_106->GetXaxis()->SetTitleFont(42);
   st_stack_106->GetYaxis()->SetTitle("Event/0.2");
   st_stack_106->GetYaxis()->SetLabelFont(42);
   st_stack_106->GetYaxis()->SetTitleSize(0.037);
   st_stack_106->GetYaxis()->SetTitleFont(42);
   st_stack_106->GetZaxis()->SetLabelFont(42);
   st_stack_106->GetZaxis()->SetTitleOffset(1);
   st_stack_106->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_106);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,0.1485436);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,0.5056804);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,0.4108653);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,0.2022721);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,0.08533356);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,0.04740753);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,0.02212352);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,0.006321005);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,0.009481507);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,0.006321005);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,0.0153211);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,0.02826839);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,0.02548078);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,0.0178785);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,0.01161243);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,0.008655392);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,0.005912758);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,0.003533549);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,0.003160502);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,0.003870809);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,0.003160502);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(919);

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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,0.03031043);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,0.1829006);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,0.1590259);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,0.07286959);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,0.02636592);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,0.009757466);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,0.005812958);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,0.00477493);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,0.002491268);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,0.00145324);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,0.00145324);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,0.0004152113);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,0.0004152113);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,0.002508509);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,0.006162077);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,0.00574584);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,0.003889491);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,0.002339597);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,0.001423273);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,0.001098546);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,0.0009956417);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,0.0007191671);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,0.0005492729);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,0.0005492729);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,0.0002935987);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,0.0002935987);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(2405);

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_17->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->SetSelected(H_dR_Bj0_algo_17);
}
