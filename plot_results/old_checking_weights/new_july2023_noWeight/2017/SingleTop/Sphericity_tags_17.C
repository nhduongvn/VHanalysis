void Sphericity_tags_17()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug  3 12:23:33 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-43.18877,1.133333,388.6989);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,329.0572);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,257.2675);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,154.8668);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,87.98784);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,50.65209);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,31.82825);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,19.7443);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,10.66157);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,5.438609);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,6.679468);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,2.550847);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,2.420151);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,1.929883);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,1.397991);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,1.425939);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,1.115248);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.7156297);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.5075407);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.04712387);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,0.04712387);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,7.034036);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,6.252277);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,4.900702);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,3.686279);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,2.745936);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,2.270942);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,1.792567);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,1.347743);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.8785268);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,1.082367);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.5909805);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.5866418);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.5657366);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.4250314);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.4888926);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.4090571);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.3844709);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.2844335);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.04712387);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,0.04712387);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(11980);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
