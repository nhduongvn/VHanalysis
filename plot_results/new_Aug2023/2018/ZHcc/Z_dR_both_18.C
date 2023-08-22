void Z_dR_both_18()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Tue Aug 22 09:22:42 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_18->SetHighLightColor(2);
   Z_dR_both_18->Range(-1.2,-0.005162904,6.8,0.04646613);
   Z_dR_both_18->SetFillColor(0);
   Z_dR_both_18->SetBorderMode(0);
   Z_dR_both_18->SetBorderSize(2);
   Z_dR_both_18->SetLeftMargin(0.15);
   Z_dR_both_18->SetFrameBorderMode(0);
   Z_dR_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_stack_11 = new TH1D("VbbHcc_both_Z_dR_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.03197139);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.03933641);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.03179839);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.01868695);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(7,0.008942432);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(8,0.004693953);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.002141222);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.00459408);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(12,0.001009086);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.009137762);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.004487402);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.007386181);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.004208021);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(17,0.004715082);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.009935369);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(27,0.002219202);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(29,0.00281116);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(30,0.002200582);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.008661162);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.009637722);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.008888716);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.006588966);
   VbbHcc_both_Z_dR_stack_11->SetBinError(7,0.004483448);
   VbbHcc_both_Z_dR_stack_11->SetBinError(8,0.003319966);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.002141222);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.003251213);
   VbbHcc_both_Z_dR_stack_11->SetBinError(12,0.001009086);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.004571245);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.003173589);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.004298464);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.003070892);
   VbbHcc_both_Z_dR_stack_11->SetBinError(17,0.003352817);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.005004397);
   VbbHcc_both_Z_dR_stack_11->SetBinError(27,0.002219202);
   VbbHcc_both_Z_dR_stack_11->SetBinError(29,0.00281116);
   VbbHcc_both_Z_dR_stack_11->SetBinError(30,0.002200582);
   VbbHcc_both_Z_dR_stack_11->SetEntries(84);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->Draw("HIST");
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
