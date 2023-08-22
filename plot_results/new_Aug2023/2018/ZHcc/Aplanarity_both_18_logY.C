void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Tue Aug 22 09:18:50 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-3.205976,1.133333,-0.3572886);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_11 = new TH1D("VbbHcc_both_Aplanarity_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,0.1203078);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.03255801);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.01444439);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.01100467);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(5,0.00624892);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(6,0.003312494);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(11,0.002398405);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.0166175);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.009109964);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.006014741);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.004996531);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(5,0.003667772);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(6,0.003312494);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(11,0.002398405);
   VbbHcc_both_Aplanarity_stack_11->SetEntries(84);

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
