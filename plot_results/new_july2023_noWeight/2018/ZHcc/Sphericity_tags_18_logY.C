void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 12:31:33 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-3.193097,1.133333,-0.7011569);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_11 = new TH1D("VbbHcc_tags_Sphericity_stack_11","",25,0,1);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(1,0.05916981);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(2,0.05916981);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(3,0.01365457);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(4,0.02503338);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(5,0.01365457);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(6,0.002275762);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(7,0.002275762);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(1,0.01160415);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(2,0.01160415);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(3,0.005574455);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(4,0.007547848);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(5,0.005574455);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(6,0.002275762);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(7,0.002275762);
   VbbHcc_tags_Sphericity_stack_11->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_11->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->Draw("HIST");
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
