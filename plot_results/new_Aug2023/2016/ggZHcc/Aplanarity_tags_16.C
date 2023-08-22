void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Tue Aug 22 09:20:45 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-0.004092146,1.133333,0.03682931);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_12 = new TH1D("VbbHcc_tags_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(1,0.03117825);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(2,0.002741011);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(3,0.0007705776);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(4,0.0006031889);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(5,0.0002291868);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(8,0.0001064865);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(1,0.002984297);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(2,0.0008765669);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(3,0.0004466633);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(4,0.0004265991);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(5,0.0002291868);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(8,0.0001064865);
   VbbHcc_tags_Aplanarity_stack_12->SetEntries(127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_12->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->Draw("HIST");
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
