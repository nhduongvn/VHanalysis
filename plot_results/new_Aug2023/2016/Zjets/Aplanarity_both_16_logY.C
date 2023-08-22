void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Tue Aug 22 09:18:48 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-2.043687,1.133333,3.839645);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,941.3761);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,293.351);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,141.7151);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,72.54704);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,38.98244);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,29.51117);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,19.31255);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,15.20942);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,8.159033);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,6.483533);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,5.544125);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,2.477908);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,1.211948);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,0.972862);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,2.554352);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.6533908);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,0.4136932);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,0.2818163);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(20,0.07009327);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,17.30319);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,11.65535);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,8.411022);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,5.396786);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,3.242183);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,3.893384);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,3.233288);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,2.793462);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,1.15089);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,1.830301);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,1.704641);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.6697702);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,0.413048);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.318433);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,1.655726);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.3846487);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.2669867);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.2818163);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(20,0.07009327);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(15013);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->Draw("HIST");
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
