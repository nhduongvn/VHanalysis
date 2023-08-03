void Aplanarity_tags_17()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug  3 12:23:35 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-27.10946,1.133333,243.9852);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,206.5483);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,23.23676);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,7.503917);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,2.342029);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,0.3268157);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,0.5802967);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.08120236);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(8,6.791729);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(9,0.1763629);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.08120236);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,11.15876);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,3.566784);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,1.945751);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,0.6281964);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.1999609);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,0.3894757);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.08120236);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(8,6.630318);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(9,0.1763629);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.08120236);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(2254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity_stack_5->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
