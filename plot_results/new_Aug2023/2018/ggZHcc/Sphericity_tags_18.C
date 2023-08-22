void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Tue Aug 22 09:20:44 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-0.004576245,1.133333,0.0411862);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_12 = new TH1D("VbbHcc_tags_Sphericity_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.03486662);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.02066578);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.01209965);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.01064291);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.004892953);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.002986904);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.001759257);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.0005920208);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.001754237);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(11,0.001457088);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(14,0.0003800235);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(15,0.0003978012);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.003428827);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.002543395);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.001964541);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.001885259);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.001217495);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.001008235);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.0007905279);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.0004207827);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.0007231942);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(11,0.0006580126);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(14,0.0003800235);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(15,0.0003978012);
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
