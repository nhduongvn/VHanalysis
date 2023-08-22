void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Tue Aug 22 09:18:45 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-1.613053,1.133333,0.3716671);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLogy();
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_7 = new TH1D("VbbHcc_both_Sphericity_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,0.4629638);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,0.7864048);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(3,0.6140486);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(4,0.465219);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,0.2777298);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,0.364918);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,0.307639);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,0.1957118);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(9,0.09049555);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(10,0.3743229);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(11,0.09206678);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(12,0.08558222);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,0.1719348);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(15,0.07699256);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,0.2076475);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,0.2639187);
   VbbHcc_both_Sphericity_stack_7->SetBinError(3,0.2326602);
   VbbHcc_both_Sphericity_stack_7->SetBinError(4,0.2090058);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,0.1603787);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,0.1834333);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.1609581);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.1383897);
   VbbHcc_both_Sphericity_stack_7->SetBinError(9,0.09049555);
   VbbHcc_both_Sphericity_stack_7->SetBinError(10,0.1874663);
   VbbHcc_both_Sphericity_stack_7->SetBinError(11,0.09206678);
   VbbHcc_both_Sphericity_stack_7->SetBinError(12,0.08558222);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.1221175);
   VbbHcc_both_Sphericity_stack_7->SetBinError(15,0.07699256);
   VbbHcc_both_Sphericity_stack_7->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_stack_7->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
