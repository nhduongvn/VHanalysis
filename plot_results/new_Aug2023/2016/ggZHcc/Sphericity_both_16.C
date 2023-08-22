void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Tue Aug 22 09:23:14 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-0.0008210007,1.133333,0.007389006);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_12 = new TH1D("VbbHcc_both_Sphericity_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.00613207);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.006255243);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.003209096);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.003713657);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.004352755);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.001284995);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.001699277);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.002205751);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.003110048);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.001154268);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.002207791);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.001177968);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.0005840297);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.0002858757);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.0002816317);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.0006224638);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.000276468);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.001343696);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.001336639);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.0009347465);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.001031874);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.001110667);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.0005858844);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.0006946907);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.0007802721);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.000938887);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.0005771936);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.0007856764);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.0005895651);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.0004130563);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.0002858757);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.0002816317);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.0004416732);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.000276468);
   VbbHcc_both_Sphericity_stack_12->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_12->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->Draw("HIST");
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
