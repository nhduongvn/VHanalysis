void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug  3 12:23:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-2.170624,1.133333,19.53561);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_8 = new TH1D("VbbHcc_tags_Sphericity_stack_8","",25,0,1);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(1,16.53809);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(2,11.18753);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(3,5.350557);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(4,4.134522);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(5,1.945657);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(6,2.188864);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(8,0.2432072);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(12,0.2432072);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(16,0.2432072);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(1,2.005538);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(2,1.649511);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(3,1.140743);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(4,1.002769);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(5,0.6878937);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(6,0.7296215);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(8,0.2432072);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(12,0.2432072);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(16,0.2432072);
   VbbHcc_tags_Sphericity_stack_8->SetEntries(173);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Sphericity_stack_8->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->Draw("HIST");
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
