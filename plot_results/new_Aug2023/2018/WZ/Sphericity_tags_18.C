void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Tue Aug 22 09:20:44 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-0.8613164,1.133333,7.751847);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_7 = new TH1D("VbbHcc_tags_Sphericity_stack_7","",25,0,1);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(1,6.56241);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(2,2.141335);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(3,1.401625);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(4,1.147497);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(5,0.7980337);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(6,0.8151749);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(9,0.4226771);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(1,1.728222);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(2,1.160084);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(3,0.7011439);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(4,0.6662258);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(5,0.569562);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(6,0.5836279);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(9,0.4226771);
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
