void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Tue Aug 22 09:16:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-1.064773,1.133333,0.8435747);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLogy();
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_7 = new TH1D("VbbHcc_tags_Sphericity_stack_7","",25,0,1);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(1,2.372417);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(2,0.4207787);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(3,1.758348);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(4,0.4624195);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(5,0.2849003);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(9,0.2673569);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(10,0.269206);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(13,0.2711943);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(1,0.8017371);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(2,0.3016379);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(3,0.6768871);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(4,0.3482165);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(5,0.2849003);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(9,0.2673569);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(10,0.269206);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(13,0.2711943);
   VbbHcc_tags_Sphericity_stack_7->SetEntries(24);

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
