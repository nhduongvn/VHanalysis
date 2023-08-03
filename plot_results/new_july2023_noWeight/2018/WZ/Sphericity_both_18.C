void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug  3 12:26:20 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-0.4183977,1.133333,3.765579);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_7 = new TH1D("VbbHcc_both_Sphericity_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,3.187792);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,0.7083982);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(3,1.062597);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,0.7083982);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,1.416796);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,1.062597);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,0.7083982);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(10,0.3541991);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(11,0.7083982);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(13,0.7083982);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,0.3541991);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(16,0.3541991);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(18,0.3541991);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,1.062597);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,0.5009132);
   VbbHcc_both_Sphericity_stack_7->SetBinError(3,0.6134909);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,0.5009132);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,0.7083982);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.6134909);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.5009132);
   VbbHcc_both_Sphericity_stack_7->SetBinError(10,0.3541991);
   VbbHcc_both_Sphericity_stack_7->SetBinError(11,0.5009132);
   VbbHcc_both_Sphericity_stack_7->SetBinError(13,0.5009132);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.3541991);
   VbbHcc_both_Sphericity_stack_7->SetBinError(16,0.3541991);
   VbbHcc_both_Sphericity_stack_7->SetBinError(18,0.3541991);
   VbbHcc_both_Sphericity_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_stack_7->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
