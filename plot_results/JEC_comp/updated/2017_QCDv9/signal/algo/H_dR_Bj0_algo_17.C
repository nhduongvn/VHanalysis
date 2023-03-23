#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(-1.310117,-0.04948776,7.029799,0.3629102);
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
   st->SetMaximum(0.3216704);
   
   TH1F *st_stack_138 = new TH1F("st_stack_138","",30,0,6);
   st_stack_138->SetMinimum(0);
   st_stack_138->SetMaximum(0.3216704);
   st_stack_138->SetDirectory(0);
   st_stack_138->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_138->SetLineColor(ci);
   st_stack_138->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_138->GetXaxis()->SetRange(1,30);
   st_stack_138->GetXaxis()->SetLabelFont(42);
   st_stack_138->GetXaxis()->SetTitleOffset(1);
   st_stack_138->GetXaxis()->SetTitleFont(42);
   st_stack_138->GetYaxis()->SetTitle("Event/0.2");
   st_stack_138->GetYaxis()->SetLabelFont(42);
   st_stack_138->GetYaxis()->SetTitleSize(0.037);
   st_stack_138->GetYaxis()->SetTitleFont(42);
   st_stack_138->GetZaxis()->SetLabelFont(42);
   st_stack_138->GetZaxis()->SetTitleOffset(1);
   st_stack_138->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_138);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,0.07585205);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,0.1912104);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,0.1311608);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,0.04424703);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,0.04108653);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,0.01422226);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,0.006321005);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,0.004740753);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,0.003160502);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,0.0109483);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,0.01738276);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,0.01439677);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,0.008361903);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,0.008057731);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,0.004740753);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,0.003533549);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,0.003160502);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,0.003533549);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,0.002737075);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,0.002234813);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(335);

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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,0.0184769);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,0.07577606);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,0.04338958);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,0.01972254);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,0.00954986);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,0.005397747);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,0.002698874);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,0.003114085);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,0.002283662);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,0.0008304226);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,0.002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,0.0004152113);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,0.001958548);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,0.0039663);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,0.00300132);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,0.00202349);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,0.00140805);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,0.001058585);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,0.0007485328);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,0.0008040532);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,0.0006885501);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,0.0004152113);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,0.0006565067);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,0.0002935987);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(887);

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
