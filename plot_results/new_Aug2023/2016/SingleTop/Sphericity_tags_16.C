void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Tue Aug 22 09:20:42 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-24.23688,1.133333,218.1319);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,184.6619);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,138.2721);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,84.30112);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,52.32253);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,27.44821);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,16.16969);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,10.8412);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,5.66159);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,5.119274);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,2.532354);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,1.389316);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,0.934267);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,0.9297681);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,0.9885122);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,0.9732728);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,0.2707439);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.4289416);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.03917379);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.09255479);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,5.094205);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,4.376369);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,3.447031);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,2.830839);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,1.987745);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,1.560725);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,1.241751);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,0.897441);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.8686872);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,0.5745228);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.4792248);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.3048325);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.3473619);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.3509634);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.4034759);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.2181818);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.2501069);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.07792333);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.0538767);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(8949);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
