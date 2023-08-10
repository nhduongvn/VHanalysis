void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug  3 12:26:24 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-0.6043523,1.133333,5.43917);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_7 = new TH1D("VbbHcc_both_Aplanarity_stack_7","",50,0,1);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,4.604589);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,3.187792);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,1.062597);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,1.062597);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,0.3541991);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(6,0.7083982);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(15,0.3541991);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,1.277083);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,1.062597);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,0.6134909);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.6134909);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.3541991);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(6,0.5009132);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(8,0.3541991);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(15,0.3541991);
   VbbHcc_both_Aplanarity_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity_stack_7->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->Draw("HIST");
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
