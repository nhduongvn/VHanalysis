#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_16/Z_dR_Bj0_algo_16
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_16 = new TCanvas("Z_dR_Bj0_algo_16", "Z_dR_Bj0_algo_16",0,0,600,600);
   Z_dR_Bj0_algo_16->SetHighLightColor(2);
   Z_dR_Bj0_algo_16->Range(-1.310117,-0.09218061,7.029799,0.6759911);
   Z_dR_Bj0_algo_16->SetFillColor(0);
   Z_dR_Bj0_algo_16->SetFillStyle(4000);
   Z_dR_Bj0_algo_16->SetBorderMode(0);
   Z_dR_Bj0_algo_16->SetBorderSize(2);
   Z_dR_Bj0_algo_16->SetLogy();
   Z_dR_Bj0_algo_16->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_16->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_16->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(57.06418);
   
   TH1F *st_stack_105 = new TH1F("st_stack_105","",30,0,6);
   st_stack_105->SetMinimum(-3.203261e+09);
   st_stack_105->SetMaximum(-37.01909);
   st_stack_105->SetDirectory(0);
   st_stack_105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_105->SetLineColor(ci);
   st_stack_105->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
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
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,0.08643877);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,0.4336345);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,0.4321938);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,0.2996544);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,0.142624);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,0.08355748);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,0.03025357);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,0.02449098);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,0.01440646);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,0.01008452);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,0.002881292);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,0.005762585);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,0.002881292);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,0.001440646);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,0.001440646);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,0.0111592);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,0.02499428);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,0.02495272);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,0.02077729);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,0.01433425);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,0.01097163);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,0.00660187);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,0.005939936);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,0.004555723);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,0.003811591);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,0.002037381);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,0.002881292);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,0.002037381);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,0.001440646);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,0.001440646);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(1091);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,0.02358471);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,0.1370074);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,0.1373674);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,0.06391276);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,0.02286457);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,0.01296259);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,0.005941186);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,0.003420683);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,0.001980395);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,0.001080216);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,0.001620324);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,0.0007201438);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,0.0003600719);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,0.0003600719);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,0.0003600719);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,0.000180036);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,0.002060606);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,0.004966513);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,0.004973035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,0.003392137);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,0.002028902);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,0.001527656);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,0.001034228);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,0.0007847585);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,0.0005971117);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,0.0004409962);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,0.0005401079);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,0.0003600719);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,0.0002546093);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,0.0002546093);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,0.0002546093);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,0.000180036);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(2298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","ZHcc","F");

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
   Z_dR_Bj0_algo_16->Modified();
   Z_dR_Bj0_algo_16->cd();
   Z_dR_Bj0_algo_16->SetSelected(Z_dR_Bj0_algo_16);
}
