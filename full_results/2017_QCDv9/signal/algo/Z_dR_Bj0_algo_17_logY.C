#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Tue Feb 14 10:43:07 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(-1.310117,0.5796116,7.029799,2.431742);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetFillStyle(4000);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetLogy();
   Z_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_17->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(143.2805);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",30,0,6);
   st_stack_114->SetMinimum(6.33676);
   st_stack_114->SetMaximum(176.4124);
   st_stack_114->SetDirectory(0);
   st_stack_114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_114->SetLineColor(ci);
   st_stack_114->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_114->GetXaxis()->SetRange(1,30);
   st_stack_114->GetXaxis()->SetLabelFont(42);
   st_stack_114->GetXaxis()->SetTitleOffset(1);
   st_stack_114->GetXaxis()->SetTitleFont(42);
   st_stack_114->GetYaxis()->SetTitle("Events/0.2");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetTitleSize(0.037);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetTitleOffset(1);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,0.2623217);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,1.06825);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,0.9386692);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,0.5499274);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,0.301828);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,0.1659264);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,0.06953105);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,0.03476553);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,0.02844452);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,0.006321005);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,0.004740753);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,0.004740753);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,0.02036011);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,0.04108653);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,0.03851406);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,0.0294792);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,0.02183951);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,0.01619276);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,0.0104822);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,0.007412035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,0.006704438);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,0.002737075);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,0.002737075);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(2177);

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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,0.05231663);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,0.3645555);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,0.3035195);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,0.1251862);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,0.04588085);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,0.0182693);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,0.009342254);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,0.005190141);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,0.00332169);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,0.002491268);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,0.001868451);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,0.00145324);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,0.000622817);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,0.003295638);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,0.008699643);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,0.007938032);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,0.005097977);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,0.00308628);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,0.001947514);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,0.001392661);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,0.001038028);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,0.0008304226);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,0.0007191671);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,0.000622817);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,0.0005492729);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,0.0002935987);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,0.0003595835);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,0.0002935987);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,0.0002935987);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(4507);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_17->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->SetSelected(Z_dR_Bj0_algo_17);
}
