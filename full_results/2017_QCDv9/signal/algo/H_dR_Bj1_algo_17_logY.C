#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_17/H_dR_Bj1_algo_17
//=========  (Tue Feb 14 10:43:07 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_17 = new TCanvas("H_dR_Bj1_algo_17", "H_dR_Bj1_algo_17",0,0,600,600);
   H_dR_Bj1_algo_17->SetHighLightColor(2);
   H_dR_Bj1_algo_17->Range(-1.310117,-0.1140778,7.029799,0.8365704);
   H_dR_Bj1_algo_17->SetFillColor(0);
   H_dR_Bj1_algo_17->SetFillStyle(4000);
   H_dR_Bj1_algo_17->SetBorderMode(0);
   H_dR_Bj1_algo_17->SetBorderSize(2);
   H_dR_Bj1_algo_17->SetLogy();
   H_dR_Bj1_algo_17->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_17->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_17->SetBottomMargin(0.12);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(70.61958);
   
   TH1F *st_stack_110 = new TH1F("st_stack_110","",30,0,6);
   st_stack_110->SetMinimum(-3.251464e+09);
   st_stack_110->SetMaximum(-44.50552);
   st_stack_110->SetDirectory(0);
   st_stack_110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_110->SetLineColor(ci);
   st_stack_110->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_110->GetXaxis()->SetRange(1,30);
   st_stack_110->GetXaxis()->SetLabelFont(42);
   st_stack_110->GetXaxis()->SetTitleOffset(1);
   st_stack_110->GetXaxis()->SetTitleFont(42);
   st_stack_110->GetYaxis()->SetTitle("Events/0.2");
   st_stack_110->GetYaxis()->SetLabelFont(42);
   st_stack_110->GetYaxis()->SetTitleSize(0.037);
   st_stack_110->GetYaxis()->SetTitleFont(42);
   st_stack_110->GetZaxis()->SetLabelFont(42);
   st_stack_110->GetZaxis()->SetTitleOffset(1);
   st_stack_110->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_110);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,0.04424703);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,0.2654822);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,0.4250876);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,0.5388656);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,0.5135816);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,0.4298283);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,0.3444947);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,0.2575809);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,0.1927906);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,0.1200991);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,0.09955582);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,0.05056804);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,0.05214829);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,0.05846929);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,0.02686427);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,0.009481507);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,0.004740753);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,0.003160502);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,0.008361903);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,0.0204824);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,0.02591805);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,0.02918121);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,0.02848838);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,0.02606217);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,0.02333213);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,0.0201753);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,0.01745444);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,0.01377631);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,0.01254285);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,0.00893925);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,0.009077852);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,0.009612292);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,0.006515542);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,0.003870809);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,0.002737075);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,0.002234813);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,0.001580251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(2177);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,0.01224873);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,0.07785212);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,0.1480228);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,0.1673302);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,0.1500989);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,0.1193733);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,0.07992818);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,0.05107099);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,0.03446254);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,0.02491268);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,0.01993014);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,0.01079549);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,0.01121071);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,0.01079549);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,0.009965071);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,0.003529296);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,0.001868451);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,0.001660845);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,0.001594649);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,0.004020266);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,0.005543499);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,0.005893953);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,0.005582238);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,0.004978209);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,0.004073517);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,0.003256167);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,0.002674812);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,0.002274206);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,0.002034112);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,0.001497066);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,0.001525584);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,0.001497066);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,0.001438334);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,0.00085598);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,0.000622817);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,0.0005871975);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,0.0002076057);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(4507);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","ZHcc","F");

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
   H_dR_Bj1_algo_17->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->SetSelected(H_dR_Bj1_algo_17);
}
