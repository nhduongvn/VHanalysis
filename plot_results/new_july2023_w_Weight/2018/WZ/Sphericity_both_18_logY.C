void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 12:21:50 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-0.9184112,1.133333,1.040713);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_7 = new TH1D("VbbHcc_both_Sphericity_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,3.691917);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,1.0289);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(3,1.456491);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,0.9926935);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,1.906133);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,1.320782);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,0.7519975);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(10,0.4019721);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(11,1.497779);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(13,0.4890104);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,0.3805224);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(16,0.3789058);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(18,0.5093878);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,1.27805);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,0.7275423);
   VbbHcc_both_Sphericity_stack_7->SetBinError(3,0.8557832);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,0.7019403);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,0.9583081);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.7660336);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.5317584);
   VbbHcc_both_Sphericity_stack_7->SetBinError(10,0.4019721);
   VbbHcc_both_Sphericity_stack_7->SetBinError(11,1.109772);
   VbbHcc_both_Sphericity_stack_7->SetBinError(13,0.3945791);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.3805224);
   VbbHcc_both_Sphericity_stack_7->SetBinError(16,0.3789058);
   VbbHcc_both_Sphericity_stack_7->SetBinError(18,0.5093878);
   VbbHcc_both_Sphericity_stack_7->SetEntries(33);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
