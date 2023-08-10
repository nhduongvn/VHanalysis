void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 12:31:33 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-4.151902,1.133333,-0.8769378);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_12 = new TH1D("VbbHcc_tags_Sphericity_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.03296225);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.02067632);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.01198627);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.009888674);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.005094166);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.002696911);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.001498284);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.0005993136);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.001797941);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(11,0.001498284);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(14,0.0002996568);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(15,0.0002996568);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.003142827);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.002489136);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.001895196);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.001721397);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.001235517);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.0008989704);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.000670053);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.0004237787);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.0007340063);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(11,0.000670053);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(14,0.0002996568);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(15,0.0002996568);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(298);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
