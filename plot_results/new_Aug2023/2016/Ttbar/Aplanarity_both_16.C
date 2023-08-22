void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Tue Aug 22 09:23:17 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-862.0813,1.133333,7758.732);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,6568.238);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,2174.53);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,1071.813);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,616.8366);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,387.8353);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,252.1832);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,173.829);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,115.0456);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,80.91706);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,53.65013);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,38.18067);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,26.17271);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,18.71333);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,12.37297);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,7.15519);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,4.858176);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,3.130126);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,2.039573);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,1.419027);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.7078819);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.1738623);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,0.05733812);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(24,0.06405613);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,18.7842);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,10.75395);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,7.548858);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,5.722395);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,4.535914);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,3.662665);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,3.037464);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,2.467631);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,2.070471);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,1.690468);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,1.420871);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,1.174469);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,0.9943935);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,0.8035871);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,0.6067801);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.5064258);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.4019708);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.3244305);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.2737675);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.1920869);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.08740361);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.05733812);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(24,0.06405613);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(232621);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
