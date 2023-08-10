void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 10:41:10 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-3.994149,1.133333,-0.8313409);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_12 = new TH1D("VbbHcc_tags_Sphericity_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.03756898);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.02250409);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.01295207);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.01134087);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.005306239);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.003247106);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.001898438);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.0006541666);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.001901786);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(11,0.00160238);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(14,0.0004199154);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(15,0.0004352311);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.003681398);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.00277046);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.00209662);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.002005297);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.001319171);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.001094005);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.0008535172);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.0004649533);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.0007845999);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(11,0.0007235636);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(14,0.0004199154);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(15,0.0004352311);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(298);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_12->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->Draw("HIST");
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
