void Z_mass_tags_18_logY()
{
//=========Macro generated from canvas: Z_mass_tags_18/Z_mass_tags_18
//=========  (Thu Aug 10 12:31:05 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_18 = new TCanvas("Z_mass_tags_18", "Z_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_18->SetHighLightColor(2);
   Z_mass_tags_18->Range(-80,-0.9114761,453.3333,0.68546);
   Z_mass_tags_18->SetFillColor(0);
   Z_mass_tags_18->SetBorderMode(0);
   Z_mass_tags_18->SetBorderSize(2);
   Z_mass_tags_18->SetLogy();
   Z_mass_tags_18->SetLeftMargin(0.15);
   Z_mass_tags_18->SetFrameBorderMode(0);
   Z_mass_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass_stack_7 = new TH1D("VbbHcc_tags_Z_mass_stack_7","",40,0,400);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(6,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(8,1.062597);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(9,1.770996);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(10,1.416796);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(11,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(12,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(15,0.7083982);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(16,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(22,0.7083982);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(27,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(34,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(35,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(39,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(41,2.125195);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(6,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(7,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(8,0.6134909);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(9,0.7920133);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(10,0.7083982);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(11,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(12,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(13,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(15,0.5009132);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(16,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(22,0.5009132);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(27,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(34,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(35,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(39,0.3541991);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(41,0.8676071);
   VbbHcc_tags_Z_mass_stack_7->SetEntries(32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_mass_stack_7->SetFillColor(ci);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_tags_18->Modified();
   Z_mass_tags_18->cd();
   Z_mass_tags_18->SetSelected(Z_mass_tags_18);
}
