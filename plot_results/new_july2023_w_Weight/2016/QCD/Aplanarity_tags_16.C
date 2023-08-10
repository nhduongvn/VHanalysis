void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Aug 10 12:23:35 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-19934.3,1.133333,179408.7);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,151880.4);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,26195.76);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,3588.749);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,949.4377);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,156.791);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,111.6043);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,118.4749);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,48.34077);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,59.90658);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,4.399252);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,32.01838);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,7086.86);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,4167.264);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,816.2263);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,326.6222);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,43.70352);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,39.22759);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,47.0078);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,26.17841);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,37.81612);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,3.328382);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,26.54634);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(9435);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
