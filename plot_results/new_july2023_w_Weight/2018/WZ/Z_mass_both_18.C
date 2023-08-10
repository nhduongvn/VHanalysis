void Z_mass_both_18()
{
//=========Macro generated from canvas: Z_mass_both_18/Z_mass_both_18
//=========  (Thu Aug 10 12:24:38 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_18 = new TCanvas("Z_mass_both_18", "Z_mass_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_18->SetHighLightColor(2);
   Z_mass_both_18->Range(-80,-0.3570805,453.3333,3.213724);
   Z_mass_both_18->SetFillColor(0);
   Z_mass_both_18->SetBorderMode(0);
   Z_mass_both_18->SetBorderSize(2);
   Z_mass_both_18->SetLeftMargin(0.15);
   Z_mass_both_18->SetFrameBorderMode(0);
   Z_mass_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass_stack_7 = new TH1D("VbbHcc_both_Z_mass_stack_7","",40,0,400);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(6,0.4786962);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(7,0.6010888);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(8,1.00346);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(9,2.188903);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(10,2.720613);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(11,0.840955);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(12,0.5144501);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(13,0.3805224);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(15,0.8576021);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(16,0.9833285);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(22,0.3805224);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(34,0.4019721);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(35,0.3767055);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(38,0.6750199);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(41,2.402651);
   VbbHcc_both_Z_mass_stack_7->SetBinError(6,0.4786962);
   VbbHcc_both_Z_mass_stack_7->SetBinError(7,0.6010888);
   VbbHcc_both_Z_mass_stack_7->SetBinError(8,0.6483452);
   VbbHcc_both_Z_mass_stack_7->SetBinError(9,1.00363);
   VbbHcc_both_Z_mass_stack_7->SetBinError(10,1.119783);
   VbbHcc_both_Z_mass_stack_7->SetBinError(11,0.5973236);
   VbbHcc_both_Z_mass_stack_7->SetBinError(12,0.5144501);
   VbbHcc_both_Z_mass_stack_7->SetBinError(13,0.3805224);
   VbbHcc_both_Z_mass_stack_7->SetBinError(15,0.6105078);
   VbbHcc_both_Z_mass_stack_7->SetBinError(16,0.9833285);
   VbbHcc_both_Z_mass_stack_7->SetBinError(22,0.3805224);
   VbbHcc_both_Z_mass_stack_7->SetBinError(34,0.4019721);
   VbbHcc_both_Z_mass_stack_7->SetBinError(35,0.3767055);
   VbbHcc_both_Z_mass_stack_7->SetBinError(38,0.6750199);
   VbbHcc_both_Z_mass_stack_7->SetBinError(41,0.995295);
   VbbHcc_both_Z_mass_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_mass_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_both_18->Modified();
   Z_mass_both_18->cd();
   Z_mass_both_18->SetSelected(Z_mass_both_18);
}
