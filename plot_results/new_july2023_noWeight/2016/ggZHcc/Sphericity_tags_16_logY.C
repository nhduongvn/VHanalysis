void Sphericity_tags_16_logY()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug 10 12:31:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-4.028206,1.133333,-1.226535);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLogy();
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_12 = new TH1D("VbbHcc_tags_Sphericity_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.01643423);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.01286157);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.004644456);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.005001722);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.002858127);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.001071798);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.0007145317);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.0003572658);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.0007145317);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(12,0.0007145317);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.002423095);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.002143595);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.00128814);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.001336766);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.0010105);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.0006188026);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.0005052502);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.0003572658);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.0005052502);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(12,0.0005052502);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(127);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
