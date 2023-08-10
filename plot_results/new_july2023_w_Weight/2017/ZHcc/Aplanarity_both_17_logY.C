void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug 10 12:21:52 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-3.037795,1.133333,-0.4632494);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_11 = new TH1D("VbbHcc_both_Aplanarity_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,0.1004031);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.03458284);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.009223171);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.01031457);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(5,0.003753843);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(7,0.004374861);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(8,0.005896416);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(10,0.003316574);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.01367913);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.008042103);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.004162663);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.004258781);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(5,0.002660181);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(7,0.003103752);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(8,0.003404736);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(10,0.002578627);
   VbbHcc_both_Aplanarity_stack_11->SetEntries(95);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_11->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
