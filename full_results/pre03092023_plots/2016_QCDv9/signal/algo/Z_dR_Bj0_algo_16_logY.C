#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_16/Z_dR_Bj0_algo_16
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_16 = new TCanvas("Z_dR_Bj0_algo_16", "Z_dR_Bj0_algo_16",0,0,600,600);
   Z_dR_Bj0_algo_16->SetHighLightColor(2);
   Z_dR_Bj0_algo_16->Range(-1.310117,-0.06066101,7.029799,0.4448474);
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
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",30,0,6);
   st_stack_113->SetMinimum(-2.373784e+09);
   st_stack_113->SetMaximum(-0.4074673);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_113->GetXaxis()->SetRange(1,30);
   st_stack_113->GetXaxis()->SetLabelFont(42);
   st_stack_113->GetXaxis()->SetTitleOffset(1);
   st_stack_113->GetXaxis()->SetTitleFont(42);
   st_stack_113->GetYaxis()->SetTitle("Event/0.2");
   st_stack_113->GetYaxis()->SetLabelFont(42);
   st_stack_113->GetYaxis()->SetTitleSize(0.037);
   st_stack_113->GetYaxis()->SetTitleFont(42);
   st_stack_113->GetZaxis()->SetLabelFont(42);
   st_stack_113->GetZaxis()->SetTitleOffset(1);
   st_stack_113->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_113);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,0.07548326);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,0.277452);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,0.2101291);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,0.09384405);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,0.01836079);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,0.008160352);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,0.004080176);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,0.002040088);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,0.002040088);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,0.01240937);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,0.02379131);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,0.02070463);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,0.01383655);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,0.006120264);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,0.004080176);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,0.00288512);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,0.002040088);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,0.002040088);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(339);

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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,0.01465698);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,0.09806854);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,0.08021367);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,0.02691555);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,0.006928756);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,0.00426385);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,0.002398415);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,0.0007994718);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,0.0002664906);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,0.0002664906);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,0.0005329812);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,0.0002664906);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,0.001976347);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,0.005112176);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,0.004623439);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,0.002678197);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,0.001358841);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,0.001065962);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,0.0007994718);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,0.0004615753);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,0.0002664906);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,0.0002664906);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,0.0003768746);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,0.0002664906);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(884);

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
