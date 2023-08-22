void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Tue Aug 22 09:18:50 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-0.9850496,1.133333,1.225434);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_7 = new TH1D("VbbHcc_both_Aplanarity_stack_7","",50,0,1);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,5.331348);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,3.529178);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,1.257629);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,0.9724009);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,0.4226771);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(6,1.306572);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(8,0.3443727);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(15,0.4655805);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,1.524619);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,1.186571);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,0.7317479);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.632343);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.4226771);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(6,1.022854);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(8,0.3443727);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(15,0.4655805);
   VbbHcc_both_Aplanarity_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity_stack_7->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
