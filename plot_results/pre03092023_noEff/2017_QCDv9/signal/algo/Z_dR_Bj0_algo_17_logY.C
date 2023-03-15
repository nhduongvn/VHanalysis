#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(-1.310117,-0.09865572,7.029799,0.7234753);
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
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",30,0,6);
   st_stack_114->SetMinimum(-2.434822e+09);
   st_stack_114->SetMaximum(-0.6368837);
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
   st_stack_114->GetYaxis()->SetTitle("Event/0.2");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetTitleSize(0.037);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetTitleOffset(1);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,0.1164193);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,0.4539176);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,0.2704691);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,0.123475);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,0.05762167);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,0.02587095);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,0.01528738);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,0.009407619);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,0.007055714);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,0.001175952);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,0.01170058);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,0.0231038);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,0.0178342);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,0.01204993);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,0.008231667);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,0.005515706);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,0.004239957);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,0.003326096);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,0.002880483);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,0.001175952);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(919);

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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,0.02317363);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,0.1568082);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,0.1191125);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,0.04263948);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,0.01390418);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,0.005561671);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,0.003244308);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,0.002162872);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,0.001081436);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,0.001390418);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,0.0007724543);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,0.0006179635);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,0.0001544909);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,0.0003089817);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,0.0003089817);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,0.0003089817);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,0.001892119);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,0.004921935);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,0.00428973);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,0.002566595);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,0.001465629);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,0.0009269452);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,0.0007079661);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,0.0005780519);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,0.0004087444);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,0.0004634726);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,0.0003454521);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,0.0003089817);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,0.0001544909);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,0.0002184831);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,0.0002184831);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,0.0002184831);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(2405);

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
