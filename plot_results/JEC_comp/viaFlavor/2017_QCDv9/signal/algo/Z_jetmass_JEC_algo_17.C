#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_algo_17()
{
//=========Macro generated from canvas: Z_jetmass_JEC_algo_17/Z_jetmass_JEC_algo_17
//=========  (Mon Mar 27 11:09:52 2023) by ROOT version 6.26/06
   TCanvas *Z_jetmass_JEC_algo_17 = new TCanvas("Z_jetmass_JEC_algo_17", "Z_jetmass_JEC_algo_17",0,0,600,600);
   Z_jetmass_JEC_algo_17->SetHighLightColor(2);
   Z_jetmass_JEC_algo_17->Range(-65.50587,-0.02676413,351.4899,0.1962703);
   Z_jetmass_JEC_algo_17->SetFillColor(0);
   Z_jetmass_JEC_algo_17->SetFillStyle(4000);
   Z_jetmass_JEC_algo_17->SetBorderMode(0);
   Z_jetmass_JEC_algo_17->SetBorderSize(2);
   Z_jetmass_JEC_algo_17->SetLeftMargin(0.15709);
   Z_jetmass_JEC_algo_17->SetRightMargin(0.1234783);
   Z_jetmass_JEC_algo_17->SetBottomMargin(0.12);
   Z_jetmass_JEC_algo_17->SetFrameFillStyle(1000);
   Z_jetmass_JEC_algo_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_algo_17->SetFrameFillStyle(1000);
   Z_jetmass_JEC_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.1739669);
   
   TH1F *st_stack_190 = new TH1F("st_stack_190","",150,0,300);
   st_stack_190->SetMinimum(0);
   st_stack_190->SetMaximum(0.1739669);
   st_stack_190->SetDirectory(0);
   st_stack_190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_190->SetLineColor(ci);
   st_stack_190->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   st_stack_190->GetXaxis()->SetRange(1,150);
   st_stack_190->GetXaxis()->SetLabelFont(42);
   st_stack_190->GetXaxis()->SetTitleOffset(1);
   st_stack_190->GetXaxis()->SetTitleFont(42);
   st_stack_190->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_190->GetYaxis()->SetLabelFont(42);
   st_stack_190->GetYaxis()->SetTitleSize(0.037);
   st_stack_190->GetYaxis()->SetTitleFont(42);
   st_stack_190->GetZaxis()->SetLabelFont(42);
   st_stack_190->GetZaxis()->SetTitleOffset(1);
   st_stack_190->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_190);
   
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_stack_1 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_stack_1","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(4,0.02152733);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(5,0.04968188);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(6,0.1083031);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(7,0.09239727);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(8,0.0892952);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(9,0.05807777);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(10,0.04291036);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(11,0.0330894);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(12,0.01101312);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(13,0.01987058);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(14,0.005123688);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(15,0.00483027);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(16,0.003548442);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(17,0.002760312);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(18,-1.705805e-05);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(19,0.00324396);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(21,0.003393202);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinContent(26,0.002014015);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(4,0.006893476);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(5,0.01078592);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(6,0.01428912);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(7,0.0133192);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(8,0.01297904);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(9,0.01058685);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(10,0.008598232);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(11,0.00781141);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(12,0.004532317);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(13,0.006371157);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(14,0.003043553);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(15,0.002812759);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(16,0.002511335);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(17,0.001953737);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(18,0.002828005);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(19,0.002298846);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(21,0.002400699);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetBinError(26,0.002014015);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetEntries(331);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_JEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_JEC_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_stack_2 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_stack_2","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(1,0.0005427249);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(3,0.00058128);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(4,0.004820373);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(5,0.01517653);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(6,0.03608944);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(7,0.0352166);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(8,0.03012992);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(9,0.02260931);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(10,0.01680617);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(11,0.01155795);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(12,0.009337592);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(13,0.00471321);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(14,0.003986687);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(15,0.003079797);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(16,0.0006069668);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(17,0.00104435);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(18,0.0006516396);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(19,0.001263322);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(20,0.0008097191);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(27,0.000131552);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinContent(30,0.0002615845);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(1,0.0003839125);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(3,0.0004127728);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(4,0.001069317);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(5,0.001922871);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(6,0.00292509);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(7,0.002904654);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(8,0.002683175);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(9,0.002302174);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(10,0.001982861);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(11,0.001675395);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(12,0.0015487);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(13,0.001075213);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(14,0.0009689637);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(15,0.0008634471);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(16,0.000324267);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(17,0.0005249218);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(18,0.000379315);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(19,0.0005738325);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(20,0.0004704271);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(27,0.000131552);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetBinError(30,0.0002615845);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetEntries(869);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_jetmass_JEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_JEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_JEC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_JEC_stack_1","ZHcc","F");

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
   Z_jetmass_JEC_algo_17->Modified();
   Z_jetmass_JEC_algo_17->cd();
   Z_jetmass_JEC_algo_17->SetSelected(Z_jetmass_JEC_algo_17);
}
