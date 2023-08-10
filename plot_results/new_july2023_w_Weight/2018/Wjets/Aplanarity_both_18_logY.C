void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug 10 10:43:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-1.442027,1.133333,3.104876);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,235.8502);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,78.00453);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,28.92382);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,17.36452);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,9.757907);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,2.456273);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,5.243415);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,1.685311);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.698531);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,1.03774);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.4692067);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,2.541201);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,0.2059173);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.4432178);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.3662907);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,15.5924);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,8.780212);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,5.446037);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,2.966372);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,3.657671);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,0.6478724);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,2.522864);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.5992502);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.3349802);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.5093484);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.3141295);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,2.256914);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,0.1863024);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.2408524);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.2590286);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(2591);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
