void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Aug 10 12:20:17 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-2.766475,1.133333,3.108216);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,175.0645);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,15.8853);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,3.368492);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,0.9411881);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,0.8183688);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,1.306482);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.2652507);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.01324415);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,12.76399);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,2.583386);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,1.211697);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,0.2556991);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.318113);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,0.9165215);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.1947877);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.009378829);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(3105);

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
