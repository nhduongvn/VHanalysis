void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 10:41:10 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-0.8589659,1.133333,1.352054);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_7 = new TH1D("VbbHcc_tags_Sphericity_stack_7","",25,0,1);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(1,7.135149);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(2,2.276642);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(3,1.539237);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(4,1.251714);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(5,0.8768691);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(6,0.8933559);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(9,0.4604326);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(1,1.879296);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(2,1.21217);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(3,0.7698814);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(4,0.7266661);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(5,0.6254258);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(6,0.6389277);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(9,0.4604326);
   VbbHcc_tags_Sphericity_stack_7->SetEntries(32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Sphericity_stack_7->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
