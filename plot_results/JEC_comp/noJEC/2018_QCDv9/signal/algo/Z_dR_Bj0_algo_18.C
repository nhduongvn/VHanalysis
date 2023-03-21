#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Mon Mar 20 11:48:32 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(-1.310117,-0.2149599,7.029799,1.576372);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetFillStyle(4000);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_18->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.397239);
   
   TH1F *st_stack_147 = new TH1F("st_stack_147","",30,0,6);
   st_stack_147->SetMinimum(0);
   st_stack_147->SetMaximum(1.397239);
   st_stack_147->SetDirectory(0);
   st_stack_147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_147->SetLineColor(ci);
   st_stack_147->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_147->GetXaxis()->SetRange(1,30);
   st_stack_147->GetXaxis()->SetLabelFont(42);
   st_stack_147->GetXaxis()->SetTitleOffset(1);
   st_stack_147->GetXaxis()->SetTitleFont(42);
   st_stack_147->GetYaxis()->SetTitle("Event/0.2");
   st_stack_147->GetYaxis()->SetLabelFont(42);
   st_stack_147->GetYaxis()->SetTitleSize(0.037);
   st_stack_147->GetYaxis()->SetTitleFont(42);
   st_stack_147->GetZaxis()->SetLabelFont(42);
   st_stack_147->GetZaxis()->SetTitleOffset(1);
   st_stack_147->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_147);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,0.2025428);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,0.869341);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,0.5666647);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,0.2093701);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,0.09785776);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,0.05916981);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,0.02048186);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,0.01593033);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,0.01137881);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,0.02146949);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,0.04447936);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,0.03591092);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,0.02182834);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,0.01492317);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,0.01160415);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,0.006827286);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,0.0060211);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,0.005088758);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(907);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);
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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,0.04075332);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,0.2903674);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,0.2115577);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,0.07821042);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,0.02517117);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,0.009888674);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,0.003895538);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,0.004494852);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,0.003296225);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,0.003895538);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,0.0008989704);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,0.0008989704);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,0.001797941);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,0.0008989704);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,0.003494569);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,0.009327946);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,0.007962079);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,0.004841104);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,0.0027464);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,0.001721397);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,0.001080428);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,0.001160566);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,0.0009938492);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,0.001080428);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,0.0005190208);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,0.0005190208);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,0.0007340063);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,0.0005190208);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(2258);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}
