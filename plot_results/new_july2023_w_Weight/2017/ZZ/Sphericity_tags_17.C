void Sphericity_tags_17()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug 10 12:23:34 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-2.154772,1.133333,19.39294);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_8 = new TH1D("VbbHcc_tags_Sphericity_stack_8","",25,0,1);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(1,16.41731);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(2,11.8946);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(3,8.102486);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(4,4.979612);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(5,5.704025);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(6,1.247216);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(7,0.3152691);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(9,0.1983113);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(11,0.1996109);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(12,0.3221285);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(1,2.186858);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(2,1.860346);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(3,1.542959);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(4,1.197561);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(5,1.30288);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(6,0.6243965);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(7,0.3152691);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(9,0.1983113);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(11,0.1996109);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(12,0.3221285);
   VbbHcc_tags_Sphericity_stack_8->SetEntries(178);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
