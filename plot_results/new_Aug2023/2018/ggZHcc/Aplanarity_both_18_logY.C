void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Tue Aug 22 09:18:50 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-4.216778,1.133333,-0.5720828);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_12 = new TH1D("VbbHcc_both_Aplanarity_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.06107997);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.01725008);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.006697497);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.005908734);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.002464391);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.004380724);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.001479786);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0006839927);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(9,0.001239565);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.0004431752);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(11,0.00028101);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(12,0.0002922094);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(13,0.0004012604);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.004465407);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.002343545);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.001488028);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.001373142);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.0008759474);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.001299727);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.0006733011);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.0004891914);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(9,0.0006326036);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.0003385539);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(11,0.00028101);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(12,0.0002922094);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(13,0.0004012604);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(330);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_12->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->Draw("HIST");
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
