#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_16()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Mon Mar 20 11:48:31 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.310117,-0.0470117,7.029799,0.3447525);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetFillStyle(4000);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetLeftMargin(0.15709);
   Z_dR_algo_16->SetRightMargin(0.1234783);
   Z_dR_algo_16->SetBottomMargin(0.12);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.305576);
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",30,0,6);
   st_stack_113->SetMinimum(0);
   st_stack_113->SetMaximum(0.305576);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetTitle("#DeltaR(b,b)");
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
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.1305391);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.1925688);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.1741793);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.1597279);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.1406842);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.06592536);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.04657932);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.01201595);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.003231239);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.01193583);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.008575005);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.003212378);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.003235426);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.00255346);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,0.002837057);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.02023931);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.02363929);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.02315867);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.02180206);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.02037711);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.01396529);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.01153992);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.006014168);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.003231239);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.005999235);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.004954721);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.003212378);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.003235426);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.00255346);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,0.002837057);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.0003747978);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.02448668);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.06105934);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.07169573);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.07208701);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.03988726);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.02009593);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.01041561);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.007658769);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.005909111);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.002311964);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.00492002);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.003753687);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.003952097);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.003615155);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.0003909908);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.0003690426);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.0003402515);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.0003747978);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.003044026);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.004836998);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.00524654);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.005268234);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.003933017);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.00277833);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.002007448);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.001700108);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.001480923);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.0009476456);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.001381896);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.00119056);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.001251404);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.001183606);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.0003909908);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.0003690426);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.0003402515);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
