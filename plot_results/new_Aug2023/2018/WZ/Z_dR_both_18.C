void Z_dR_both_18()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Tue Aug 22 09:22:42 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_18->SetHighLightColor(2);
   Z_dR_both_18->Range(-1.2,-0.3067207,6.8,2.760486);
   Z_dR_both_18->SetFillColor(0);
   Z_dR_both_18->SetBorderMode(0);
   Z_dR_both_18->SetBorderSize(2);
   Z_dR_both_18->SetLeftMargin(0.15);
   Z_dR_both_18->SetFrameBorderMode(0);
   Z_dR_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_stack_7 = new TH1D("VbbHcc_both_Z_dR_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(3,2.161388);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(4,2.336919);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(5,1.702794);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(6,0.8133779);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(7,0.8515815);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(9,0.7819011);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(10,0.6196682);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(12,1.332672);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(13,0.3453961);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(14,0.8114295);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(21,0.2680755);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(26,0.4394432);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(27,0.4536609);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(28,0.3759891);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(29,0.3354616);
   VbbHcc_both_Z_dR_stack_7->SetBinError(3,0.9351062);
   VbbHcc_both_Z_dR_stack_7->SetBinError(4,0.9725588);
   VbbHcc_both_Z_dR_stack_7->SetBinError(5,0.8692755);
   VbbHcc_both_Z_dR_stack_7->SetBinError(6,0.5811439);
   VbbHcc_both_Z_dR_stack_7->SetBinError(7,0.6121679);
   VbbHcc_both_Z_dR_stack_7->SetBinError(9,0.5567977);
   VbbHcc_both_Z_dR_stack_7->SetBinError(10,0.6196682);
   VbbHcc_both_Z_dR_stack_7->SetBinError(12,1.031898);
   VbbHcc_both_Z_dR_stack_7->SetBinError(13,0.3453961);
   VbbHcc_both_Z_dR_stack_7->SetBinError(14,0.5803019);
   VbbHcc_both_Z_dR_stack_7->SetBinError(21,0.2680755);
   VbbHcc_both_Z_dR_stack_7->SetBinError(26,0.4394432);
   VbbHcc_both_Z_dR_stack_7->SetBinError(27,0.4536609);
   VbbHcc_both_Z_dR_stack_7->SetBinError(28,0.3759891);
   VbbHcc_both_Z_dR_stack_7->SetBinError(29,0.3354616);
   VbbHcc_both_Z_dR_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_18->Modified();
   Z_dR_both_18->cd();
   Z_dR_both_18->SetSelected(Z_dR_both_18);
}
