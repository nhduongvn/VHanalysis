void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 12:29:33 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-3.447462,1.133333,31.02715);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_8 = new TH1D("VbbHcc_both_Aplanarity_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,26.26637);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,7.539422);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,4.864143);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,2.188864);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,0.2432072);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,0.7296215);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,0.2432072);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,0.2432072);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(9,0.2432072);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,2.527483);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,1.35412);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,1.087655);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,0.7296215);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.2432072);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.4212471);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.2432072);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,0.2432072);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(9,0.2432072);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_stack_8->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
